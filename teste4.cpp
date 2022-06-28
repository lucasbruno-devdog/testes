#include <iostream>
#include <math.h>

using namespace std;

int main()
{  
    int n;
    float SP, RJ, MG, ES, Outros, res, soma;
    SP = 67.836,43;
    RJ = 36.678,66;
    MG = 29.229,88;
    ES = 27.165,48;
    Outros = 19.849,53;
    soma = SP+RJ+MG+ES+Outros;

    cout << "Digite:\n 1- SP\n 2- RJ\n 3- MG\n 4- ES\n 5- Outros\n";

    cin >> n;

    switch (n)
    {
    case 1:
        res = (SP*100)/soma;
        cout <<  "SP:" << res << endl;
        break;
    case 2:
        res = (RJ*100)/soma;
        cout <<  "RJ:" << res << endl;
        break;
    case 3:
        res = (MG*100)/soma;
        cout <<  "MG:" << res << endl;
        break;        
    case 4:
        res = (ES*100)/soma;
        cout <<  "ES:" << res << endl;
        break;
    case 5:
        res = (Outros*100)/soma;
        cout <<  "Outros:" << res << endl;
        break;    
    default:
        break;
    }
    
    cout <<  "OBRIGADO POR UTILIZAR!" << endl;
    
  return 0;      
}