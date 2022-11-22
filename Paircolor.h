
#ifndef PAIR_COLOR_H_
#define PAIR_COLOR_H_

typedef enum {
	WHITE, 
	RED, 
	BLACK, 
	YELLOW, 
	VIOLET
	}En_MajorColor;

typedef enum {
	BLUE, 
	ORANGE, 
	GREEN, 
	BROWN, 
	SLATE
	}En_MinorColor;

typedef struct {
   En_MajorColor majorColor;
   En_MinorColor minorColor;
} St_ColorPair;


void ColorPairToString(const St_ColorPair* colorPair, char* buffer);
St_ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const St_ColorPair* colorPair);