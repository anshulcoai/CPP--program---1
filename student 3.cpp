#include<iostream>
#include<string.h>
using namespace std;
//function in class with Argument
//Instance variable hiding 
//Use of This keyword
class student

{
	int rno,fee;
	char name[30],course[30];
	public:
		void readData(int rno, char name[30],char course[30],int fee)
		{
			this->rno=rno;
			strcpy(this->name,name);
			strcpy(this->course,course);
			this->fee=fee;
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
	int i,size,rno,fee;
	char name[30],course[30];
	cout<<"How many student detail to enter";
	cin>>size;

	for(i=0;i<size;i++)
	{
		cout<<"Enter Student Detail(rno,name,course,fee)";
		cin>>rno>>name>>course>>fee;	
		S[i].readData(rno,name,course,fee);//funcytion with argument
	}
	for(i=0;i<size;i++)
	{
		S[i].showData();
	}
}
