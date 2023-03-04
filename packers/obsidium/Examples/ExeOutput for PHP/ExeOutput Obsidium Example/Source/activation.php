<?php

	function obsGetTrialDays()
	{
		return intval(exo_return_hescriptcom("Obsidium.getTrialDays", ""));
	}

	function obsGetTrialRuns()
	{
		return intval(exo_return_hescriptcom("Obsidium.getTrialRuns", ""));
	}

	function obsIsLicensed()
	{
		return exo_return_hescriptcom("Obsidium.isLicensed", "") == "true";
	}

	function obsGetLicenseInfo($num)
	{
		return exo_return_hescriptcom("Obsidium.getLicenseInfo|" . $num, "");
	}

	function obsSetLicense($lic)
	{
		return exo_return_hescriptcom("Obsidium.setLicense|" . $lic, "") == "true";
	}

	function obsStoreLicense($lic)
	{
		return exo_return_hescriptcom("Obsidium.storeLicense|" . $lic, "") == "true";
	}
	
	function obsGetSystemId()
	{
		return exo_return_hescriptcom("Obsidium.getSystemId", "");
	}
	
	function showActivationForm()
	{
		echo '<script type="text/javascript">';
		echo 'function selectcopy(fieldid){';
		echo 'var field=document.getElementById(fieldid) || eval("document."+fieldid);';
		echo 'field.select();';
		echo 'if (field.createTextRange){';
		echo 'field.createTextRange().execCommand("Copy");';
		echo 'alert("Value copied to clipboard!");';
		echo '}';
		echo '}';
		echo '</script>';
		echo '<STYLE TYPE="text/css">';
		echo '<!--';
		echo 'textarea { overflow: auto; } ';
		echo '-->';
		echo '</STYLE>';
		echo '<p>System ID: <form name="systemid"><input type="text" readonly="readonly" size="20" name="selectid" value="' . obsGetSystemId() . '"/></form>&nbsp;<a href="javascript:selectcopy(\'systemid.selectid\')">Copy</a>';
		echo '<p><form name="input" action="do_activation.php" method="post">';
		echo 'Activation code: <textarea cols="64" rows="6" name="acode"></textarea>';
		echo '<input type="submit" value="Activate" />';
		echo '</form></p>';
	}
?>
