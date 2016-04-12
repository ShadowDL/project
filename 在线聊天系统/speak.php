<?php session_start(); ?>
<html>
 <head>
	<title>speak</title>
 </head>
 <body>
	
	<?php
	require_once("mysql_cong.inc");
	if(isset($_POST["text"])&& $_POST["text"]!="")
	{
		$link_id=mysql_connect($DBHOST,$DBUSER,$DBPWD);
		mysql_select_db($DBNAME);
		$time=date("h:i:s");
		$author=$_SESSION["$user_name"];
		$str="insert into chat (creat_time,author,text) values('$time','$author','$text');";
		$result=mysql_query($str,$link_id);
		mysql_close($link_id);
		
	}
	
	?>
	<form action="speak.php" method="post" target="_self">
	<input type="text" name="text" cols="20">
	<input type="submit" value="send">
	  
	</form>
 </body>
</html>