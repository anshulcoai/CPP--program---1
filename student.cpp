#include<iostream>
using namespace std;
//array of objects
//Create Class to store student details for 7 students
class student
{
	int rno,fee;
	char name[30],course[30];
	public:
		void readData()
		{
			cout<<"Enter Student Detail";
			cin>>rno>>name>>course>>fee;
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
	int i;
	int size;
	cout<<"How many student detail to enter";\
	cin>>size;
	for(i=0;i<size;i++)
	{
		S[i].readData();
	}
	for(i=0;i<size;i++)
	{
		S[i].showData();
	}
}
