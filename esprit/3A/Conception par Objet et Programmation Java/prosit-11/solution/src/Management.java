/**
 * Management.java
 *
 * Management interface
 *
 * <p>none</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-12-02
 * 
 * <a href="https://github.com/ZouariOmar/code-practice/blob/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-11/solution/Management.java" target="_blank">
 *  Management.java
 * </a>
 */

// `Management` pkgname
package src;

// `java.util.*` imports
import java.util.Comparator;
import java.util.List;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.function.Predicate;
import java.util.function.Supplier;
import java.util.stream.Stream;

public interface Management {
  void displayProducts(List<Product> products, Consumer<Product> con);

  void displayProductsByFilter(List<Product> products, Predicate<Product> pre, Consumer<Product> con);

  String returnProductsNames(List<Product> products, Function<Product, String> fun);

  Product createProduct(Supplier<Product> sup);

  List<Product> sortProductsById(List<Product> products, Comparator<Product> com);

  Stream<Product> convertToStream(List<Product> products);
} // Management interface
