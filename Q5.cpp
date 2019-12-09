#include<iostream>
using namespace std;
class person
{
	public:
		char name[40];
		int code;
		void get_data();
		void show_data();
};
class account: virtual public person
{
	public:
		int pay;
		void get_pay();
		void show_pay();
};
class admin: virtual public person
{
	public:
		int experience;
		void get_exp();
		void show_exp();
};
class master: public account,public admin
{
	public:
		void update();
};
void person:: get_data()
{
	cout<<"\nEnter the name of the system: ";
	cin>>name;
	cout<<"\nEnter the Code for the system: ";
	cin>>code;
}
void account:: get_pay()
{
	cout<<"\nEnter the pay of the system: ";
	cin>>pay;
}
void admin::get_exp()
{
	cout<<"\nEnter the number of years of experience: ";
	cin>>experience;
}
void master:: update()
{
	cout<<"\nEnter the new name:   ";
	cin>>name;
	cout<<"\nEnter the new code:   ";
	cin>>code;
	cout<<"\nEnter the new pay:    ";
	cin>>pay;
	cout<<"\nEnter the experience: ";
	cin>>experience;
}
void person::show_data()
{
	cout<<"\nName:  "<<name;
	cout<<"\nCode:  "<<code;
}
void account:: show_pay()
{
	cout<<"\nPay: "<<pay;
}
void admin :: show_exp()
{
	cout<<"\nExperience: "<<experience;
}
main()
{
	int n,choice,i=1;
	while(i!=0)
	{
	cout<<"\nNumber of enteries: ";
	cin>>n;
	master m[n];
	for(int i=0;i<n;i++)
	{
		m[i].get_data();
		m[i].get_exp();
		m[i].get_pay();
	}
	int j =1;
	while(j!=0)
	{
	cout<<"\n1.Display";
	cout<<"\n2.Update ";
	cout<<"\nChoose:  ";
	cin>>choice;
	if(choice== 1)
	{
		for(int i=0;i<n;i++)
		{
		m[i].show_data();
		m[i].show_exp();
		m[i].show_pay();
		cout<<"\n";
		}
	}
	if(choice == 2)
	{
		int empcode;
		cout<<"\nEnter the code of master: ";
		cin>>empcode;
		for(int i=0;i<n;i++)
		{
			if(m[i].code == empcode)
			{
				m[i].update();
			}
		}
	}
	cout<<"\nEnter 1 to continue: ";
	cout<<"\nEnter 0 to exit:     ";
	cin>>j;
}
cout<<"\nEnter 1 to continue: ";
cout<<"\nEnter 0 to exit:     ";
cin>>i;
}
}
