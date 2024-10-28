#include "Movie.h"
#include<iostream>
using namespace std;

Movie::Movie()
{
	name = nullptr;
	director = nullptr;
	genre = nullptr;
	time = 0.0;
	data = 0;
	year = 0;
}
Movie::Movie(const char* n, const char* d, const char* g, double t, int da, int y)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1,n);
	director = new char[strlen(n) + 1];
	strcpy_s(director, strlen(n) + 1, n);
	genre = new char[strlen(n) + 1];
	strcpy_s(genre, strlen(n) + 1, n);
	time = t;
	data = da;
	year = y;
}

Movie::Movie(const Movie& obj)
{
	name = new char[strlen(obj.name)+1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	director = new char[strlen(obj.director) + 1];
	strcpy_s(director, strlen(obj.director) + 1, obj.director);
	genre = new char[strlen(obj.genre) + 1];
	strcpy_s(genre, strlen(obj.genre) + 1, obj.genre);
	time = obj.time;
	data = obj.data;
	year = obj.year;
}
Movie::~Movie()
{
	delete[] name;
	delete[] director;
	delete[] genre;
	cout << "destructor\n";
}
void Movie::Print()
{
	cout<< "Name: " << name << "\t"
		<< "Director:" << director << "\t"
		<< "Genre: " << genre << "\t"
		<< "Time: " << time << "\t"
		<< "Data: " << data << "\t"
		<< "Year: " << year << endl;
}
