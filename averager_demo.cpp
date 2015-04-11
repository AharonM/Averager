#include <iostream>
#include <fstream>
#include "integer.h"
const int SIZE=100;

using namespace std;

int main() {
	Integer n,result;
	Integer arr[SIZE];
	ifstream infile("input.txt");
	int x=0;
	
	while(infile >> n && n.getVal() > 0)
	{	
		arr[x] = n;
		x++;
	}
	
	for(int i=0; i<x;i++)
	{
		result += arr[i];
	}
	
	cout << "Integer Average: " << result/x << endl;
	return 0;
}
