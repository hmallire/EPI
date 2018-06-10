#include "../Headers/primitive.h"

#include "../EPI.h"

namespace Primitive
{

	//See https://www.geeksforgeeks.org/orientation-3-ordered-points/ for details
	void FindOrientation(Point p1, Point p2, Point p3, ORIENTATION* ortn)
	{
		int val = (p2.y - p1.y)*(p3.x - p2.x) - (p3.y - p2.y)*(p2.x - p1.x);
		if (val == 0)
			*ortn = COLLINEAR;
		else if (val > 0)
			*ortn = CLOCKWISE;
		else
			*ortn = ANTI_CLOCKWISE;
	}
}	//namespace Primitive