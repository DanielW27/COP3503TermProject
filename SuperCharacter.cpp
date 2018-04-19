//
// Created by Brock on 4/10/2018.
//

#include "SuperCharacter.h"
#include <fstream>


bool SuperCharacter::getIsGood() {
    return isGood;
}

bool SuperCharacter::getIsMale() {
    return isMale;
}

bool SuperCharacter::getCanFly() {
    return canFly;
}

bool SuperCharacter::getHasCape() {
    return hasCape;
}

bool SuperCharacter::getIsMarvel() {
    return isMarvel;
}

bool SuperCharacter::getHasPowers() {
    return hasPowers;
}

bool SuperCharacter::getIsXMen() {
    return isXMen;
}

bool SuperCharacter::getisAvenger() {
    return isAvenger;
}

bool SuperCharacter::getIsGuardian() {
    return isGuardian;
}

bool SuperCharacter::getIsJusticeLeague() {
    return isJusticeLeague;
}

bool SuperCharacter::getHasMask() {
    return hasMask;
}

bool SuperCharacter::getYoungerThan25() {
    return youngerThan25;
}

bool SuperCharacter::getWearsRed() {
    return wearsRed;
}
    
bool SuperCharacter::getHasSecretIdentity() {
	return hasSecretIdentity;
}

bool SuperCharacter::getUsesTech() {
	return usesTech;
}

bool SuperCharacter::getUsesMagic() {
	return usesMagic;
}

bool SuperCharacter::getIsAmerican() {
	return isAmerican;
}

bool SuperCharacter::getIsFromEarth() {
	return isFromEarth;
}

bool SuperCharacter::getHasSuperStrength() {
	return hasSuperStrength;
}

bool SuperCharacter::getIsGenius() {
	return isGenius;
}

bool SuperCharacter::getKnowsMartialArts() {
	return knowsMartialArts;
}

bool SuperCharacter::getIsRich() {
	return isRich;
}

bool SuperCharacter::getWearsBlack() {
	return wearsBlack;
}

string SuperCharacter::getName() {
    return name;
}

int SuperCharacter::getCertainty() {
    return certainty;
}

SuperCharacter::SuperCharacter() {
    /*
     *receives character info from external file: start
     */

    string str;
    ifstream infile("test2.txt", ios::in); // test.text must be located in "C:\Users\Brock\CLionProjects\projectName\cmake-build-debug"

    if (infile.is_open()){
        int linecounter = 1;
        while (getline(infile, str)) { // returns null when it reaches an empty line in the file
            cout << "in";
            if (linecounter == 1) {
                name = str;
            }

            else {
                if (str.compare("true") != ){
                    attributeArray.push_back(true);
                }

                else if (str == "false"){
                    attributeArray.push_back(false);
                }
                else {
                    cout << "error: bool variable incorrect at line " << linecounter << " of " << name;
                }
            }
            linecounter++;
        }
        infile.close();
    }

    else {
        cout << "no input file avilable";
    }

    /*
     * receives character info from external file: end
     */
}
