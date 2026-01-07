#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
using namespace std;
bool over=0;
void lump_sum();
void recurring();
void year_by_year();
void CARG();
int main() {
	int a;
    while(over!=1){
        cout<<"Enter 1-5 to select the option"<<endl;
        cout<<"1. Lump sum"<<endl;
        cout<<"2. Recurring"<<endl;
        cout<<"3. Year by year"<<endl;
        cout<<"4. CARG"<<endl;
        cout<<"5. Exit"<<endl;
        
		switch (_getch()) {
        case '1':
        	 system("cls");
            lump_sum();
            break;
        case '2':
        	 system("cls");
            recurring();
            break;
        case '3':
        	 system("cls");
            year_by_year();
            break;
        case '4':
        	 system("cls");
            CARG();
            break;
        case '5':
            over=1;
            break;
        }
        system("cls");
    }
    return 0;
}


void lump_sum(){
	double intial,rate,final;
	float year;
	cout<<"Enter the intial amount: ";
	cin>>intial;
	cout<<"Enter the expected annual return(%): ";
	cin>>rate;
	cout<<"Enter the number of year: ";
	cin>>year;
	cout<<endl<<endl<<endl;
	
	rate/=100;
	final = intial*pow((1 + rate),year);
	
	cout<<"The final investment value: "<<fixed<<setprecision(2)<<final<<endl;
	cout<<"The growth: "<<fixed<<setprecision(2)<<final-intial<<endl;
	cout<<"The compound annual growth rate: "<<fixed<<setprecision(2)<<pow((final/intial),(1/year))-1<<endl<<endl<<endl;
	
	cout << "Press any key to continue..." <<endl;
    _getch();
}


void recurring(){
	double monthly,rate,final;
	float year;
	cout<<"Enter the monthly amount: ";
	cin>>monthly;
	cout<<"Enter the expected annual return(&): ";
	cin>>rate;
	cout<<"Enter the number of year: ";
	cin>>year;
	
	rate=(rate/100)/12;
	year*=12;
	final=monthly*((pow((1 + rate),year)-1)/rate);
	
	cout<<"The final investment value: "<<fixed<<setprecision(2)<<final<<endl;
	cout<<"the total contribution: "<<fixed<<setprecision(2)<<monthly*year<<endl;
	cout<<"The growth: "<<fixed<<setprecision(2)<<final-(monthly*year)<<endl<<endl<<endl;
	
	cout << "Press any key to continue..." <<endl;
    _getch();
}


void year_by_year(){
	double monthly, rate,starting=0,yearly;
    float year;
	cout<<"Enter monthly investment: ";
    cin>>monthly;
    cout<<"Enter the expected annual return(%): ";
    cin>>rate;
    cout<<"Enter number of years: ";
    cin>>year;
	
	yearly=monthly*12;
	rate/=100;
    
	cout<<endl<<endl<<endl;
    cout<<setw(5)<<"Year"<<setw(20)<<"Starting Balance"<<setw(20)<<"Total contribution"<<setw(20)<<"Interest"<<setw(20)<<"Ending Balance"<<endl;
	for(int i=1;i<=year;i++){
		double interest=(starting+yearly)*rate;
		double ending=starting+yearly+interest;
		cout<<setw(5)<<i<<fixed<<setprecision(2)<<setw(20)<<starting<<setw(20)<<i*yearly<<setw(20)<<interest<<setw(20)<<ending<<endl;
		starting=ending;
	}
	
	
	
	cout << "Press any key to continue..." <<endl;
    _getch();
}


void CARG(){
	long double intial,final;
	float year;
	cout<<"Enter the intial amount: ";
	cin>>intial;
	cout<<"Enter the final amount: ";
	cin>>final;
	cout<<"Enter the number of year: ";
	cin>>year;
	cout<<endl<<endl<<endl;
	cout<<"The compound annual growth rate: "<<fixed<<setprecision(2)<<pow((final/intial),(1/year))-1<<endl<<endl<<endl;
	
	cout << "Press any key to continue..." <<endl;
    _getch();
}
