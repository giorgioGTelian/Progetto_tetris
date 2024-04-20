#ifndef CONSTANTS_H
#define CONSTANTS_H

#define GAMEINFO	"game rules"
#define GAME_TITLE	"TETRIS GIO"
#define LEN_GAME_TITLE	11

#define TWIN_HEIGHT	24
#define TWIN_WIDTH	23

#define IWIN_HEIGHT	24
#define IWIN_WIDTH	23

#define DWIN_HEIGHT	24
#define DWIN_WIDTH	23

#define BOARD_HEIGHT	22
#define BOARD_WITH	20

#if USE_1X2_BLOCK == 1
	#undef BOARD_WITH
	#define BOARD_WITH 	10
	#define DRAW_WIDTH	20
#endif

#define W_KEY			119
#define A_KEY			97
#define S_KEY			115
#define D_KEY			100

#define ROTATIONS		4
#define TIME_PER_TICK		50
#define	INITIAL_LEVEL		15

#define BLOCK_SHAPE_COUNT	7
#define BLCOK_WIDTH		4
#define BLOCK_WIDTH_SQR		16


