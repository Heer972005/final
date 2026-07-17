#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>&arr,int n)
{
	int lrgest=arr[0];
	int sl=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>lrgest)
		{
			sl=lrgest;
			lrgest=arr[i];
		}
		else if(arr[i]<lrgest&&arr[i]>sl)
		{
			sl=arr[i];
		}
	}
	return sl;
}

int secondSmallest(vector<int>&arr,int n)
{
	int smallest=arr[0];
	int ss=INT_MAX;
	for(int i=1;i<n;i++)
	{
		if(arr[i]<smallest)
		{
			ss=smallest;
			smallest=arr[i];
		}
		else if(arr[i]!=smallest&&arr[i]<ss)
		{
			ss=arr[i];
		}	
	}
	return ss;
}

vector<int> getSecondOrderElements(int n,vector<int>&a)
{
	int slargest=secondLargest(a,n);
	int ssmallest=secondSmallest(a,n);
	return {slargest,ssmallest};
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	vector<int> res=getSecondOrderElements(n,arr);
	for(int i=0;i<res.size();i++)
	{
		cout<<res[i];
	}
	return 0;
}