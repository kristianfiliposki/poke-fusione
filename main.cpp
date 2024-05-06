#include <iostream>
#include <string>

using std::string;

int main()
{
    int anni_persona = 12;
    string nome_pokemon;
    string pokemon1;
    string pokemon2;
    string value;
 
    nome_pokemon= pokemon1 + pokemon2;


    
    std::cout<<"quanti anni hai?"<<std::endl;
    std::cin>> anni_persona;
    std::cout <<"io ho "<<  anni_persona <<  " anni " << std::endl;

    std::cout<<"come si chiama il tuo pokemon"<<std::endl;
    std::cin>> pokemon1;
    std::cout<<"il tuo primo pokemon è "<< pokemon1 <<std::endl;

    std::cout<<"il pokemon del tuo avversario è"<<std::endl;
    std::cin>> pokemon2;
    std::cout<<"il pokemon del tuo avversario è "<< pokemon2 <<std::endl;

    std::cout<<"vuoi fonderli ?"<<std::endl;
    std::cout<<"yes/no"<<std::endl;
    std::cin>>value;
    if(value=="yes"){
        std::cout<<pokemon1.substr(1,4) + pokemon2.substr(1,4)<<std::endl;
    }
    else{
        std::cout<<"ti credevo più simpatico :)"<<std::endl;
    }





    return 0;

}
