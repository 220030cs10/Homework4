#include <iostream>
using namespace std;
int main(){
    int user;
    cout<<"Enter five numbers:";
    int usernum =1;
    int num= 0;
    while (usernum<5){
        cin>>user;
        num = user + num;
        usernum++;


    }
    cout<<num<<endl;
    return 0;

}
