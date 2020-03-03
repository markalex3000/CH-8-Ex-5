/*  Program Description
Write two functions that reverse the order of elements in a vector<int>.
For example, 1, 3, 5, 7, 9 becomes 9, 7, 5, 3, 1. The first reverse function should
produce a new vector with the reversed sequence, leaving its original vector unchanged.
The other reverse function should reverse the elements of its vector without using any
other vectors (hint: swap).


*/

/*
Standard opening
*/

#include "C:\Users\mark.alexieff\source\repos\std_lib_facilities.h"

/*
global variables
*/

vector<int> vector_of_ints;
vector<int> swapped_vector;

/*
functions declarations
*/

int swap_vector_one(vector<int>& v, vector<int>& sv) {
	int count{ 0 };
	for (size_t i = v.size() - 1; i != -1; i--)
	{
		count++;
		sv.push_back(v.at(i));
	}
	return(count);
}

int swap_vector_two(vector<int>& v) {
	int count{ 0 };
	for (size_t i = 0; i < v.size() / 2; i++)
	{

		swap(v[i], v[v.size() - i - 1]);
	}
	return(count);
}

void myprint(vector<int>& v) {
	cout << "Vector: ";
	for (int i = 0; i < v.size(); i++) cout << v[i] << " ";

}





/*
main
*/

int main() {
	int number{ 0 };
	int temp{ 0 };

	cout << "Enter a sequence of integers (999 to terminate): ";
	while (cin >> number && number != 999) {
		vector_of_ints.push_back(number);
	}

	cout << "\n Swap vecor one: ";
	temp = swap_vector_one(vector_of_ints, swapped_vector);
	myprint(swapped_vector);

	cout << "\n Swap vecror two: ";
	temp = swap_vector_two(vector_of_ints);
	myprint(vector_of_ints);
	keep_window_open();
}


/*
funcion definitions
*/