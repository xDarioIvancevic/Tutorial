#include <string>
#include <iostream>

class EasyMath{
private:
    std::string nameofOper;
    int result {};

public:
    // CONSTRUCTOR OVERLODAING
    //ERROR NO class bla bla if construcot created by user defualt constructor don't egzists and it will be error, so you must declare a new empty construcotr.
/*
    EasyMath()
        :EasyMath{"None",0}{
            std::cout << nameofOper << std::endl;
    } // DELEGATING CONSTRUCTOR + CONSTR OVERLODAING
*/
    EasyMath(std::string nameof =  "None" ,int resUlt=0)
        : nameofOper {nameof}, result {resUlt}{
            std::cout << nameofOper << std::endl;
    } // LIST INITIZIALIZATION, OVAKO KORISITI INICIJALIZAUCIJU U KONSTRUKTORU;
    ~EasyMath(){
        std::cout << "Program is closed..." << std::endl;
    }
    void adding(int =0, int =0);
    int get_result();
};
