<?php

    /*
        Simple script that calls the license generator CGI 
        It takes a single parameter (info), the URL of the CGI and the project file are hardcoded
    */

    $keygen_url     = "http://your-host/cgi-bin/nph-keygen_get";
    $project_file = dirname(__FILE__)."/sample_short.opf";	// path is relative to the keygen CGI!

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

	// only allow access from authorized IPs
	/*
	$ip = @$_SERVER['REMOTE_ADDR'];
	if ($ip != "127.0.0.1")
	{
		header("HTTP/1.0 403 Forbidden");
		die();
	}
	*/

    if (!isset($_GET['info']))
        die("No license information given");
    $url = $keygen_url . "?type=short&advanced=false&info1=" . rawurlencode($_GET['info']) . "&project=" . rawurlencode($project_file);

    $result = get_webpage($url);
    if ($result == null)
        die("Error generating license key");
    if ($result['http_code'] != 200)
        die("Error generating license key, HTTP error code " . $result['http_code']);

    $raw_license = $result['content'];
    $license = explode("\n", $raw_license);
    printf("Info: " . $license[0] . "<br>Key: " . $license[1]);

?>
