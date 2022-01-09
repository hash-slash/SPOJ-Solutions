// Problem: The Next Palindrome
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/PALIN/
// Memory Limit: 1536 MB
// Time Limit: 9000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma") 
#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
	int n;cin>>n;
	while(n--)
	{
		string s;cin>>s;
		int siz=s.size();
		string copy=s;
		for(int i=0;i<siz/2;i++)
		{
			s[siz-i-1]=s[i];
		}
		//cout<<s<<endl;
		if(copy<s)cout<<s<<endl;
		else
		{
			int mid=(siz-1)/2;
			//cout<<mid<<endl;
			for(int i=mid;i>=0;i--)
			{
				if(s[i]!='9')
				{
					//cout<<"ok"<<endl;
					s[i]=s[i]+1;
					break;
				}
				else s[i]='0';
			}
			for(int i=0;i<siz/2;i++)
			{
				s[siz-i-1]=s[i];
			}
			if(s[0]=='0'){s='1'+s;s[siz]='1';}
			cout<<s<<endl;
		}
		
	}	
}
