#include<bits/stdc++.h>
using namespace std;
struct mov
{
	int first;
	int second;
	int index;
};
map<int,int>mp;
bool cmp(mov a,mov b)
{
	if(a.first==b.first)
	return a.second>b.second;
	else
	return a.first>b.first;
}
int main()
{
	int i,j,k,l[200005],m,n;
	mov movies[200005];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>l[i];
		mp[l[i]]++;
	}
	cin>>m;
	for(i=0;i<m;i++)
	{
		movies[i].first=mp[k];
	}
	for(i=0;i<m;i++)
	{
		cin>>k;
		movies[i].second=mp[k];
		movies[i].index=i+1;
	}
	sort(movies,movies+m,cmp);
	cout<<movies[0].index;
	return 0;
}
/*
Input:
3
2 3 2
2
3 2
2 3

output:
2

*/
