#pragma once
#include <iostream>
#include <string>
#include "file1.cpp"
using namespace std;
string fooA(string inpString)
{
	if(inpString == "")
		return "";
	string result = fooA(inpString.substr(0, inpString.length() - 1))//Most of inpString, filtered through fooA
		+ inpString.substr(inpString.length() - 1)//Last char of inpString
		+ "!";//Exclamation point
	if(result.substr(1, 1) != "!")//If recursion is done
		return result;
	else
	{
		if(result.substr(2, 1) != "?")
		{//If fooZ has not yet been called
			string resultAlt = fooZ(result);
			cout << resultAlt << endl;
			return resultAlt;
		} else
			return result;
	}
}
