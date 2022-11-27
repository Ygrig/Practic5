#include "Structs.h"
#include <iostream>
#include <fstream>


void show_book(book& B) {
	cout << "Name: " << B.name << '\n';
	cout << "Author: " << B.author << '\n';
	cout << "Year: " << B.year << '\n';
	cout << "Pages: " << B.pages << '\n';
	cout << "Price: " << B.price << '\n';
}


string author_name(book& B) {
	return B.author.substr(B.author.find(' ')+1);
}

void save_book(book& B, string path) {
	ofstream out; 
	out.open(path, ios::app); 
	if (out.is_open()) { 
		cout << "Файл открыт для записи.\n";
		out << B.name << '\n';
		out << B.author << '\n';
		out << B.year << '\n';
		out << B.pages << '\n';
		out << B.price << '\n';
	}
	else
		cout << "Ошибка открытия файла.\n";
	out.close(); 
}

void add_book(book*& arr, const int length) {
book* tmp = new book[length + 1]{}; 
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	delete[]arr;
	arr = tmp;
	cout << "Enter the name of new book:\n";
	cin.ignore();
	getline(cin, arr[length].name);
	cout << "Enter an author of new book:\n";
	getline(cin, arr[length].author);
	cout << "Enter an year of publication of new book:\n";
	cin >> arr[length].year;
	cout << "Enter number of pages of new book:\n";
	cin >> arr[length].pages;
	cout << "Enter the price of new book:\n";
	cin >> arr[length].price;
	/*cout << "Name: " << arr[length].name << '\n';
	cout << "Author: " << arr[length].author << '\n';
	cout << "Year: " << arr[length].year << '\n';
	cout << "Pages: " << arr[length].pages << '\n';
	cout << "Price: " << arr[length].price << '\n';*/
}

void clear_arr(book*& arr, const int length) {
	delete[] arr;
}