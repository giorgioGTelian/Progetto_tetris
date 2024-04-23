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
	//create blocks 
	// The blocks arrangements and implementation ideas 
        // are from https://youtu.be/8OK8_tHeCIA

	arrayBloc[0] = SHAPE_0;
	arrayBloc[1] = SHAPE_1;
	arrayBloc[2] = SHAPE_2;
	arrayBloc[3] = SHAPE_3;
	arrayBloc[4] = SHAPE_4;
	arrayBloc[5] = SHAPE_5;
	arrayBloc[6] = SHAPE_6;
}
// The idea of implementing rotation through index functions
// are from https://youtu.be/8OK8_tHeCIA
// Returns the remapping index of rotating a block String
// from original index (integer i) and angle of rotation (integer mode)
// Angle of rotation = 90*mode
int rotateBloc(int i, int mode) {
	switch (mode) {
		case 0:
			i = 1;
			break;
		case 1: // 90 degrees
			i = 12 - 4(i % 4) + (i / 4);
			break;
}
}
