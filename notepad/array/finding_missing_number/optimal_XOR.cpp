#include<bits/stdc++.h>
using namespace std;
//for n=0 to n otherwise from 1 will not work
int missingNumber(vector<int>&a,int n)
{
	int xor1=0,xor2=0;
	//int n=N-1;
	for(int i=0;i<n;i++)
	{
		xor2=xor2^a[i];
		xor1=xor1^(i+1);
	}
	//xor1=xor1^N;
	return (xor1^xor2);
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<missingNumber(arr,n);
	return 0;
}