/******************************************************************************

Determinar a soma dos números primos em um intervalo de inteiros [a,b].


*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int x, y, soma;
    soma = 0;
    
    cout << "insira o primeiro numero";
    cin >> x;
    cout << "digite o segundo numero";
    cin >> y;
  
    
    for(int cont = x; cont <=y; cont++){
        int div = 0;
       
    for (int i = 1; i<=cont; i++){
        if(cont % i ==0){
            div ++;
        }
    }
    
    if(div ==2){
        soma +=cont;
    }
    
}

cout << "a soma é" << soma;

}
