#include<iostream>
using namespace std;
class add{
	private:
		int a, b;
	public:
		void getdata(){
			cout<<"\nEnter Data:"<<endl;
			cout<<"a=";
			cin>>a;
			cout<<"b=";
			cin>>b;
		}
		add operator+(add obj)
		{
			add temp;
			temp.a = a+obj.a;
			temp.b = b+obj.b;
			return(temp);
		}
		void showdata()
		{
			cout<<"\nAddition of a and b:"<<endl<<"a:"<<a<<endl<<"b:"<<b;
		}
};
int main()
{
	add ob1, ob2, sum;
	ob1.getdata();
	ob2.getdata();
	sum = ob1 + ob2;
	sum.showdata();
	return 0;
}
