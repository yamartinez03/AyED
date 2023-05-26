#include <iostream> 
#include <iomanip>

using namespace std; 

int main ()
{
    float pi=0, sg=0; 
    for (int i = 0; i<250000; i++ ){
        sg= i%2==1 ? -1 : 1;
        pi += sg/ (2*i + 1);
    }
    pi *= 4;
    cout<<"Valor de pi hasta 6 digitos decimales: "<<setprecision(6)<<fixed<<pi<<endl;
    return 0;
}