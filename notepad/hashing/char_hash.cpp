#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;

	int hash[26]={0};
	//int hash[256]={0};
	for(int i=0;i<s.size();i++)
	{
		hash[s[i]-'a']++;
		//hash[s[i]]++;
	}
	int q;
	cin>>q;
	while(q--)
	{
		char c;
		cin>>c;
		cout<<c<<" appears "<<hash[c-'a']<<" times "<<endl;
		//cout<<hash[c];
	}
	return 0;
}