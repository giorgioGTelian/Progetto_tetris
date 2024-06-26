/*

	constants for bookeeper class 
*/

#ifndef BOOKKEEPER_H
#define BOOKKEEPER_H 

#include "tetris/constants.h"
#include "tetris/types.h"

extern scoreEntry * head;
extern scoreEntry * tail;

#include <string>

using namespace std;

// Returns a formatted std::string given a formatting string and arguments string
// This code is referred directly from https://stackoverflow.com/questions/2342162/stdstring-formatting-like-sprintf
template<typename ... Args>
std::string formatString( const std::string& format, Args ... args );

// Returns a string of local date time
// Format: [ MM/DD HH:MM:SS ]
string getCurrentDateTime();

// Appends a scoreEntry record link list. Receieves a scoreEntry pointer name head and tail
// and the integer of the score
void appendRecordToTable(string currentLocalTimeString, int score);

// Prints the player history, given a scoreEntry pointer head.
void showHistory();

// Referred from
// https://www.geeksforgeeks.org/csv-file-management-using-c/
//
// Reads a history in csv format and load that to link list
// Receives head as pointer to first item in record link list, 
// tail as the last item in record link list
// Returns the highest score found in the file if read successfully
// Returns -1 if unable to read the file
int readHistoryFile();

// Writes a text file named HISTORY_FILENAME. Returns true if successful. 
// false if writing is not successful.
bool writeToHistoryTextFile(string dateTimeString, int playerScore);

#endif
