#include<iostream>
using namespace std;
class matrix
{
    private :
        int i,j,r,c,m1[10][10],m2[10][10],m3[10][10];
    public :
    void getdata()
    {
        cout<<"Enter the number of rows:";
        cin>>r;
        cout<<"Enter the number of coloumns :";
        cin>>c;
        cout<<"Enter the elements of 1st matrix :";
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cin>>m1[i][j];
            }
        }
        cout<<"Enter the elements of 2nd matrix :";
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {   
                cin>>m2[i][j];
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                m3[i][j]=m1[i][j]+m2[i][j];
            }
            cout<<"\n";
        }
    }
    void showdata()
    {
        cout<<"\n The 1st matrix is:\n";
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<"\t"<<m1[i][j];
            }
            cout<<"\n";
        }
        cout<<" The 2nd matrix is:\n";
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<"\t"<<m2[i][j];
            }
            cout<<"\n";
        }
        cout<<"The addition of 2 matices is :\n";
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                cout<<"\t"<<m3[i][j];
            }
            cout<<"\n";
        }
    }
};
int main()
{
    matrix m;
    m.getdata();
    m.showdata();
    return 0;
}

