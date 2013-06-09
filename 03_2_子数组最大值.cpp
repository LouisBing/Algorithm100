#include <iostream>
using namespace std;

void MaxSubArray(int array[], int count)
{
	int Max, Maxi, Maxj;
	int subMax, subMaxi, subMaxj;
	int sum;
	//—≠ª∑≥ı ºªØ
	Max = subMax = array[0];
	Maxi = Maxj = subMaxi = subMaxj = 0;
	sum = 0;

	for (int i=0; i<count; i++)
	{
		sum += array[i];
		if (sum>0)
		{
			if (sum>Max)
			{
				Max = sum;
				Maxi = subMaxi;
				Maxj = i;
			}
		}
		else
		{
			if (sum>Max)
			{
				Max = sum;
				Maxi = subMaxi;
				Maxj = i;
			}
			subMaxi = i+1;
			sum = 0;
		}
	}
	cout << "Max="  << Max << endl;
	cout << "i=" << Maxi << endl;
	cout << "j=" << Maxj << endl;
}

int main()
{
 	int a[] = {1,-1,-1,1,1,-1,1,1,1,-1};
// 	int a[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
// 	int a[] = {-1,1,-1,-1,-1,-1,1,1,1,1};
// 	int a[] = {-1,-1,-1,1,1,1,1,-1,-1,1};
// 	int a[] = {1,-2,3,10,-4,7,2,-5,0,0};
//	int a[] = {-6,-4,-6,-2,-1,-9,-1,-1,-1,-1};

	MaxSubArray(a, 10);

	getchar();
	return 0;
}