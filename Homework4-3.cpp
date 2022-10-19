#include <iostream>
using namespace std;

int main() {
    int n;
    long factorial = 1.0;
    cout << "Enter a posotive integer :";
    cin >> n;
    if (n < 0)
        cout << "Error! Factorial of negative number doesnt't exist "
      else{
        for(int i = 1; i<=n; ++i){
            factorial *=i;
        }
            cout<<"Factorial of"<<n<<"="<<factorial;


    }

    return 0;
}
