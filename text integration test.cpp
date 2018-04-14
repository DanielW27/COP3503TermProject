/*
Start of text file input code.
*/
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

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
if (userInput == 'Y'){
	//default files
	return typesFiles[3];
}
cout<<"Do you have different subjects, Y or N?"<<endl;
cin>>userInput;
if (userInput == 'Y'){
	//different questions
	return typesFiles[2];
}
cout<<"Do you have different questions, Y or N?"<<endl;
cin>>userInput;
if (userInput == 'Y'){
	return typesFiles[1];
}
return typesFiles[0];
}
/*
 Funciton for file names, eventually move to private/public setters and getters
 */
string fileNames(int startCase){
string fileName;
string temp;
switch(startCase){
	//default filenames
	case (0) :
		fileName = "hero_names.txt hero_answers.txt hero_questions.txt";
		return fileName;
	//different questions
	case (1) :
		fileName = "hero_names.txt ";
		cout<<"What is the name of your boolean answers document?"<<endl;
		cin>>temp;
		fileName = fileName + temp;
		cout<<"What is the name of your questions text document?"<<endl;
		cin>>temp;
		fileName = fileName + " " + temp;
	//different subjects
	case (2) :
		cout<<"What is the name of your subjects text document?"<<endl;
		cin>>temp;
		fileName = temp;
		cout<<"What is the name of your boolean answers document?"<<endl;
		cin>>temp;
		fileName = fileName + " " + temp + " heroquestions.txt";
	//different subjects and heros
	case (3) :		
		cout<<"What is the name of your subjects text document?"<<endl;
		cin>>temp;
		fileName = temp;
		cout<<"What is the name of your boolean answers document?"<<endl;
		cin>>temp;
		fileName = fileName + " " + temp;
		cout<<"What is the name of your questions text document?"<<endl;
		cin>>temp;
		fileName = fileName + " " + temp;
	}
return fileName;
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
	//a max number of questions would be helpful
 }

/*
 main included so it compiles without errors
 */
int main(){
	//splits the long string into its separate file names
	string splitNames[3];
	int A = fileSort();
	char space = ' ';
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
	//open the files
	string str;
	ifstream subjects(splitNames[0]);
	ifstream answers(splitNames[1]);
	ifstream questions(splitNames[2]);
	if (!subjects){
		cout<<"Cannot open the input file specified: " << splitNames[0];
		return(1);
	}
	while(getline(subjects,str)){
		initialize(str);
	}
return 0;
}

/*
 * When we get it wrong we will allow the user to input the correct answer with 
 * our boolean values stored from what they answered.
 */
