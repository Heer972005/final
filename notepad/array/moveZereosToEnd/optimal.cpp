#include<bits/stdc++.h>
using namespace std;

vector<int>moveZero(int n,vector<int>arr)
{
	int j=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
		{
			j=i;
			break;
		}
	}
	if(j==-1)return arr;
	for(int i=j+1;i<n;i++)
	{
		if(arr[i]!=0)
		{
			swap(arr[i],arr[j]);
			j++;
		}
	}
	return arr;
}

int main()
{
	int n;
	cin>>n;
	vector<int>arr2(n);
	for(int i=0;i<n;i++)
		cin>>arr2[i];
	arr2=moveZero(n,arr2);
	for(int i=0;i<n;i++)
		cout<<arr2[i]<<" ";

	return 0;
}