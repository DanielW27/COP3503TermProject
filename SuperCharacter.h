//
// Created by Brock on 4/10/2018.
//

#ifndef COP3503TERMPROJECT_SUPERCHARACTER_H
#define COP3503TERMPROJECT_SUPERCHARACTER_H

#include "vector"
#include <iostream>
#include "string"
using namespace std;


class SuperCharacter {
private:
    string name;
    int certainty = 0;
    vector <bool> attributeArray;

public:
    SuperCharacter(string superTextFile);
    string getName();
    vector<bool> getattributeArray();
    void increaseCertainty();

};


#endif //COP3503TERMPROJECT_SUPERCHARACTER_H
