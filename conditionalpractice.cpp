//Take values of length and breadth of a rectangle from user and check if it is square or not.
/*#include<iostream>

using namespace std;

int main(){
    int length,breadth;
    cout<<"Enter Length And Breadth :";
    cin>>length>>breadth;
    if(length==breadth){
        cout<<"It is a Square"<<endl;
    }
    else{
        cout<<"It is a Reactangle"<<endl;
    }
    return 0;
} */

//<---------------------------------------------------------------------------------------------->


//Take two int values from user and print greatest among them.
/*#include<iostream>
using namespace std;

int main(){
    int num1,num2;
    cout<<"Enter two numbers :";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<"Greatest number is :"<<num1<<endl;;
    }
    else{
         cout<<"Greatest number is :"<<num2<<endl;
    }
    return 0;    
}*/

//<---------------------------------------------------------------------------------------------->


/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.
#include<iostream>
using namespace std;

int main(){
    int quantity, price;
    cout<<"Enter the Quantity :";
    cin>>quantity;
    price= quantity*100;
    if(price>1000){
        cout<<"Total price is :"<<price-(price*0.1)<<endl;
    }
    else{
        cout<<"Total price is :"<<price<<endl;
    }
    return 0;
} */



//<---------------------------------------------------------------------------------------------->

/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.
#include<iostream>
using namespace std;

int main(){
    int salary,year;
    cout<<"Enter the salary and year of service :";
    cin>>salary>>year;
    if (year>5)
    {
        cout<<"Your New Salary is :"<<salary+(salary*.5)<<endl;
    }
    else{
        cout<<"Your New Salary is :"<<salary<<endl;
    }
    
}*/


//<---------------------------------------------------------------------------------------------->

/*/A school has following rules for grading system:
a. Below 25 - F
b. 25 to 45 - E
c. 45 to 50 - D
d. 50 to 60 - C
e. 60 to 80 - B
f. Above 80 - A
Ask user to enter marks and print the corresponding grade.
#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Entre the marks :";
    cin>>marks;
    if (marks<25)
    {
        cout<<"Your grade is F"<<endl;
    }
    else if (marks >=25 && marks < 45)
    {
        cout<<"Your grade is E"<<endl;
    }
    else if (marks >=45 && marks < 50)
    {
        cout<<"Your grade is D"<<endl;
    }
    else if (marks >=50 && marks < 60)
    {
        cout<<"Your grade is C"<<endl;
    }
    else if (marks >=60 && marks < 80)
    {
        cout<<"Your grade is B"<<endl;
    }
    else if (marks >=80 && marks < 100)
    {
        cout<<"Your grade is A"<<endl;
    }
    else{
        cout<<"Invalid Marks"<<endl;
    }
}*/


//<---------------------------------------------------------------------------------------------->

/*Write a program to print absolute vlaue of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1*/

/*#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter a number :";
    cin>>x;
    if (x<0)
    {
        cout<<x*(-1)<<endl;
    }
    else{
        cout<<x<<endl;
    }
    
}*/


//<---------------------------------------------------------------------------------------------->

/*Ask user to enter age, sex ( M or F ), marital status ( Y or N ) and then using following rules print their place of service.
if employee is female, then she will work only in urban areas.

if employee is a male and age is in between 20 to 40 then he may work in anywhere

if employee is male and age is in between 40 t0 60 then he will work in urban areas only.

And any other input of age should print "ERROR".*/

#include<iostream>
using namespace std;

int main(){
    int age,sex,marital_status;
    char m,f,y,n ;
    cout<<"Enter your age :";
    cin>>age;
    cout<<"Enter your sex ( M or F ) :";
    cin>>sex;
    cout<<"Enter your marital status ( Y or N ) :";
    cin>>marital_status;
    if (sex==f)
    {
        cout<<"She will work in Urban areas "<<endl;
    }
    else if (sex==m && age>20 && age<40)
    {
        cout<<"He may work in anywhere "<<endl;
    }
    else if (sex==m && age>40 && age<60)
    {
        cout<<"He will work in urban areas"<<endl;
    }
    else{
        cout<<"ERROR"<<endl;
    }
}
// need to be work on this question 