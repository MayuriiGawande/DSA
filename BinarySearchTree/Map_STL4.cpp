//upper_bound()+erase()

#include <iostream>
#include <map>
using namespace std;


int main() {
	
	map<int,string> m;
	m.insert({5,"gfg"});
	m.insert({2,"ide"});
	m.insert({1,"practice"});

	auto it=m.upper_bound(2);
	if(it!=m.end())
	    cout<<(*it).first<<endl;
	else
	    cout<<"Greater Value"<<endl;
	    
	m.erase(5);
	cout<<"Size: "<<m.size()<<endl;
	
	m.erase(m.find(2),m.end());
	cout<<"Size: "<<m.size()<<endl;
	
	return 0;
}