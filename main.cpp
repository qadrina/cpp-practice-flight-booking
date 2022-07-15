#include<iostream>
#include<fstream> // file handling operations
#include<iomanip> // to manipulate output
using namespace std;

void main_menu();

class Management  // class name use uppercase/capitalized
{
	public:
		Management()
		{
			main_menu();
		}
};

//CLASS FOR CUSTOMER DETAILS
class Details
{
	public:
		static string name, gender;
		int phone;
		int age;
		string address;
		static int cust_id;
		char arr[100];
		
		void information()
		{
			cout << "\n Enter customer ID: ";
			cin >> cust_id;
			cout << "\n Enter NAME: ";
			cin >> name;
			cout << "\n Enter AGE: ";
			cin >> age;
			cout << "\n Enter ADDRESS: ";
			cin >> address;
			cout << "\n Enter GENDER: ";
			cin >> gender;
			cout << "\n Your details have been saved. \n" << endl;
		}
};

int Details::cust_id;
string Details::name;
string Details::gender;

// CLASS FOR FLIGHT REGISTRATION
class Registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights()
		{
			string country[] = {"UAE", "Canada", "UK", "Australia", "New Zealand", "Japan"};
			
			for(int a = 0; a < 6; a++)
			{
				cout << "\t" << (a+1) << ". flight to " << country[a] << endl; // to display the country one by one
			}
			
			cout << "\n\t Welcome to the airlines!" << endl;
			cout << "\n\t Select the destination country's number: ";
			cin >> choice;
			
			switch(choice)
			{
				case 1:
					cout << "\n\t --- WELCOME TO UNITED ARAB EMIRATES AIRLINE --- \n" << endl;
					cout << "\n\t Following are the flights\n" << endl;
					
					cout << "\n\t 1. AER - 498" << endl;
					cout << "\n\t 08-01-2022 8:00AM 10hrs Rp4.000" << endl;
					
					cout << "\n\t 2. AER - 576" << endl;
					cout << "\n\t 09-01-2022 5:00AM 12hrs Rp3.500" << endl;
					
					cout << "\n\t 3. AER - 715" << endl;
					cout << "\n\t 11-01-2022 10:00AM 11hrs Rp4.200" << endl;
					
					cout << "\nSelect the flight: \n";
					cin >> choice1;
					
					if(choice1 == 1)
					{
						charges = 4000;
						cout << "\n Flight booked successfully: AER - 498" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 2)
					{
						charges = 3500;
						cout << "\n Flight booked successfully: AER - 576" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 3)
					{
						charges = 4200;
						cout << "\n Flight booked successfully: AER - 715" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else
					{
						cout << "INVALID INPUT. Shifting to the MAIN MENU" << endl;
						flights();
					}
					cout << "\nPress 1 to go back to MAIN MENU: " << endl;
					cin >> back;
					
					if(back == 1)
					{
						main_menu();
					}
					else
					{
						main_menu();
					}
					break;
					
				case 2:
					cout << "\n\t --- WELCOME TO CANADIAN AIRLINE --- \n" << endl;
					cout << "\n\t Following are the flights\n" << endl;
					
					cout << "\n\t 1. CAN - 278" << endl;
					cout << "\n\t 7-01-2022 3:00PM 13hrs Rp5.000" << endl;
					
					cout << "\n\t 2. CAN - 512" << endl;
					cout << "\n\t 8-01-2022 5:00PM 14hrs Rp4.500" << endl;
					
					cout << "\n\t 3. CAN - 793" << endl;
					cout << "\n\t 9-01-2022 8:00AM 11hrs Rp5.200" << endl;
					
					cout << "\nSelect the flight: \n";
					cin >> choice1;
					
					if(choice1 == 1)
					{
						charges = 5000;
						cout << "\n Flight booked successfully: CAN - 278" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 2)
					{
						charges = 4500;
						cout << "\n Flight booked successfully: CAN - 512" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 3)
					{
						charges = 5200;
						cout << "\n Flight booked successfully: CAN - 793" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else
					{
						cout << "INVALID INPUT. Shifting to the MAIN MENU" << endl;
						flights();
					}
					cout << "\nPress 1 to go back to MAIN MENU: " << endl;
					cin >> back;
					
					if(back == 1)
					{
						main_menu();
					}
					else
					{
						main_menu();
					}
					break;
					
				case 3:
					cout << "\n\t --- WELCOME TO BRITISH AIRLINE --- \n" << endl;
					cout << "\n\t Following are the flights\n" << endl;
					
					cout << "\n\t 1. GBR - 175" << endl;
					cout << "\n\t 10-01-2022 7:00PM 9hrs Rp6.000" <<endl;
					
					cout << "\n\t 2. GBR - 771" << endl;
					cout << "\n\t 10-01-2022 4:00PM 10hrs Rp5.500" << endl;
					
					cout << "\n\t 3. GBR - 254" << endl;
					cout << "\n\t 11-01-2022 7:00AM 9hrs Rp5.700" << endl;
					
					cout << "\nSelect the flight: \n";
					cin >> choice1;
					
					if(choice1 == 1)
					{
						charges = 6000;
						cout << "\n Flight booked successfully: GBR - 175" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 2)
					{
						charges = 5500;
						cout << "\n Flight booked successfully: GBR - 771" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 3)
					{
						charges = 5700;
						cout << "\n Flight booked successfully: GBR - 254" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else
					{
						cout << "INVALID INPUT. Shifting to the MAIN MENU" << endl;
						flights();
					}
					cout << "\nPress 1 to go back to MAIN MENU: " << endl;
					cin >> back;
					
					if(back == 1)
					{
						main_menu();
					}
					else
					{
						main_menu();
					}
					break;
					
				case 4:
					cout << "\n\t --- WELCOME TO AUSTRALIAN AIRLINE --- \n" << endl;
					cout << "\n\t Following are the flights\n" << endl;
					
					cout << "\n\t 1. AUS - 521" << endl;
					cout << "\n\t 9-01-2022 8:00AM 5hrs Rp3.000" << endl;
					
					cout << "\n\t 2. AUS - 385" << endl;
					cout << "\n\t 9-01-2022 3:00PM 4hrs Rp4.000" << endl;
					
					cout << "\n\t 3. AUS - 197" << endl;
					cout << "\n\t 10-01-2022 5:00PM 5hrs Rp4.000" << endl;
					
					cout << "\nSelect the flight: \n";
					cin >> choice1;
					
					if(choice1 == 1)
					{
						charges = 3000;
						cout << "\n Flight booked successfully: AUS - 521" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 2)
					{
						charges = 4000;
						cout << "\n Flight booked successfully: AUS - 385" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 3)
					{
						charges = 4000;
						cout << "\n Flight booked successfully: AUS - 197" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else
					{
						cout << "INVALID INPUT. Shifting to the MAIN MENU" << endl;
						flights();
					}
					cout << "\nPress 1 to go back to MAIN MENU: " << endl;
					cin >> back;
					
					if(back == 1)
					{
						main_menu();
					}
					else
					{
						main_menu();
					}
					break;
					
				case 5:
					cout << "\n\t --- WELCOME TO NEW ZEALAND AIRLINE --- \n" << endl;
					cout << "\n\t Following are the flights\n" << endl;
					
					cout << "\n\t 1. NZL - 376" << endl;
					cout << "\n\t 6-01-2022 10:00AM 3hrs Rp4.000" << endl;
					
					cout << "\n\t 2. NZL - 216" << endl;
					cout << "\n\t 6-01-2022 2:00PM 4hrs Rp3.500" << endl;
					
					cout << "\n\t 3. NZL - 467" << endl;
					cout << "\n\t 7-01-2022 5:00AM 3hrs Rp4.200" << endl;
					
					cout << "\nSelect the flight: \n";
					cin >> choice1;
					
					if(choice1 == 1)
					{
						charges = 4000;
						cout << "\n Flight booked successfully: NZL - 376" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 2)
					{
						charges = 3500;
						cout << "\n Flight booked successfully: NZL - 216" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 3)
					{
						charges = 4200;
						cout << "\n Flight booked successfully: NZL - 467" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else
					{
						cout << "INVALID INPUT. Shifting to the MAIN MENU" << endl;
						flights();
					}
					cout << "\nPress 1 to go back to MAIN MENU: " << endl;
					cin >> back;
					
					if(back == 1)
					{
						main_menu();
					}
					else
					{
						main_menu();
					}
					break;
					
				case 6:
					cout << "\n\t --- WELCOME TO JAPAN AIRLINE --- \n" << endl;
					cout << "\n\t Following are the flights\n" << endl;
					
					cout << "\n\t 1. JPN - 512" << endl;
					cout << "\n\t 5-01-2022 3:00PM 4hrs Rp3.000" << endl;
					
					cout << "\n\t 2. JPN - 234" << endl;
					cout << "\n\t 6-01-2022 8:00AM 4hrs Rp3.500" << endl;
					
					cout << "\n\t 3. JPN - 167" << endl;
					cout << "\n\t 6-01-2022 2:00PM 4hrs Rp3.000" << endl;
					
					cout << "\nSelect the flight: \n";
					cin >> choice1;
					
					if(choice1 == 1)
					{
						charges = 3000;
						cout << "\n Flight booked successfully: JPN - 512" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 2)
					{
						charges = 3500;
						cout << "\n Flight booked successfully: JPN - 234" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else if(choice1 == 3)
					{
						charges = 3000;
						cout << "\n Flight booked successfully: JPN - 167" << endl;
						cout << "\n CLAIM THE TICKET AND GO BACK TO MAIN MENU" << endl;
					}
					else
					{
						cout << "INVALID INPUT. Shifting to the MAIN MENU" << endl;
						flights();
					}
					cout << "\nPress 1 to go back to MAIN MENU: " << endl;
					cin >> back;
					
					if(back == 1)
					{
						main_menu();
					}
					else
					{
						main_menu();
					}
					break;
					
				default:
					cout << "\nINVALID INPUT. Shifting to the MAIN MENU" << endl ;
					main_menu();
					break;
			}
		}
};

float Registration::charges;
int Registration::choice;

class Ticket : public Registration, Details
{
	public:
		void bill()
		{
			string destination="";
			ofstream outf("records.txt");
			{
				outf << "________________ AIRLINES _________________" << endl;
				outf << "\t\t TICKETS " << endl;
				outf << "___________________________________________" << endl;
				
				outf << "\nID: " << Details::cust_id << endl;
				outf << "\nNAME: " << Details::name << endl;
				outf << "\nGENDER: " << Details::gender << endl;
				outf << "\n\t DESCRIPTION" << endl;
				
				if(Registration::choice == 1)
				{
					destination="United Arab Emirates";
				}
				else if(Registration::choice == 2)
				{
					destination="Canada";
				}
				else if(Registration::choice == 3)
				{
					destination="United Kingdom";
				}
				else if(Registration::choice == 4)
				{
					destination="Australia";
				}
				else if(Registration::choice == 5)
				{
					destination="New Zealand";
				}
				else if(Registration::choice == 6)
				{
					destination="Japan";
				}
				outf << "\nDestination \t\t" << destination << endl;
				outf << "\nFlight Cost: \t\t" << Registration::charges << endl;
			}
			outf.close();
		}
		void display() //to display bill
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout << "File error." << endl;
				}
				while(!ifs.eof())
				{
					ifs.getline(arr, 100);
					cout << arr << endl;
				}
			}
			ifs.close();
		}
};



void main_menu()
{
	int lchoice;
	int schoice;
	int back;
	
	cout << "\n\t __________ AIRLINES __________ \n" << endl;
	cout << " \t Main Menu \n" << endl;
	
	cout << "\t _________________________________ \n" << endl;
	cout << "\t|\t\t\t\t|" << endl;
	
	cout << "\t Press 1 to add CUSTOMER DETAILS \n" << endl;
	cout << "\t Press 2 for FLIGHT REGISTRATION \n" << endl;
	cout << "\t Press 3 for TICKET and CHARGES \n" << endl;
	cout << "\t Press 4 to EXIT \n" << endl;
	cout << "\t|\t\t\t\t|" << endl;
	cout << "\t __________________________________ \n" << endl;
	
	cout << "\t Enter your choice : ";
	cin >> lchoice;
	
	//to call the function of the classes, this is the object of the classes
	Details d; // [class name] [object name];
	Registration r;
	Ticket t;
	
	switch(lchoice)
	{
		case 1:
			cout << "\n\t --- CUSTOMERS --- \n" << endl;
			d.information();
			cout << "\n\t Press 1 to go back to MAIN MENU: ";
			cin >> back;
				
			if(back == 1)
			{
				main_menu();
			}
			else
			{
				main_menu();
			}
			break;
		
		case 2:
			cout << "\n\t --- BOOK A FLIGHT --- \n" << endl;
			r.flights(); // r is the obj, flights is the func
			break;
		
		case 3:
			cout << "\n\t --- GET YOUR TICKETS --- \n" << endl;
			t.bill();
			
			cout << "\n\t Your ticket is printed, you may collect it \n" << endl;
			cout << "\n\t Press 1 to display your ticket \n";
			
			cin >> back;
			if(back== 1)
			{
				t.display();
				cout << "\nPress 1 to go back to MAIN MENU: ";
				cin >> back;
				
				if(back == 2)
				{
					main_menu();
				}
				else
				{
					main_menu();
				}
			}
			else
			{
				main_menu();
			}
			break;
			
		case 4:
			cout << "\n\n\t --- THANK YOU ---" << endl;
			break;
			
		default:
			cout << "Invalid input, please try again." << endl;
			main_menu();
			break;
	}
	
}

int main()
{
	Management mobj;
	return 0;
}
