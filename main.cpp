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

    SuperCharacter batman("Batman.txt");
    superCharVector.push_back(batman);

    SuperCharacter superman("Superman.txt");
    superCharVector.push_back(superman);

    SuperCharacter hela("Hela.txt");
    superCharVector.push_back(hela);


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

                questionVector[k].setTrueFalseRatio();
                questionVector[k].resetNumFalse();
                questionVector[k].resetNumTrue();
            }
        }

        int tempI = 0;
        for (int k = 0; k < questionVector.size(); k++){
            int lowerstTFratio = 20;
            if (questionVector[k].getTrueFalseRatio() < lowerstTFratio && questionVector[k].getAlreadyAsked() == false){
                lowerstTFratio = questionVector[k].getTrueFalseRatio();
                tempI = k;
            }
        }
        i = tempI;

        questionVector[i].askQuestion();
        questionVector[i].setAlreadyAskedTrue();

        for (int j = 0; j < superCharVector.size(); j++){
            if (superCharVector[j].getattributeArray()[i] == questionVector[i].getAnswer()){
                superCharVector[j].increaseCertainty();
            }

            if (superCharVector[j].getCertainty() > 5) {
                cout << "Your character is " << superCharVector[j].getName() << ".";
                return(0);
            }

            if (superCharVector[j].getattributeArray()[i] != questionVector[i].getAnswer()) {
                superCharVector.erase(superCharVector.begin() + j);
                j--;
            }
        }

        if (superCharVector.size() == 1){
            cout << "Your character is " << superCharVector[0].getName() << ".";
            return(0);
        }


    }

    /*
     * receives questions from external file: end
     */
    return 0;
}


