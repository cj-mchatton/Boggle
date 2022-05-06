// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Boggle.h"

using namespace std;
// math



///----This file will not exist. Main is the BoggleWords.cpp file (i think)----///////
int main()
{

    //check string boardText for length.
    //if (boardText.length() != 16)
    //{
    //    cout << "error";
    //}
    
    //string uniqueBoggleBoard;
    //string lexiconWordDictionary;

    char lettersToPickFrom[16][7] = {
        "AAEEGN", "ABBJOO", "ACHOPS", "AFFKPS",
        "AOOTTW", "CIMOTU", "DEILRX", "DELRVY",
        "DISTTY", "EEGHNW", "EEINSU", "EHRTVW",
        "EIOSST", "ELRTTY", "HIMNQU", "HLNNRZ"
    };

    string boggleBoard[16]; //changed to a string from char.
    srand(time(0));

    // Printing Strings stored in 2D array
    for (int i = 0; i < 16; i++)
    {
        boggleBoard[i] = lettersToPickFrom[i][rand() % 6];
    }

    //cout << boggleBoard[2] << "\n";
    for (int i = 0; i < 16; i++)
    {
        //std::cout << boggleBoard[i]<< "\n";
        cout << boggleBoard[i] << "\n";
    }
    
    return 0;
}
