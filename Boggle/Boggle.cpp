#include <string>
#include <iostream>
#include "Boggle.h"
#include <fstream>
using namespace std;





Boggle::Boggle(fstream lexicon, string boardText) 
{
    //string uniqueBoggleBoard = boardText;
    //string lexiconWordDictionary = lexicon;

    //Tyler said:
    // "For the fstream _lexicon, I couldn't get it to work 
    // using an fstream variable. I instead passed a string 
    // with the file name and in the constructor I also 
    // created a dictionary that is holding all of the words 
    // in the text file"
    
    //using fstream for boggle ctor
    //std::fstream myFile; myFile.open("boggle.txt");
    //std::string myString;
    //if (myFile.is_open()) { // always check whether the file is open
    //    myFile >> myString; // pipe file's content into stream
    //    std::cout << myString; // pipe stream's content to standard output
    //}
    //
    //if (myFile.is_open()) {
    //    while (myFile.good()) {
    //        myFile >> myString;
    //        std::cout << myString;
    //    }
    //}


    ////check string boardText for length.
    //if (boardText.length() != 16)
    //{
    //    cout << "error";
    //}
    //
    


    //char lettersToPickFrom[16][7] = {
    //    "AAEEGN", "ABBJOO", "ACHOPS", "AFFKPS",
    //    "AOOTTW", "CIMOTU", "DEILRX", "DELRVY",
    //    "DISTTY", "EEGHNW", "EEINSU", "EHRTVW",
    //    "EIOSST", "ELRTTY", "HIMNQU", "HLNNRZ"
    //};

    //string boggleBoard[16]; //changed to a string from char.
    //srand(time(0));

    //// Printing Strings stored in 2D array
    //for (int i = 0; i < 16; i++)
    //{
    //    boggleBoard[i] = lettersToPickFrom[i][rand() % 6];
    //}

    ////cout << boggleBoard[2] << "\n";
    //for (int i = 0; i < 16; i++)
    //{
    //    //std::cout << boggleBoard[i]<< "\n";
    //    cout << boggleBoard[i] << "\n";
    //}
}


//--------This is just some reminders for how to work with strings----------//
//Accessing individual characters. Using square brackets, you can access individual
//characters within a string as if it’s a char array.Positions within a string str are
//numbered from 0 through str.length() - 1. You can read and write to characters
//within a string using[].
//str.substr(start, length);
//str1.insert(start, str2);
//str1.replace(start, length, str2);
//https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1132/handouts/08-C++-Strings.pdf



//char Boggle:: b.getLetter(int row, int col)
//{
//}

//bool Boggle:: b.checkWord(string word)
//{
//}

//bool Boggle:: b.humanWordSearch(string word)
//{
//
//}

//
//string* Boggle:: b.computerWordSearch()
//{
//}

//int Boggle:: b.getScoreHuman()
//{
//}

//int b.getScoreComputer()
//{
//}

//ostream& operator<< (ostream& stream)
//{
//}