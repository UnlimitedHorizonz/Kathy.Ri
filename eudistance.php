html>
<head>
<h1> eudistance</h1>
</head>
<body>
<form method='post' action='us.php'>
start city
<input type='text' name='from_place' ><br>
end city
<input type='text' name='to_place' ><br>
<input type='submit' name='go' value="GO" >


</form>
</body>
</html>
<?php

$Distances = array(
"Berlin" => array("Berlin" => 0, "Moscow" => 1607.99, "Paris" => 876.96, "Prague" => 280.34, "Rome" =>1181.67),
"Moscow" => array("Berlin" => 1607.99, "Moscow" => 0, "Paris" => 2484.92, "Prague" => 1664.04, "Rome" =>2374.26),
"Paris" => array("Berlin" => 876.96, "Moscow" => 641.31, "Paris" => 0, "Prague" => 885.38, "Rome" =>1105.76),
"Prague" => array("Berlin" => 280.34, "Moscow" => 1664.04, "Paris" => 885.38, "Prague" => 0, "Rome" =>922),
"Rome" => array("Berlin" => 1181.67, "Moscow" => 2374.26, "Paris" => 1105.76, "Prague" => 922, "Rome" =>0),
);
$KMtoMiles = 0.62;

if(isset($_POST['from_place']) && $_POST['to_place']){ // check if the values are submitted or not
$distance = 0;
$flag = 0; // flag just to check entered values are right
foreach($Distances as $key => $value) // for each row take the row as key and it's value ie key is from_place and value is an array
{
if($key == $_POST['from_place']) // if from_place match then
{
  
foreach($value as $place => $dist) // for each value that distance from the from_place
{
if($place == $_POST['to_place'])
{
$flag = 1;
$distance = $dist;
}
}
}
  
}
if($flag == 1){
  
$miles = $distance*$KMtoMiles; // convert to miles and print
echo "The distance from ".$_POST['from_place']." to ".$_POST['to_place'] ." is:".$distance." km. And ". $miles ." miles";
}
else{
echo " Not a known place";
}

}