#include<bits/stdc++.h>
using namespace std;
int main()
{
	map <int,string> m;
	m.insert({12,"dhf"});
	m.insert({1,"dfgdf"});
	m.insert({2,"sgteryr"});
	m.insert({22,"dgdfg"});
	m.insert({4,"fgdfg"});
	m.insert({7,"retyryrt"});
	m.insert({222,"dgdzg"});
	for(auto it=m.begin();it!=m.end();it++)
	cout<<it->first<< " "<<it->second<<endl;
	auto srch = m.find(22);
	if(srch!=m.end())
	cout<<srch->first<<" - "<<srch->second<<endl;
	else
	cout<<"Not found"<<endl;
	m.erase(22);
	srch = m.find(22);
	if(srch!=m.end())
	cout<<srch->first<<" - "<<srch->second<<endl;
	else
	cout<<"Not found"<<endl;
	return 0;
}
/*
output:

1 dfgdf
2 sgteryr
4 fgdfg
7 retyryrt
12 dhf
22 dgdfg
222 dgdzg
22 - dgdfg
Not found
*/
