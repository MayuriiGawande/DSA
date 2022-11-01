#include <iostream>
#include <limits.h>
using namespace std;

/*

Iterative Method

int fact(int n)
{
	int res = 1;

	for(int i=2; i<=n; i++)
	{
		res = res * i;
	}
	
	return res;
}
int main() {
    
    	int number = 5;
    	
    	cout<<fact(number);
    	
    	return 0;
}
*/

//Recursive Method

int fact(int n)
{
	if(n==0)
	   return 1;
		
	return n * fact(n-1);
}
int main() {
    
    	int number = 5;
    	
    	cout<<fact(number);
    	
    	return 0;
}