//insert()+operator[ ]+at()+size()


#include <iostream>
#include <map>
using namespace std;


int main() {
	
	map<int,int> m;
	m.insert({10,200});
	m[5]=100;
	m.insert({3,300});

	for(auto &x:m)
	    cout<<x.first<<" "<<x.second<<endl;
	    
	cout<<"Size: "<<m.size()<<endl;
	
	m.at(10)=300;
	    
	return 0;
}