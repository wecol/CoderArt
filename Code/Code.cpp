// Code.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "artTools.h"
#include <iostream>
#include <string>
#include "SortMethods.h"
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	char s[9] = "abcdefgw";
	leftShift(s, 8, 2);
	string str = "abcdefgw";
	rotateShift(str, 2);
	int Array[5] = { 2, 3, 2, 4, 1 };
	SortMethods *sorter = new SortMethods();
	sorter->BarelSorter(Array, 5);
	for (int i = 0; i < 5; i++)
		printf("%d", Array[i]);
	cout << s<<"\n" << str;
	cout << "\n"<<(-9)%2;
	
	
	
	

}

