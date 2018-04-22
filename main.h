//
// Created by Brock on 4/10/2018.
//

#ifndef COP3503TERMPROJECT_MAIN_H
#define COP3503TERMPROJECT_MAIN_H

#include "vector";
#include "Question.h"
#include "SuperCharacter.h"

/* method containing algorithm that checks the state of every remaining character's attributes each round
 * to decide which question would eliminate the most possible characters regardless of the users answer.*/
void questionSelection(vector <Question> questionVector, vector <SuperCharacter> superCharVector);

#endif //COP3503TERMPROJECT_MAIN_H
