/*
static - it is a storage class modifier that tells 
life - active
scope - boundary
default value - initital value
storage - storage location
*/
#include<iostream>
using namespace std;
class Add
{
	int a;
	static int b;
	public:
		void readData(int n)
		{
			a=n;
			b++;
		}
		void showData()
		{
			cout<<"Value of a:- "<<a<<endl;
			cout<<"Value of b:- "<<b<<endl;
		}
};
int Add :: b;
main()
{
	int n;
	cout<<"Enter Number";
	cin>>n;
	Add ob1;
	ob1.readData(n);
	ob1.showData();
	
	cout<<"Enter Number";
	cin>>n;
	Add ob2;
	ob2.readData(n);
	ob2.showData();
	
	cout<<"Enter Number";
	cin>>n;
	Add ob3;
	ob3.readData(n);
	ob3.showData();
	
	cout<<endl<<"final Call";
	ob1.showData();
	ob2.showData();
	ob3.showData();

}
