#include "stdafx.h"

#include<iostream>
using namespace std;

int main()
{
	int a = 500, i = 1;
	while (i < a)
	{
		i = i++;
		cout << i;
	}
	getchar();
}

