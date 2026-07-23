#include<bits/stdc++.h>
using namespace std;

vector<int>arr1(vector<int>&arr,int n)
{
	int temp=arr[0];
	for(int i=1;i<n;i++)
		arr[i-1]=arr[i];
	arr[n-1]=temp;
	return arr;	
}

int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<int>arr2=arr1(arr,n);
	for(int i=0;i<n;i++)
		cout<<arr2[i]<<" ";
	return 0;
}