#include <iostream>
using namespace std;

int main()
{
	printf("[*						    	 *]\n");
	printf("[*		C++ Programming Exercise		 *]\n");
	printf("[*		Computer Programming I			 *]\n");
	printf("[*		Author: Shady Amr			 *]\n");
	printf("[*		Date : Friday, Nov. 06 2020		 *]\n");
	printf("[*							 *]\n\n");

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

	double aoc, aoc_r;
	cout << "* Enter the radius for the AOC." << endl;
	cin >> aoc_r;

	aoc = 3.14 * pow(aoc_r, 2);
	cout << "The result for AOC is " << aoc << endl;

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
		cout << "* " << mf_numb << " can be multipled by 5." << endl;
	}
	else {
		cout << "* " << mf_numb << " can not be multipled by 5." << endl;
	}

	//AOC&AOR Greatest.
	printf("\n8. Area of Square & Area of Rectangle Greatest.\n");

	double n_length, n_width, aos, aor;
	cout << "* Please enter a number for length." << endl;
	cin >> n_length;

	cout << "* Please enter a number for width." << endl;
	cin >> n_width;

	aos = pow(n_length, 2);
	aor = n_length * n_width;

	if (aos > aor)
	{
		cout << "* Area of Square is greater than the Area of Rectangle." << endl;
	}
	else
	{
		cout << "* Area of Rectangle is greater than the Area of Square." << endl;
	}

	//Vowel Letters Check.
	printf("\n9. Vowel Letters Check\n");

	char vowel;
	cout << "* Enter a letter to decide the type." << endl;
	cin >> vowel;

	if (vowel == 'A' || vowel == 'E' || vowel == 'I' || vowel == 'O' || vowel == 'U' || vowel == 'Y')
	{
		cout << "This letter '" << vowel << "' is a vowel.\n" << endl;
	}
	else if (vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u' || vowel == 'y')
	{
		cout << "This letter '" << vowel << "' is a vowel.\n" << endl;
	}
	else
	{
		cout << "This letter '" << vowel << "' is not a vowel.\n" << endl;
	}

	system("pause");
}