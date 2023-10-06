#include <iostream>

#define NMAX 32

using namespace std;

int main()
{
	int n, S[NMAX], i;

	cout << "n = "; cin >> n;

	for (i = 1; i <= n; i++)
	{
		S[i] = 0;
	}

	while (1)
	{
		// afisam configuratia curenta
		
		for (i = 1; i <= n; i++)
		{
			if (S[i])
			{
				cout << i << ' ';
			}
		}

		cout << '\n';

		// generam configuratia urmatoare prin adunare binara
		
		for (i = n; i > 0 && S[i]; i--)
		{
			S[i] = 0;
		}		

		if (i == 0)
		{
			break; // ultima configuratie
		}
		else
		{
			S[i] = 1;
		}
	}

	return 0;
}
