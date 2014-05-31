//I affirm that all code given below was written solely by me, Ben Bream, and that any help I received adhered to
//the rules stated for this exam.

#include <iostream>
#ifndef MOVIE_H
#define MOVIE_H
using namespace std;


class Movie
{
public:

	//////////////////Default Movie
	Movie()
		{
			Title = "Anchorman";
			Genre = "Comedy";
			ShowTime = 26;
		};

	Movie(string t, string g, int s)
	{
		Title = t;
		Genre = g;
		ShowTime = s;
	};

	

	///////////////////Behaviors of Movie Class
	string GetTitle();
	void SetTitle(string Title);
	string GetGenre();
	void SetGenre(string Genre);
	int GetShowTime();
	void SetShowTime(int ShowTime);

private:
	string Title;
	string Genre;
	int ShowTime;


};
#endif