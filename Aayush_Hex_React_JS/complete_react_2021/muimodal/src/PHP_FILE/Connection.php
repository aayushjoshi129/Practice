<?php
header('Access-Control-Allow-Origin: *');
$host = "localhost";
$username = "sa";
$password = "123@hex";
$database = "TestDatabase";

sqlsrv_configure("WarningsReturnAsErrors", 0);

$options = array("UID" => $username, "PWD" => $password, "Database" => $database, "CharacterSet" => "UTF-8");		// Sending Options

$str = 'getpartname';  // Using Stored Procedure Value

$localserver = sqlsrv_connect($host, $options) or die(print_r(sqlsrv_errors(), true)); 	// Establishing Connection

$query = sqlsrv_query($localserver, $str,array(),array('Scrollable' => SQLSRV_CURSOR_KEYSET)) or die("Select Query Unsuccessful");		// Passing Query

if ($localserver)								// Checking Connection Established or Not
{
	while($row = sqlsrv_fetch_object($query)){
		$jsonArray[] = $row;
	}
	echo json_encode($jsonArray);

}
?>