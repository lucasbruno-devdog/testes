#include <iostream>

using namespace std;

int main()
{  
    int aux = 0, x = 0, y = 10, Na = 1, Nb = 0;

    cout << "SEQUENCIA FIBONACCI" << endl;

    while (x < y)
    {
        cout << Na << endl;

        aux = Na + Nb;
        Nb = Na;
        Na = aux;
        x++;
    }
    
  return 0;      
}