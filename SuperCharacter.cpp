//
// Created by Brock on 4/10/2018.
//

#include "SuperCharacter.h"
#include <fstream>


/*bool SuperCharacter::getIsGood() {
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
}*/

string SuperCharacter::getName() {
    return name;
}

int SuperCharacter::getCertainty() {
    return certainty;
}

SuperCharacter::SuperCharacter(string superTextFile) {

    /*
     * default character initialization: start
     */

    if (superTextFile == "Batman"){
        name = "Batman";
        attributeArray.resize(20);
        attributeArray[0] = true; // Char is MORALLY GOOD
        attributeArray[1] = true;// Char is MALE
        attributeArray[2] = false;// Char can FLY
        attributeArray[3] = true;// Char wears CAPE
        attributeArray[4] = false;// Char is MARVEL
        attributeArray[5] = false;// Char has SUPER POWERS
        attributeArray[6] = false;// Char is X-MAN
        attributeArray[7] = false;// Char is AVENGER
        attributeArray[8] = false;// Char is GUARDIAN
        attributeArray[9] = true;// Char is JUSTICE LEAGUE
        attributeArray[10] = true;// Char wears MASK
        attributeArray[11] = false;// Char wears RED
        attributeArray[12] = true;// Char wears BLACK
        attributeArray[13] = true;// Char is RICH
        attributeArray[14] = true;// Char knows MARTIAL ARTS
        attributeArray[15] = false;// Char is GENIUS
        attributeArray[16] = false;// Char has SUPER STRENGTH
        attributeArray[17] = false;// Char uses MAGIC
        attributeArray[18] = true;// Char uses TECH
        attributeArray[19] = true;// Char has SECRET IDENTITY
    }

    else if (superTextFile == "Flash"){
        name = "Flash";
        attributeArray.resize(20);
        attributeArray[0] = true; // Char is MORALLY GOOD
        attributeArray[1] = true;// Char is MALE
        attributeArray[2] = false;// Char can FLY
        attributeArray[3] = false;// Char wears CAPE
        attributeArray[4] = false;// Char is MARVEL
        attributeArray[5] = true;// Char has SUPER POWERS
        attributeArray[6] = false;// Char is X-MAN
        attributeArray[7] = false;// Char is AVENGER
        attributeArray[8] = false;// Char is GUARDIAN
        attributeArray[9] = true;// Char is JUSTICE LEAGUE
        attributeArray[10] = true;// Char wears MASK
        attributeArray[11] = true;// Char wears RED
        attributeArray[12] = false;// Char wears BLACK
        attributeArray[13] = false;// Char is RICH
        attributeArray[14] = false;// Char knows MARTIAL ARTS
        attributeArray[15] = false;// Char is GENIUS
        attributeArray[16] = false;// Char has SUPER STRENGTH
        attributeArray[17] = false;// Char uses MAGIC
        attributeArray[18] = false;// Char uses TECH
        attributeArray[19] = true;// Char has SECRET IDENTITY
    }

    else if (superTextFile == "Aqua Man"){
        name = "Aqua Man";
        attributeArray.resize(20);
        attributeArray[0] = true; // Char is MORALLY GOOD
        attributeArray[1] = true;// Char is MALE
        attributeArray[2] = false;// Char can FLY
        attributeArray[3] = false;// Char wears CAPE
        attributeArray[4] = false;// Char is MARVEL
        attributeArray[5] = true;// Char has SUPER POWERS
        attributeArray[6] = false;// Char is X-MAN
        attributeArray[7] = false;// Char is AVENGER
        attributeArray[8] = false;// Char is GUARDIAN
        attributeArray[9] = true;// Char is JUSTICE LEAGUE
        attributeArray[10] = false;// Char wears MASK
        attributeArray[11] = false;// Char wears RED
        attributeArray[12] = false;// Char wears BLACK
        attributeArray[13] = false;// Char is RICH
        attributeArray[14] = false;// Char knows MARTIAL ARTS
        attributeArray[15] = false;// Char is GENIUS
        attributeArray[16] = false;// Char has SUPER STRENGTH
        attributeArray[17] = true;// Char uses MAGIC
        attributeArray[18] = false;// Char uses TECH
        attributeArray[19] = false;// Char has SECRET IDENTITY
    }

    else if (superTextFile == "Lex Luthor"){
        name = "Lex Luthor";
        attributeArray.resize(20);
        attributeArray[0] = false; // Char is MORALLY GOOD
        attributeArray[1] = true;// Char is MALE
        attributeArray[2] = false;// Char can FLY
        attributeArray[3] = false;// Char wears CAPE
        attributeArray[4] = false;// Char is MARVEL
        attributeArray[5] = false;// Char has SUPER POWERS
        attributeArray[6] = false;// Char is X-MAN
        attributeArray[7] = false;// Char is AVENGER
        attributeArray[8] = false;// Char is GUARDIAN
        attributeArray[9] = false;// Char is JUSTICE LEAGUE
        attributeArray[10] = false;// Char wears MASK
        attributeArray[11] = false;// Char wears RED
        attributeArray[12] = true;// Char wears BLACK
        attributeArray[13] = true;// Char is RICH
        attributeArray[14] = false;// Char knows MARTIAL ARTS
        attributeArray[15] = true;// Char is GENIUS
        attributeArray[16] = false;// Char has SUPER STRENGTH
        attributeArray[17] = false;// Char uses MAGIC
        attributeArray[18] = true;// Char uses TECH
        attributeArray[19] = false;// Char has SECRET IDENTITY
    }

    else if (superTextFile == "Ra’s al Ghul"){
        name = "Ra’s al Ghul";
        attributeArray.resize(20);
        attributeArray[0] = false; // Char is MORALLY GOOD
        attributeArray[1] = true;// Char is MALE
        attributeArray[2] = false;// Char can FLY
        attributeArray[3] = false;// Char wears CAPE
        attributeArray[4] = false;// Char is MARVEL
        attributeArray[5] = false;// Char has SUPER POWERS
        attributeArray[6] = false;// Char is X-MAN
        attributeArray[7] = false;// Char is AVENGER
        attributeArray[8] = false;// Char is GUARDIAN
        attributeArray[9] = false;// Char is JUSTICE LEAGUE
        attributeArray[10] = false;// Char wears MASK
        attributeArray[11] = false;// Char wears RED
        attributeArray[12] = true;// Char wears BLACK
        attributeArray[13] = false;// Char is RICH
        attributeArray[14] = true;// Char knows MARTIAL ARTS
        attributeArray[15] = false;// Char is GENIUS
        attributeArray[16] = false;// Char has SUPER STRENGTH
        attributeArray[17] = true;// Char uses MAGIC
        attributeArray[18] = false;// Char uses TECH
        attributeArray[19] = false;// Char has SECRET IDENTITY
    }

    /*
     * default character initialization: start
     */



    else {
        /*
         *receives character info from external file: start
         */

        superTextFile += ".txt";
        string str;
        ifstream infile(superTextFile,
                        ios::in); // test.text must be located in "C:\Users\Brock\CLionProjects\projectName\cmake-build-debug"

        if (infile.is_open()) {
            int linecounter = 1;
            while (getline(infile, str)) { // returns null when it reaches an empty line in the file
                if (linecounter == 1) {
                    name = str;
                } else {
                    if (str.find("true") != -1) { // statement is entered if "true" is on current line
                        attributeArray.push_back(true);
                    } else if (str.find("false") != -1) { // statement is entered if "false" is on current line
                        attributeArray.push_back(false);
                    } else if (str == "}") {
                        return;
                    } else {
                        cout << "error: bool variable incorrect at line " << linecounter << " of " << name;
                    }
                }
                linecounter++;
            }
            infile.close();
        } else {
            cout << "Error adding character, no input file found: " << superTextFile << " ensure character"
                    " name in Character List.txt matches Super Character's file name." << endl;
        }

        /*
         * receives character info from external file: end
         */
    }
}

vector<bool> SuperCharacter::getattributeArray() {
    return attributeArray;
}

void SuperCharacter::increaseCertainty() {
    certainty++;
}
