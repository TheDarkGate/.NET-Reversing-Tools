<?php

    /*
        Simple script that calls the license generator CGI to verify license keys
        It takes a single parameter (key), the URL of the CGI and the project file are hardcoded
    */

    $keygen_url     = "http://your-host/cgi-bin/nph-keygen_get";
    $project_file = dirname(__FILE__)."/sample_long.opf";	// path is relative to the keygen CGI!

    function get_webpage($url)
    {
        $page = file_get_contents($url, false);

        $result = array();
        if ($page !== false)
            $result['content'] = $page;
        else if (!@count($http_response_header))
            return null;    // bad url, timeout

        // Save the header
        $result['header'] = $http_response_header;

        // Get the *last* HTTP status code
        $nLines = @count($http_response_header);
        if ($nLines > 0)
        {
	        for ($i = $nLines-1; $i >= 0; $i--)
	        {
	            $line = $http_response_header[$i];
	            if (strncasecmp("HTTP", $line, 4) == 0)
	            {
	                $response = explode(' ', $line);
	                $result['http_code'] = $response[1];
	                break;
	            }
	        }
        }
        return $result;
    }
    
    function decode_result($s)
    {
    	$decoded = array();
		$lines = explode("\n", $s);
		foreach ($lines as $line)
		{
			$line = trim($line);
			if (empty($line)) continue;
			$parts = explode(':', $line, 2);
			if (count($parts) != 2) continue;
			$parts[0] = trim($parts[0]);
			$data = rawurldecode($parts[1]);
			$decoded[$parts[0]] = $data;
		}
		return $decoded;
    }

	// only allow access from authorized IPs
	/*
	$ip = @$_SERVER['REMOTE_ADDR'];
	if ($ip != "127.0.0.1")
	{
		header("HTTP/1.0 403 Forbidden");
		die();
	}
	*/

    if (!isset($_GET['key']))
        die("No license key given");
    $url = $keygen_url . "?verify=true&type=long&project=" . rawurlencode($project_file) . "&key=" . rawurlencode($_GET['key']);

    $result = get_webpage($url);
    if ($result == null)
        die("Error verifying license key");
    if ($result['http_code'] != 200)
        die("Error verifying license key, HTTP error code " . $result['http_code']);

    $decoded = decode_result($result['content']);

	print "<html><head>\n";
	print "<META HTTP-EQUIV=\"Content-Type\" content=\"text/html; charset=utf-8\"/>\n</head>\n";
	print "<body>\n<table border=\"1\" cellspacing=\"0\" cellpadding=\"0\">\n";
	print "<tr>\n<th>Key</th>\n<th>Value</th></tr>\n";
    foreach ($decoded as $key => $val)
    {
    	print "<tr><td>$key</td><td>$val</td></tr>";
    }
	print "</table>";
	print "</body></html>\n";
?>
