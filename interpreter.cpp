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

string OpenFileReturnAllLines(string);

int main()
{
    string FileName, AllLines;
    cout << "Select file to read : ";

    getline(cin, FileName);
    AllLines = OpenFileReturnAllLines(FileName);
    cout << AllLines;
    return 0;
}

string OpenFileReturnAllLines(string FileName)
{
    string Line, AllLines;
    ifstream InputFile;

    InputFile.open(FileName); /*Opens the file according to user's input*/
    if (!InputFile)
    {
        cout << "No file found!" << endl;
        InputFile.close(); /*Closes file*/
        return "";
    }
    else
    {
        cout << "File found." << endl;
    };

    int count = 0;
    while (getline(InputFile, Line))
    { /*Loops through the file and gets lines from file.*/
        count++;
        cout << count << ". " << Line << endl;
        AllLines += Line; /*Tentatively appends all the lines to the a single string */
    };
    InputFile.close(); /*Closes file*/
    return AllLines; /*Returns string containing full contents of the file*/
};