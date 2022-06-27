#include <iostream>

using namespace std;

int main()
{  
    int indice=13, soma=0, k=0;
    
    /*while (k < indice)
    {
        k = k + 1;
        soma = soma + k;
    }

    cout << soma << endl;*/
    
    do
    {
         k = k + 1;
        soma = soma + k;
    } while (k < indice);
    cout << soma << endl;
    
    

  return 0;      
}