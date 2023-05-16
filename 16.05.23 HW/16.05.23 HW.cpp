#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	//First task
	double file_size, wifi_speed;
	cout << "Enter a file size: ";
	cin >> file_size;
	cout << "Enter your wifi speed: ";
	cin >> wifi_speed;

	double file_size_mb = file_size * 1024;
	double wifi_speed_mb = wifi_speed * 0.125;

	double time = file_size_mb / wifi_speed_mb;

	int hours = time / 3600;
	int minutes = (time - hours * 3600) / 60;
	int seconds = time - hours * 3600 - minutes * 60;

	cout << "Download time:  " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;


	//Second task
	double file_size_two;
	cout << "Enter a flash drive size: ";
	cin >> file_size_two;

	const int film_size = 760;

	double file_size_mb_two = file_size_two * 1024;
	long int fiml_amount = file_size_mb_two / film_size;

	cout << " You can download: " << fiml_amount << " films " << endl;


	//Third task
	double fract_num;
	cout << "Enter a fractional number: ";
	cin >> fract_num;

	double round_num = round(fract_num * 100 + 0.5) / 100;

	cout << "Rounded number: " << round_num << endl;


	//Fourth task
	int handed, didnt_hand;
	cout << "Students, who handed HW: ";
	cin >> handed;
	cout << "Students who didn't hand HW: ";
	cin >> didnt_hand;

	int total = handed + didnt_hand;

	int percentage = didnt_hand * 100 / total;
	cout << "Debtors amount: " << percentage << "%" << endl;


	//Fifth task
	int seconds_passed;
	cout << "Time,that has passed: ";
	cin >> seconds_passed;

	const int day = 84600;
	int difference = day - seconds_passed;

	int hours_two = difference / 3600;
	int minutes_two = (difference - hours_two * 3600) / 60;
	int seconds_two = difference - hours_two * 3600 - minutes_two * 60;

	cout << "Time unntil midnight :  " << hours_two << " hours, " << minutes_two << " minutes, " << seconds_two << " seconds" << endl;


	//Sixth task
	long double uah_amount, deposit_term;
	int deposit_rate;

	cout << "Enter amount of UAH: ";
	cin >> uah_amount;
	cout << "Deposit period: ";
	cin >> deposit_term;
	cout << "Enter the interest rate for the year: ";
	cin >> deposit_rate;

	double final_amount = uah_amount;
	double rate = deposit_rate / 100 / 12;

	for (int i = 0; i < deposit_term; ++i) {
		final_amount += final_amount * rate;
	}

	cout << "Final deposit amount: " << final_amount << " UAH" << endl;


	//Seventh task
		double radius;
		const double pi = 3.1415926536;

		cout << "Enter the earth radius: ";
		cin >> radius;

		double surface = 4 * pi * pow(radius, 2);

		cout << "Radius of the earth surface: " << surface << endl;

		return 0;
}


