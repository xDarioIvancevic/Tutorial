#include <iostream>

using namespace std;

//void PassedByRef(int &num); //PROTOTYPE PARAMETER REFF

int main()
{
    int num2 = 50;

    cout << num2 << endl;

    {
        int num = 10;
        cout << num2 + num << endl; //num zivi samo unutar lokalnog scopa, num2 zivi i ovdje;
    }
        //num ovdje nije deklariran, num2 je;
    return 0;
}

//void PassedByRef(int &num){ //PASSED BY REFF
 //   num = 0;
//}
