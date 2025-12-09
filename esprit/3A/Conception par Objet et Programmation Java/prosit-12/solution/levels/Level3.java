package levels;

import models.*;
import utils.*;

import java.util.Comparator;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.TreeSet;
import java.util.stream.Collectors;

public class Level3 {
  public static void main(String[] args) {
    List<Teacher> teachers = Data.employees();

    /*
     * TO DO 1: Retourner une chaine de caractère qui contient tous les noms des
     * enseignants en majuscule separés par #
     */
    String names = teachers.stream()
        .map(Teacher::getName)
        .map(String::toUpperCase)
        .collect(Collectors.joining("#"));

    /* TO DO 2: Retourner une set d'enseignants Java dont le salaire > 80000 */
    Set<Teacher> teachers1 = teachers.stream()
        .filter(e -> e.getSalary() > 80000)
        .collect(Collectors.toSet());

    /*
     * TO DO 3: Retourner une TreeSet d'enseignants (tri par nom et en cas d'égalité
     * tri par salaire)
     */
    TreeSet<Teacher> teachers2 = teachers.stream()
        .collect(Collectors.toCollection(
            () -> new TreeSet<>(Comparator
                .comparing(Teacher::getName)
                .thenComparing(Teacher::getSalary))));

    /* TO DO 4: Retourner une Map qui regroupe les enseignants par module */
    Map<Integer, List<Teacher>> map = teachers.stream()
        .collect(Collectors.groupingBy(e -> e.getSubject().ordinal()));

    /*
     * TO DO 5: Retourner une Map qui regroupe les nom des enseignants par salaire
     */
    Map<Integer, String> map1 = teachers.stream()
        .collect(Collectors.groupingBy(Teacher::getSalary,
            Collectors.mapping(Teacher::getName,
                Collectors.joining("#"))));

    /* TO DO 6: Afficher les nom des enseignants de chaque module */
    // I'll use the `map` of qcm4
    map.forEach((i, t) -> {
      System.out.println("Subject..." + Subject.values()[i]);
      t.stream()
          .map(Teacher::getName)
          .forEach(System.out::println);
    });
  }
} // Level3 class
