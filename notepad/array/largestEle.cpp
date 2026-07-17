#include<bits/stdc++.h>
using namespace std;

int lrgestEle(vector<int>&arr,int n)
{
	int largest=arr[0];
	for(int i=1;i<n;i++)
		if(arr[i]>largest)
			largest=arr[i];
	return largest;
}

int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<lrgestEle(arr,arr.size());
	return 0;
}