#include <iostream>
#include <fstream>
#include <string>
#include "Boggle.h"

using std::string;
using std::ios;
using std::fstream;
using std::cout;
using std::endl;
using namespace std;

Boggle::Boggle()
{
    string inString;
    fstream inFile;
    inFile.open("boggle.txt", ios::in);

    //int numberOfWords = 1;
    //string storedLexicon[83000];

    if (inFile.is_open())
    {
        int i = 0;
        while (getline(inFile, inString))
        { 
            //cout << inString << endl;
            storedLexicon[i] = inString;
            i++;
        }
        inFile.close();
    }
    
    //cout << storedLexicon << endl; //testing

    ///----Section Two: ------///
    //this is given in the boggle document, when making 
    //a new board this is used to choose one letter randomly from each group of 6
    char lettersToPickFrom[16][7] = {
        "AAEEGN", "ABBJOO", "ACHOPS", "AFFKPS",
        "AOOTTW", "CIMOTU", "DEILRX", "DELRVY",
        "DISTTY", "EEGHNW", "EEINSU", "EHRTVW",
        "EIOSST", "ELRTTY", "HIMNQU", "HLNNRZ"
    };

    string BoggleBoard[16]; //changed to a string from char.
    srand(time(0));

    ///----Section Create a unique board if one isnt given: ------///
    //check string boardText for length. boardText will be a give parameter, 
    //if (boardText.length() != 16)
    //{
    //    cout << "error";
    //}

    // creating a unique boggle board from the available letters to play on
    for (int i = 0; i < 16; i++){
        BoggleBoard[i] = lettersToPickFrom[i][rand() % 6];}

    //print out the boggle board here
    for (int i = 0; i < 16; i++) {
        cout << BoggleBoard[i];
        i++;
        cout << BoggleBoard[i];
        i++;
        cout << BoggleBoard[i];
        i++;
        cout << BoggleBoard[i] << "\n";
    }


    ////store the new boggle board in our boggle class.
    //uniqueBoggleBoard = BoggleBoard;
    
    string lexiconWordDictionary;
}


//Boggle::Boggle(string lexicon, string boardText) {}



//--------This is just some reminders for how to work with strings----------//
//Accessing individual characters. Using square brackets, you can access individual
//characters within a string as if it’s a char array.Positions within a string str are
//numbered from 0 through str.length() - 1. You can read and write to characters
//within a string using[].
//str.substr(start, length);
//str1.insert(start, str2);
//str1.replace(start, length, str2);
//https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1132/handouts/08-C++-Strings.pdf

//logan
//char Boggle:: b.getLetter(int row, int col)
//{
//}

//cameron
//bool Boggle:: b.checkWord(string word)
//{
// //check word:
// 
// // if word exists...
// 
// score = str.length - 4 // 1 point for 5 letter word, 2 points for 6 letters etc.
// 
//}


//logan
//bool Boggle:: b.humanWordSearch(string word)
//{
//
// // if word exists...
// 
// score = str.length - 4
//}

//cameron
//string* Boggle:: b.computerWordSearch()
//{
//}

//logan
//int Boggle:: b.getScoreHuman()
//{
//}

//cameron
//int b.getScoreComputer()
//{
//}

//cameron
//ostream& operator<< (ostream& stream)
//{
//}

///This is the code to print out a formatted boggle board.
//for (int i = 0; i < 16; i++) {
//    cout << BoggleBoard[i];
//    i++;
//    cout << BoggleBoard[i];
//    i++;
//    cout << BoggleBoard[i];
//    i++;
//    cout << BoggleBoard[i] << "\n";
//}
