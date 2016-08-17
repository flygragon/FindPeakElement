// FindPeakElement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"FindPeakElement.h"
using namespace std;

int main()
{
	int m;
	cin >> m;
	vector<int> nums(m);
	for (int i = 0; i < m; cin >> nums[i],i ++);
	FindPeakElement FPE;
	int index = FPE.findPeakElement(nums);
	cout << index << " " << nums[index] << '\n';
    return 0;
}

