#pragma once
#include <string>
using namespace std;

struct book {
	string name{};
	string author{};
	int year{};
	int pages{};
	double price{};

};

void show_book(book& B);

string author_name(book& B);

void save_book(book& B, string path);

void add_book(book*& arr, const int length);

void clear_arr(book*& arr, const int length);
