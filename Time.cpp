#include<iostream>
using namespace std;
class time
{
    private:
        int m,h,s;
    public:
    void getdata()
    {
        cout<<"Enter Hour:";
        cin>>h;
        cout<<"Enter Minutes:";
        cin>>m;
        cout<<"Enter Seconds:";
        cin>>s;
    }
    void showdata()
    {
        cout<<"******* TIME INFORMATION *******"<<endl;
        cout<<"Hour:"<<h<<endl;
        cout<<"Minutes:"<<m<<endl;
        cout<<"Seconds:"<<s<<endl;
    }
};
int main()
{
    time t,d;
    t.getdata();
    t.showdata();
    d.getdata();
    d.showdata();
    return 0;
}

