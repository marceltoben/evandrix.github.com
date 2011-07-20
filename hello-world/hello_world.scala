/*
Interactive mode
  > scala
  This is a Scala shell.
  Type in expressions to have them evaluated.
  Type :help for more information.

  scala> object HelloWorld {
       |   def main(args: Array[String]) {
       |     println("Hello, world!")
       |   }
       | }
  defined module HelloWorld

  scala> HelloWorld.main(null)
  Hello, world!
  unnamed0: Unit = ()
  scala>:q

Compile
  scalac -d classes HelloWorld.scala

Run
  scala -classpath classes HelloWorld
*/

object HelloWorld {
  def main(args: Array[String]) {
    println("Hello, world!")
  }
}

object HelloWorld2 extends App {
  println("Hello, world!")
}
