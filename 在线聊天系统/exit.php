<?php session_start(); ?>
<html>
 <head>
	<title>exit room</title>
 </head>
	<script type="JavaScript">
	function exit(){
		window.top.location="./login.php";
	}
	</script>
	<body>
	<form name="frmExit" method="post" action="./exit.php">
	  <input type="submit" name="cmdExit" value="exit room" onclick="exit()">
	</form>
	<?php
	require_once("mysql_cong.inc");
	
		$link_id=mysql_connect($DBHOST,$DBUSER,$DBPWD);
		mysql_select_db($DBNAME);
		
		$str="update user set is_online =0 where name='$_SESSION[user_name]';";
		$result=mysql_query($str,$link_id);
		mysql_close($link_id);
		
	}
	
	?>
 </body>
</html>