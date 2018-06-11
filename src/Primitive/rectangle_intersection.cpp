#include "../Headers/primitive.h"

namespace Primitive
{
	//
	// Any rectangle can be represented by two points: top left and bottom right point
	//
	//  * _______
	//   |		 |
	//   |		 |
	//   |_______|
	//			  *
	//			  
	//
	// Given two rectangles find the intersection of them, if it exists
	//

	void RectangleIntersection(Point l1, Point r1, Point l2, Point r2, Point* l3, Point* r3, bool* intersect)
	{
		*intersect = false;
		isIntersect(l1, r1, l2, r2, intersect);

		if(intersect)
		{
			if(l1.x <= l2.x && l1.y >= l2.y)
			{
				l3->x = l2.x;
				l3->y = l2.y;
			}
			else if(l2.x <= l1.x && l2.y >= l1.y)
			{
				l3->x = l1.x;
				l3->y = l1.y;
			}
			else if (l1.x >= l2.x && l1.y >= l2.y)
			{
				l3->x = l1.x;
				l3->y = l2.y;
			}
			else
			{
				l3->x = l2.x;
				l3->y = l1.y;
			}

			if (r1.x <= r2.x && r1.y >= r2.y)
			{
				r3->x = r1.x;
				r3->y = r1.y;
			}
			else if (r2.x <= r1.x && r2.y >= r1.y)
			{
				r3->x = r2.x;
				r3->y = r2.y;
			}
			else if (r1.x <= r2.x && r1.y <= r2.y)
			{
				r3->x = r1.x;
				r3->y = r2.y;
			}
			else
			{
				r3->x = r1.x;
				r3->y = r2.y;
			}
		}

	}

	void isIntersect(Point l1, Point r1, Point l2, Point r2, bool* res)
	{
		if(r1.x < l2.x || r2.x < l1.x)
		{
			*res = false;
			return;
		}
		if(l1.y < r2.y || l2.y < r1.y)
		{
			*res = false;
			return;
		}
		
		// what if one rect lies inside other? -- This case is also considered as intersection
		
		/*if((((l2.x > l1.x) && (r2.x < r1.x)) && ((l2.y < l1.y) && (r2.y > r1.y))) 
			|| (((l1.x > l2.x) && (r1.x < r2.x)) && ((l1.y < l2.y) && (r1.y > r2.y))))
		{
			*res = false;
			return;
		}*/

		*res = true;
		return;
	}
}
