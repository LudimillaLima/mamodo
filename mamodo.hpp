#ifndef cpp_mamodo
#define cpp_mamodo
// #include <string>
using namespace std;
class mamodo{
    protected:
    string nome;
    string caracteristicas;
    int forca;
    int vida;
    static int mamodosencontrados;

    public:
    
    mamodo(string, string, int, int = 100);
    mamodo();
    mamodo(const mamodo & mam);
    mamodo & operator=(const mamodo & priu);
    ~mamodo();
    void setNome(string);
    void setCaracteristicas(string);
    void setForca(int);
    void setVida(int);
    static int getmamodosencontrados();
    static void setmamodosencontrados(int);
    string getNome();
    string getCaracteristicas();
    int getForca();
    int getVida();
    virtual void atacar1()=0;
    virtual void atacar2()=0;
    virtual void defender()=0;
    




};

#endif