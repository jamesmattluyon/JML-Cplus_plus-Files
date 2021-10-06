#include <iostream>
using namespace std;

int main()
{
	int array[2][3][2] = {     { {2,1},{5,6},{9,11}  }, 
	                           { {3,4},{8,7},{10,12} }
	                     };
	
	for ( int i = 0; i < 2 ; i++)
	{
		cout << "Numbers: ";
		for (int j = 0; j < 3; j++)
		{
			for(int h = 0; h < 2; h++)
			{
				cout<< array[i][j][h] << " ";
			}
		}
		cout<< endl;
	}
	system("pause");
	return 0;
}
