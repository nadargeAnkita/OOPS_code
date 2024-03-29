#include<iostream>
#include<stack>
using namespace std;

int main()
{
	stack<int>myStack;
	int num, element;
	cout<<"Enter number of elements to be inserted:"<<endl;
	cin>>num;
	
	for(int i=0; i<num; i++)
	{
		cout<<"Enter elements to be entered:"<<endl;
		cin>>element;
		myStack.push(element);
	}
	
	cout<<"Do you still want to add element(yes/no)"<<endl;
	char s='y';
	cin>>s;
	
	if(s=='y'|| s=='Y')
	{
		cout<<"Enter element to be added:"<<endl;
		cin>>element;
		myStack.push(element);
		cout<<"Enter elements to be added:"<<endl;
		cin>>element;
		myStack.push(element);
		myStack.pop();
	}
	
	cout<<"All element after pop operation"<<endl;
	while(!myStack.empty())
	{
		cout<<" "<<myStack.top()<<endl;
		myStack.pop();
	}
	return 0;
}


