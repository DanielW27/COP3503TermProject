#include <string>
#include <iostream>
#include <fstream>

#include "initialHeader.h"

using namespace std;
/*
 Start of main
 */
int main(){
	//get filenames
	int A = fileSort
	string* names = new string[3];
	names = getNames(A);
	//open the files
	string str;
	ifstream subjects(names[0]);
	ifstream answers(names[1]);
	ifstream questions(names[2]);
	if (!subjects){
		cout<<"Cannot open the input file specified: " << splitNames[0];
		return(1);
	}
	while(getline(subjects,str)){
		initialize(str);
	}
return 0;
}

/* Idea:
 * When we get it wrong we will allow the user to input the correct answer with 
 * our boolean values stored from what they answered.
 */
