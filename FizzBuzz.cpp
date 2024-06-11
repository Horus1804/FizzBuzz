#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Demandez la taille du FizzBuzz
	int taille;
	cout << "Entrez le nombre de FizzBuzz :";
	cin >> taille;

	//ON boucle pour le faire compter de 0 à 100
	for (int i = 1; i < 101; i++)
	{
		//Code compacter
		//Création d'une chaîne de caractère non définie
		string output = "";

		//Si le nombre est divisible par 3 alors on remplace le nombre par "Fizz"
		if (i % 3 == 0) output += "Fizz";

		//Si le nombre est divisible par 5 alors on remplace le nombre par "Buzz"
		if (i % 5 == 0) output += "Buzz";

		//Si aucune des conditions n'est vraie
		if (output == "") output = to_string(i);

		////On fait apparaitre le reste des nombres 
		cout << output << endl;

		/* Code Bon mais pas assez compacte
		//Si le nombre est divisible par 5 et 3 alors on remplace le nombre par "FizzBuzz"
		if (i % 5 == 0 && i % 3 == 0)
		{
			cout << "FizzBuzz" << endl;

		}

		//Si le nombre est divisible par 3 alors on remplace le nombre par "Fizz"

		else if (i % 3 == 0)
		{
			cout << "Fizz" << endl;

		}

		//Si le nombre est divisible par 5 alors on remplace le nombre par "Buzz"

		else if (i % 5 == 0)
		{
			cout << "Buzz" << endl;

		}

		//On fait apparaitre le reste des nombres 
		else
		{
			cout << i << endl;
		}*/
	}

	return 0;
}