#include<bits/stdc++.h>
using namespace std;
int main()
{
	set <int> s;
	s.insert(10);
	s.insert(2);
	s.insert(10);
	s.insert(2);
	s.insert(10);
	s.insert(2);
	s.insert(10);
	s.insert(2);
	s.insert(1);
	s.insert(-3);
	s.insert(5);
	s.insert(4);
	s.insert(5);
	s.insert(5);
	for(auto it=s.begin();it!=s.end();it++)
	{
		cout<<*it<<" "<<endl;
	}
	
	auto srch = s.find(5);
	if(srch!=s.end())
	cout<<"Found "<<*srch<<endl;
	else
	cout<<"Not Found\n";
	s.erase(5);
	 srch = s.find(5);
	if(srch!=s.end())
	cout<<"Found "<<*srch<<endl;
	else
	cout<<"Not Found\n";
	return 0;
}
