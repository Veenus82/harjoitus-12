/******
*ohjelman nimi: harjoitus 12
*tekija Markus Malm
*Lyhyt kuvaus:
Tee ohjelma, joka kysyy käyttäjältä kokonaisluvun väliltä 1-9 ja
tulostaa vastauksen perusteella seuraavan kuvion (jos vastaus on 6):

1
22
333
4444
55555
666666

Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella:
cout << rivinro;

*versio 1.0
*pvm: 8.10.2014
*/
#include <iostream>
using namespace std;
int main()
{
	int luku;
	int i;
	int j;

	cout << "Anna luku valilta 1-9";
	cin >> luku;

	for (i = 1; i <= luku; ++i)
	{
		cout << endl;
		for (j = 0; j < i; ++j)
		{
			cout << i;
		}
	}
	cout << endl;
	return 0;
}