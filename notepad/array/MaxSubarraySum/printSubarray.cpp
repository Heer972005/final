#include<bits/stdc++.h>
using namespace std;
long long maxSubSum(int arr[],int n)
{
	long long sum=0,mx=LONG_MIN;
	int start=0;
	int ansStart=-1,ansEnd=-1;
	for(int i=0;i<n;i++)
	{
		if(sum==0) start=i;
		sum+=arr[i];
		if(sum>mx)
		{
			mx=sum;
			ansStart=start;
			ansEnd=i;
		}
		if(sum<0)
			sum=0;
	}
	cout<<"The subarray:[";
	for(int i=ansStart;i<=ansEnd;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"]"<<endl;
	return mx;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"sum"<<maxSubSum(arr,n);
	return 0;
}