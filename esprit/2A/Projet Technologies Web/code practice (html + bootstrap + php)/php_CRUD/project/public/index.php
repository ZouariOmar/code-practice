<?php
include "../conf/connect.php";

// Connect to zouari_test DB
$connection = config::getConnection();
if ($result)
  die("Connection Failed!");

// Read all rows from the clients table
$sql = "SELECT * FROM product";
$result = $connection->query($sql);
if (!$result)
  die("Invalid Query!");
?>

<!DOCTYPE html>
<html lang="en">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">

  <!-- Include bootstrap via CDN -->
  <link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet"
    integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous" />
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"
    integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz"
    crossorigin="anonymous"></script>

  <title>Product | Home </title>
</head>

<body>
  <h1 class="text-primary">List Of Clients</h1>

  <!-- Success msg -->
  <div class="alert alert-success" role="alert" style="display: none" id="successMsg">
    Product Successfully Added!
  </div>

  <table class="table">
    <thead>
      <tr>
        <th scope="col">Name</th>
        <th scope="col">Price</th>
        <th scope="col">Category</th>
        <th scope="col">Delete/Edit</th>
      </tr>
    </thead>
    <tbody class="table-group-divider">
      <?php
      foreach ($result as $row) {
        echo "
              <tr>
                <td>$row[name]</td>
                <td>$row[price]</td>
                <td>$row[category]</td>
                <td>
                  <a href='http://localhost/zouari_test/project/app/Views/updateProduct.php?id={$row['id']}' class=\"btn btn-primary\">Edit</a>
                  <a href='http://localhost/zouari_test/project/app/Controllers/delete.php?id={$row['id']}' class=\"btn btn-danger\">Delete</a>
                </td>
              </tr>
            ";
      }
      ;
      ?>
    </tbody>
  </table>
  <button type="button" class="btn btn-success"
    onclick="window.location.href='http://localhost/zouari_test/project/public/html/addNewProduct.html'">+ New
    Product</button>
</body>

</html>