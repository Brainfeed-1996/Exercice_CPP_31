/*
  Écrire une fonction permettant d’ajouter une valeur fournie en argument à une
variable fournie également en argument. Par exemple, l’appel (n et p étant
entiers) :
ajouter (2*p+1, n) ;
ajoutera la valeur de l’expression 2*p+1 à la variable n.
Écrire un petit programme de test de la fonction.
  */

#include <iostream>
using namespace std ;
void ajoute (int exp, int & var)
{ var += exp ;
  return ;
} int main()
{   void ajoute (int, int &) ;
  int n = 12 ;
  int p = 3 ;
  cout << "Avant, n = " << n << "\n" ;
  ajoute (2*p+1, n) ;
  cout << "Après, n = " << n << "\n" ;
}

/*Résultat :
Avant, n = 12
Après, n = 19


=== Code Execution Successful ===
*/
