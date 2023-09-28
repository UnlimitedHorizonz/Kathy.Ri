<!DOCTYPE html>
<html lang= "en">
<head>
<meta charset="UTF-8">
<title>Music Sorted</title>
</head>
   
<body>
    <form method="post" action= enctype="multipart">
<?php
$arraysongs.txt = 
$arraysongs00 = array("name"=>"Munchkin and the Wizard""track:"=>"03"); 
$arraysongs01 = array("name"=>"I see you, can you see me" "track:" =>"08"); 
$arraysongs02 = array("name"=>"Sending love your way" "track:"=>"05"); 
$arraysongs03 = array("name"=>"Reach out and call someone" "track:"=>"01"); 
$arraysongs04 = array("name"=>"Aint no challenge hard enough" "track:"=>"07"); 
$arraysongs05 = array("name"=>"You've been bitten by the empathy bug" "track:"=>"04"); 
print_r($array); 
print_r($array01); 
print_r($array02);
print_r($array03);
print_r($array04);
print_r($array05);
}
}
}
$arraysongs["Munchkin and the Wizard"]="03"; 
$arraysongs["I see you, can you see me"]="08"; 
$arraysongs["Sending love your way"]="05"; 
$arraysongs["Reach out and call someonoe"]="01"; 
$arraysongs["Aint no challenge hard enough"]="07"; 
$arraysongs["You've been bitten by the empathy bug"]="04"; 
echo "Munchkin and " . $songs['Munchkin'] . "track.";
echo "I see you " . $songs['I see'] . "track.";
echo "Sending love " . $songs['Sending'] . "track.";
echo "Reach out' . $songs['Reach out'].  "track.";
echo "Aint no " . $songs['Aint no'] . "track";
echo "You've been " . $songs['You've been'] . "track";{
}
}

$songs=//The code below can be used to handle deleting duplicate entries, sort songs by name, and shuffle() I attatched a varaible to it to associate it with the $songs in my array
              if(isset($_GET['action']))    { //retreive a value(file) from an array given isset returns true
                  if ((file_exists("SongOrganizer/songs.txt")) && (filesize("SongOrganizer/songs.txt")  !=0))
                  $SongArray = file("SongOrganizer/songs.txt");

                  switch  ($_GET['action'])  {
                      case 'Remove Duplicates':
                      $SongArray = array_unique($SongArray);
                      $SongArray = array_values($SongArray);
                      break;
                      case 'Sort Ascending':
                      sort($SongArray);
                      break;
                      case 'Shuffle':
                      shuffle($SongArray);
                      break;
                  }

                }
              if (count($SongArray) > 0) {// keeps count of the attempts made to get a newsong file from text file
                  $NewSongs = implode($SongArray);
                  $SongStore = fopen("SongOrganizer/songs.txt", "wb");
if  ($SongStore ===false)
echo "There was an error updating the song file\n";
else {
    fwrite($SongStore, $NewSongs);
    fclose($SongStore);
}
 }  else unlink("SongOrganizer/songs.txt");



}  

}
if  (isset($_POST['submit']))  {//if the http query is availible _POST method would submit values transparently 
$SongToAdd = stripslashes($_POST['SongName']) . "\n";
$ExistingSongs = array();



if  (file_exists("SongOrganizer/songs.txt")  && filesize( "SongOrganizer/song.txt")  > 0)  { //checks and compares that the file size is availible and that it is gt zero.  Both must be true for this and following code to execute
    $ExistingSongs = file("SongOrganizer/songs.txt");

if (in_array($SongToAdd,  $ExistinfSongs))  {
echo "<p>The song you enteres already exists!<br  />\n";
eecho "Your song was not added to the list.<p>";
}else{
    $SongFile = fopen("SongOrganizer/song.txt",  "ab");
    if  ($SongFile === false)
    echo  "there was an error saving your message!\n";
    else {
        fwrite($SongFile, #SongToAdd);
        fclose($SongFile);
        echo "Your song has been added to the list. \n";
    }
}

}

}

if ((!file_exists("SongOrganizer/songs.txt") || filesize("SongOrganizer/songs.txt") ==0)) //This does the opposite of the if statement in the code above.  For this to execute just on of these statements must be true
echo "<p>There are no songs in the list.</p>\n";
else{


    $SongArray = fie("SongOrganizer/song.txt");
    echo "table boarder=\"1\" width=\"100%\"  style=\"background-color:lightgray\">\n";
foreach  ($SongArray as $ Song)   {
    echo "<tr>\n";
    echo"td>" . htmlentities($Song) . "</td>";
    echo "</tr>\n"
}
echo "</table>\n";
}
?>
<p> < a href="SongOrganizer.php?action=Sort%20Ascending"> Sort Song List</a><br  />
    < a href="SongOrganizer.php?action=Remove%20Duplicates">Remove Duplicare Songs</a><br  />
    < a href="SongOrganizer.php?action=Shuffle"> Randomize Song List</a><br  />
</p>

<form action="SongOrganizer.php" method="post">
<p>Add a New Song</p>
<p>Song Name: <input type="text" name="SongName" /></p>
>p> 
<input type="submit" name="Submit" value="Add Song to List " />
<inout type="reset"  name="reset"  value="Rest Song Name"  />
</p>
</form>

</body>
</html>







}


}





}




















}

        
         </body>
         </html>