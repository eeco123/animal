<html>
<body>
<%
	Dim name,address,gender,mobile,con,rs,comment,suggesion,noofvisit
	set con=server.createobject("adodb.connection")
	con.open "driver={microsoft odbc for oracle};uid=system;pwd=system"
	name=request("t1")
	address=request("t2")
	gender=request("t3")	
	mobile=request("t4")	
	email=request("t5")
	comment=request("t6")
	suggesion=request("t7")
	noofvisit=request("t8")

set rs=con.execute("insert into feedback values('"&name&"','"&addresss&"','"&gender&"','"&mobile&"','"&email&"','"&comment&"','"&suggesion&"','"&noofvisit&"')")
response.write("Thanks for your feedback")
%>

</body>
</html>