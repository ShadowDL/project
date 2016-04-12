<?php
session_start();
$user_name=$_POST["user_name"];
$_SESSION["user_name"]=$user_name;
require_once("mysql_cong.inc");

$link_id=mysql_connect($DBHOST,$DBUSER,$DBPWD);
mysql_select_db($DBNAME);

$str="select name,password from user where name='$user_name';";
$result=mysql_query($str,$link_id);
$rows=mysql_num_rows($result);
$user_name=$SESSION["user_name"];
$password=&_POST["password"];


if($row!=0)
{
	list($name,$password)=mysql_fetch_row($result);
	if($password==$_POST["password"])
	{
		$str="update user set is_online=1 where name='$user_name' and password='$password';";
		$result=mysql_query($str,$link_id);
		require("index.php");
	}
	else{
		require(relogin.php);
	}
}
else{
	$str="insert into user (name,password,is_online) values('$user_name','$password',1);";
	$result=mysql_query($str,$link_id);
	require("index.php");
}
mysql_close($link_id);
?>