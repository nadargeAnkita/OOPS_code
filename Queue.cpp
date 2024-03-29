#include<iostream>
#include<queue>
using namespace std;

void showQ(queue<int>gq)
{
	queue<int>g=gq;
	while(!g.empty())
	{
		cout<<"\t"<<g.front();
		g.pop();
	}
	cout<<"\n";
	
}

int main()
{
	queue<int>gquiz;
	gquiz.push(10);
	gquiz.push(20);
	gquiz.push(40);
	
	cout<<"The Queue gquiz is:"<<endl;
	
	showQ(gquiz);
	
	cout<<"gquiz.size():"<<gquiz.size()<<endl;
	cout<<"gquiz.front():"<<gquiz.front()<<endl;
	cout<<"gquiz.back():"<<gquiz.back()<<endl;
	cout<<"gquiz.pop():"<<endl;
	gquiz.pop();
	showQ(gquiz);
	return 0;
}
