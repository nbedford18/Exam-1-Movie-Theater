//I affirm that all code given below was written solely by me, <Noelle Bedford>, and that any help I received 
//adhered to the rules stated for this exam.

#include <iostream>
#include <cstring>
#include<string>

#ifndef MOVIE_H
#define MOVIE_H
using namespace std;

class Movie
{
private:
	string prodductionstudio;
	int yearReleased;
	double movielength;
public:
	string Title;
	string Genre;
	int Showtime;

	Movie();
	Movie(string newTitle, string newGenre, int newShowtime);
	string GetTitle();
	string GetGenre();
	int GetShowtime();

};
#endif