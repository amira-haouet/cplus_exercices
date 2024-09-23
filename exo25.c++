#include <iostream>
#include <string>
using namespace std;

class Vect
{
    int nbElements;
    int *Adresse; // Adresse de la zone dynamique contenant les éléments

public:
    Vect(int taille)
    {
        nbElements = taille;
        Adresse = new int[nbElements]; // Allouer dynamiquement un tableau d'entiers
        for (int i = 0; i < nbElements; ++i)
        {
            Adresse[i] = 0;
        }
    }

    ~Vect()
    {
        delete[] Adresse;
    }

    int &operator[](int i)
    {
        if (i >= 0 && i < nbElements)
        {
            return Adresse[i];
        }
        else
        {
            cout << "error , out de l'element  " << endl;
        }
    }
};

int main()
{
    Vect vect(5);

    vect[0] = 10;
    vect[1] = 20;
    vect[2] = 30;
    cout << "Élément à l'indice 0: " << vect[0] << endl;
    cout << "Élément à l'indice 1: " << vect[1] << endl;
    cout << "Élément à l'indice 2: " << vect[2] << endl;
    return 0;
}
