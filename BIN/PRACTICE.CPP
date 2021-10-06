#include <conio.h>
#include <iostream.h>
#include <fstream.h>
#include <iomanip.h>
#include <stdio.h>
#include <stdlib.h>

ifstream inData;
ofstream outData;

const int cols = 2;
const int rows = 12;



void getData(int listTemp[rows][cols])
{
	int r; //for rows
	int c; //for columns

	for (r = 0; r < rows; r++)
	{
		for (c = 0; c < cols; c++)
		{
			inData >> listTemp[c][r] >> listTemp[c][r];
		}
	}
}

void averageHigh(int listTemp[rows][cols])
{
	int highSum = 0;
	double highAverage;	   

	for (int i = 0; i < rows; i++)
	{
		highSum = listTemp[i][0] + highSum;		 
	}
	highAverage = highSum / rows;
	outData << "Average high for the year: " << highAverage << endl << endl;
}

void averageLow(int listTemp[rows][cols])
{
	int lowSum = 0;
	double lowAverage;

	for (int i = 0; i < rows; i++)
	{
		lowSum = listTemp[i][0] + lowSum;
	}
	lowAverage = lowSum / rows;
	outData << "Average low for the year: " << lowAverage << endl << endl;
}

void indexHighTemp(int listTemp[rows][cols])
{
	int highestIndex = 1;

	for (int i = 0; i < rows; i++)
	{
		if (listTemp[0][i] > highestIndex)
			highestIndex = listTemp[0][i];
	}
	outData << "The index high temperature is " << highestIndex << endl << endl;
}

void indexLowTemp(int listTemp[rows][cols])
{
	int lowestIndex = 0;

	for (int i = 0; i < rows; i++)
	{
		if (lowestIndex > listTemp[0][i])
		{
			lowestIndex = listTemp[0][i];
		}
	}
	outData << "The index low temperature is " << lowestIndex << endl << endl;
}

void main()
{
        
void getData(int listTemp[rows][cols]);
void averageHigh(int listTemp[rows][cols]);
void averageLow(int listTemp[rows][cols]);
void indexHighTemp(int listTemp[rows][cols]);
void indexLowTemp(int listTemp[rows][cols]);

	int listTemp[rows][cols];

	inData.open("tempsinput.txt");
	if (!inData)
	{
		cout << "No file has been found..." << endl;
		system("pause");
	}

	outData.open("tempsoutput.txt");
	outData << setprecision(2);

	getData(listTemp);
	averageHigh(listTemp);
	averageLow(listTemp);
	indexHighTemp(listTemp);
	indexLowTemp(listTemp);

	inData.close();
	outData.close();

	system("pause");
}