
<!DOCTYPE html>
<html>
<body>
	<?php
	$number1 = $_POST["number1"];
	$number2 = $_POST["number2"];
	$number3 = $_POST["number3"];
	if (($number1 *  $number2) == $number3)
		echo "Correct!";
	else
		echo "Try again:(";
	?>
<form method="POST" action="rdesai.php">
	<input type="submit" value="Try again" />
</form>
</body>
</html>
