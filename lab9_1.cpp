#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main() {
	double loan, interestRate, yearlyPayment;


	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interestRate;
	cout << "Enter amount you can pay per year: ";
	cin >> yearlyPayment;

	
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	cout << fixed << setprecision(2);

	int year = 1;
	while (loan > 0) {
		double interest = loan * (interestRate / 100.0);
		double total = loan + interest ;
		double payment = (total < yearlyPayment) ? total : yearlyPayment;
		double newBalance = total - payment;	


		cout << setw(13) << left << year; 
		cout << setw(13) << left << loan;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << newBalance;
		cout << "\n";

		loan = newBalance;
		year++;
	}	
	
	return 0;
}
