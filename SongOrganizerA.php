<DOCTYPE html Public "-//WSC//DTD XHTML 1.0 strict//EN"
"http://www.w3.0rg/TR/xhtml/DTD/xhtml-strict.dtd">
<html xmlns="http://www.we.org/1999/xhtml">
<head>
<title>Song organizer</title>
<meta http-equiv=content-type" content="text/html: charset=iso-8859-1"/>
</head>
<body>
<h1>Song Organizer</h1>
<?php
if(isset($_GET['action']))    { 
                  if ((file_exists("SongOrganizer/songs.txt")) && (filesize("SongOrganizer/songs.txt")  !=0))//checks whether the file songs.txt exists in the folder //SongOrganizer and file size of fons.txt must not be equal to 0 bytes
                  $SongArray = file("SongOrganizer/songs.txt");//Read the file content into an array of $SongArray

                  switch  ($_GET['action'])  {//Checks whether the value passed into the variable &_GET action matches the switch cases.
                      case 'Remove Duplicates':
                      $SongArray = array_unique($SongArray);
                      $SongArray = array_values($SongArray);
                      break;
                      case 'Sort Ascending
                      sort($SongArray);
                      break;
                      case 'Shuffle'
                    shuffle($SongArray);
                      break;
                  }
if (count($SongArray) > 0) { 
                  $NewSongs = implode($SongArray);
                  $SongStore = fopen("SongOrganizer/songs.txt", "wb");
if  ($SongStore ===false)
echo "There was an error updating the song file\n";
else {
    fwrite($SongStore, $NewSongs);
    fclose($SongStore);
}
 }  else unlink("SongOrganizer/songs.txt");
if  (isset($_POST['submit']))  {//Checks whether the song file was attached successfully
$SongToAdd = stripslashes($_POST['SongName']) . "\n";
$ExistingSongs = array();



if  (file_exists("SongOrganizer/songs.txt")  && filesize( "SongOrganizer/song.txt")  > 0)  { 
    $ExistingSongs = file("SongOrganizer/songs.txt");

if (in_array($SongToAdd,  $ExistinfSongs))  {
echo "<p>The song you enteres already exists!<br  />\n";
eecho "Your song was not added to the list.<p>";
}else{
    $SongFile = fopn("SongOrganizer/song.txt",  "ab");
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

if ((!file_exists("SongOrganizer/songs.txt") || filesize("SongOrganizer/songs.txt") ==0)) //displays a song list, or a message that there are no songs in the list if the list is empty
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
<input type="reset"  name="reset"  value="Rest Song Name"  />
</p>
</form>
</body>
</html>