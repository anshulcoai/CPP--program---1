//Create class bank members A/C no., Name, amount, A/c No is alotted as default the 1st A/c no.
//should be 2001. Wap to read N details from user and print them

#include<iostream>
#include<string.h>
using namespace std;

class bank
{
	static int r;
   int acc,amount;
   char name[30];
   public:
   void readInput(char nm[30],int amt)
   {
   		acc=r;
   		strcpy(name,nm);
   		amount=amt;
   		r++;
   } 
   void showOutput()
   {
   	cout<<endl<<name<<" "<<acc<<" "<<amount;
   }
   int depositMoney(int an,int am)
   {
   		int c=0;
   		if(acc==an)	
   		{
   			amount=amount+am;
   			c=1;
		}
		return c;
   }
};
int bank::r=2001;

main()
{
 bank B[100];
 int size,i,amt;
 char nm[30];
 cout<<"How many customer detail to enter";
 cin>>size;
 for(i=0;i<size;i++)
 {
    cout<<"Enter your name, amount:";
    cin>>nm>>amt;
	B[i].readInput(nm,amt);
 }
 for(i=0;i<size;i++)
 {
 	B[i].showOutput();	
 }
 int an, am,f;
 cout<<"enter account number to deposti money"	;
 cin>>an;
 cout<<"Enter amount to deposit money";
 cin>>am;
 for(i=0;i<size;i++)
 {
	f=B[i].depositMoney(an,am);
	if(f==1)
	{
		cout<<"Amount Deposited";
		break;
	}
 }
 if(i==size)
 {
 	cout<<endl<<"Account not found";
 }
}

