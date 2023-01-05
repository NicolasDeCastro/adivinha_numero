#include <iostream>
#include<ctime>
using namespace std;

int main()
{   srand(time(NULL));
    int numero=rand()%100;

    double pontos=1000;
    double a,x,chute;
    char escolha;
    cout <<"BEM vindo AO NOSSO QUIZ!!!"<< endl;
    cout << "escolha a dificuldade\nFacil[F],Medio[M],Dificil[D]"<<endl;
    cin >>escolha;
    if(escolha=='F'){
        a=15;

    }   else if(escolha=='M'){
        a=10;
        }   else {
       a=5;
            }

    for(x=0;x<a;x++){
        double conta=abs(chute- numero);
        pontos=pontos-conta;
        cout << "diga o seu chute"<< endl;
        cin>> chute;
        if(chute==numero){
            cout<<"tentativas="<<x+1<<endl;
            cout<<"parabens, vc acertou o numero desejado!!!!!"<< endl;

         break;

        }else if(chute< numero){
            cout<<"seu numero foi abaixo"<<endl;
        }else{
            cout<<"seu numero foi acima"<< endl;

        }


    }


        cout.precision(3);
        cout << fixed;
        cout<<"total de pontos"<< pontos<< endl;


    return 0;

}
