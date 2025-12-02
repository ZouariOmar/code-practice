/**
 * Main.java
 *
 * The Entry point
 *
 * <p>Prosit 1A</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-12-02
 *
 * <a href="https://github.com/ZouariOmar/code-practice/blob/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-11/solution/Main.java" target="_blank">
 *  Main.java
 * </a>
 */

// Local imports
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

import src.*;

void main() {
  // TEST
  List<Product> products = new ArrayList<>();
  products.addAll(Arrays.asList(new Product(1, "pasta", 10), new Product(2, "water", 2)));

  ProductManagement pm = new ProductManagement();
  products.add(pm.createProduct(() -> new Product(3, "TEST", 30)));
  pm.sortProductsById(products, Comparator.comparingInt(Product::getId));
  System.out.println("=== displayProducts ===");
  pm.displayProducts(products, System.out::println);
  System.out.println("== displayProductsByFilter ===");
  pm.displayProductsByFilter(products, (p) -> p.getPrice() < 10, System.out::println);
} // main func (java +25)
