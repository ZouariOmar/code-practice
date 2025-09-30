<?php
include ".././../conf/connect.php";

class Delete
{
  private $id;

  public function __construct($_id)
  {
    $this->id = $_GET["id"];
  }

  /**
   * Delete new client
   * @return 
   */
  public function deletePr()
  {
    $connection = config::getConnection();
    $sql = "DELETE FROM product WHERE id=$this->id";
    try {
      $connection->query($sql);  // Del action
    } catch (Exception $e) {
      die('Error: ' . $e->getMessage());
    }
  }

}
; // Delete class

$deleteProduct = new Delete($_GET['id']);
$deleteProduct->deletePr();
unset($deleteProduct);
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