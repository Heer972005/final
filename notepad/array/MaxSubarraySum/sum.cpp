#include<bits/stdc++.h>
using namespace std;
long long maxSubSum(int arr[],int n)
{
	long long sum=0,mx=LONG_MIN;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum<0)
			sum=0;
		mx=max(mx,sum);
	}
	if(mx<0)
		mx=0;
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