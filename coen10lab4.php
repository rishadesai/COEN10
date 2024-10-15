<!DOCTYPE html>
<html>
	<body>
	<?php
	$x=0;
	$number1 = $_POST["number1"];
	$number2 = $_POST["number2"];
	$number3 = $_POST["number3"];
	$number4 = $_POST["number4"];
	$number5 = $_POST["number5"];
	$received = array($number1, $number2, $number3, $number4, $number5);
	$randList=array(0,0,0,0,0);
	for ($num=0; $num<5; $num++) //generating random numbers
	{
		$randList[$num]=rand(1,20);
	for ($j=$num-1; $j>=0; $j--) //checking for duplicates
		if ($randList[$num]==$randList[$j])
	{
			$num--;
			break;
	}
	}
	for ($i=0; $i<5; $i++) //comparing the random numbers to the guessed #'s
	for ($j=0; $j<5; $j++)
	{
		if ($received[$i]==$randList[$j])
			$x++;
	}
	for ($i=0; $i<5; $i++) //showing the random array
		echo $randList[$i] . " ";
echo "<br>";
	for ($j=0; $j<5; $j++) //showing the user's guesses
		echo $received[$j] . " ";
echo "You found" . $x . " matches";
?>

	<form method= "POST" action="lab3.html">
		<input type="submit" value="Try again"/>
	</form>
</body>
</html>
