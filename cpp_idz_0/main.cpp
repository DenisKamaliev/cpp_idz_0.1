#include "Box.h"

using namespace std;

int main()
{
	Box box1(3, 5, 8, 2, 10);
	Box box2(8, 1, 2, 4, 100);
	Box box3(1, 8, 8, 3, 15);
	Box box4(5, 2, 5, 8, 20);
	Box box5(8, 2, 7, 7, 150);
	Box arr[5] = { box1, box2, box3, box4, box5 };


	cout << sumValue(5, arr) << " " << checkSumBox(5, arr, 20) << " " << maxWeight(5, arr, 37) << endl;





}