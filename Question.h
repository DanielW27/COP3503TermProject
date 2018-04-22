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
    int trueFalseRatio;
    int numTrue = 0;
    int numFalse = 0;
    bool alreadyAsked = false;

public:
    Question(string tempQuestion);
    bool getAnswer();
    void askQuestion();
    void setTrueFalseRatio();
    int getTrueFalseRatio();
    void increaseNumTrue();
    void increaseNumFalse();
    void resetNumTrue();
    void resetNumFalse();
    void setAlreadyAskedTrue();
    bool getAlreadyAsked();
};


#endif //COP3503TERMPROJECT_QUESTION_H
