#include<iostream>
using namespace std;
class car
{
    private:
        string nm,color;
        int avg;
    public:
    void getdata()
    {
        cout<<"Enter name of car:";
        cin>>nm;
        cout<<"Enter color:";
        cin>>color;
        cout<<"Enter average speed:";
        cin>>avg;
    }
    void showdata()
    {
        cout<<"******* CAR INFORMATION *******"<<endl;
        cout<<"Name:"<<nm<<endl;
        cout<<"Color:"<<color<<endl;
        cout<<"Average speed:"<<avg<<endl;
    }
};
int main()
{
    car c,t;
    c.getdata();
    c.showdata();
    t.getdata();
    t.showdata();
    return 0;
}

