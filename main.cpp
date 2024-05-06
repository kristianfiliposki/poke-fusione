#include <iostream>
#include <string>

using std::string;

int main()
{
    string persona;
    string nome_pokemon;
    string pokemon1;
    string pokemon2;
    string value1;
    string value2;

 
    nome_pokemon= pokemon1 + pokemon2;


    
    std::cout<<"come ti chiami?"<<std::endl;
    std::cin>> persona;
    std::cout <<"ciao "<< persona  << std::endl;

    std::cout<<"Hai un pokemon?"<<std::endl;
    std::cin>>value1;
    if(value2=="si" || value2=="yes")
    {
    std::cout<<"come si chiama il tuo pokemon"<<std::endl;
    std::cin>> pokemon1;
    std::cout<<"il tuo pokemon preferito è "<< pokemon1 <<std::endl;

    std::cout<<"come si chiama il pokemon del tuo avversario? "<<std::endl;
    std::cin>> pokemon2;
    std::cout<<"il pokemon del tuo avversario è "<< pokemon2 <<std::endl;

    std::cout<<"vuoi fonderli ? (si/no)"<<std::endl;
    std::cout<<"si/no"<<std::endl;
    std::cin>>value2;
    if(value2=="si" || value2=="yes"){
        std::cout<<"il pokemon fuso si chiama: "<<pokemon1.substr(0,4) + pokemon2.substr(1,4)<<std::endl;
    }
    else{
        std::cout<<"ti credevo più simpatico :)"<<std::endl;
    }    }

    else{
        std::cout<<"Corri a catturarli tutti! :)"<<std::endl;
    }







    return 0;

}
