/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

int main()
{
    int P,I,M,F,media;
    std::cout<<"Por favor fale a nota de Matemática";
    std::cin>>M;
    std::cout<<"Por favor fale a nota de Inglês";
    std::cin>>I;
    std::cout<<"Por favor fale a nota de Fisico-quimica";
    std::cin>>F;
    std::cout<<"Por favor fale a nota de Portugues";
    std::cin>>P;
    
    media=(P+I+M+F)/4;
    std::cout "a media deu"<<media<< "."
return 0;}