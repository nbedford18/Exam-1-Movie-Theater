//I affirm that all code given below was written solely by me, <Noelle Bedford>, and that any help I received 
//adhered to the rules stated for this exam.


#include<cstring>
#include "Movie.h"
#ifndef THEATER_H
#define THEATER_H
using namespace std;

class Theater{
private:
	int Hour;
public:
	Movie movie[100];
	int arraysize=0;
	string name;
	string phone;
	double PopcornPrice;
	double CokePrice;

	Theater(string name, string phone);
	void AddMovie(Movie& Movie);
	string GetMovieForHour(int Hour);
	int GetShowTimeForGenre(string Genre);
	int GetpopcornPrice();
	int GetcokePrice();

};
#endif