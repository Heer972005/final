#include<bits/stdc++.h>
using namespace std;

int linearSearch(int n, vector<int>&arr,int tr)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==tr)
			return i+1;
	}
	return -1;
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int tr;
	cout<<"Enter the target";
	cin>>tr;
	cout<<linearSearch(n,arr,tr);
	return 0;
}