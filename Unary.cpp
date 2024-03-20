#include<iostream>
using namespace std;
class value{
	int a, b;
	public:
		void getdata(int x, int y)
		{
			a = x;
			b = y;
		}
		void showdata()
		{
			cout<<"a="<<a<<endl<<"b="<<b<<endl;
		}
		void operator--()
		{
			a = --a;
			b = --b;
		}
		void operator++()
		{
			a = ++a;
			b = ++b;
		}
};
int main()
{
	value obj;
	obj.getdata(34, 80);
	obj.showdata();
	--obj;
	obj.showdata();
	obj.getdata(20, 40);
	obj.showdata();
	++obj;
	obj.showdata();
	return 0;
}
