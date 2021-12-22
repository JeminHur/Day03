#include <iostream>
using namespace std;

int main() 
{
	int Height = 0;
	int Base = 0;

	cin >> Height >> Base;

	float Area = (static_cast<float> (Height) * static_cast<float> (Base)) / 2.0f;

	cout << Area << endl;

	return 0;

}