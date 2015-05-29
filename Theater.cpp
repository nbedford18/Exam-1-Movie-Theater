//I affirm that all code given below was written solely by me, <Noelle Bedford>, and that any help I received 
//adhered to the rules stated for this exam.


#include "Theater.h"
#include "Movie.h"
#include<iostream>
#include<cstdlib>
using namespace std;

Theater::Theater(string name, string phone){
	name = "The Garland";
	phone = "(234)567-9854";
	

}
void Theater::AddMovie(Movie& Movie){
	
	arraysize++;
	movie[arraysize];
	



}
string Theater::GetMovieForHour(int Hour){
	
	if (Hour >= 0 && Hour <= 24) {

		for (int i = 0; i < arraysize; i++){

			if (Hour!=movie[i].Showtime)
				return movie[i++].Title;

			else 
				return movie[i].Title;


		}
	}
	else
		return "No Movie";

}
int Theater::GetShowTimeForGenre(string Gen){
	
	if (Gen == "Action" || Gen == "action" || Gen == "Comedy" || Gen == "comedy" || Gen == "Horror" || Gen == "horror" || Gen == "Documentary" || Gen == "documentary"){
		for (int i = 0; i < arraysize; i++){

			if (Gen == movie[i].Genre)
				return movie[i].Showtime;
			else
				return 0;
		}
	}
	else
		cout << "Sorry you must choose between action, comedy, horror, or documentary." << endl;



}
int Theater::GetpopcornPrice(){
	PopcornPrice = 5;
	return PopcornPrice;

}
int Theater::GetcokePrice(){
	CokePrice = 3;
	return CokePrice;

}