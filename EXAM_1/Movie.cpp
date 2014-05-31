//I affirm that all code given below was written solely by me, Ben Bream, and that any help I received adhered to
//the rules stated for this exam.

#include <iostream>
#include "Movie.h"
#include "Theater.h"
using namespace std;



string Movie::GetTitle()
{
	return Title;
}
void Movie::SetTitle(string t)
{

	Title = t;
}
string Movie::GetGenre()
{
	return Genre;
}
void Movie::SetGenre(string g)
{

	Genre = g;
}
int Movie::GetShowTime()
{
	return ShowTime;
}
void Movie::SetShowTime(int s)
{

	ShowTime = s;
}