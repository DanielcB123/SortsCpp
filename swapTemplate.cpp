// C++ program to implement
// function templates
#include <iostream>
using namespace std;

// Function template to swap
// two numbers
template <class T>
int swap_numbers(T& a, T& b)
{
	T c = a;
	a = b;
	b = c;
	return 0;
}

// Driver code
int main()
{
	int x = 10, y = 20;
	double d1 = 4.5, d2 = 6.7;

	// Invoking the swap()
	swap_numbers(x, y);
	cout << "For int data type: " << x << " " << y << endl;

	// Invoking the swap()
	swap_numbers(d1, d2);
	cout << "For double data type: " << d1 << " " << d2 << endl;

	return 0;
}

