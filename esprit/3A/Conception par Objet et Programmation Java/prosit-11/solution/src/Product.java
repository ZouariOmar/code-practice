/**
 * Product.java
 *
 * Product class
 *
 * <p>none</p>
 *
 * @author @ZouariOmar (zouariomar20@gmail.com)
 * @version 1.0
 * @since 2025-12-02
 *
 * <a href="https://github.com/ZouariOmar/code-practice/blob/main/esprit/3A/Conception%20par%20Objet%20et%20Programmation%20Java/prosit-11/solution/Product.java" target="_blank">
 *  Product.java
 * </a>
 */

// Product pkgname
package src;

public class Product {
  private int id;
  private String name;
  private double price;

  public Product() {
  }

  public Product(final int id, final String name, final double price) {
    this.id = id;
    this.name = name;
    this.price = price;
  }

  // ##########################
  // ### GETTERS && SETTERS ###
  // ##########################
  public int getId() {
    return id;
  }

  public void setId(int id) {
    this.id = id;
  }

  public String getName() {
    return name;
  }

  public void setName(String name) {
    this.name = name;
  }

  public double getPrice() {
    return price;
  }

  public void setPrice(double price) {
    this.price = price;
  }

  @Override
  public String toString() {
    return String.format("Product: {id: %d, name: %s, price: %f}", id, name, price);
  }
} // Product class
