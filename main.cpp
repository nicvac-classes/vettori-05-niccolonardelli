#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main()
{
   srand(time(0));
   int n, i, somma, superiore;
   float media;
   cout <<"quanti valori ci sono?" << endl;
   cin >> n;
   vector<int>v(n);
   i =0;
   somma = 0;
   while (i<n)
   {
    v[i] = rand()%1001;
    somma = somma + v[i];
    i = i+1;
   }
   media = somma/(float)n;
   cout << "la media dei valori del vettore è " << media << endl;
   i = 0;
   superiore = 0;
   while (i<n)
   {
    if (v[i]>media)
    {
        cout << "il valore " << v[i] << " è superiore alla media e si trova nella posizione " << i << endl;
        superiore = superiore+1;
    }
    i=i+1;
   }
   cout << "in totale, " << superiore << " valori sono superiori alla media." << endl;
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
