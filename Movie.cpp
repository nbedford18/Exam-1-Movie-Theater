//I affirm that all code given below was written solely by me, <Noelle Bedford>, and that any help I received 
//adhered to the rules stated for this exam.

#include "Movie.h"
using namespace std;

Movie::Movie(){
	Title = "The Last Stand";
	Genre = "Action";
	



}
Movie::Movie(string newTitle, string newGenre, int newShowtime){
	Title = newTitle;
	Genre = newGenre;
	Showtime = newShowtime;
}
string Movie::GetTitle(){
	
	return Title;
}
string Movie::GetGenre(){
	
	return Genre;
}
int Movie::GetShowtime(){
	
	return Showtime;

}