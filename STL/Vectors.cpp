/*#include<iostream>
#include<conio.h>
#include<vector> */
#include<bits/stdc++.h>
#define pis pair<int,string>
#include<unordered_map>
using namespace std;
bool secondSort(pis &a, pis &b)
{
//	return strcmp((a.second ,b.second));
return a.second<b.second;
   
}
int main()
{
	//vector <int> v;
	vector <pis> v;
	/*v.push_back(10);
	v.push_back(15);
	v.push_back(17);
	v.push_back(58);*/
	v.push_back(pis(6,"JKL"));
	v.push_back(pis(4,"DEF"));
	v.push_back(pis(5,"ABC"));
	v.push_back(pis(9,"MNO"));
	v.push_back(pis(1,"GHI"));
	
	
	for(int i=0;i<v.size();i++)
	{
		//cout<<v[i]<<"\t";
		cout<<v[i].first<<"\t"<<v[i].second<<"\n";
	}
	cout<<"******************After popping ****************"<<endl;
	v.pop_back();
	for(int i=0;i<v.size();i++)
	{
		//cout<<v[i]<<"\t";
		cout<<v[i].first<<"\t"<<v[i].second<<"\n";
	
	}
	cout<<"******************After sorting Ids ****************"<<endl;
	sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
	{
		//cout<<v[i]<<"\t";
		cout<<v[i].first<<"\t"<<v[i].second<<"\n";
	
	}
	cout<<"******************After sorting names ****************"<<endl;
	sort(v.begin(),v.end(),secondSort);
	for(int i=0;i<v.size();i++)
	{
		//cout<<v[i]<<"\t";
		cout<<v[i].first<<"\t"<<v[i].second<<"\n";
	
	}
	//getch();
	return 0;
}
/*
output:
6	JKL
4	DEF
5	ABC
9	MNO
1	GHI
******************After popping ****************
6	JKL
4	DEF
5	ABC
9	MNO
******************After sorting Ids ****************
4	DEF
5	ABC
6	JKL
9	MNO
******************After sorting names ****************
5	ABC
4	DEF
6	JKL
9	MNO

*/
