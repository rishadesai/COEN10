<!DOCTYPE html>
<html>
	<body>
	<?php
	$number = $_POST["number"];
	$randList=array(0,0,0,0,0);
	for ($i=0; $i<5;$i++){
	$randList[$i]=rand(1,20);
	}

	for ($i=0; $i<5; $i++){
	if($randList[$i]==$number){
	echo "Correct!";
	break;
	}
	}

	if($i==5){
	echo "Wrong guess";
	
}
	$size = count($randList);
	for ($i=0; $i<$size; $i++)
	echo $randList[$i] . " ";
?>
<form method="POST" action="rsdesailab3.html">
<input type="submit" value="Try again" />
</form>
</body>
</html>


