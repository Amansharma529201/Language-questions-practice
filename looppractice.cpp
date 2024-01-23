//Write a program in C++ to find the first 10 natural numbers.
/*#include<iostream>
using namespace std;

int main (){
    int i;
    cout<<"first 10 numbers are ";
    for ( i = 1; i <= 10; i++)
    {
        cout<<i<<endl;
    }
    
}*/

//<---------------------------------------------------------------------------->

//Write a program in C++ to find the sum of the first 10 natural numbers.
/*#include<iostream>
using namespace std;

int main(){
    int i;
    int sum = 0;
    cout<<"sum of first 10 numbers is ";
    for ( i = 1; i <= 10; i++)
    {
        sum = sum + i;
       
    }
    cout<<sum<<endl;
    return 0;
}*/

//<---------------------------------------------------------------------------->

//Write a program in C++ to display n terms of natural numbers and their sum.
#include<iostream>
using namespace std;

int main(){
    int i,n,sum;
    sum = 0;
    cout<<"enter the number :"<<endl;
    cin>>n;
    for(i=1;i<n;i++){
        sum = sum +i;
    }
    cout<<"The sum of the"<<n<<"numbers is :"<<sum<<endl;
}

//<---------------------------------------------------------------------------->
//Write a program in C++ to find the perfect numbers between 1 and 500.