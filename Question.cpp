//
// Created by Brock on 4/16/2018.
//

#include "Question.h"
#include <iostream>
#include "SuperCharacter.h"

bool Question::getAnswer() {
    return answer;
}

Question::Question(const string tempQuestion, const int tempAssociatedBool) {
    question = tempQuestion;
    associatedBool = tempAssociatedBool;
}

string Question::getQuestion() {
    return question;
}

void Question::setAnswer(bool tempAnswer) {
    answer = tempAnswer;
}

void Question::askQuestion() {
    int userInput = 0;
    cout << question << endl;
    cout << "(1) yes"<< endl;
    cout << "(2) no"<< endl;
    cout << "(3) don't know"<< endl;


    cin >> userInput;

    switch (userInput){
        case 1:
            answer = true;
            break;

        case 2:
            answer = false;
            break;

        case 3:
            return;
        default:
            cout << userInput << " is not a proper input, please enter 1, 2, or 3.";
    }


}

void Question::setTrueFalseRatio() {
    trueFalseRatio = abs(numTrue - numFalse);
}

void Question::increaseNumTrue() {
    numTrue++;
}

void Question::increaseNumFalse() {
    numFalse++;
}

void Question::resetNumTrue() {
    numTrue = 0;
}

void Question::resetNumFalse() {
    numFalse = 0;
}

int Question::getTrueFalseRatio() {
    return trueFalseRatio;
}

void Question::setAlreadyAskedTrue() {
    alreadyAsked = true;
}

bool Question::getAlreadyAsked() {
    return alreadyAsked;
}
