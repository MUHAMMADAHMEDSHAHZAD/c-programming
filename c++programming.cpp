
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int no1,no2;
    char operato;
	while(1)
	{
		cout<<"enter a  number:";
		cin>>no1;
		cout<<"enter a  number:";
		cin>>no2;
		cout<<"enter a operator:";
		cin>>operato;
switch(operato)
{
	case '+':
	cout<<"add:"<<no1+no2<<endl;
	break;
	case'-':
	cout<<"subtr:"<<no1-no2<<endl;
	break;
	case'*':
	cout<<"multiply:"<<no1*no2<<endl;	
	break;
	case'/':
	cout <<"divide:"<<no1/no2<<endl;
	break;
	case'%':
	cout <<"Rem:"<<no1%no2<<endl;
	break;
	default:
	cout<<"\ninvild operator\n";
}
char choice;
cout<<"\nEnter your choice for continue for y or not foy n:\n ";
cin>>choice;
if(choice=='y')
{
	continue;
}
else if(choice=='n')
{
	break;
}
else
{
	cout<<"\ninvild  choice";
	break;
}
}
}