<?php
include ".././../conf/connect.php";

class Create
{
  private $name, $price, $category;

  public function __construct()
  {
    $this->name = $_POST['name'];
    $this->price = $_POST['price'];
    $this->category = $_POST['category'];
  }

  /**
   * Add new client
   * @return list
   */
  public function addProduct()
  {
    $connection = config::getConnection();
    $sql = "INSERT INTO product(name, price, category) VALUES ('$this->name', '$this->price', '$this->category')";
    try {
      $list = $connection->query($sql);
      return $list;
    } catch (Exception $e) {
      die('Error: ' . $e->getMessage());
    }
  }

}
; // Create class

$newProduct = new Create();
$newProduct->addProduct();
unset($newProduct);
?>

<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Redirect on Load</title>
  <script>
    window.onload = function () {
      window.location.href = "http://localhost/zouari_test/project/public/index.php";  // URL to redirect to
    };
  </script>
</head>

<body>
  <p>If you are not redirected automatically, <a href="http://localhost/zouari_test/project/public/index.php">click
      here</a>.</p>
</body>

</html>