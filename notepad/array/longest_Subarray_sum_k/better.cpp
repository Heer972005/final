#include<bits/stdc++.h>
using namespace std;

int length(vector<int>&a,long long k)
{
	map<long long,int>presum;
	int maxlen=0;
	long long sum=0;
	for(int i=0;i<a.size();i++)
	{
		sum+=a[i];
		if(sum==k)
		{
			maxlen=max(maxlen,i+1);
		}
		long long rem=sum-k;
		if(presum.find(rem)!=presum.end())
		{
			int len=i-presum[rem];
			maxlen=max(maxlen,len);
		}
		//works for just positive
		//presum[sum]=i;
		
		//for zeroes and negatives and for negatives this is only the 			//optimal code
		if(presum.find(sum)==presum.end())
		{
			presum[sum]=i;
		}
	}
	return maxlen;
	
}
int main()
{	
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	long long k;
	cout<<"enter k";
	cin>>k;
	cout<<length(arr,k);
	return 0;
}