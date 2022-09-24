#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int vector[100];

	for (int i = 100; i >=1; i=i-1)
	{
		vector[i] = i;
		cout << vector[i] << endl;
	}

}