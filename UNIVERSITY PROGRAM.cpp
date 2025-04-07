#include<iostream>
using namespace std;

int main()
{
	cout<<"WELCOME TO GOMAL UNIVERSITY (GU)\n"<<endl;
	int section,choice;
	string name,fname,bdate,phone,cnic,email,password;
	int mmarks,fscmarks,gpa,feild,year;
	
	cout<<" 1)ADMISSION AND APPLY\n 2)FEE STRUCTURE\n 3)Login to your portal\n 4)Contact us\n 5)Scholership"<<endl;
	cout<<"\nSelect section :";
	cin>>section;
	
	if(section==1)
	{
	system("cls");	
	cout<<"CHOOSE PROGRAM\n"<<endl;
	cout<<" 1) BS\n 2) MASTER\n 3) M.PHIL\n 4) PHD\n"<<endl<<endl;
	cout<<"SELECT PROGRAM :";
	cin>>choice;
	
	if(choice==1)
	{
		system("cls");
		cout<<"WELCOME TO BS PROGRAM\n"<<endl;
		cout<<"Choose your field :\n";
		cout<<"\n 1)Pharmacy\n 2)Computer science\n 3)Botony\n 4)Zoolgy\n 5)Physics\n 6)Chemistry\n 7)English\n";
		cout<<"\nSelect one of the above :";
		cin>>feild;
		if(feild==1,2,3,4,5,6,7)
		{
			system("cls");
        cout<<"Enter your name :";
		cin>>name;
		cout<<"Enter your Father name :";
		cin>>fname;
		cout<<"Enter CNIC number :";
		cin>>cnic;
		cout<<"Enter your email :";
		cin>>email;
		cout<<"Enter your date of birth in DDMMYY order :";
		cin>>bdate;
		cout<<"Enter phone number :";
		cin>>phone;
		cout<<"Enter matric marks :";
		cin>>mmarks;
		cout<<"Enter fsc marks :";
		cin>>fscmarks;
	
		cout<<"\nPLEASE WAIT FOR CONFORMATION EMAIL.";
		}
		else 
		{
			cout<<"Please select correct option";
		}
	}
	else if(choice==2)
	{
		system("cls");
		cout<<"WELCOME TO MASTER PROGRAM\n"<<endl;
		cout<<"Choose your field :\n";
		cout<<"\n 1)Pharmacy\n 2)Computer science\n 3)Botony\n 4)Zoolgy\n 5)Physics\n 6)Chemistry\n 7)English\n";
		cout<<"\nSelect one of the above :";
		cin>>feild;
		
		if(feild==1,2,3,4,5,6,7)
		{
		system("cls");
		cout<<"Enter your name :";
		cin>>name;
		cout<<"Enter Father name :";
		cin>>fname;
		cout<<"Enter CNIC number :";
		cin>>cnic;
		cout<<"Enter your email :";
		cin>>email;
		cout<<"Enter CGPA :";
		cin>>gpa;
		cout<<"\nPLEASE WAIT FOR CONFORMATION EMAIL.";
	    }
	    else
	    {
	    	cout<<"Choose correct option!";
		}
	}
	else if(choice==3)
	{
		system("cls");
		cout<<"WELCOME TO M.PHIL PROGRAM\n"<<endl;
			cout<<"Choose your field :\n";
		cout<<"\n 1)Pharmacy\n 2)Computer science\n 3)Botony\n 4)Zoolgy\n 5)Physics\n 6)Chemistry\n 7)English\n";
		cout<<"\nSelect one of the above :";
		cin>>feild;
		
		if(feild==1,2,3,4,5,6,7)
		{
		system("cls");
		cout<<"Enter your name :";
		cin>>name;
		cout<<"Enter Father name :";
		cin>>fname;
		cout<<"Enter CNIC number :";
		cin>>cnic;
		cout<<"Enter your email :";
		cin>>email;
		cout<<"Enter CGPA :";
		cin>>gpa;
		cout<<"\nPLEASE WAIT FOR CONFORMATION EMAIL.";
	    }
	    else
	    {
	    	cout<<"Choose correct option!";
		}
	}
	else if(choice==4)
	{
		system("cls");
		cout<<"WELCOME TO PHD PROGRAM\n"<<endl;
			cout<<"Choose your field :\n";
		cout<<"\n 1)Pharmacy\n 2)Computer science\n 3)Botony\n 4)Zoolgy\n 5)Physics\n 6)Chemistry\n 7)English\n";
		cout<<"\nSelect one of the above :";
		cin>>feild;
		
		if(feild==1,2,3,4,5,6,7)
		{
		system("cls");
		cout<<"Enter your name :";
		cin>>name;
		cout<<"Enter Father name :";
		cin>>fname;
		cout<<"Enter CNIC number :";
		cin>>cnic;
		cout<<"Enter your email :";
		cin>>email;
		cout<<"Enter CGPA :";
		cin>>gpa;
		cout<<"\nPLEASE WAIT FOR CONFORMATION EMAIL.";
	    }
	    else
	    {
	    	cout<<"Choose correct option!";
		}
	}
	else
	{
		cout<<"CHOOSE CORRECT OPTION\n";
	}
    }
    else if(section==2)
    {
    	system("cls");
		cout<<"   BS   P.PHIL   MASTER   PHD\n 45000    40000   30000   10000";
	}
	else if(section==3)
	{
		system("cls");
		cout<<"Enter your USER ID name :";
		cin>>name;
		cout<<"Enter your password :";
		cin>>password;
		cout<<"YOU ARE LOGIN SUCESSFULLY.";
	}
	else if(section==4)
	{
		system("cls");
		cout<<"\n FACE BOOK: Gomal university.\n WHATSAPP: 0333-3333333\n GMAIL ID: gomaluniversity.edu.pk\n";
	}
	else if(section==5)
	{
		system("cls");
		cout<<"Scholership is only available for BS program.\n"<<endl;
		cout<<"Following are the available scholership.\n";
		cout<<" 1)HAFEEZ -E- QURAN SCHOLERSHIP\n 2)FSC MARKS BASE SHOLERSHIP\n 3)AHSAS PROGRAM SCHOLERSHIP\n"<<endl;
		cout<<"You can choose one scholership at a time :";
		cin>>choice;
		if(choice==1)
		{
			system("cls");
			cout<<"Enter your name :";
			cin>>name;
			cout<<"Enter your Father name :";
			cin>>fname;
			cout<<"Enter CNIC number :";
			cin>>cnic;
			cout<<"Enter completion year :";
			cin>>year;
			cout<<"Enter contact number :";
			cin>>phone;
			cout<<"\nPlease visit gomal university islamiat department on 01/11/2024!";
		}
		else if(choice==2)
		{
			system("cls");
		   cout<<"Enter your name :";
		   cin>>name;
		   cout<<"Enter your Father name :";
		   cin>>fname;
		   cout<<"Enter your CNIC number :";
		   cin>>cnic;
		   cout<<"Enter your fscmarks :";
		   cin>>fscmarks;
		   cout<<"Enter gpa :";
		   cin>>gpa;
		   cout<<"\n PLEASE WAIT FOR CONFORMATION CALL!";
		}
		else if(choice==3)
		{
			system("cls");
	    	cout<<"Enter your name :";
		   cin>>name;
		   cout<<"Enter your Father name :";
		   cin>>fname;
		   cout<<"Enter your CNIC number :";
		   cin>>cnic;
		   cout<<"\n Please wait until your verification occured.";
		}
		else
		{
			cout<<"Choose cprrect option.";
		}	
	}
	else
	{
		cout<<"Select correct option";
	}
}
