#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	for(i=0; i<100; i++)
	{
		system("color A");
		system("cls");
		cout<<" \n\n\n\n\t\t\tDeleting Data...."<<i<<"%"<<endl<<endl;
		cout<<"\t\t";
		for(j=1; j<i; j++)
		{
			if(j%4==0)
			{
				cout<<"|";
			}
		}
		cout<<endl;
	}
		system("cls");
		cout<<"\n\n\n\n\t\t\t\tDeleting Data..."<<i<<"%"<<endl<<endl;
		cout<<"\t\t";
		cout<<"        |||||||||||||||||||||||||||||||||||";
		cout<<" \n\n\n\n\t\t            Record successfully Deleted"<<endl;
	cout<<endl;
	cout<<endl;
	getch();
}

