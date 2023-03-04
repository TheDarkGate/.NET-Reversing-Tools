/*
	stores a short license key passed as command line arguments
*/

#include "stdafx.h"
#include "store_license.h"
#include "obsidium.h"

using namespace std;

vector<string> splitString(const string &s, char x)
{
	vector<string> v;
    string::size_type lastDelim = 0, delim;
    while ((delim = s.find_first_of(x, lastDelim)) != string::npos)
    {
    	v.push_back(s.substr(lastDelim, delim - lastDelim));
        lastDelim = delim + 1;
    }
   	v.push_back(s.substr(lastDelim));
    return v;
}


int APIENTRY _tWinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPTSTR    lpCmdLine,
                     int       nCmdShow)
{
	// parse command line parameters, we're expecting: "user" "key"
	vector<string> params = splitString(lpCmdLine, '"');
	if (params.size() != 5)
		return -1;
	if (params[0].length() != 0 || params[4].length() != 0)
		return -1;
	string user = params[1];
	string key = params[3];
	// store license key
	if (!obsStoreLicenseShort(user.c_str(), key.c_str(), NULL))
		return -1;
	// success
	return 0;
}