#include<iostream>
#include<queue>
using namespace std;

int main()
{
	
	queue<string>myQueue;
	myQueue.push("Ankita");
	myQueue.push("Balaji");
	myQueue.push("Nadarge");
	myQueue.push("CST");
	myQueue.push("B+");
    
	cout<<"Size of Queue is:"<<myQueue.size()<<endl;
	cout<<"Front:"<<myQueue.front()<<endl;
	cout<<"Back:"<<myQueue.back()<<endl;
	cout<<"Queue:"<<" ";
	
	
	while(!myQueue.empty())
	{
		cout<<myQueue.front()<<endl<<"\t";
		myQueue.pop();
	}
	cout<<endl;
	
	
	return 0;
}
