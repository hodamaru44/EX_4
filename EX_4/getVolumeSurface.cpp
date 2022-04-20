#include "getVolumeSurface.h"

double getVolumeSurface(double width, double height, double depth,double *surface,double *volume)
{
    *surface = 2 * (width * height + height * depth + depth * width);
	*volume = width * height * depth;
	return 0;
}