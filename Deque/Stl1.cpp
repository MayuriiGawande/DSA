//Example 1(push, front and back)

#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;


int main()
{
	deque<int> dq = {10, 20, 30};

	dq.push_front(5);
	dq.push_back(50);

	for(auto x: dq)
		cout << x << " ";

	cout << dq.front() << " " << dq.back();

	
	return 0;
}