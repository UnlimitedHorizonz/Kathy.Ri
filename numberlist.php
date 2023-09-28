<!DOCTYPE html>

<html lang="en">

<head>

<!--title for web page -->

<title>Even Numbers</title>

<meta charset="UTF-8">

<meta name="viewport" content="width=device-width, initial-scale=1">

</head>

<body>

<?php
//declaring variable

$i=1;

$number=100;

//using while loop finding even number

while($i<$number)

{

//when number is divisible by 2

if($i%2==0)

{

//if number is even display it

echo "<b>".$i."</b> ";

}

//increment value of i

$i=$i+1;

}

?>

</body>

</html>

