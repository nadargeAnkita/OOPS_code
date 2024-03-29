#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>stack;
	stack.push(32);
	stack.push(12);
	stack.push(22);
	stack.push(42);
	
	int num=0;
	stack.push(num);
	
	stack.pop();
	stack.pop();
	stack.pop();
	
	while(!stack.empty())
	{
		cout<<stack.top()<<" ";
		stack.pop();
	}
	
	return 0;
}
