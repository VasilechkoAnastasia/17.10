#pragma once
class Movie
{  // режисер
   // жанр
   // дата
	char* name;
	char* director;
	char* genre;
	double time;
	int data;
	int year;
public:
	Movie();
	Movie(const char* n, const char* d, 
	const char* g, double t, int da, int y);
	Movie(const Movie & obj); 
	~Movie();
	void Print();
};

