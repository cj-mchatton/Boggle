#ifndef BOGGLE_H
#define BOGGLE_H

#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class Boggle
{

	// temporary testing code, a static board, not randomly generated.
	char uniqueBoggleBoard[4][4] = {
		{'A', 'A', 'T', 'E'},
		{'A', 'A', 'G', 'D'},
		{'A', 'A', 'B', 'S'},
		{'A', 'A', 'V', 'C'}
	};

	string* storedLexicon = new string[83000];

	int score = 0 ;

public:
	Boggle();

	~Boggle() 
	{
		delete[] storedLexicon;
	}

//Boggle(string lexicon, string boardText);


//char getLetter(int row, int col);

//	//This method checks whether the given word string is suitable to search 
//	//for: that is, whether it is in the dictionary, long enough to be 
//	//a valid Boggle word, and has not already been found. It returns 
//	//a Boolean result of true if the word is suitable, false otherwise. 
//	//This method is case-insensitive; it verifies the word whether it 
//	//is passed in upper, lower, or mixed case.
//	bool checkWord(string word);

bool humanWordSearch(string word);

//	//This method performs a search on the board for all words that can 
//	//be formed(that have not already been found by the human player) 
//	//and returns them as an array of strings.This method uses 
//	//recursive backtracking.Though like the human search, it is 
//	//different because it looks for ALL words; therefore, its 
//	//code should be implemented separately from humanWordSearch.
//	//The words in this set should be all uppercase.
//	//This is the search that you will time chrono.
//	string* computerWordSearch();
//
//	//This method returns the total number of points the human player 
//	//has scored in the game so far as an integer.This total is 
//	//0 when the game begins, but whenever a successful human word 
//	//search is performed, points for that word are added to the 
//	//human's total score.
//	int getScoreHuman();
//
//	//This method returns the total number of points the computer
//	//player has scored in the game as an integer.This total is 
//	//initially 0 when the game begins, but after a computer 
//	//word search is performed, all points for those words 
//	//are added to the computer's total score.
//	int getScoreComputer();
//
//	//This method prints a Boggle object to the console. 
//	//The operator should print only the 4x4 grid of 
//	//characters representing the board as four lines 
//	//of text. It should print the board text in all uppercase.
//	ostream& operator<< (ostream& stream);

bool exist(char board[4][4], string word);
};

#endif
