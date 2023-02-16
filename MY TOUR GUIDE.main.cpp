#include <iostream>
#include <cmath>
#include"MY TOUR GUIDE.h"
#include<fstream>
#include<string.h>
using namespace std;

/* namespace code */

namespace female {
void func(string name){
cout<<endl<<"\t\t\t\t\t\t\t"<<"Hi Ms "<< name <<"!!!"<<endl<<"\t\t\t\t\t"<<"I'm Robot-20 and I will help you with your tour <3"<<endl<<endl;}}
	
namespace male {
void func(string name){
cout<<endl<<"\t\t\t\t\t\t\t"<<"Hi Mr "<< name <<"!!!"<<endl<<"\t\t\t\t\t"<<"I'm Robot-20 and I will help you with your tour <3"<<endl<<endl;}}
    

int main()
{
string choice4,choice3,choice2,username,gender;
char choice;   
user user[3]; /* struct as data type */
int choice1;



/* title */

cout<<"\t\t\t\t\t"<<"----------------MY TOUR GUIDE-----------------"<<endl<<endl;
cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;

cout<<"\t\t\t"<<"Please enter your name:   ";
cin >> user[0].name; /* struct call */

cout<<"\t\t\t"<<"Gender?"<<endl<<"\t\t\t"<<"(male / female):   ";
cin>>gender;


if(gender=="female"){
female::func(user[0].name);} /* namespace call */
if(gender=="male"){
male::func(user[0].name);} /* namespace call */


/* ask if the user wanted to see details about the program */
cout<<"\t\t\t"<<"PLEASE CHOOSE: \n\n"<<"\t\t\t"<<"If you want to see more details about the program press ( A )\n"
<<"\t\t\t"<<"If you want to skip press ( any other key ):    ";
cin >> choice;

if (choice == 'A')
cout <<"\n\t\t\t"<<"Details :\n\n"<<"\t\t\t"<<"We will ask you to write your budget \n"
<<"\t\t\t"<<"and you will choose one of the three cities (Abha, Riyadh, Jeddah)\n"<<"\t\t\t"
<<"and then we will give you a 7-day schedule for a great trip.\n\n";
else 
cout << "\n";
cout<<"\t\t\t" <<"Enter age: ";
cin >> user[0].age;
user[0].age = abs(user[0].age); /* pre-defind function */
int result=sum(user[0].age);
cout << "\n\t\t\tCongratulations, you have won a coupon equivalent \n \t\t\tto the sum of the numbers in your age : \n"<<endl;
cout << "\t\t\t\t\t\t *************"<<endl;
cout <<"\t\t\t\t\t\t * "<<user[0].age<< " = " << result<<"  *"<<endl; 
cout << "\t\t\t\t\t\t *************"<<endl;

cout <<"\t\t\t"<<"Enter your budget: ";
cin >> user[0].budget;

/* Possibility of wrong entry */
if(user[0].budget > 1000){

cout<<"\n"<<"\t\t\tPlease choose the city number you want (1- Abha , 2- Riyadh, 3- Jeddah) \n\t\t\t";
cin >> choice1;
if (choice1 == 1)
abha(user[0].budget);   /* function call */
else if (choice1 == 2)
riyadh(user[0].budget); /* function call */
else if (choice1 == 3)
jeddah(user[0].budget); /* function call */
else
cout<<"\n\t\t\t"<<"Sorry you did'n enter one of the three numbers try again..."; 
/* Possibility of wrong entry */
if (choice1==1 || choice1 ==2 || choice1 == 3 ){

/* adding code */
cout << "\n\t\t\tDo you want to add 2 persons to travel with you ?\n\t\t\t";
cin>>choice2;
if(choice2 == "Yes" || choice2 =="yes"){
for(int i=1 ; i<3 ; i++){
cout<<"\n\t\t\tUser "<<i+1<<" information :\n";
cout << "\t\t\tEnter name: ";
cin >> user[i].name;
cout <<"\t\t\tEnter age: ";
cin >> user[i].age;
user[i].age = abs(user[i].age); /* pre-defind function */
cout <<"\t\t\tEnter your budget: ";
cin >> user[i].budget;
}}


/* searching code */
cout<<"\n\t\t\tDo Want to search for specific user information?\n\t\t\t";
cin>>choice3;
if(choice3 == "Yes" || choice3 =="yes")
{
cout<<"\n\t\t\tEnter the user name :\n\t\t\t";
cin>>username;
for(int i = 0; i<3 ; ++i ){
if(user[i].name == username)
{
cout<<"\n\t\t\t"<<username<<"'s informations :\n";
cout<<"\t\t\t Age :"<<user[i].age;
cout <<"\n\t\t\t Budget :"<<user[i].budget;
}}
}


/*deleting code */
if(choice2 == "Yes" || choice2 =="yes"){
cout<<"\n\n\t\t\tDo Want to delete any user from the list ?\n\t\t\t";
cin>>choice4;
if(choice4 == "Yes" || choice4 =="yes")
{
string delete1;
int s=3;
cout<<"\n\t\t\tEnter user name to delete :\n\t\t\t";
cin>>delete1;
for (int i=0;i<=s;i++)
if ( user[i].name == delete1)
{
for (int j=i; j< s; j++)
{
user[j]=user[j+1] ;
}
s--;
cout<<"\n\t\t\tUSER DELETED ";
}
cout<<"\n\t\t\tThe list after deleting "<<delete1<<" is :\n\n";
for(int j=0 ; j<s ; j++)
cout<<"\t\t\t - "<<user[j].name<<"\n";
}}


/*pointer code */
string *p; 
int size=3 ;
string Quastion , data[size]={"Jeddah","Riyadh","Abha"} , temp;
int i , j ;
p=&Quastion;

	
/* sort code */ 
bool ordered=false;
cout<<"\n\t\t\tDo you want to sort cities in alphabetical order? ( Jeddah - Riyadh - Abha ) ?"<<endl<<"\t\t\t";
cin>>*p;
cout<<"\n";
if( *p == "Yes" || *p =="yes")
{
for(i=0;i<size-1&&ordered==false;++i){
ordered=true;
for(j=0;j<size-1;++j){
if(data[j]>data[j+1])
{
ordered=false;
temp=data[j];
data[j]=data[j+1];
 data[j+1]=temp;
 }
}
}
for(int i=0 ; i<3 ; i++ )
cout<<"\t\t\t - "<<data[i]<<"\n";
}
cout<<"\n";

 /* Sequetianl  file code*/
ofstream outFile;
outFile.open("MY_TOUR_GUIDE.txt",ios::app);
if(outFile.is_open())
{
string x;	
cout<<"\t\t\t\t** My tour guide file has been opened **"<<endl;
cout<<"\t\t\tWrite your opinion about our program in one word : like ( Nicee , Good , Woww!! )"<<endl<<"\t\t\t";
cin>>x;
outFile<<" "<<x<<endl;
}
cout<<"\n\t\t\tThank you for using our program <3 "<<endl;

}
}
else 
cout<<"\n\t\t\tSorry.. your budget is not enough to travel try next month :)";
    return 0;
}
