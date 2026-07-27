#include<bits/stdc++.h>
using namespace std;

int mxProfit(vector<int>stocks,int n)
{
	int profit=0;
	int mini=stocks[0];
	int cost=0;
	for(int i=0;i<n;i++)
	{
		cost=stocks[i]-mini;
		profit=max(profit,cost);
		mini=min(mini,stocks[i]);
	}
	return profit;
}
int main()
{
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<mxProfit(arr,n);
	return 0;
}