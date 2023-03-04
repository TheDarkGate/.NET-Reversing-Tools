<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
<title>ExeOutput for PHP Obsidium example</title>
</head>
<body bgcolor="#3e4349" text="#ffffff" link="#ffffff" vlink="#ffffff" alink="#ffffff" font="Tahoma,Verdana">
<div align="center" style="font-size: 8pt; font-family: tahoma,verdana;">
<?php
	require('activation.php');
	if (!obsIsLicensed())
		showActivationForm();
	else
	{
		echo "<p>Application is licensed (" . obsGetLicenseInfo(0) . "), place active content here</p>";
	}
?>
</div>
</body>
</html>
