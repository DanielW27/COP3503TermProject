#include <iostream>
using namespace std;
#include "Question.h"
#include <fstream>
#include"vector"
#include "SuperCharacter.h"

/*
 * Main methods start
 */

/*
 * Main methods end
 */

int main() {
    vector <Question> questionVector;
    vector <SuperCharacter> superCharVector;

    SuperCharacter batman;

   superCharVector.push_back(batman);

    /*
     *receives questions from external file: start
     */

    string str;
    ifstream infile("test.txt", ios::in); // test.text must be located in "C:\Users\Brock\CLionProjects\projectName\cmake-build-debug"

    if (infile.is_open()){
        int counter = 1;
        while (getline(infile, str)) { // returns null when it reaches an empty line in the file
            Question tempQuestion(str, counter);
            questionVector.push_back(tempQuestion); //write file to a vector of strings
            counter++;
        }
        infile.close();
    }

    else {
        cout << "no input file avilable";
    }

    /*
     * receives questions from external file: end
     */

    cout << "test: delete at line 46";
    return 0;
}


