public class SimpleCliCalculator {
  private double add(double x, double y) {
    return x + y;
  }

  private double substruct(double x, double y) {
    return x - y;
  }

  private double multiply(double x, double y) {
    return x * y;
  }

  private double divide(double x, double y) {
    try {
      return x / y;
    } catch (Exception e) {
      System.out.println("Exception caught: " + e);
    }
    return Double.POSITIVE_INFINITY;
  }

  public void calculate(double x, double y, String op) {
    switch (op) {
      case "+": {
        System.out.println(x + " + " + y + " = " + add(x, y));
        break;
      }

      case "-": {
        System.out.println(x + " - " + y + " = " + substruct(x, y));
        break;
      }

      case "*": {
        System.out.println(x + " * " + y + " = " + multiply(x, y));
        break;
      }

      case "/": {
        System.out.println(x + " / " + y + " = " + divide(x, y));
        break;
      }

      default: {
        System.out.println("Invalid Oparation!");
        break;
      }
    }
  }
}
