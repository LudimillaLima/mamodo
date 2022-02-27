#include<iostream>
#include"guardiao.hpp"
#include"mamodo.hpp"
#include"filha.hpp"
#include<vector>
#include<string>


int main(int argc, char ** argv){
    filha c("ludimilla", "linda", 100, 22);
    guardiao g("n", 15, 36, c);
    cout<<g.getNome()<<" "<<g.getIdade()<<"  "<<g.getInteligencia()<<endl;
    g.mostraMamodo();

    // mamodo zatch("zatch","prei",19);
    // mamodo za("nhenha","priu",129);
    // mamodo z(zatch);

    // z.setForca(z.getForca()+300);
    // z.setNome("Zeno");
    // guardiao c("n",10,10);
    // vector<mamodo> vectorMamodo;
    // vectorMamodo.push_back(zatch);
    // vectorMamodo.push_back(z);
    // guardiao c1("new", 8, 5, vectorMamodo);
    // guardiao c2("esse",10,15);
    // c2.add(zatch);
    // c2.add(z);
    // c2.add(za);
    // int mamodos = mamodo::getmamodosencontrados()-7;
    // mamodo::setmamodosencontrados(mamodos);
    // cout<<c2.getNome()<<endl;
    // cout<<c2.getIdade()<<endl;
    // cout<<c2.getInteligencia()<<endl;
    // // c2.mostraMamodo();
    // c1.mostraMamodo();
    // za=z;
    // cout<<za.getNome()<<" "<<za.getCaracteristicas()<<" "<<za.getForca()<<" "<<za.getVida()<<" "<<mamodo::getmamodosencontrados()<<endl;
     return 0;
}