//I affirm that all code given below was written solely by me, Ben Bream, and that any help I received adhered to
//the rules stated for this exam.

#include <iostream>
#ifndef THEATER_H
#define THEATER_H
using namespace std;

class Movie;
class Theater
{
public:
	////////////Default Theater

	Theater()
	{
		Name = "Garland";
		Phone = "509-327-1050";
	};
	Theater(string n, string p)
	{
		Name = n;
		Phone = p;
	};
	//////////behaviors of Theater Class
	void AddMovie(Movie& Movie);
	string GetMovieForHour(int hour);

	int GetShowTimeForGenre(string Genre);

	int GetPopcornPrice();
	int GetCokePrice();

private:
	string Name;
	string Phone;
	int PopcornPrice;
	int CokePrice;

};
#endif