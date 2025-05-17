#include<iostream>
using namespace std;
class two;//forward class declaration
class one
{
	int n;
	public:
		inline void readInput(int m)
		{
			n=m;
		}
		inline void showOutput()
		{
			cout<<"Value of n :- "<<n;
		}
		friend int pluss(one,two);
};
class two
{
	int n;
	public:
		inline void readInput(int m)
		{
			n=m;
		}
		inline void showOutput()
		{
			cout<<"Value of n :- "<<n;
		}
		friend int pluss(one,two);
};
int pluss(one ob1,two ob2)
{
	int r;
	r=ob1.n+ob2.n;
	return(r);
}
main()
{
	int m;
	one ob1;
	cout<<"Enter number:- ";cin>>m;
	ob1.readInput(m);
	
	two ob2;
	cout<<"Enter number:- ";cin>>m;	ob2.readInput(m);
	
	cout<<endl<<"Value from ob1:- ";
	ob1.showOutput();
	cout<<endl<<"Value from ob2:- ";
	ob2.showOutput();
	
	m=pluss(ob1,ob2);//function with class object as argument
	cout<<endl<<"sum :- "<<m;
}
