<?php

	require('activation.php');

	if (isset($_POST['acode']) && strlen($_POST['acode']))
	{
		if (obsSetLicense($_POST['acode']))
		{
			obsStoreLicense($_POST['acode']);
			exo_runhescriptcom("Macros.MacroShowMessage|Program activated successfully!");
		}
		else
			exo_runhescriptcom("Macros.MacroShowMessage|Activation failed.");
	}
	else exo_runhescriptcom("Macros.MacroShowMessage|Activation failed.");
	header('Location: index.php');
?>
