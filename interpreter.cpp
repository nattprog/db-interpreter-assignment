// *********************************************************
// Program: YOUR_FILENAME.cpp
// Course: CCP6114 Programming Fundamentals
// Lecture Class: TC5L
// Tutorial Class: TT9L
// Trimester: 2430
// Member_1: ID | NAME | EMAIL | PHONE
// Member_2: ID | NAME | EMAIL | PHONE
// Member_3: ID | NAME | EMAIL | PHONE
// Member_4: 243UC247BM | BONG WEI QIANG, NATHANIEL | BONG.WEI.QIANG@STUDENT.MMU.EDU.MY | +6011-6111-2440
// *********************************************************
// Task Distribution
// Member_1:
// Member_2:
// Member_3:
// Member_4:
// *********************************************************

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void OpenFile();

int main()
{
    OpenFile();
    return 0;
}

void OpenFile(){
    string FileName, Line, AllLines;
    ifstream InputFile;
    cout << "Select file to read : ";
    getline(cin, FileName);
    InputFile.open(FileName); /*Opens the file according to user's input*/

    if (!InputFile) {
        cout << "No file found!" << endl;
    } else {
        cout << "File found." << endl;
    };

    int count=0;
    while (getline(InputFile, Line)) { /*Loops through the file and gets lines from file.*/
        count++;
        cout << count << ". " << Line << endl;
        AllLines += Line; /*Tentatively appends all the lines to the a single string */
    };
    InputFile.close(); /*Closes file*/
};