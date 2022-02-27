#include<iostream>
#include<string>
#include "mamodo.hpp"

using namespace std;

int mamodo::mamodosencontrados=0;

mamodo::mamodo(string nome, string caracteristicas, int forca, int vida): nome(nome), caracteristicas(caracteristicas), forca(forca), vida(vida){
    mamodosencontrados++;
    
}
mamodo::mamodo():mamodo(0, 0, 0){
}

mamodo & mamodo::operator=(const mamodo & priu){
    if (this != & priu){
        this->nome=priu.nome;
        this->caracteristicas=priu.caracteristicas;
        this->forca=priu.forca;
        this->vida=priu.vida;
    }
    return *this;
}

mamodo::mamodo(const mamodo & mam){
    this->setNome(mam.nome);
    this->setCaracteristicas(mam.caracteristicas);
    this->setForca(mam.forca);
    this->setVida(mam.vida);
    // vida = mam.vida;
    mamodosencontrados++;
}
mamodo::~mamodo(){
    mamodosencontrados --;
}
void mamodo::setNome(string nome){
    this->nome=nome;
}
void mamodo::setCaracteristicas(string caracteristicas){
    this->caracteristicas=caracteristicas;
}
void mamodo::setForca(int forca){
    if ((forca>=1) && (forca<=100)){
        
        this->forca=forca;
        return;
    }
    if (forca>100){
        this->forca=100;
        
        return;
    }
    if (forca<1){
        
        this->forca=1;
        return;
    }
}
void mamodo::setVida(int vidam){
    if ((vidam>=1) && (vidam<=100)){
       this->vida=vidam;
      
       return;
    }

    if (vida>100){
        this->vida=100;
        return;
    }
    if (vida<1){
        this->vida=1;
        return;
    }
}
int mamodo::getmamodosencontrados(){
    return mamodosencontrados;
}
string mamodo::getNome(){
    return nome;
}
string mamodo::getCaracteristicas(){
    return caracteristicas;
}
int mamodo::getForca(){
    return forca;
}
int mamodo::getVida(){
    return vida;
}
void mamodo::atacar1(){
    
}
void mamodo::atacar2(){

}
void mamodo::defender(){

}
void mamodo::setmamodosencontrados(int mamodosencontradoss){
    mamodosencontrados=mamodosencontradoss;
}