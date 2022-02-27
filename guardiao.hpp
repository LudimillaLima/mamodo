#ifndef cpp_guardiao
#define cpp_guardiao
#include<iostream>
#include<vector>
#include "filha.hpp"
using namespace std;


class guardiao {
    protected:
    string nome;
    int idade;
    int inteligencia;
     vector <filha> m;

    public:
    guardiao();
    guardiao(string, int, int);
     guardiao(string, int, int, filha);
    // guardiao(string, int, int, vector<mamodo>);

    void setNome(string);
    void setIdade(int);
    void setInteligencia(int);
    string getNome();
    int getIdade();
    int getInteligencia();
    void lerataque1();
    void lerataque2();
    void lerdefesa();
    void add(filha& um);
    void mostraMamodo();

    
};

#endif