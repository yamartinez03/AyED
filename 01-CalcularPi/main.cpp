#include <iostream> 
#include <iomanip>
#include <math.h>

using namespace std; 

int main ()
{
    double pi=0, sg=0;
    int i=0; 
    double aux = 0;

    do{
        sg= i%2==1 ? -1 : 1;
        pi += sg/ (2*i + 1);
        i++;
        aux = trunc((4*pi - int(4*pi))*1000000)/1000000;
    }while ( aux != 0.141592);
    
    cout<<"Valor de pi hasta 6 digitos decimales: "<<setprecision(6)<<fixed<<pi*4<<endl;
    
    return 0;
}
