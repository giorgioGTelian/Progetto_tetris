/*

	constants for the block.cpp file
 
*/

#ifndef BLOCKS_H
#define BLOCKS_H

#include <string>
#include <vector>
#include "tetris/constants.h"
#include "tetris/types.h"

using namespace std;

// Receives a string array of BLOCK_SHAPE_COUNT length 
// Fills all available variations of blocks into blocks[]
void getBlocksReady(string blocks[BLOCK_SHAPE_COUNT]);

// The idea of implementing rotation through index functions
// are from https://youtu.be/8OK8_tHeCIA
// Returns the remapping index of rotating a block String
// from original index (integer i) and angle of rotation (integer mode)
// Angle of rotation = 90*mode
int rotateBlock(int i, int mode);

// Returns a rotated copy of 16-character string blockContent
// int rotation: mode of rotation, angle to rotate = 90*mode
// blockString bString: 16-character string to be rotated
blockString rotateBlock(int rotation, blockString bString);

// Converts the blockString to integer array to be embedded
// into gameboard
blockMatrix convertToBlockMatrix(block blockShape, int blockNum);

// Take in a 16-character blockString and then convert to an block object
// blockString bString: The blockString to be converted
block convertBlockStringToBlockObj(blockString bString);

#endif
