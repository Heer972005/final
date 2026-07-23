#include<bits/stdc++.h>
using namespace std;

vector<int>interSection(vector<int>&a,int n,vector<int>&b,int m)
{
	int i=0;
	int j=0;
	vector<int>ans;
	while(i<n&&j<m)
	{
		if(b[j]>a[i])
			i++;
		else if(b[j]<a[i])
			j++;
		else
		{
			ans.push_back(a[i]);
			i++;
			j++;
		}
	}
	return ans;
}
int main()
{
	int n1,n2;
	cin>>n1;
	vector<int>arr1(n1);
	for(int i=0;i<n1;i++)
		cin>>arr1[i];
	cout<<"Enter the size for the second array";
	cin>>n2;
	vector<int>arr2(n2);
	for(int i=0;i<n2;i++)
		cin>>arr2[i];
	vector<int>un=interSection(arr1,n1,arr2,n2);
	for(int i=0;i<un.size();i++)
		cout<<un[i]<<" ";
	return 0;

}