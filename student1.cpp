#include<iostream>
#include<string.h>
using namespace std;
//function in class with Argument
class student
{
	int rno,fee;
	char name[30],course[30];
	public:
		void readData(int r, char n[30],char c[30],int f)
		{
			rno=r;
			strcpy(name,n);
			strcpy(course,c);
			fee=f;
		}

		void showData()
		{
			cout<<"Student Details-";
			cout<<rno<<" "<<name<<" "<<course<<" "<<fee<<endl;
		}
};
main()
{
	student S[100];//Array of Objects		
	int i,size,r,f;
	char n[30],c[30];
	cout<<"How many student detail to enter";
	cin>>size;

	for(i=0;i<size;i++)
	{
		cout<<"Enter Student Detail(rno,name,course,fee)";
		cin>>r>>n>>c>>f;	
		S[i].readData(r,n,c,f);//funcytion with argument
	}
	for(i=0;i<size;i++)
	{
		S[i].showData();
	}
}
