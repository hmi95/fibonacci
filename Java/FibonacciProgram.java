// This class can be run on https://www.jdoodle.com/online-java-compiler, for example.

public class FibonacciProgram {
    public static void main(String args[]) {
      System.out.println("Fibonacci-Folge:");

      int secondLast = 1;
      int last = 1;

      System.out.println(String.format("%9d", secondLast));
      System.out.println(String.format("%9d", last));

      int current = secondLast + last;

      System.out.println(String.format("%9d", current));
    }
}