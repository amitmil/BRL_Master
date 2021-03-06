// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once


#include <iostream>
#include <Windows.h>
#include <tchar.h>

#include <assert.h>

#include <cstdio>
#include <cassert>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#include <HD/hd.h>
#include <HDU/hduVector.h>
#include <HDU/hduMatrix.h>
#include <HDU/hduError.h>
#include <time.h>

// TODO: reference additional headers your program requires here

const double rotRate = -3.14159 /10000;
const double cosRot = cos(rotRate);
const double sinRot = sin(rotRate);

const hduMatrix rotXMx( 1, 0, 0, 0,
						0, cosRot, -sinRot, 0,
						0, sinRot, cosRot, 0,
						0, 0, 0, 1);
const hduMatrix rotYMx( cosRot, 0, -sinRot, 0,
						0, 1, 0, 0,
						sinRot, 0,cosRot,0,
						0, 0, 0, 1);
const hduMatrix rotZMx( cosRot, -sinRot, 0, 0,
						sinRot, cosRot, 0, 0,
						0, 0, 1, 0,
						0, 0, 0, 1);

const hduMatrix rotZIx( 1, 0 , 0, 0,
						0, 1, 0, 0,
						0, 0, 1, 0,
						0, 0, 0, 1);