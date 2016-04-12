<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN">
<html>
  <head>
  <meta http-equiv="content-type" content="text/html; charset=utf-8">
  </head>
  <body>
<title>chatting room</title>
<script language="Javascript" src="./js.js">
</script>
</head>
<body onload="getfocus()" bgcolor="#FFFFFF" text="#000000">
<h1 align="center">Welcome to my chatting room </h1>
<table width="80%" border="0" align="center" bgcolor="#FFFFFF">
<tr>
<td align="center">
<form name="frmLogin" method="post" action="check_user.php">
nick name:
<input type="text" name="user_name">
password:
<input type="password" name=password">
<input type="submit" name="cmdLogin" value="login" onclick="return checkValid();">
</td>
</form>
</tr>
</table>
</body>

</html>
