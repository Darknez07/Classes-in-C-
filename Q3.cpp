#include<iostream>
#include<string.h>
using namespace std;
class Staff
{
	public:
	int code;
	char name[50];
	void get_data();
	void display_data();
};
class officer: public Staff
{
	public:
	char grade[30];
	void get_grade();
	void show_grade();
};
class teacher: public Staff
{
	public:
	char subject[40];
	char publication[40];
	void get_teacher_data();
	void display_data1();
};
class typist: public Staff
{
	public:
	float speed;
	void get_speed();
	void show_speed();
};
class regular: public typist
{
	public:
		int salary;
		void get_salary();
		void show_salary();
};
class casual: public typist
{
	public:
	int daily_wages;
	void get_wages();
	void show_wages();
};
void Staff :: get_data()
{
	cout<<"Enter the name of the Employee: ";
	cin>>name;
	cout<<"\nEnter the Employee Code: ";
	cin>>code;
}
void Staff :: display_data()
{
	cout<<"\nName: "<<name;
	cout<<"\nCode: "<<code;
}
void officer:: get_grade()
{
	cout<<"The position in the job: ";
	cin>>grade;
}
void officer:: show_grade()
{
	cout<<"\nThe "<<grade<<" position in th job";
}
void teacher :: get_teacher_data()
{
	cout<<"\nEnter the subject you teach: ";
	cin>>subject;
	cout<<"Enter publication you prefer: ";
	cin>>publication;
}
void teacher::display_data1()
{
	cout<<"\nSubject: "<<subject;
	cout<<"\nPublication: "<<publication;
}
void typist :: get_speed()
{
	cout<<"\nEnter the speed of typing: ";
	cin>>speed;
}
void typist :: show_speed()
{
	cout<<"\nSpeed of typing: "<<speed;
}
void regular::get_salary()
{
	cout<<"\nEnter the salary you are given: ";
	cin>>salary;
}
void regular::show_salary()
{
	cout<<"\nSalary: "<<salary;
}
void casual::get_wages()
{
	cout<<"\nThe wage of a single day is: ";
	cin>>daily_wages;
}
void casual::show_wages()
{
	cout<<"\nWage is: "<<daily_wages;
}
main()
{
	int choice;
	int i =0,j=0,k=0,l=0;
	officer O[10];
	teacher T[10];
	casual C[10];
	regular R[10];
	while(k!=5 || l!=5 || i!=10 || j!=10)
	{
	cout<<"Choose from the types of employement: \n";
	cout<<"\n1.Officer";
	cout<<"\n2.Teacher";
	cout<<"\n3.Typist ";
	cout<<"\n0.Exit   ";
	cout<<"\nChoose:  ";
	cin>>choice;
	if(choice == 1)
	{
		O[i].get_data();
		O[i].get_grade();
		i++;
	}
	if(choice == 2)
	{
		T[i].get_data();
		T[i].get_teacher_data();
		j++;
	}
	if(choice == 3)
	{
		int choose;
		cout<<"There are two types of typists:\n";
		cout<<"Choose one among them \n";
		cout<<"1.Casual\n";
		cout<<"2.Regular\n";
		cin>>choose;
		if(choose == 1)
		{
			C[k].get_data();
			C[k].get_speed();
			C[k].get_wages();
			k++;
		}
		else
		{
			R[l].get_data();
			R[l].get_speed();
			R[l].get_salary();
			l++;
		}
	}
	if(choice == 0)
	{
		break;
	}
}
int empcode;
cout<<"\nShowing the particular job description: ";
cout<<"\nEnter the Employee code: ";
cin>>empcode;
for(i=0;i<10;i++)
{
	if(C[i].code == empcode)
	{
		C[i].display_data();
		C[i].show_speed();
		C[i].show_wages();
	}
	if(R[i].code == empcode)
	{
		R[i].display_data();
		R[i].show_speed();
		R[i].show_salary();
	}
	if(O[i].code == empcode)
	{
		O[i].display_data();
		O[i].show_grade();
	}
	if(T[i].code ==  empcode)
	{
		T[i].display_data();
		T[i].display_data1();
	}
}
}
