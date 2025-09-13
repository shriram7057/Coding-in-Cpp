// pyramid pattern using for loop left half:
#include <iostream>
using namespace std;

int main()
{

	int rows = 5;
	for (int i = rows; i > 0; i--) 
    {
		for (int j = 0; j <= rows; j++) 
        { 
			if (j >= i) 
            {
				cout << "*";
			}
			else 
            {
				cout << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}

