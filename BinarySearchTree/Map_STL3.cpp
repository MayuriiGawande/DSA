//find()+count()+lower_bound()

#include <iostream>
#include <map>
using namespace std;


int main() {
	
	map<int,string> m;
	m.insert({5,"gfg"});
	m.insert({2,"ide"});
	m.insert({1,"practice"});

	if(m.find(5)==m.end())
	    cout<<"Not found";
	else
	    cout<<"Found";
	    cout<<endl;
	if(m.count(2)==0)
	    cout<<"Not found";
	else
	    cout<<"Found";
	    cout<<endl;
	auto it=m.lower_bound(7);
	if(it!=m.end())
	    cout<<(*it).first<<" ";
	else
	    cout<<"No Equal or Greater Value";
	    
	return 0;
}