#include<bits/stdc++.h>
using namespace std;
int main()
{
	set <int> s;
	vector <int> a,b;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	b.push_back(3);
	b.push_back(4);
	b.push_back(5);
	b.push_back(6);
	int i =0,j=0;
	while(i<a.size() && j<b.size())
	{
		if(a[i]<b[j])
		i++;
		else if(a[i]>b[j])
		j++;
		else if(a[i]==b[j])
		{
		s.insert(a[i]);
		i++;j++;
		}
		//cout<<a[i]<<endl;
	}
	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" "<<endl;
	}
	return 0;
}
/*
output:
3 
4 

*/
