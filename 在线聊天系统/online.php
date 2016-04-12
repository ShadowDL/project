<html>
<head>
  <title> online member</title>
   <meta http-equiv="refresh" content="5;url=online.php">
  </head>
  <body>
  <h4>online member :</h4>
  <?php
   require_once("mysql_cong.inc");
   $link_id=mysql_connect($DBHOST,$DBUSER,$DBPWD);
   mysql_select_db($DBNAME);

     $str="select * from user where is_online !=2 order by user_id;";    	
	 $result=mysql_query($str,$link_id);
	 echo "<table>";
	 while($row=mysql_fetch_row($result))
	 {
		 $name=$row[1];
		 echo "<tr>";
		 echo "<td>[$name]</td>";
		 echo "</tr>";
     
		 }
		 echo "</table>";
		 
		 mysql_close($link_id);
  ?>
  </body>
</html>
