#include <iostream>
#include <string>
#include <vector>

using namespace std;

double calc_cost(double base_cost, double tax_rate = 0.06); // --> Default value function parameter

int add_number(int, int);
double add_number(double, double);

int main()
{
   // double base_cost {0};
   // cout << "Enter a base cost: " << flush;
   // cin >> base_cost;

  //  cout << calc_cost(base_cost) << endl;

 // int a{1}, b{2};
  //double c{6}, d{7.1};

 // cout << add_number(a,b) << endl;
//  cout << add_number(c,d) << endl;

vector <string> words {"Dario","Mario","Ivan"};
cout << words[0].at(1) << endl;

    return 0;
}

double calc_cost(double base_cost,double tax_rate){
    return base_cost*(1 + tax_rate);
}

int add_number(int a, int b){
    return a+b;
}

double add_number(double a, double b){
    return a+b;
}
