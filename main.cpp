#include <iostream>
using namespace std;
#include "Question.h"
#include <fstream>
#include"vector"
#include "SuperCharacter.h"

/*
 * Main methods start
 */

void questionSelection(vector <Question> questionVector, vector <SuperCharacter> superCharVector) {
    int i = 0;
    while (true) {
        for (int k = 0; k < questionVector.size(); k++){
            for (int l = 0; l < superCharVector.size(); l ++){
                if (superCharVector[l].getattributeArray()[k] == true){
                    questionVector[k].increaseNumTrue();
                }

                if (superCharVector[l].getattributeArray()[k] == false){
                    questionVector[k].increaseNumFalse();
                }
            }
            questionVector[k].setTrueFalseRatio();
            questionVector[k].resetNumFalse();
            questionVector[k].resetNumTrue();
        }

        int tempI = 0;
        int lowerstTFratio = 100;

        for (int k = 0; k < questionVector.size(); k++){
            if (questionVector[k].getTrueFalseRatio() < lowerstTFratio && questionVector[k].getAlreadyAsked() == false){
                lowerstTFratio = questionVector[k].getTrueFalseRatio();
                tempI = k;
            }
        }
        i = tempI;

        questionVector[i].askQuestion();
        if (questionVector[i].getAlreadyAsked() == true) { //skips to the next question: tiggered when user answers don't know
            continue;
        }
        questionVector[i].setAlreadyAskedTrue();

        for (int j = 0; j < superCharVector.size(); j++){
            if (superCharVector[j].getattributeArray()[i] == questionVector[i].getAnswer()){
                superCharVector[j].increaseCertainty();
            }

            /*if (superCharVector[j].getCertainty() > 10) {
                cout << "Your character is " << superCharVector[j].getName() << ".";
                return;
            }*/

            if (superCharVector[j].getattributeArray()[i] != questionVector[i].getAnswer()) {
                superCharVector.erase(superCharVector.begin() + j);
                j--;
            }
        }

        if (superCharVector.size() == 1){
            cout << "Your character is " << superCharVector[0].getName() << ".";
            return;
        }


    }
}

/*
 * Main methods end
 */

int main() {
    vector <Question> questionVector;
    vector <SuperCharacter> superCharVector;

    /*SuperCharacter batman("Batman.txt");
    superCharVector.push_back(batman);

    SuperCharacter superman("Superman.txt");
    superCharVector.push_back(superman);

    SuperCharacter hela("Hela.txt");
    superCharVector.push_back(hela);*/

    /*
     * Receives character names from text file: start FIXME read comments
     */

    string tempStr;
    ifstream infile2("Character List.txt", ios::in); // test.text must be located in "C:\Users\Brock\CLionProjects\projectName\cmake-build-debug"

    if (infile2.is_open()){
        int counter = 1;
        while (getline(infile2, tempStr)) { // returns null when it reaches an empty line in the file
            SuperCharacter tempSuperChar(tempStr);
            superCharVector.push_back(tempSuperChar); //write file to a vector of strings
        }
        infile2.close();
    }

    else {
        cout << "no input file avilable";
    }

    /*
     * Receives character names from text file: end
     */


    /*
     *receives questions from external file: start FIXME read comments
     */

    string str;
    ifstream infile("Question List.txt", ios::in); // test.text must be located in "C:\Users\Brock\CLionProjects\projectName\cmake-build-debug"

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


    /*
     * Question selector algorithm start
     */

     questionSelection(questionVector, superCharVector);

    /*
     * Question selector algoritm end
     */
    return 0;
}



