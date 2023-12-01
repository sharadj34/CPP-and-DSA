/* EXAMPLE 1 */
#include <iostream>
using namespace std;

#define PI 3.14

int main()
{
    int r = 5;
    double area  = PI * r * r;

    cout << "Area is " << area << endl;

    return 0;
}


/* EXAMPLE 2 */
#include <iostream>
using namespace std;

// Macro definition
#define AREA(l, b) (l * b)

// Driver Code
int main()
{
	// Given lengths l1 and l2
	int l1 = 10, l2 = 5, area;

	// Find the area using macros
	area = AREA(l1, l2);

	// Print the area
	cout << "Area of rectangle" << " is: "<< area;

	return 0;
}
