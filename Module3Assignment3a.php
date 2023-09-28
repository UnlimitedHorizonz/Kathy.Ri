<!DOCTYPE html>
<html>
<head>
<title>Total Property Cost Calculator</title>
</head>
<body>
<?php

$length = 20;

$width = 4;

$ftCost = 75;

//define rArea() function

//ADD rArea() FUNCTION HERE

function rArea($length, $width){

return $length*$width;

}

//call function rArea()

echo "A room of length " . $length . "ft and width " . $width . "ft has an area of " . rArea($length ,$width ) .".<br/>";

//define totalCost() function

//ADD totalCost() FUNCTION HERE

function totalCost($length ,$width,$cost){

return $length*$width*$cost;

}

//call function totalCost()

echo "The total cost of a room of length ". $length . "ft and width " . $width . "ft area at $" . $ftCost . "per square foot is " . totalCost($length ,$width,$ftCost) .".";

}
?>
</body>

</html> 