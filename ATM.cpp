#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;

class atm
{
	private: //Here we declear some data types and variabel in private section.
		long int account_No;
		string name;
		int PIN;
		double balance;
		string mobile_No;
		
	public:
		
		//setData function is setting the Data into the private member function...
		void setData(long int account_No_a, string name_a, int PIN_a, double balance_a, string mobile_No_a )
		{
			account_No = account_No_a;    //assigning the formal arguments to the private meneber variables
			name = name_a;
			PIN = PIN_a;
			balance = balance_a;
			mobile_No = mobile_No_a;
			
		}
		
		void start()
		{
				
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\tLoading  ";
	char x=219;
	for(int i=0; i<35; i++)
{
	cout<<x;
	if(i<10)
	Sleep(300);
	
	if(i>=10 && i<20)
	Sleep(150);
	if(i>=10)
	Sleep(25);
}

		}
		
		//getAccountNo function is returning the user's account no.
		
		long int  getAccountNo()
		{
			return account_No;
		}
		
		////getname function is returning the user's account no.
		string getName()
		{
			return name;
		}
		
		int getPIN()
		{
			return PIN;
		}
		
		////getPIN function is returning the user's account no.::
		double getBalance()
		{
			return balance;
		}
		
		
		//getmobile_No 
		
		string getMobileNo()
		{
			return mobile_No;
		}
		
		
		// Actually what setmobile function is doing that is it checks the condition previous mobile number is 
		//is equall to teh mobile number that we entered in main function if its true than it implemented
		void setmobile(string mob_prev, string mob_new)
			{
			if(mob_prev == mobile_No)
			{
				mobile_No = mob_new;
				cout<< endl << "Successfully Updated Mobile Number";
				getch();
			}
			
			else{
				cout<< endl << " Incorrect!!! old mobile number ";
				getch();
				
			}
		}
		
		
		//cashwithDraw function is used to withdraw money from ATM 
		
		void cashWithDraw( int amount_a)
		{
			if(amount_a > 0 && amount_a < balance)
			{
				balance -=amount_a; 
				cout<< endl <<"Please collect your cash";
				cout<< endl << "Available balance is :" <<balance;
				getch(); //getch is to hold the screen (untill user enter any number)
				
				
			}
			
			else {
				cout<< endl << "balance is insufficient !!!" <<endl;  // in this condition if balance is less 
				                                                      //than your account balance than its print 
				getch();                                              //the insufficient balnce in your acccount and
			                                                        // than closs the else condition
			}
		}
};


int main()
{	

void start();
   int choice=0, enterPIN; //enterPIN and enterAccountNo user auhterntication 
   long int enterAccountNo;
   
   system("cls");
   
//   creating object for class

	atm user1;
	
//	set user Details (into object ) (setting default data)
	user1.setData(11 , "kartikAhirrao" , 12 , 1200.00 , "1223334444");

	
	do
{	
	system("cls");
	
	cout<< endl << "\t\t\t\t\t\t********Welcome to ATM********" <<endl;
	cout<< endl << "\t\t\t\t\t\t Enter Your Account No  ";
	cin>>enterAccountNo;
	
	cout<< endl << "Enter the PIN ";
	cin>>enterPIN;
	
	
	//check whether enter values  matches with user details
	
	if((enterAccountNo == user1.getAccountNo())  && (enterPIN == user1.getPIN()))
	{
		do
		{

			int amount =0;
			string oldMobileNo , newMobileNo;
			
			system("cls");
			//user Interface
			
			cout<< endl <<"\t\t\t\t\t   ********Welcome to ATM********\n"<<endl;
			cout<< endl <<"\t\t\t\t\t   Select Options.\n";
			cout<< endl <<"\t\t\t\t\t 1.Check Balance.\n";
			cout<< endl <<"\t\t\t\t\t 2.Check withdraw.\n";
			cout<< endl <<"\t\t\t\t\t 3.Show user Details. \n";
			cout<< endl <<"\t\t\t\t\t 4.Update Mobile No.\n";
			cout<< endl <<"\t\t\t\t\t 5.Exit.\n";
			
			
			cin>>choice;     //Taking user Input
			
			switch(choice)
			{
				case 1:
					cout<<" Your Bank balance is: "<<user1.getBalance();
					getch();
					break;
					
					case 2:
						cout<< " Enter Your amount: ";
						cin>>amount;
						user1.cashWithDraw(amount);
						
						break;
						
						
						case 3:
							cout<< endl <<" Name -->" << user1.getName();   // it shows your name 
							cout<< endl <<"Account Number -->"<<user1.getAccountNo(); // it shows your AccountNo.
							cout<< endl <<"Current Balance -->"<< user1.getBalance();// It shows your balance and current balnce 
							cout<< endl <<"Mobile number -->" <<user1.getMobileNo();  // it shows your mobile number 
					
						getch();
							break;
						
						case 4:
							cout<< endl <<"Enter your old Mobile Number ::";
							cin>>oldMobileNo;
							
							cout<< endl<< "Enter New Mobile Number";
							cin>>newMobileNo;
							
							user1.setmobile(oldMobileNo, newMobileNo);
							break;
							//oldMobileNo , newMobileNo;
							case 5:
								system("cls");
								






								cout<<"                                   ";
								
								
								cout<<" \t\t\t\t\tThank You Sir\n";
								exit(0);
								
								default:
									cout<< endl <<"Enter Valid Data !!! ";		
				
			}
			
		}
		while(1);
		
	}
	
	
	else {
		cout<< endl <<" Enter Valid Data !!!";
		getch();
	}
	

	
}while(1);
return 0;

}























