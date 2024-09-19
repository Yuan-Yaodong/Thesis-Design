import chisel3._
import chisel3.util._

/**
 * 16位FIFO模块
 * 使用Chisel3实现
 */
class Fifo16Bit extends Module {
  val io = IO(new Bundle {
    val enqData = Input(UInt(16.W))  // 入队数据输入
    val enq = Input(Bool())          // 入队使能信号
    val deq = Input(Bool())          // 出队使能信号
    val deqData = Output(UInt(16.W)) // 出队数据输出
    val full = Output(Bool())        // FIFO满标志
    val empty = Output(Bool())       // FIFO空标志
  })

  // 使用SyncReadMem实现FIFO存储
  val fifoMem = SyncReadMem(16, UInt(16.W))
  val enqPtr = RegInit(0.U(4.W))  // 入队指针
  val deqPtr = RegInit(0.U(4.W))  // 出队指针
  val isFull = RegInit(false.B)   // FIFO满标志
  val isEmpty = RegInit(true.B)   // FIFO空标志

  // 入队逻辑
  when(io.enq && !isFull) {
    fifoMem(enqPtr) := io.enqData
    enqPtr := enqPtr + 1.U
    isEmpty := false.B
    isFull := enqPtr === deqPtr
  }

  // 出队逻辑
  when(io.deq && !isEmpty) {
    deqPtr := deqPtr + 1.U
    isFull := false.B
    isEmpty := enqPtr === deqPtr
  }

  // 输出逻辑
  io.deqData := fifoMem(deqPtr)
  io.full := isFull
  io.empty := isEmpty
}

/**
 * 8位加法器模块
 * 使用Chisel6实现
 */
class EightBitAdder extends Module {
  val io = IO(new Bundle {
    val a = Input(UInt(8.W))  // 输入A
    val b = Input(UInt(8.W))  // 输入B
    val sum = Output(UInt(8.W))  // 输出和
    val carryOut = Output(Bool())  // 输出进位
  })

  // 计算和与进位
  val sumResult = io.a +& io.b  // 使用 +& 运算符以确保进位
  io.sum := sumResult(7, 0)  // 取低8位作为和
  io.carryOut := sumResult(8)  // 取第9位作为进位
}


/**
 * 主模块
 * 使用Chisel6实现
 * 包含16位FIFO和8位加法器
 */
class MainModule extends Module {
  val io = IO(new Bundle {
    // FIFO接口
    val fifoEnqData = Input(UInt(16.W))  // FIFO入队数据输入
    val fifoEnq = Input(Bool())          // FIFO入队使能信号
    val fifoDeq = Input(Bool())          // FIFO出队使能信号
    val fifoDeqData = Output(UInt(16.W)) // FIFO出队数据输出
    val fifoFull = Output(Bool())        // FIFO满标志
    val fifoEmpty = Output(Bool())       // FIFO空标志

    // 加法器接口
    val adderA = Input(UInt(8.W))        // 加法器输入A
    val adderB = Input(UInt(8.W))        // 加法器输入B
    val adderSum = Output(UInt(8.W))     // 加法器输出和
    val adderCarryOut = Output(Bool())   // 加法器输出进位
  })

  // 实例化16位FIFO模块
  val fifo = Module(new Fifo16Bit())
  fifo.io.enqData := io.fifoEnqData
  fifo.io.enq := io.fifoEnq
  fifo.io.deq := io.fifoDeq
  io.fifoDeqData := fifo.io.deqData
  io.fifoFull := fifo.io.full
  io.fifoEmpty := fifo.io.empty

  // 实例化8位加法器模块
  val adder = Module(new EightBitAdder())
  adder.io.a := io.adderA
  adder.io.b := io.adderB
  io.adderSum := adder.io.sum
  io.adderCarryOut := adder.io.carryOut
}







