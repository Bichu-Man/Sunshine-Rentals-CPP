										
										

											/*	Sunshine Car Rentals
											
												------1M-----
												Asfandyar-650
												Mehwish Malik-645
												Kaneez Fatima-642			*/
											

#include<iostream>
#include <conio.h>//for that getch shi
#include<limits>//to filter the alphas
#include<fstream>//text data
#include<string>//for reading the file
using namespace std;


//functions protos
void welcomescreen();
void menu();
void viewvehicle();
void registercustomer();
void rentvehicle();
void rentalhistory();
void registeredcustomers();
void viewregistered();

string hatchbacks[] = {"Suzuki Alto", "Suzuki Cultus", "Suzuki Swift", "United Alpha", "Kia Picanto"};
string sedans[] = {"Toyota Corolla", "Honda Civic", "Hyundai Elantra", "Suzuki Ciaz", "Honda City"};
string suvs[] = {"Kia Sportage", "Hyundai Tucson", "Toyota Fortuner", "Proton X70", "MG HS"};
string luxury[] = {"BMW 3 Series", "Mercedes-Benz", "Audi R8", "Porsche 911", "Jaguar XE"};

bool hatchbacksAvail[] = {true, true, true, true, true};
bool sedansAvail[] = {true, true, true, true, true};
bool suvsAvail[] = {true, true, true, true, true};
bool luxuryAvail[] = {true, true, true, true, true};

void welcomescreen(){


	cout<<"=============================="<<endl;
	cout<<"----------Car-Rentals---------"<<endl;
	cout<<"-oooooo-Sunshine-Autos-oooooo-"<<endl;
	cout<<"=============================="<<endl;
	cout << "Press any key to continue..."<<endl;

    char ch = getch(); 

	system("cls");
	}

	
void viewvehicle(){
	int choice;
	
	do{
		cout<<"=============================="<<endl;
		cout<<"         View Vehicle         "<<endl;
		cout<<"=============================="<<endl;
		cout<<"1. View Hatchbacks"<<endl;
		cout<<"2. View Sedans"<<endl;
		cout<<"3. View SUVs"<<endl;
		cout<<"4. View Luxury Cars"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter your choice: ";
		
		if(!(cin >> choice)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Invalid input. Please enter a number between 1 and 5."<<endl;
            continue;//dont ask what this is, idk what this is
            
			}system("cls");
			
			
		cout<<"=============================="<<endl;
		cout<<"         View Vehicle         "<<endl;
		cout<<"=============================="<<endl;
        	switch(choice){
  
              		case 1: 
			        for(int i = 0; i < 5; i++){
			            cout<<i+1<<". "<<hatchbacks[i]<<" - ";
			            if(hatchbacksAvail[i]){
			                cout<<"Available";
			            }else{
			                cout<<"Rented";
			            }
			            cout<<endl;
			        }
			        break;
			        
			    case 2:
			    	for(int i = 0; i < 5; i++){
			    		cout<<i+1<<". "<<sedans[i]<<" - ";
			    		if(sedansAvail[i]){
			    			cout<<"Available";
						}else{
							cout<<"Rented";
						}
			    		cout<<endl;
					}
					break;
					
				case 3:
					for(int i = 0; i < 5; i++){
						cout<<i+1<<". "<<suvs[i]<<" - ";
						if(suvsAvail[i]){
							cout<<"Available";
						}else{
							cout<<"Rented";
						}
						cout<<endl;
					}
					break;
					
				case 4:
					for(int i = 0; i < 5; i++){
						cout<<i+1<<". "<<luxury[i]<<" - ";
						if(luxuryAvail[i]){
							cout<<"Available";
						}else{
							cout<<"Rented";
						}
						cout<<endl;
					}
					break;
					
				case 5:
					return;
        		
        		default:
        			cout<<"Please enter a valid number between 1 and 5"<<endl;
					}
				{
				cout<<"Press any key to continue...";
				getch();}
				system("cls");

}while(true);
}
 
 
void registercustomer(){
	
	string name, email;
	
	cout<<"=============================="<<endl;
	cout<<"         Registration         "<<endl;
	cout<<"=============================="<<endl;
	
	cout<<"\nPlease enter your first name:) ";
	cin>>name;
	
	cout<<"Please enter your email:) ";
	cin>>email;
	
	ofstream regFile("customers_2.txt", ios::app); 
    if (regFile.is_open()) {
        regFile<<"Name: "<<name<<", Email: "<<email<<endl;
        regFile.close();
    } else {
        cout<<"Error: Unable to save customer details."<<endl;
    }
    
	cout<<"\n------------------------------"<<endl;
	cout<<"\nRegistration successful!\n";
    cout<<"Name: "<<name<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"\n------------------------------"<<endl;

    cout<<"\nPress any key to continue...";
    getch();
    system("cls");
}



	
 void menu(){
	
	int choice;
	  do{
        //menu tab
        cout<<"=============================="<<endl;
        cout<<"           Main Menu          "<<endl;
        cout<<"=============================="<<endl;
        cout<<"1. View Available Vehicles"<<endl;//simple, bool isrented false karkay jo hongi wo show kar dein gay baki ran dein gay
        cout<<"2. Register Customer"<<endl;// user name and mail, going for overkill
        cout<<"3. Rent a Vehicle"<<endl;
        cout<<"4. View Rental History"<<endl;//this bit is kinda optional, lets see
        cout<<"5. View Registered Customers"<<endl;
		cout<<"6. Exit"<<endl;// 7 kay baad, will ask kay are you sure, y or n and then poof exiting......, thanks for the lovely visit/
        cout<<"Enter your choice: ";
        
  		// the program filters the integers, like if you put more than 6 or less than 1, it will invalidate it but if input is alphabtet, it makes it to go in error loop, ill do that tomorrow
		   	if (!(cin >> choice)) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid input. Please enter a number between 1 and 6.\n";
            
            cout<<"Press any key to continue...";
			getch();
            
            system("cls");
            continue; 
            
            
        }// okay so the geek website used some technichal terms, ill learn them later but general memo i have got right now and good
		if(choice != 6){
            system("cls");
        }
  
  		if(choice == 1){
  			viewvehicle();
  			system("cls");
		}
  		else if(choice == 2){
  			registercustomer();
		  }
		else if(choice == 3){
			rentvehicle();
		}
		
  		else if(choice == 4){
  			rentalhistory();
		  }  
		  
		else if(choice == 5){
  			viewregistered();
		  }  
	 	else if(choice == 6){
			char confirm;
                cout << "\nDo you really want to exit? (y/n): ";
                cin >> confirm;
                if (confirm=='y'||confirm=='Y'){
                	cout<<"\n=================================="<<endl;
                    cout<<"\nThanks for visiting Bichu Rentals!"<<endl;
                    cout<<"\n=================================="<<endl;
                    return;
                }
        else{
        	cout<<"Alright, continue:)"<<endl;
        	cout << "Press any key to continue...";
            getch();
            system("cls");
        }
        }
    } while(true);
}

void rentvehicle(){
	
	char registered;
	string cusname, selectedvehicle;
	int vehiclechoice, catchoice;
	bool isAvail = false;
	
	cout<<"=============================="<<endl;
	cout<<"         Rent Vehicle         "<<endl;
	cout<<"=============================="<<endl;


	cout<<"Are you a registered user? (y/n): ",
	cin>>registered;
		if(registered == 'N'||registered == 'n'){
			registercustomer();
			return;
		}
		
		cout<<"Enter your first name:) ";
		cin>>cusname;
		
		system("cls");
		//now time for rent scene 
		
		cout<<"=============================="<<endl;
		cout<<"         Rent Vehicle         "<<endl;
		cout<<"=============================="<<endl;
		cout<<"1. Rent Hatchbacks"<<endl;
		cout<<"2. Rent Sedans"<<endl;
		cout<<"3. Rent SUVs"<<endl;
		cout<<"4. Rent Luxury Cars"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter your choice: ";
		
		
		if(!(cin>>catchoice)||catchoice < 1 ||catchoice > 5) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        system("cls");
        cout<<"Invalid input. Please enter a number between 1 and 5."<<endl;
        cout<<"Press any key to continue...";
        getch();
        system("cls");
        return;	
		}
		system("cls");
		
		cout<<"=============================="<<endl;
		cout<<"         Rent Vehicle         "<<endl;
		cout<<"=============================="<<endl;
	
 		
			switch(catchoice){
				
			    case 1: 
			        for(int i = 0; i < 5; i++){
			            cout<<i+1<<". "<<hatchbacks[i]<<" - ";
			            if(hatchbacksAvail[i]){
			                cout<<"Available";
			            }else{
			                cout<<"Rented";
			            }
			            cout<<endl;
			        }
			        break;
			        
			    case 2:
			    	for(int i = 0; i < 5; i++){
			    		cout<<i+1<<". "<<sedans[i]<<" - ";
			    		if(sedansAvail[i]){
			    			cout<<"Available";
						}else{
							cout<<"Rented";
						}
			    		cout<<endl;
					}
					break;
					
				case 3:
					for(int i = 0; i < 5; i++){
						cout<<i+1<<". "<<suvs[i]<<" - ";
						if(suvsAvail[i]){
							cout<<"Available";
						}else{
							cout<<"Rented";
						}
						cout<<endl;
					}
					break;
					
				case 4:
					for(int i = 0; i < 5; i++){
						cout<<i+1<<". "<<luxury[i]<<" - ";
						if(luxuryAvail[i]){
							cout<<"Available";
						}else{
							cout<<"Rented";
						}
						cout<<endl;
					}
					break;
					
				case 5:
					return;		
}
	cout<<"\nEnter the number of vehicle to rent: ";
	
	if(!(cin>>vehiclechoice)||vehiclechoice < 1||vehiclechoice > 5){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"Invalid input. Please enter a number between 1 and 5."<<endl;
        cout<<"Press any key to continue...";
        getch();
        system("cls");
        return;
    }
    
    
    	switch(catchoice){
    		case 1:
       	 		if(hatchbacksAvail[vehiclechoice - 1]){
            		isAvail = true;
            		selectedvehicle = hatchbacks[vehiclechoice - 1];
            		hatchbacksAvail[vehiclechoice - 1] = false; 
        }
        break;
    	
    		case 2:
       	 		if(sedansAvail[vehiclechoice - 1]){
            		isAvail = true;
            		selectedvehicle = sedans[vehiclechoice - 1];
            		sedansAvail[vehiclechoice - 1] = false; 
        }
        break;
        
        	case 3:
       	 		if(suvsAvail[vehiclechoice - 1]){
            		isAvail = true;
            		selectedvehicle = suvs[vehiclechoice - 1];
            		suvsAvail[vehiclechoice - 1] = false; 
        }
        break;
        
        	case 4:
       	 		if(luxuryAvail[vehiclechoice - 1]){
            		isAvail = true;
            		selectedvehicle = luxury[vehiclechoice - 1];
            		luxuryAvail[vehiclechoice - 1] = false; 
        }
        break;
}


		 if(isAvail){
        
        ofstream rentFile("rentals.txt", ios::app); 
        if(rentFile.is_open()) {
            rentFile<<"Customer: "<<cusname<<", Vehicle: "<<selectedvehicle<<endl;
            rentFile.close();
        }else{
            cout<<"Error: Unable to save rental details."<<endl;
        }

        // Display confirmation
        cout<<"\nRental successful!\n";
        cout<<"Customer: "<<cusname<<endl;
        cout<<"Vehicle: "<<selectedvehicle<<endl;
    }else{
        cout<<"\nSorry, the selected vehicle is not available."<<endl;
    }

    cout<<"\nPress any key to continue...";
    getch();
    system("cls");
}

void rentalhistory(){
	
	string line;
	
	
    fstream rentFile;
    rentFile.open("rentals.txt", ios::in);
    

    cout<<"=============================="<<endl;
    cout<<"        Rental History        "<<endl;
    cout<<"=============================="<<endl;

    if(rentFile.is_open()){
        while(getline(rentFile, line)){
            cout<<line<<endl;    
			}
        rentFile.close();
    }else{
        cout<<"Error: Unable to open rental history file."<<endl;
    }

    cout<<"\nPress any key to continue...";
    getch();
    system("cls");
}

void viewregistered(){
	
	cout<<"=============================="<<endl;
    cout<<"     Registered Customers     "<<endl;
    cout<<"=============================="<<endl;
    
    string line;
	
	
    fstream regFile;
    regFile.open("customers_2.txt", ios::in);
    
    if(regFile.is_open()){
        while(getline(regFile, line)){
            cout<<line<<endl;    
			}
        regFile.close();
    }else{
        cout<<"Error: Unable to open customer file:("<<endl;
    }

    cout<<"\nPress any key to continue...";
    getch();
    system("cls");
	
}


 
	
int main() {
    welcomescreen();
    menu();
    return 0;}
	
	