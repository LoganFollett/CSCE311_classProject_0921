#pragma once
#include <iostream>
#include <string>
#include "fileA.cpp"

using namespace std;

string fooZ(string input){
	for(int i=0; i<=input.length(); i+=2){
		if(input[i+1] == '?' && input[i+2] == NULL){
			cout << input << endl;
			return(input);
		}
		else if(input[i+1] != '?' && input[i] != NULL && i==0){
			fooZ(input.insert(i+1,'?'));
			break;
		}
		else if(input[i+1] != '?' && input[i] != NULL){
			fooZ(input.insert(i+1,'?'));
			return(input);
		}
	}
	if(input[1] != '!'){
		fooA(input);
	}
	cout << input << endl;
	return(input);
}