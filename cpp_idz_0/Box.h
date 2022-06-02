#pragma once
#include <iostream>
#include <windows.h>

using namespace std;

struct Box
{
	int length;
	int width;
	int height;
	double weight;
	int value;

	Box();

	Box(int, int, int, double, int);

	friend bool equal(const Box&, const Box&);

	friend istream& operator >>(istream&, Box&);

	friend ostream& operator <<(ostream&, const Box&);

};

int sumValue(int n, const Box* const arr);

bool checkSumBox(int n, const Box* const arr, int param);

double maxWeight(int n, const Box* const arr, int maxV);

