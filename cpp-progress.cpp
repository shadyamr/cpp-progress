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

	//Area of Circle - skipped until solved.
/*	printf("\n3. Area of Circle formula.\n");

	cout << "* Enter the radius for the AOC." << endl;*/

	//Simple sum calculator.
	printf("\n4. Printing out the sum of two numbers.\n");
	
	int sum_numb1, sum_numb2, sum_result;
	cout << "* Enter the first number." << endl;
	cin >> sum_numb1;

	cout << "* Enter the second number." << endl;
	cin >> sum_numb2;

	sum_result = sum_numb1 + sum_numb2;
	cout << "* The result is " << sum_result << endl;

	//Print the greater number.
	printf("\n5. Printing the greater number [either X or Y]\n");

	int gn_x, gn_y;
	cout << "* Enter the number for X." << endl;
	cin >> gn_x;

	cout << "* Enter the number for Y." << endl;
	cin >> gn_y;

	if (gn_x == gn_y)
	{
		cout << "* The number X [" << gn_y << "] is equal to the number Y [" << gn_y << "]." << endl;
	}
	else 
	{
		if (gn_x > gn_y)
		{
			cout << "* The number X [" << gn_x << "] is greater than the number Y [" << gn_y << "]." << endl;
		}
		else if (gn_y > gn_x)
		{
			cout << "* The number Y [" << gn_y << "] is greater than the number X [" << gn_x << "]." << endl;
		}
	}
	
	//Print the odd or even number.
	printf("\n6. Printing the odd or even number.\n");

	int oe_numb;
	cout << "* Please enter a number to know the type." << endl;
	cin >> oe_numb;

	if (oe_numb % 2 == 0)
	{
		cout << "* " << oe_numb << " is an even number." << endl;
	}
	else
	{
		cout << "* " << oe_numb << " is an odd number." << endl;
	}

	//Print if number is mulitple by 5 or not.
	printf("\n7. Printing number if multiple by 5 or not.\n");

	int mf_numb;
	cout << "* Please enter a number to check." << endl;
	cin >> mf_numb;

	if (mf_numb % 5 == 0)
	{
		cout << "* " << mf_numb << " can be multipled by 5.\n" << endl;
	}
	else {
		cout << "* " << mf_numb << " can not be multipled by 5.\n" << endl;
	}

	system("pause");
}