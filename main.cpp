#include <iostream>
#include "Question.h"
#include <fstream>
#include"vector"

/*
 * Main methods start
 */

void askQuestions() {

}

/*
 * Main methods end
 */

int main() {
    vector <Question> questionVector;
    /*Question isCharGood("Is your character morally good?");
    Question isCharMale("Is your character male?");
    Question CanCharFly("Can your character fly?");
    Question doesCharHaveCape("Does your character wear a cape?");
    Question isCharMarvel("Is your character from the marvel universe?");
    Question doesCharHavePowers("Does your character have super powers?");
    Question isCharXMan("Is your character one of the X-Men?");
    Question isCharAvenger("Is your character one of the Avengers?");
    Question isCharGuardian("Is your character one of the Guardians?");
    Question isCharJusticeLeague("is your character a member of the Justice League?");
    Question doesCharWearMask("Does your character wear a mask?");
    Question doesCharWearRed("Does your character wear red?");
    Question doesCharWearBlack("Does your character wear black?");
    Question isCharRich("Is your character rich?");
    Question doesCharKnowMartialArts("Does your character know martial arts?");
    Question isCharGenius("Is your character a genius?");
    Question doesCharHaveSuperStrength("Does your character have super strength?");
    Question doesCharUseMagic("Does your character use magic?");
    Question doesCharUseTech("does your character use Technology?");
    Question isCharIdentitySecret("Does your character have a secret identity?");*/

    /*
     * receiving from external file
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
    return 0;
}


