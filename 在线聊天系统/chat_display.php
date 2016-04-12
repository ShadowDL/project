<html>
<head>
  <title>display</title>
  <meta http-equiv="refresh" content="5;url=chat_display.php">
  </head>
  <body>
    <?php
	require_once("mysql_cong.inc");
  $link_id=mysql_connect($DBHOST,$DBUSER,$DBPWD);
mysql_select_db($DBNAME);

$str="select * from chat order by create_time;";
$result=mysql_query($str,$link_id);
$rows=mysql_num_rows($result);

@mysql_data_seek($result,$rows-20);
if($rows<20)
	$l=$rows;
else
	$l=20;
for($i=1;$i<$l;$i++)
{
	list($cid,$author,$create_time,$text)=mysql_fetch_row($result);
	echo "<table>";
	if($text!="")
	{
		echo "<tr>";
		echo "<td align=left><font color=red>$create_time";
		echo "[".$author"]:say: $text</font><td>";
		echo "</tr>";
	}
	echo "</table>";
}

@mysql_data_seek($result,$rows-25);
list($limtime)=mysql_fetch_row($result);
$str="delete from chat where create_time<'$limtime';";
$result=mysql_query($str,$link_id);
mysql_close($link_id);
	?>
  </body>
</head>
</html>