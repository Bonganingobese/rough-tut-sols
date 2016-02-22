#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 20; ++i)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			cout << "fizz" << endl;
		}
		else if (i % 5 == 0 && i % 3 != 0)
		{
			cout << "fuzz" << endl;
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "fizz-fuzz" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}
	system("pause");
}
