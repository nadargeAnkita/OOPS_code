#include<iostream>
using namespace std;
class year
{
    private:
        int y;
        string d, m;
    public:
    void getdata()
    {
        cout<<"Enter Year:";
        cin>>y;
        cout<<"Enter Month:";
        cin>>m;
        cout<<"Enter Day:";
        cin>>d;
    }
    void showdata()
    {
        cout<<"******* Year INFORMATION *******"<<endl;
        cout<<"Year:"<<y<<endl;
        cout<<"Month:"<<m<<endl;
        cout<<"Day:"<<d<<endl;
    }
};
int main()
{
    year y,d;
    y.getdata();
    y.showdata();
    d.getdata();
    d.showdata();
    return 0;
}
