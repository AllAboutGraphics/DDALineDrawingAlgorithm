#include <iostream>
#include "DDALineAlgo.h"

int main()
{
	TwoDimentionalCoordinates startingPoint(4, 2);
	TwoDimentionalCoordinates endingPoint(12, 10);
	DDALineAlgo ddaLineAlo(startingPoint, endingPoint);
	return 0;
}