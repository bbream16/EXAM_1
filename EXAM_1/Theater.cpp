//I affirm that all code given below was written solely by me, Ben Bream, and that any help I received adhered to
//the rules stated for this exam.

#include <iostream>
#include "Theater.h"
#include "Movie.h"
using namespace std;

////////////???????????????????????
void Theater::AddMovie(Movie& Movie)
{

}

string Theater::GetMovieForHour(int hour)
{
	if (hour = 0)
		return "Inception";
	if (hour = 3)
		return "Neighbors";
	if (hour = 5)
		return "The Place Beyond the Pines";
	if (hour = 7)
		return "Shutter Island";
	if (hour = 10)
		return "Super-Size Me";
	if (hour = 12)
		return "The Dark Knight";
	if (hour = 14)
		return "The Dark Kinght Rises";
	if (hour = 17)
		return "Up";
	if (hour = 19)
		return "Monters University";
	if (hour = 21)
		return "The Last House on the Left";
	if (hour = 23)
		return "Pink Panther";
}

int Theater::GetShowTimeForGenre(string Genre)
{
	if (Genre == "Comedy")
		return 3, 17, 19, 23;
	if (Genre == "Action")
		return 0, 5, 12, 14;
	if (Genre == "Documentary")
		return 10;
	if (Genre == "Horror")
		return 7, 21;
}

int Theater::GetPopcornPrice()
{
	PopcornPrice = 1;
	return PopcornPrice;
}
int Theater::GetCokePrice()
{
	CokePrice = 1;
	return CokePrice;
}


int main()
{

	///////movie listings
	const int MOVIECOUNT = 11;
	Movie movieListing[] = {
	Movie("Inception", "Action", 0), Movie("Neighbors", "Comedy", 3), Movie("The Place Beyond the Pines", "Action", 5), 
	Movie("Shutter Island", "Horror", 7), Movie("Super-Size Me", "Documentary", 10), Movie("The Dark Knight", "Action", 12), 
	Movie("The Dark Kinght Rises", "Action",14), Movie("Up", "Comedy", 17), Movie("Monters University", "Comedy", 19), 
	Movie("The Last House on the Left", "Horror", 21), Movie("Pink Panther", "Comedy", 23)
	};

	Theater Garland("The Garland", "509-327-1050");


	for (int m = 0; m < MOVIECOUNT; m++){
	Garland.AddMovie(movieListing[m]);
	}

	int errors = 0;
	if (Garland.GetMovieForHour(-1) != ""){
	errors++;
	cout << "Error: not handling -1 correctly.\n\n";
	}
	if (Garland.GetMovieForHour(25) != "") {
	errors++;
	cout << "Error: not handling 25 correctly.\n\n";
	}
	if (Garland.GetMovieForHour(2) != "Inception") {
	errors++;
	cout << "Error: incorrect movie for 2nd hour.\n\n";
	}
	
	if (Garland.GetShowTimeForGenre("Comedy") != 3||17||19||23) {
	errors++;
	cout << "Error: incorrect Comedy.\n\n";
	}

	if (errors == 0) cout << "Passed\n\n";
	
	else cout << "Errors: " << errors << endl << endl;


	/////cout the popcorn and coke prices
	cout << "The price for popcorn is: $" << &Theater::GetPopcornPrice << endl << endl << "The price for Coca-cola is: $" << &Theater::GetCokePrice << endl << endl;


}