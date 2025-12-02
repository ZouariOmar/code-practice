/**
 * ProductManagement.java
 *
 * ProductManagement class
 *
 * <p>ProductManagement --> Management</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-12-02
 *
 * <a href="https://github.com/ZouariOmar/code-practice/blob/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-11/solution/ProductManagement.java" target="_blank">
 *  ProductManagement.java
 * </a>
 */

// `ProductManagement` pkgname
package src;

import java.util.Collections;
// `java.util.*` imports
import java.util.Comparator;
import java.util.List;
import java.util.function.Consumer;
import java.util.function.Function;
import java.util.function.Predicate;
import java.util.function.Supplier;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class ProductManagement implements Management {
  @Override
  public void displayProducts(List<Product> products, Consumer<Product> con) {
    products.forEach(con);
  }

  @Override
  public void displayProductsByFilter(List<Product> products, Predicate<Product> pre, Consumer<Product> con) {
    products.stream()
        .filter(pre)
        .forEach(con);
  }

  @Override
  public String returnProductsNames(List<Product> products, Function<Product, String> fun) {
    return products.stream()
        .map(fun)
        .collect(Collectors.joining("--"));
  }

  @Override
  public Product createProduct(Supplier<Product> sup) {
    return sup.get();
  }

  @Override
  public List<Product> sortProductsById(List<Product> products, Comparator<Product> com) {
    Collections.sort(products, com);
    return products;
  }

  @Override
  public Stream<Product> convertToStream(List<Product> products) {
    return products.stream();
  }
} // ProductManagement class
