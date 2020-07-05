#include <iostream>
using namespace std;

void main()
{
	int i = 3;
	i += i++ + 1 + (++i *= 2);
	cout << i << endl;

	/*int j = 3;
	j = j + j++ + 1 + ++j * 2;
	cout << j << endl;*/
}