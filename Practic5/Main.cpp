#include <iostream>
#include "Structs.h"
#include <fstream>


using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Task 1: done
	//Task 2: done
	//Task 3
	book Harry_Potter{ "Harry Potter", "Rowling Joanne", 1999, 350, 100 };
	book Narnia{ "Narnia", "Lewis Clive", 2015, 400, 90 };
	book Crime_and_Punishment{ "Crime and Punishment", "Dostoyevskiy Fedor", 2018, 300, 85 };
	cout << "Enter length of array: ";
	cin >> n;
	if (n < 0)
		cout << "Error! Length must be > 0.\n";
	else
		int length = n;
		book* arr = new book[n]{
		Harry_Potter,
		Narnia,
		Crime_and_Punishment };

	cout << "\nBook information:\n";
	show_book(Harry_Potter);

	cout << "\nAuthor's name only (no surname):\n";
	cout << author_name(Crime_and_Punishment) << '\n';

	string path = "book.txt";
	save_book(Narnia, path);
	cout << '\n';
	add_book(arr, n);
	show_book(arr[3]);
	clear_arr(arr, n);

	return 0;
}
