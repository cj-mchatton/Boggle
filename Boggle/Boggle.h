#ifndef BOGGLE_H
#define BOGGLE_H

#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Boggle
{
	//should we have some variables here? like the lexicon and boardText? 
	//So when we create a board they are sotored here?
	string uniqueBoggleBoard[16];
	string* storedLexicon = new string[83000];


	//probably only need one of these.
	int foundWords = 0;// length?
	int score = 0 ;//

public:
	//Ive added this with no parameters to be able to work on it.
	Boggle();

	~Boggle() 
	{
		delete[] storedLexicon;
	}
	//This constructor initializes the Boggle board to use the given dictionary 
	//lexicon to look up words and use the given 16-letter string to initialize
	//the 16 board cubes from top-left to bottom-right. If the string is empty,
	//generate a random shuffled board. This method is case-insensitive; 
	//it accepts the board text whether it is passed in upper, lower, or mixed case.
	//This constructor is considered the parameterized constructor.
	//Boggle(string lexicon, string boardText);

//	//This method returns the character that is stored in the Boggle board at 
//	//the given 0 - based row and column.If the row and /or column are out 
//	//of bounds, throw an exception.
//	char b.getLetter(int row, int col);
//
//	//This method checks whether the given word string is suitable to search 
//	//for: that is, whether it is in the dictionary, long enough to be 
//	//a valid Boggle word, and has not already been found. It returns 
//	//a Boolean result of true if the word is suitable, false otherwise. 
//	//This method is case-insensitive; it verifies the word whether it 
//	//is passed in upper, lower, or mixed case.
//	bool b.checkWord(string word);
//
//	//This method performs a search on the board for an individual word.
//	//If the word can be formed, it is added to the human's set of 
//	//found words. The method returns a Boolean result of whether 
//	//the word can be formed. This method uses recursive backtracking. 
//	//If the word is unsuitable, no recursive search is performed. 
//	//This method is case-insensitive; searches for the word whether 
//	//it is passed in upper, lower, or mixed case.
//	bool b.humanWordSearch(string word);
//
//
//	//This method performs a search on the board for all words that can 
//	//be formed(that have not already been found by the human player) 
//	//and returns them as an array of strings.This method uses 
//	//recursive backtracking.Though like the human search, it is 
//	//different because it looks for ALL words; therefore, its 
//	//code should be implemented separately from humanWordSearch.
//	//The words in this set should be all uppercase.
//	//This is the search that you will time chrono.
//	string* b.computerWordSearch();
//
//	//This method returns the total number of points the human player 
//	//has scored in the game so far as an integer.This total is 
//	//0 when the game begins, but whenever a successful human word 
//	//search is performed, points for that word are added to the 
//	//human's total score.
//	int b.getScoreHuman();
//
//	//This method returns the total number of points the computer
//	//player has scored in the game as an integer.This total is 
//	//initially 0 when the game begins, but after a computer 
//	//word search is performed, all points for those words 
//	//are added to the computer's total score.
//	int b.getScoreComputer();
//
//	//This method prints a Boggle object to the console. 
//	//The operator should print only the 4x4 grid of 
//	//characters representing the board as four lines 
//	//of text. It should print the board text in all uppercase.
//	ostream& operator<< (ostream& stream);
//
};

#endif
