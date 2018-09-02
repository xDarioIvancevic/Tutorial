#include <iostream>
#include <string>
#include <vector>

using namespace std;

int zbroj(int,int);
int zbroj(int, int, int);

struct Osoba{
    int birth {};
    string title {};
};

int main()
{
    Osoba Osoba1;
    Osoba1.birth = 15;
    Osoba1.title = "Dario";
    zbroj(5,6,7);
    cout << Osoba1.title << endl;

    return 0;
}

int zbroj(int a,int b){
    cout << "Pozvana funkcija 1" << endl;
    return (a + b);
}

int zbroj(int a, int b, int c){
    cout << "Pozvana funkcija 2" << endl;
    return (a+b+c);
}
