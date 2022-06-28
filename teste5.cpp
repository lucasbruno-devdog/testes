#include <iostream>
#include <string.h>

using namespace std;

int main()
{  
    char str[10] = "Target", c;
    int i = 0, t = strlen(str);
    
    for (i; i < t/2; i++)
    {
        c = str[i];
        str[i] = str[t-1-i];
        str[t-1-i] = c;
    }
    
    cout << str << endl;
    
  return 0;      
}