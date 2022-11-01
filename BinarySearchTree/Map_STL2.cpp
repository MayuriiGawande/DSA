//(begin()+end()+clear()+empty()

#include <iostream>
#include <map>
using namespace std;


int main() {
	
	map<int,int> m;
	m.insert({10,200});
	m[5]=100;
	m.insert({3,300});

	for(auto it=m.begin();it!=m.end();it++)
	    cout<<(*it).first<<" "<<(*it).second<<endl;
	    
	m.clear();
	cout<<"Size: "<<m.size()<<endl;
	cout<<"Empty: "<<(m.empty()?"Yes":"No")<<endl;
	    
	return 0;
}