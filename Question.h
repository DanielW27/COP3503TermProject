//
// Created by Brock on 4/16/2018.
//

#ifndef COP3503TERMPROJECT_QUESTION_H
#define COP3503TERMPROJECT_QUESTION_H

#include "string"
using namespace std;


class Question {
private:
    string question;
    bool answer;
    int associatedBool;

public:
    Question(string tempQuestion, int tempAssociateBool);
    bool getAnswer();
    string getQuestion(); // for debugging
    void setAnswer(bool tempAnswer);
    void askQuestion();
};


#endif //COP3503TERMPROJECT_QUESTION_H
