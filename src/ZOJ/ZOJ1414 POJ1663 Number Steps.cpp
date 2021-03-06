/*******************************************************************************
 * Author : Neo Fung
 * Email : neosfung@gmail.com
 * Last modified : 2011-07-31 11:32
 * Filename : ZOJ1414 POJ1663 Number Steps.cpp
 * Description : 
 * *****************************************************************************/
// ZOJ1414 POJ1663 Number Steps.cpp : Defines the entry point for the console application.
//

// #include "stdafx.h"



#include <fstream>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <math.h>
#include <algorithm>
#include <numeric>
#include <functional>
#include <memory.h>

using namespace std;

int main(void)
{
// 	ifstream cin("data.txt");

	int ncases;
	int x,y;
	cin>>ncases;

	while(ncases--)
	{
		cin>>x>>y;
		if (x==y)
		{
			if (x%2)
			{
				cout<<x*2-1<<endl;
			} 
			else
			{
				cout<<x*2<<endl;
			}
		}
		else if (x-y==2)
		{
			if (x%2)
			{
				cout<<x+y-1<<endl;
			} 
			else
			{
				cout<<x+y<<endl;
			}
		} 
		else
		{
			cout<<"No Number"<<endl;
		}
	}

	return 0;
}
