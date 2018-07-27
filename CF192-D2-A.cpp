// Cookies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	int bagnum, counter=0,cookiesnum=0;
	cin >> bagnum;
	int *cookies = new int[bagnum];
	for (int i = 0;i < bagnum;i++) {
		cin >> cookies[i];
		cookiesnum += cookies[i];
	}
	if (cookiesnum % 2 == 0) {
		for (int i = 0;i < bagnum;i++) {
			if (cookies[i] % 2 == 0) {
				counter += 1;
			}
	}
}
	else {
		for (int i = 0;i < bagnum;i++) {
			if (cookies[i] % 2 != 0 || cookies[i] == 1) {
				counter += 1;
			}
		}
	}
	cout << counter;
    return 0;
}

