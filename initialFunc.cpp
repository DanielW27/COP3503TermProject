#include "initialHeader.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
/*
 Figure out what files we are going to be needing
 Still need to check for correct input by user.
 */
int fileSort(){
//get the text file
//0 = default hero files
//1 = different questions
//2 = different subjects
//3 = different question and answers
	int typesFiles[4] = {0,1,2,3};
	char userInput;
	cout<<"Do you have different question AND subject files, Y or N?"<<endl;
	cin>>userInput;
	if ((userInput == 'Y')||(userInput == 'y')){
		//different subjects and questions
		return typesFiles[3];
	}
	cout<<"Do you have different subjects, Y or N?"<<endl;
	cin>>userInput;
	if (userInput == 'Y')||(userInput == 'y'){
		//different subjects
		return typesFiles[2];
	}
	cout<<"Do you have different questions, Y or N?"<<endl;
	cin>>userInput;
	if (userInput == 'Y')||(userInput == 'y'){
		//different questions
		return typesFiles[1];
	}	
	else{
		//default files
		return typesFiles[0];
	}
}

/*
 Funciton for file names
 Still need to check for correct input
 */
string* getNames(int startCase){
	string* names = new string[3];
	string temp;
	switch(startCase){
		//default filenames
		case (0) :
			names[0] = "hero_names.txt";
			names[1] = "hero_answers.txt";
			names[2] = "hero_questions.txt";
			return names;
		//different questions
		case (1) :
			names[0] = "hero_names.txt ";
			cout<<"What is the name of your boolean answers document?"<<endl;
			cin>>names[1];
			cout<<"What is the name of your questions text document?"<<endl;
			cin>>names[2];
		//different subjects
		case (2) :
			names[2] = "hero_questions.txt";
			cout<<"What is the name of your subjects text document?"<<endl;
			cin>>names[0];
			cout<<"What is the name of your boolean answers document?"<<endl;
			cin>>names[1];
		//different subjects and heros
		case (3) :		
			cout<<"What is the name of your subjects text document?"<<endl;
			cin>>names[0];
			cout<<"What is the name of your boolean answers document?"<<endl;
			cin>>names[1];
			cout<<"What is the name of your questions text document?"<<endl;
			cin>>names[2];
		}
return names;
}
/*
 Get the number of lines in the text subjects and boolean answers for arrays
 */
 int lineNums(string name){
	string str;
	unsigned int lines = 0;
	ifstream fileIn(name);
	while(getline(fileIn,str)){
		++lines;
	}
	return lines;
 }
 
 /*
 Initializing funciton
 */
 void initialize(string A){
	//initialize here
 }
 
 
/*
 Old function used to split the file names before
 * switch to a vector.
 
string splitNames[3];
	char space = ' ';
	A = fileSort();
	string fileName = fileNames(A);
	for (unsigned int i = 0;i<fileName.length();i++){
		for (int j = 0;j<3;){
			if (fileName[i] == space){
				j = j+1;
				continue;
			}
			else{
				splitNames[j] = splitNames[j] + fileName[i];
			}
		}
	}
*/
