#include <iostream>
using namespace std;

int main()
{
	//Initializing the application
	printf("[*********************************************************]\n");
	printf("[*						    	 *]\n");
	printf("[*		C++ Programming Exercise		 *]\n");
	printf("[*		Computer Programming I			 *]\n");
	printf("[*		Author: Shady Amr			 *]\n");
	printf("[*		Date : Friday, Nov. 06 2020		 *]\n");
	printf("[*							 *]\n");
	printf("[*********************************************************]\n\n");

	//BMI Calculator
	printf("1. BMI Calculator has started.\n");
	int bmi_weight, bmi_height, bmi_result;

	cout << "* Enter the weight for BMI." << endl;
	cin >> bmi_weight;

	cout << "* Enter the height for BMI." << endl;
	cin >> bmi_height;

	bmi_result = bmi_weight / (bmi_height ^ 2);
	cout << "* The result for the BMI is " << bmi_result << endl;

	//Print out C++
	printf("\n2. Printing out CPP word into three different variables.\n");

	char letter_c = 'C', letter_p = 'P', letter_p2 = 'P';
	cout << "* " << letter_c << letter_p << letter_p2 << endl;

	//Area of Circle
	printf("\n3. Area of Circle formula.\n");

	cout << "* Enter the radius for the AOC." << endl;

	system("pause");
}