//
// Created by Brock on 4/16/2018.
//

#include "Question.h"
#include <iostream>

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
    cout << question;
    cout << "(1) yes";
    cout << "(2) no";
    cout << "(3) don't know";

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
