<?php
include "../../conf/connect.php";

// Connect to zouari_test DB
$connection = config::getConnection();

$id = $_GET['id'];
// Read all rows from the clients table
$sql = "SELECT $id FROM product";
$result = $connection->query($sql);
?>

<!DOCTYPE html>
<html lang="en">
<!--? INDEX HEAD PART -->

<head>
	<meta charset="UTF-8" />
	<meta name="viewport" content="width=device-width, initial-scale=1.0" />

	<!-- Include bootstrap via CDN -->
	<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/css/bootstrap.min.css" rel="stylesheet"
		integrity="sha384-QWTKZyjpPEjISv5WaRU9OFeRpok6YctnYmDr5pNlyT2bRjXh0JMhjY6hW+ALEwIH" crossorigin="anonymous" />
	<script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.3/dist/js/bootstrap.bundle.min.js"
		integrity="sha384-YvpcrYf0tY3lHB60NNkmXc5s9fDVZLESaAA55NDzOxhy9GkcIdslK1eN7N6jIeHz"
		crossorigin="anonymous"></script>

	<!-- include main css/js file -->
	<link rel="stylesheet" type="text/css" href="../css/style.css" />
	<script src="../js/script.js"></script>

	<!-- Set the page title -->
	<title>Add Product</title>
</head>

<!--? INDEX BODY PART -->

<body>
	<form method="post" action="../../app/Controllers/create.php" class="container my-4">
		<h1>Update Product</h1>

		<!-- Warning msg -->
		<div class="alert alert-warning alert-dismissible fade show" role="alert">
			<strong>Warning!</strong> You should check in on some of those fields
			below.
			<button type="button" class="btn-close" data-bs-dismiss="alert" aria-label="Close"></button>
		</div>

		<?php
		foreach ($result as $row) {
			echo "
		<div class=\"mb-3\">
			<label class=\"form-label\">Name</label>
			<input type=\"text\" class=\"form-control\" id=\"InputName\" aria-describedby=\"Name\" title=\"Name\" placeholder=\"...\"
				name=\"name\" value=\"{$row['name']}\" required />
		</div>
		";
		}
		?>

		<!-- Success msg -->
		<div class="alert alert-success" role="alert" style="display: none">
			Client Successfully Added!
		</div>

		<!-- Failed msg -->
		<div class="alert alert-danger" role="alert" style="display: none">
			Failed to Add Client!
		</div>

		<!-- Submit and cancel button -->
		<button type="submit" class="btn btn-primary">Submit</button>
		<button type="reset" class="btn btn-danger"
			onclick="window.location.href='http://localhost/zouari_test/project/public/index.php'">
			Cancel
		</button>
	</form>
</body>

</html>