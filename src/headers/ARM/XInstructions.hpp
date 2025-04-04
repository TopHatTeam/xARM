/*
AUTHOR: TOPHATGAMES(ANDREW CONNER SKATZES)
DESCRIPTION: ARM INSTRUCTION LIST 
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <array>

using namespace std; // makes life easier 

namespace xARM
{
    /*
    *@author TophatGames(Andrew Conner Skatzes)
    *@brief The list of ARM64 assembly instructions
    *@note The use of 'static constexpr' is to save memory. Since these instructions never change
    */
    struct ARM64Instructions
    {
        static constexpr const char* ADD = "ADD";           // ADD
        static constexpr const char* ADC = "ADC";           // ADD WITH CARRY
        static constexpr const char* ADCS = "ADCS";         // ADD WITH CARRY, SETTING FLAGS
        static constexpr const char* ADDG = "ADDG";         // ADD WITH TAG
        static constexpr const char* ADR = "ADR";           // FORM PC-RELATED ADDRESS
        static constexpr const char* ADRP = "ADRP";         // FORM PC-RELATED ADDRESS TO 4KB PAGE
        static constexpr const char* AND = "AND";           // BITWISE AND
        static constexpr const char* ANDS = "ANDS";         // BITWISE AND, SETTING FLAGS
        static constexpr const char* ASR = "ASR";           // ARITHMETIC SHIFT RIGHT
        static constexpr const char* ASRV = "ASRV";         // ARITHMETIC SHIFT RIGHT VARIABLE
        static constexpr const char* AT = "AT";             // ADDRESS TRANSLATE
        static constexpr const char* AUTDA = "AUTDA";       // AUTHENTICATE DATA ADDRESS KEY A
        static constexpr const char* AUTDZA = "AUTDZA";     // AUTHENTICATE DATA ZERO ADDRESS KEY A
        static constexpr const char* AUTDB = "AUTDBA";      // AUTHENTICATE DATA ADDRESS KEY B
        static constexpr const char* AUTDZB = "AUTDZB";     // AUTHENTICATE DATA ZERO ADDRESS KEY B 
        static constexpr const char* B = "B";               // BRANCH
        static constexpr const char* SUB = "SUB";           // SUBSTRACT
    };

    class XInstructions
    {
    public:

    private:
        /*
        *@note An Vector array of characters explains the use of 'vector<char>'
        *@brief This is used to give array of character aka instructions
        */
        vector<char> instructions;
    };
}/*
AUTHOR: TOPHATGAMES(ANDREW CONNER SKATZES)
DESCRIPTION: ARM INSTRUCTION LIST 
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <array>

using namespace std; // makes life easier 

namespace xARM
{
    /*
    *@author TophatGames(Andrew Conner Skatzes)
    *@brief The list of ARM64 assembly instructions
    *@note The use of 'static constexpr' is to save memory. Since these instructions never change
    */
    struct ARM64Instructions
    {
        //TODO
        static constexpr const char* ADD = "ADD";           // ADD
        static constexpr const char* ADC = "ADC";           // ADD WITH CARRY
        static constexpr const char* ADCS = "ADCS";         // ADD WITH CARRY, SETTING FLAGS
        static constexpr const char* ADDG = "ADDG";         // ADD WITH TAG
        static constexpr const char* ADR = "ADR";           // FORM PC-RELATED ADDRESS
        static constexpr const char* ADRP = "ADRP";         // FORM PC-RELATED ADDRESS TO 4KB PAGE
        static constexpr const char* AND = "AND";           // BITWISE AND
        static constexpr const char* ANDS = "ANDS";         // BITWISE AND, SETTING FLAGS
        static constexpr const char* ASR = "ASR";           // ARITHMETIC SHIFT RIGHT
        static constexpr const char* ASRV = "ASRV";         // ARITHMETIC SHIFT RIGHT VARIABLE
        static constexpr const char* AT = "AT";             // ADDRESS TRANSLATE
        static constexpr const char* AUTDA = "AUTDA";       // AUTHENTICATE DATA ADDRESS KEY A
        static constexpr const char* AUTDZA = "AUTDZA";     // AUTHENTICATE DATA ZERO ADDRESS KEY A
        static constexpr const char* AUTDB = "AUTDBA";      // AUTHENTICATE DATA ADDRESS KEY B
        static constexpr const char* AUTDZB = "AUTDZB";     // AUTHENTICATE DATA ZERO ADDRESS KEY B 
        static constexpr const char* B = "B";               // BRANCH
        static constexpr const char* SUB = "SUB";           // SUBSTRACT
    };

    class XInstructions
    {
    public:

    private:
        /*
        *@note An Vector array of characters explains the use of 'vector<char>'
        *@brief This is used to give array of character aka instructions
        */
        vector<char> instructions;
    };
}
