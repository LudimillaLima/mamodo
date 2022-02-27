#ifndef cpp_filha
#define cpp_filha
#include "mamodo.hpp"
using namespace std;

class filha: public mamodo{
    public:
    filha(string , string , int , int);
    void atacar3();
    void atacar2() override;
    void atacar1() override;
    void defender() override;

};
 #endif