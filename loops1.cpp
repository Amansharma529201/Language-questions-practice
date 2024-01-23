//Getting a table of any number
#include<iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    int Table;
    for (int i=1; i<=10;i++){
        Table = a * i;
        cout<<Table<<endl;
    }
    return 0;

}