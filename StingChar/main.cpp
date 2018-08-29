/*
*C++ string style
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    /*
    string word1, word2, concatWord;
    bool comp;

    word1 = "test";
    word2 = "test";

    comp = word1 == word2;
    cout << "If 1 words are same:" << comp << endl;

    word2 = "This is a test";

    comp = word1 == word2;
    cout << "If 0 words are not same: " << comp << endl;

    word1.at(0) = 'l';
    cout << "word1 should be lest: " << word1 << endl;

    concatWord = word1 + word2;
    cout << "word1 + word2: " << concatWord << endl;

    //Printing with loop
    for(auto x : concatWord){
        cout << x << flush;
    }

    //GET LINE
    cout <<"What is a sentece: " << endl;
    getline(cin,concatWord);

    cout << concatWord << endl;

    string alphabet {"adAmior"};
    string key {"xyNSHjQ"};
    string original {}, crypt{};

    cout << "Enter a word you want to encrypt: " << endl;
    cin >> original;

    for(auto x : original){
        if(alphabet.find(x) != string::npos){
            crypt += key.at(alphabet.find(x));
        }else{
            crypt += x;
        }
    }
    cout <<"Message is :" << crypt << endl;
    */

    string input {};

    cout << "Write something: " << flush;
    cin >> input;

    for(int i {0}; i < input.length(); i++){
            for(int x{input.length()}; x - i > 0; x--){
                cout << " "<< flush;
            }

            for(int x{0}; x < i; x++){
                cout << input.at(x) << flush;
            }
        if(i > 0){
            for(int j {i}; j >= 0; j--){
                cout << input.at(j) << flush;
            }
            cout << endl;
        }else{
            cout << input.at(i) << endl;
        }
    }

    return 0;
}
