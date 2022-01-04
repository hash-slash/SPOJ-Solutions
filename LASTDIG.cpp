// Problem: The last digit
// Contest: SPOJ - Classical
// URL: https://www.spoj.com/problems/LASTDIG/
// Memory Limit: 1536 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
	int a,b;
	cin>>a>>b;
	if(b==0){cout<<"1"<<endl;return;}
	a=a%10;
	int f=b%4;b=b%2;
	int s2[]={6,2,4,8};
	int s3[]={1,3,9,7};
	int s4[]={6,4};
	int s7[]={1,7,9,3};
	int s8[]={6,8,4,2};
	int s9[]={1,9};
	if( a==0 || a==6 || a==5 || a==1){cout<<a<<endl;return;}
	if(a==2){cout<<s2[f]<<endl;return;}
	if(a==3){cout<<s3[f]<<endl;return;}
	if(a==4){cout<<s4[b]<<endl;return;}
	if(a==7){cout<<s7[f]<<endl;return;}
	if(a==8){cout<<s8[f]<<endl;return;}
	if(a==9){cout<<s9[b]<<endl;return;}
	
}
int32_t main()
{
	int t;cin>>t;while(t--)solve();
}