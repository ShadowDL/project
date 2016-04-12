function getfocus(){
	document.frmLogin.user_name.focus();
	
}
function checkValid(){
	if(document.frmLogin.user_name.value=="")
	{
		alert ("please input name !");
		document.frmLogin.user_name.focus();
		return false;
	}
	if(document.frmLogin.password.value=="")
	{
		alert ("please input password !");
		document.frmLogin.password.focus();
		return false;
	}
	return true;
	
}