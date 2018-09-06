// Matrix Screensaver
// Copyright (c) J Brown 2003 (catch22.net)
// Copyright (c) 2011-2018 Henry++

#ifndef __MAIN_H__
#define __MAIN_H__

#include <windows.h>
#include <commctrl.h>
#include "resource.hpp"
#include "app.hpp"

// config
typedef unsigned int GLYPH;

#define GLYPH_REDRAW 0x8000
#define GLYPH_BLANK 0x4000

#define DENSITY 25
#define DENSITY_MAX 50
#define DENSITY_MIN 5

// constants inferred from matrix.bmp
#define MAX_INTENSITY 5 // number of intensity levels
#define NUM_GLYPHS 26 // number of "glyphs" in each level
#define GLYPH_WIDTH 14 // width  of each glyph (pixels)
#define GLYPH_HEIGHT 14 // height of each glyph (pixels)

#define SPEED_MAX 10
#define SPEED_MIN 1
#define SPEED 8

#define HUE 100

//
//	The "matrix" is basically an array of these
//  column structures, positioned side-by-side
//
typedef struct
{
	BOOL	state;
	int		countdown;

	BOOL	started;
	int		runlen;

	int		blippos;
	int		bliplen;

	int		length;
	GLYPH	*glyph;

} MATRIX_COLUMN;

typedef struct
{
	int				width;
	int				height;
	int				numcols;
	int				numrows;

	// bitmap containing glyphs.
	HDC				hdcBitmap;
	HBITMAP			hbmBitmap;

	MATRIX_COLUMN	column[1];

} MATRIX;

#endif // __MAIN_H__
