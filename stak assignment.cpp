#include<iostream>
#include<stdlib.h>
using namespace std;
int stack_arr[5];
int top=-1;
void push();
void pop();
void display();
main()
{
	int ch;
	
	cout<<"1 for push"<<endl;
	cout<<"2 for pop"<<endl;
	cout<<"3 for display"<<endl;
	cout<<"4 for exit"<<endl;
	while(1)
	{
		cout<<"Enter a choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			push();
			break;
			case 2:
			pop();
			break;
			case 3:
			display();
			break;
			case 4:
			exit(0);
			break;
			default:
				cout<<"Invalid operator"<<endl;
				break;
							
		}
		
	}
	return 0;
	
}
void push()
{
	char op;
	
	do{
		int items;
		if(top==5-1)
		{
			cout<<"stack is full"<<endl;
			
		}
		else
		{
			cout<<"Enter element"<<endl;
			cin>>items;
			top=top+1;
			stack_arr[top]=items;
		}
		cout<<"press x for value insertion and n or exit "<<endl;
		cin>>op;
	}
	while(op=='x');
}
	void pop()
	{
		char optionpop;
		do
		{
			if(top==-1)
			{
				cout<<"stack is empty"<<endl;
				
			}
			else
			{
				cout<<"pop"<<stack_arr[top];
				top=top-1;
				cout<<endl;
				
			}
			cout<<"Press x for insertion and y for exit"<<endl;
			cin>>optionpop;
		}
		while(optionpop=='x');
	}
	void dispaly()
	{
		int i;
		if(top>=0)
		{
			cout<<"stack"<<i<<" ";
			cout<<endl;
		}
	}

	else
	{
		cout<<"stack  is empty"<<endl;
		getch();
		
	}
}

		
		



		
	
	

