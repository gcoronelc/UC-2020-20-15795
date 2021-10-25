#include <iostream>
using namespace std;

int existeLetra (char *cad, int c)
{   
     int i=0;
     int j = 0;

     while (cad[i]!='0')
     {
       if (cad[i]==(char)c)
            j = 1;
       i++;
     }
     return j;
}

int main(){
	int n = existeLetra("Gustavo",'S');
	cout << "I: " << n << endl;
	return 0;
}
