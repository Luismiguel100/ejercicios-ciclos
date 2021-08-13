/******************************************************************************



*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float valor;

    cout << "Ingrese valor adeudado: ";
    cin>>valor;

    if(valor > 600000 && valor < 1500000 ){
        
        float descuento = valor * 0.20;
        cout<<"Valor a pagar: "<<fixed<<setprecision(0)<<valor - descuento<<" "<<"con descuento del 20%"<<endl;

    }else if(valor >= 1500000 && valor <= 3000000){

        float descuento = valor * 0.30;
        cout<<"Valor a pagar: "<<fixed<<setprecision(0)<<valor - descuento<<" "<<"con descuento del 30%"<<endl;

    }else if(valor > 3000000 && valor <= 8000000){

        float descuento = valor * 0.40;
        cout<<"Valor a pagar: "<<fixed<<setprecision(0)<<valor - descuento<<" "<<"con descuento del 40%"<<endl;

    }else if(valor > 8000000){

        float descuento = valor * 0.50;
        cout<<"Valor a pagar: "<<fixed<<setprecision(0)<<valor - descuento<<" "<<"con descuento del 50%"<<endl;

    }
    else{
        cout << "Valor ingresado no esta correcto"<<endl;
    }
        
    return 0;
}

