#include <iostream>
#include "Structs.h"
#include <fstream>


using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;

	//Task 1: done
	//Task 2: done
	//Task 3
	book Harry_Potter{ "Harry Potter", "Rowling Joanne", 1999, 350, 100 };
	book Narnia{ "Narnia", "Lewis Clive", 2015, 400, 90 };
	book Crime_and_Punishment{ "Crime and Punishment", "Dostoyevskiy Fedor", 2018, 300, 85 };
	string path = "book.txt";
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
		do {
			cout << "\nEnter the number of option that you want to do:\n1.Show book\n2.Show author's name\n3.Save book\n4.Add book\n5.Clear array\n6.End\n\n";
			cin >> m;
			switch (m) {
			case 1:
				cout << "\nBook information:\n";
				show_book(Harry_Potter);
				break;
			case 2:
				cout << "\nAuthor's name only (no surname):\n";
				cout << author_name(Crime_and_Punishment) << '\n';
				break;
			case 3:
				save_book(Narnia, path);
				cout << '\n';
			case 4:
				add_book(arr, n);
				break;
			case 5:
				clear_arr(arr, n);
				break;
			case 6:
				break;
			default: cout << "Error.\n";
			}
		} while (m != 6);
	return 0;
}
