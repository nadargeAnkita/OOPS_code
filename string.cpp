#include<iostream>
#include<cstring>
using namespace std;
class StringOperation
{
	public:
		char str1[60],str2[60];
		void getdata()
		{
			cout<<"Enter Any String : ";
			cin>>str1;
		}
		void putdata()
		{
			cout<<"\n***** String Operation ******";
			cout<<"\nLength of String : "<<strlen(str1);
			cout<<"\nConcatination of String : "<<strcat(str1,"Mangrule");
			cout<<"\nReverse String : "<<strrev(str1);
			cout<<"\nCopy Of String : "<<strcpy(str2,str1);
			cout<<"\nComparison Of String : "<<strcmp(str1,"XYZ");
		}
};
int main()
{
	StringOperation s1;
	s1.getdata();
	s1.putdata();
	return 0;
}
