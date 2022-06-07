#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Boggle.h"

using std::string;
using std::ios;
using std::fstream;
using std::cout;
using std::endl;
using namespace std;

Boggle::Boggle()
{
    ///----Section One: IO stuff ------///
    string inString;
    fstream inFile;
    inFile.open("boggle.txt", ios::in);
    if (inFile.is_open())
    {
        int i = 0;
        while (getline(inFile, inString))
        { 
            //cout << inString << endl;
            storedLexicon[i] = inString; // store whole lexicon line by line
            i++;
        }
        inFile.close();
    }

    ///----Section Two: ------///
    //this is used to choose one letter randomly from each group of 6
    char lettersToPickFrom[16][7] = {
        "AAEEGN", "ABBJOO", "ACHOPS", "AFFKPS",
        "AOOTTW", "CIMOTU", "DEILRX", "DELRVY",
        "DISTTY", "EEGHNW", "EEINSU", "EHRTVW",
        "EIOSST", "ELRTTY", "HIMNQU", "HLNNRZ"
    };

    //char BoggleBoard[4][4]; //changed to a string from char.
    srand(time(0));

    //check string boardText for length. boardText will be a given parameter, 
    //if (boardText.length() != 16)
    //{
    //    cout << "error";
    //}

    ///--This code temporarily commented out to test a static board below.--///
    // creating a unique boggle board from the available letters to play on
    /*for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            uniqueBoggleBoard[i][j] = lettersToPickFrom[i][rand() % 6];
        }
    }*/

    //print out the boggle board here
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << uniqueBoggleBoard[i][j] << endl << endl ;
        }
    }

    ////store the new boggle board in our boggle class.
    //uniqueBoggleBoard = BoggleBoard;
    string lexiconWordDictionary;
}

//cameron
//Boggle::Boggle(string lexicon, string boardText) {}

//--------This is just some reminders for how to work with strings----------//
//Accessing individual characters. Using square brackets, you can access individual
//characters within a string as if it�s a char array.Positions within a string str are
//numbered from 0 through str.length() - 1. You can read and write to characters
//within a string using[].
//str.substr(start, length);
//str1.insert(start, str2);
//str1.replace(start, length, str2);
//https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1132/handouts/08-C++-Strings.pdf

//cameron
//char Boggle::getLetter(int row, int col)
//{
//    //cout << uniqueBoggleBoard[row][col];
//    return uniqueBoggleBoard[row][col];
//}

//cameron
//bool Boggle:: checkWord(string word)
//{
// //check word:
// 
// // if word exists...
// 
// score = str.length - 4 // 1 point for 5 letter word, 2 points for 6 letters etc.
// 
//}


//Logan
bool Boggle:: humanWordSearch(string word)
{
    return exist(uniqueBoggleBoard, word);

 //update score here 
 //1 point for 5 letter word, 2 points for 6 letters etc.
 //score = str.length - 4;
    //return true;
    
}

//Cameron
// calculates all possible words
string* Boggle:: computerWordSearch()
{
}

//Cameron
// returns the human's score
int Boggle:: getScoreHuman()
{
    return humanScore;
}

//Cameron
// returns the computer's score
int Boggle:: getScoreComputer()
{
    return computerScore;
}

//Cameron
// prints boggle board to the console
ostream &Boggle::operator<< (ostream& stream)
{
    stream << uniqueBoggleBoard;
    return stream;
}

///---------This is for recursive search---------///
//helper function
void searchWord(const string& word,
    string currentWord,
    char board[][4],
    int index,
    int i,
    int j,
    bool& foundMatch)
{
    if (currentWord.size() == word.size())
    {
        foundMatch = true;
        return;
    }

    if (i < 0 or j < 0 or i >= 4 or j >= 4 or
        board[i][j] != word[index] or foundMatch)
        return;

    currentWord += word[index];
    char temp = board[i][j];
    board[i][j] = ' ';

    searchWord(word, currentWord, board, index + 1, i + 1, j, foundMatch);
    searchWord(word, currentWord, board, index + 1, i - 1, j, foundMatch);
    searchWord(word, currentWord, board, index + 1, i, j + 1, foundMatch);
    searchWord(word, currentWord, board, index + 1, i, j - 1, foundMatch);

    board[i][j] = temp;
}

//recursive search, used in humanWordSearch and computerWordSearch
bool Boggle::exist(char board[4][4], string word) {
    // I can have a class method to ensure that the board has been initialized
    if (word.empty()) //or uniqueBoggleBoard.empty())
        return false;
    bool foundMatch = false;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
        {
            if (board[i][j] == word[0]) // hit first letter
                searchWord(word, {}, board, 0, i, j, foundMatch);

            if (foundMatch)
                return foundMatch;
        }
    return foundMatch;
}
