#include<iostream>
#include "filha.hpp"
#include "mamodo.hpp"
using namespace std;
filha::filha(string nome, string caracteristicas, int forca, int vida):mamodo(nome, caracteristicas, forca, vida){

}
void filha::atacar3(){
 cout<<"to atacando"<<endl;
}
void filha::atacar2(){
 cout<<"ataque 2 da mae"<<endl;

}
void filha::atacar1(){
 cout<<"ataque 1 da mae"<<endl;
} 
void filha::defender(){
 cout<<"hihi nem acertou"<<endl;
}