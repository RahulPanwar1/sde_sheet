#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
	int d = floor(n/2);
	unordered_map<int, int> m1;
	int f =0;
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		m1[arr[i]]++;
	}
	for(auto it:m1)
	{
		if(it.second > d)
		{
			ans = it.first;
			f = 1;
			break;
;
		}
	}
	if(f == 1) return ans;
	else return -1;
}