#include<iostream>
using namespace std;
class cal
{
	public:
		int add(int a, int b)
		{
			return a+b;
		}
		int add(int a, int b, int c)
		{
			return a+b+c;
		}
};
int main()
{
	cal c;
	cout<<c.add(30, 60)<<endl;
	cout<<c.add(45, 80, 10)<<endl;
	return 0;
}
