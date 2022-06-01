// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "Boggle.h"
using namespace std;

///----This file will not exist. Main is the BoggleWords.cpp file (i think)----///////
int main()
{
    string testString = "AAGD";
    Boggle b1;
    //b1.getLetter(1, 1);
    
    
    if (b1.humanWordSearch(testString) == true)
    {
        cout << "The board contains the word.";
    }
    else
    {
        cout << "The board does not contain the word.";
    }
    return 0;

}
