<?php


$username = "root";
$password = "";
$server = "localhost";
$db = "music";

$con = mysqli_connect($server,$username,$password,$db);


if($con)
{
    // echo "Connection Successfull";
    ?>

<script>
    alert("Connection Successfull");
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
    echo "Connection Not Established";
    die("no Connection". mysqli_connect_error());
}



?>