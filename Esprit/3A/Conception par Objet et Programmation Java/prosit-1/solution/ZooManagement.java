import java.util.Scanner;

public class ZooManagement {
  public static void main(String[] args) {
    // Instruction 1
    int nbrCages = 20;
    String zooName = "my zoo";
    System.out.printf("%s comporte %d cages\n", zooName, nbrCages);

    // Instruction 2
    Scanner sc = new Scanner(System.in);
    System.out.println("Cages Nbr...");
    nbrCages = sc.nextInt();
    System.out.println("Zoo Name....");
    zooName = sc.next();
    sc.close();
    if (nbrCages < 0 || zooName.isEmpty() || zooName.isBlank()) {
      System.out.println(":-)");
      return;
    }

    // Instruction 3
    System.out.printf("%s comporte %d cages\n", zooName, nbrCages);
  }
}
