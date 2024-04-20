#include <ncurses.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
this file is responsable for bloc logic and manipulation

1.	block object ramdomess
2.	block rotation
3.	block color

 */

// Fills all avaible variations of Blocs
void getBlocksReady(){
	int dimensioneArrayBloc = 7;
	int arrayBloc[dimensioneArrayBloc];
	
	// clear garbage in arrayBloc[7]
	for(int i = 0; i < dimensioneArrayBloc; i++) {
		arrayBloc[i] = "";
	}
	
}
