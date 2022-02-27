#include<iostream>
#include<vector>
#include "guardiao.hpp"
#include "mamodo.hpp"

using namespace std;    
guardiao::guardiao(){

}
guardiao::guardiao(string nome, int idade, int inteligencia): nome(nome), idade(idade), inteligencia(inteligencia){
    
}
guardiao::guardiao(string nome, int idade, int inteligencia, filha ma): nome(nome), idade(idade), inteligencia(inteligencia){
    this->add(ma);
}
// guardiao::guardiao(string nome, int idade, int inteligencia, vector<mamodo> ma): nome(nome), idade(idade), inteligencia(inteligencia){
//     m = ma;
// }

void guardiao::setNome(string n){
    nome=n;
}
void guardiao::setIdade(int i){
    idade=i;
}
void guardiao::setInteligencia(int intel){
    inteligencia=intel;
}
string guardiao::getNome(){
    return nome;
}
int guardiao::getIdade(){
    return idade;
}
int guardiao::getInteligencia(){
    return inteligencia;
}
void guardiao::lerataque1(){

}
void guardiao::lerataque2(){

}
void guardiao::lerdefesa(){

}
void guardiao::add(filha& um){
    m.push_back(um);
    int mamodos = filha::getmamodosencontrados();
    filha::setmamodosencontrados(mamodos--);
    
}

void guardiao::mostraMamodo(){
    for(int i=0;i < m.size();i++){
        cout<<m[i].getNome()<<" "<<m[i].getCaracteristicas()<<" "<<m[i].getForca()<<" "<<m[i].getVida()<<endl;
    }
}
