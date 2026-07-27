#include<bits/stdc++.h>
using namespace std;

void sortArray(int n,vector<int>&arr)
{
	int low=0,mid=0,high=n-1;
	while(mid<=high)
	{
		if(arr[mid]==0)
		{
			swap(arr[mid],arr[low]);
			low++;
			mid++;
		}
		else if(arr[mid]==1)
			mid++;
		else
		{
			swap(arr[mid],arr[high]);
			high--;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sortArray(n,a);
	for(int i=0;i<n;i++)
		cout<<a[i];
	return 0;
}