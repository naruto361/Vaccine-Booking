#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void menu();
void pascode();
void cpascode();

class one{
    public:
    virtual void show() = 0;
    virtual void get() = 0;
};

class info : public one{
    public:
    string name, timec;
    int num, age;
    void get(){
        system("cls");
        cin.sync();
        cout<<"Enter the patient's name:\n";
        getline(cin, name);
        cout<<"Enter the appointment time:\n";
        getline(cin, timec);
        cout<<"Enter age:\n";
        cin>>age;
        cout<<"Enter appointment no.\n";
        cin>>num;
    }
    void show()
    {
        cout<<"\nName ="<<name;
        cout<<"\nAge ="<<age;
        cout<<"\nNo ="<<num;
        cout<<"\nTime ="<<time;
    }
};
class rana:public info{
    public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("rana.txt", ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(a1));
        out.close();
        cout<<"Your entry has been saved";
        getch();
        menu();
    }
    void show()
    {
    	ifstream in("rana.txt");
    	if(in == NULL)
    	{
    		cout<<"\n\nNo Data In The File ";
    		cout<<"\n\n\t\tPress Any Key To Continue : ";
    		getch();
    		menu();
		}
		else
		{
			while(!in.eof())
			{
				in.read((char*)&a1,sizeof(a1));
				a1.show();
			}
			in.close();
			cout<<"Press Enter To Continue =";
			getch();
			menu();
		}
	}
};
class waqar:public info
{
	public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("waqar.txt", ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(a1));
        out.close();
        cout<<"Your entry has been saved";
        getch();
        menu();
    }
    void show()
    {
    	ifstream in("waqar.txt");
    	if(in == NULL)
    	{
    		cout<<"No Data In The File ";
    		cout<<"\nPress Any Key To Continue : ";
    		getch();
    		menu();
		}
		else
		{
			while(!in.eof())
			{
				in.read((char*)&a1,sizeof(a1));
				a1.show();
			}
			in.close();
			cout<<"Press Enter To Continue =";
			getch();
			menu();
		}
	}
};
class Ahmad:public info
{
	public:
    info a1;
    void get()
    {
        system("cls");
        ofstream out("Ahmed.txt", ios::app|ios::binary);
        a1.get();
        out.write((char*)&a1,sizeof(a1));
        out.close();
        cout<<"Your entry has been saved";
        getch();
        menu();
    }
    void show()
    {
    	ifstream in("Ahmed.txt");
    	if(in == NULL)
    	{
    		cout<<"No Data In The File ";
    		cout<<"\nPress Any Key To Continue : ";
    		getch();
    		menu();
		}
		else
		{
			while(!in.eof())
			{
				in.read((char*)&a1,sizeof(a1));
				a1.show();
			}
			in.close();
			cout<<"Press Enter To Continue =";
			getch();
			menu();
		}
	}
};
class staff :public one
{
	public:
	
	string all, name, age, sal, pos;
	void get()
	{
		ofstream out("staff.txt",ios::app);
		{
			system("cls");
			cin.sync();
			cout<<"\nEnter Name = ";
			getline(cin,name);
			cout<<"\nEnter Age = ";
			getline(cin,age);
			cout<<"\nEnter Salary = ";
			getline(cin,sal);
			cout<<"\nEnter Working Position = ";
			getline(cin,pos);
		}
		out<<"\nName = "<<name<<"\nAge = "<<age<<"\nSalary = "<<sal<<"\nWorking Position = "<<pos;
		out.close();
		cout<<"\nYour Information has been saved :\n\t\t\tPress Any Key To Continue ";
		getch();
		menu();
	}
	void show()
	{
		ifstream in("staff.txt");
		if(!in)
		{
			cout<<"File Open Error";
		}
		while(!in.eof())
		{
			getline(in,all);
			cout<<all<<"\n";
		}
		in.close();
		cout<<"\n\n\t\tPress Any Key To Continue : ";
		getch();
		menu();
	}
};

//class information

class information{
    public:
    void drinfo()
    {
        system("cls");
        system("color F3");
        cout<<"\n===============================================================\n";
        cout<<"\n\n\t\t(Three Doctor Available) \n\n \t\t[Information Ans timing given below]\n";
        cout<<"--------------------------------------------------------------------------\n";
        cout<<"\t\tDr. Available: \n";
        cout<<"\t\tDr. Rana(skin specialist)\n\n";
        cout<<"\t\t\t [[Timing]]: \n\n";
        cout<<"\tMonday to Friday\t\t 9AM to 5PM\n";
        cout<<"\tSaturday         \t\t 9AM to 1PM\n";
        cout<<"\tSunday           \t\t Off\n";
        cout<<"\n--------------------------------------------------------------\n";
        cout<<"\t\t Dr. Waqar(child specialist)\n\n";
        cout<<"\t\t\t [[Timing]]: \n\n";
        cout<<"\tMonday to Friday\t\t 2PM to 10PM\n";
        cout<<"\tSaturday         \t\t 8AM to 1PM\n";
        cout<<"\tSunday           \t\t12PM to 9PM \n";
        cout<<"\n--------------------------------------------------------------\n";
        cout<<"\t\tDr. Ahmed(DVM)\n\n";
        cout<<"\t\t\t [[Timing]]: \n\n";
        cout<<"\tMonday to Friday\t\t 8AM to 5PM\n";
        cout<<"\tSaturday         \t\t 10AM to 1PM\n";
        cout<<"\tSunday           \t\t Off\n";
        cout<<"\n--------------------------------------------------------------\n";
        cout<<"\n Press any key to continue: ";
        getch();
        menu();
    }

};

void call_dr(){
    system("cls");
    int choice;
    cout<<"\n\n\n\t\t Press 1 for dr. rana \n\n\n\t\tpress 2 for Dr Waqae \n\n\t\t press 3 for Dr. Ahmad ";
    cin>>choice;

    one *ptr;
    rana s3;
    waqar s4;
    Ahmad s5;
    if(choice == 1){
        ptr=&s3;
        ptr->get();
    }
    if(choice==2){
        ptr=&s4;
        ptr->get();
    }
    if(choice==3){
        ptr=&s5;
        ptr->get();
    }
    else{
        cout<<"Sorry Invalid choice:";
    }
};

void pinfoshow(){
    system("cls");
    int choice;
    cout<<"\n\n\n\t\t Press 1 for dr. rana \n\n\n\t\tpress 2 for Dr Waqae \n\n\t\t press 3 for Dr. Ahmad ";
    cout<<"please enter your choice: ";
    cin>>choice;

    one *ptr;
    rana s3;
    waqar s4;
    Ahmad s5;
    if(choice == 1){
        ptr=&s3;
        ptr->show();
    }
    if(choice==2){
        ptr=&s4;
        ptr->show();
    }
    if(choice==3){
        ptr=&s5;
        ptr->show();
    }
    else{
        cout<<"Sorry Invalid choice:";
        getch();
        menu();
    }
};

void menu(){


    system("cls");
        system("color FC");

        cout<<"\n";
        cout<<"\n";

        cout<<"\t\t   | +++++++++++ MAIN MENU ++++++++  | \n";
        cout<<"\t\t   |   Hospital Management System    |\n";
        cout<<"\t\t   |=================================|  \n";

        cout<<"\n---------------------------------------------\n";
        cout<<"\t\t    Please Select Any Option            \n";

        cout<<"\n\n\\t1-\t\t Press 1 for Available Doctor Information \n\n";
        cout<<"\t2- \t\t Press 2 for Doctor Appointment\n\n";
        cout<<"\t3- \t\t Press 3 for Saving Staff Information\n\n";
        cout<<"\t4- \t\t Press 4 for Checking patient appointment menu: \n\n";
        cout<<"\t5- \t\t Press 5 for Checking Staff Information Menu: \n\n";
        cout<<"\t6- \t\t Press 6 for Change Password or Create Password \n\n";
        cout<<"\t7- \t\t Press 7 for Logout      ]\n\n";

        cout<<"\n============================================\n";
        cout<<"\n\n\t\t Please Enter your Choice: ";
        information a1;
        one *ptr;
        staff a2;
        int a;
        cin>>a;
        if(a==1){
            a1.drinfo();
        }
        else if(a==2){
            call_dr();
        }
        else if(a==3){
            ptr=&a2;
            ptr->get();
        }
        else if(a==4){
            pinfoshow();
        }
        else if(a==5){
            ptr=&a2;
            ptr->show();
        }
        else if(a==6){
            cpascode();
        }
        else if(a==7){
            pascode();
        }
        else{
            cout<<"Sorry invalid choice: ";
        }

}

void pascode(){

    system("cls");
    char p1[50], p2[50], p3[50];

    system("color FC");

    ifstream in(password.txt);{
        cin.sync();

        cout<<"\n\n\n\n\n\n\n\n\t\t\t Enter the Password";
        cin.getline(p1,50);
        in.getline(p2,50);
        if(strcmp(p2,p1)==0){
            menu();
        }
        else{

            cout<<"\n\n\t\t Incorrect Passcode Pleas try Agani";
            sleep(999);
            pascode();
        }
        
    }
    in.close();
}

void cpascode(){
    char n[50];
    system("cls");
    ofstream out("password.txt");
    {
        cin.sync();
        cout<<"\n\n\n\n\n\t\t\t Enter the New password";
        cin.getline(n,50);
        out<<n;
    }
    out.close();
    cout<<"\n\n Your Password has been saved: ";
    getch();
    menu();
}

int main(){
    pascode();
    system("pause");

}
