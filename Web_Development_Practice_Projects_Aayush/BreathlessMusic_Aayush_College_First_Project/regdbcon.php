<?php

$server="localhost";
$user="root";
$password="";
$db="music";

$con=mysqli_connect($server,$user,$password,$db);

if($con)
{
    ?>
    <script>
    alert ("Connection Successfull");
    </script>
<?php
}
else
{
    ?>
     <script>
    alert ("Connection not Successfull");
    </script>
    <?php
}

?>