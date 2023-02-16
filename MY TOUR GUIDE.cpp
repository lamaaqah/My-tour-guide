#include "MY TOUR GUIDE.h"
#include <iostream>
using namespace std;

/* function defnations */


/* Recursion function code */
int sum(int x) {
  if (x > 0) {
    return x + sum(x - 1);
  } else {
    return 0;
  }
}

void riyadh(int x) {
int Size=7 ;
string WeekDays[Size]={"\t\t\tSunday :","\t\t\tMonday :","\t\t\tTuesday :","\t\t\tWednesday :","\t\t\tThursday :","\t\t\tFriday :","\t\t\tSaturday :"} ,
HighBudget[Size]={"\t\t\t 1-Breakfast(hotel)\n\t\t\t 2-Kingdom Suspension Bridge\n\t\t\t 3-Riyadh Park\n\t\t\t 4-Beef Bar Restaurant"
,"\t\t\t 1-Lovefer Branch\n\t\t\t 2-Cinema (Boulevard)\n\t\t\t 3-Meraki Restuarant"
,"\t\t\t Free Day"
,"\t\t\t 1-Rishshaw London Branch\n\t\t\t 2-Winter Wonderland\n\t\t\t 3-PizzaBar Restaurant"
,"\t\t\t 1-Breakfast(hotel)\n\t\t\t 2-Al-Nakheel Mall\n\t\t\t 3-Oia Restuarant"
,"\t\t\t 1-Easy Bakery Branch\n\t\t\t 2-Dalila Camp Event"
,"\t\t\t 1-Breakfast(hotel)\n\t\t\t 2-KingAbdullah Financial District\n\t\t\t 3-Al-Nakheel Mall"} 
, 
LowBudget[Size]={"\t\t\t 1-F60r Branch\n\t\t\t 2-KingAbdullah Park\n\t\t\t 3- Riyadh Front"
,"\t\t\t 1-Breakfast(hotel)\n\t\t\t 2- Winter Wonderland\n\t\t\t 3- Sign Restuarant"
,"\t\t\t 1-Breakfast(hotel)\n\t\t\t 2- Historic Murabba Palace\n\t\t\t 3- Roor Restuarant"
,"\t\t\t 1-Arkmi Restuarant\n\t\t\t 2- Al-Nakheel Mall\n\t\t\t 3- Riyadh Zoo\n\t\t\t 4- Roasted Way Restuarant"
,"\t\t\t Free Day"
,"\t\t\t 1-Salam Park\n\t\t\t 2- Suspension Bridge\n\t\t\t 3- Urban Restuarant\n"
,"\t\t\t 1-Ad Branch\n\t\t\t 2- Diriyah Park\n\t\t\t 3-Othaim Mall\n\t\t\t 4-Kentucky" } ;					 

if(x>=2500){
cout<<"\n\t\t\tYour schedule for a week :";
for(int i=0;i<Size;i++){
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<HighBudget[i]<<"\n";
}

string choice,rotatedschedule[Size] ;
int direction, num, newIndex;
			 
cout<<endl<<"\t\t\tWould you like to exchange your schedule? \n\t\t\t";
cin>>choice;
	
if(choice=="Yes" || choice=="yes"){			
cout<<"\n\t\t\tPlease enter rotation direction:  ( [1] Down | [-1] Up )\n\t\t\t";
cin>>direction;
cout<<"\n\t\t\tPlease enter the number of cells to rotate: \n\t\t\t";
cin>>num;

/* rotate code */		     
for( int i=0;i<Size;i++) {
	
if(direction>0){
newIndex=i+num;

if(newIndex>=Size){
newIndex=newIndex%Size;}}
					 			
else {
newIndex=i-num;
if(newIndex<0){
newIndex=newIndex%Size;
if(newIndex<0){
newIndex=newIndex+Size;}}}
									 
rotatedschedule[newIndex]=HighBudget[i];}	 
				 
cout<<"\n\n\t\t\tYour Schedule after rotating:  "<<endl;

for( int i=0;i<Size;i++) {
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<rotatedschedule[i]<<"\n"; }}}
      
	                    
else if(x<=2500 && x>1000){
cout<<"\n\t\t\tYour schedule for a week :";
for(int i=0;i<Size;i++){
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<LowBudget[i]<<"\n";
}
string choice,rotatedschedule[Size] ;
int direction, num, newIndex;
		 
cout<<endl<<"\t\t\tWould you like to exchange your schedule? "<<endl<<"\t\t\t";
cin>>choice;
	
if(choice=="Yes" || choice=="yes"){			
cout<<"\n\t\t\tPlease enter rotation direction:  ( [1] Down | [-1] Up )"<<endl<<"\t\t\t";
cin>>direction;
cout<<"\n\t\t\tPlease enter the number of cells to rotate: \n\t\t\t";
cin>>num;

/* rotate code */			     
for( int i=0;i<Size;i++) {
	
if(direction>0){
newIndex=i+num;

if(newIndex>=Size){
newIndex=newIndex%Size;}}
					 			
else {
newIndex=i-num;
if(newIndex<0){
newIndex=newIndex%Size;
if(newIndex<0){
newIndex=newIndex+Size;}}}
									 
rotatedschedule[newIndex]=LowBudget[i];}	 
				 
cout<<"\n\n\t\t\tYour Schedule after rotating:  "<<endl;

for( int i=0;i<Size;i++) {
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<rotatedschedule[i]<<"\n"; }}}

else{
cout<<"\n\t\t\tSorry.. your budget is not enough to travel try next month :)"; /* Possibility of wrong entry */
}}

void abha(int x) {
int Size=7 ;
string WeekDays[Size]={"\t\t\tSunday :","\t\t\tMonday :","\t\t\tTuesday :","\t\t\tWednesday :","\t\t\tThursday :","\t\t\tFriday :","\t\t\tSaturday :"} 
,
HighBudget[Size]={"\t\t\t 1-Al-Rashid Mall\n\t\t\t 2-Verde Restuarant"
,"\t\t\t 1-Park Abha Mall\n\t\t\t 2-Red Basil Restuarant"
,"\t\t\t 1-Le Voyage Restuarant\n\t\t\t 2-Abu Kheyal"
,"\t\t\t 1-Paros Restuarant\n\t\t\t 2-Outstanding Station Wagons"
,"\t\t\t 1-Giorno Coffe\n\t\t\t 2-Mystrey Restuarant"
,"\t\t\t 1-Aya Sofya Restuarant\n\t\t\t 2-Dera Night"
,"\t\t\t 1-Wooden Coffe\n\t\t\t 2-High City\n\t\t\t 3-Votel Coffe"} 
, 
LowBudget[Size]={"\t\t\t 1-Al Tall Restuarant\n\t\t\t 2-Abha View"
,"\t\t\t 1-Joy Venue\n\t\t\t 2-Al Rashid Mall\n\t\t\t 3-Peony Cafe"
,"\t\t\t 1-Almaha Mall\n\t\t\t 2-View Cafe"
,"\t\t\t 1-Al-Sahab Park\n\t\t\t 2-Black Box Cafe\n 3-Ala Bali Restuarant"
,"\t\t\t 1-Damside Park\n\t\t\t 2-Will Cafe"
,"\t\t\t 1-Arhab Restuarant\n\t\t\t 2-Jabal Sawda"
,"\t\t\t 1-The Dabbab Walkway\n\t\t\t 2-Tonir Restuarant"} ;					 

if(x>=2500){
cout<<"\n\t\t\tYour schedule for a week :";
for(int i=0;i<Size;i++){
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<HighBudget[i]<<"\n";
}
string choice,rotatedschedule[Size] ;
int direction, num, newIndex;
			 
cout<<endl<<"\t\t\tWould you like to exchange your schedule? "<<endl<<"\t\t\t";
cin>>choice;
	
if(choice=="Yes" || choice=="yes"){			
cout<<"\n\t\t\tPlease enter rotation direction:  ( [1] Down | [-1] Up )"<<endl<<"\t\t\t";
cin>>direction;
cout<<"\n\t\t\tPlease enter the number of cells to rotate: \n\t\t\t";
cin>>num; 
/* rotate code */   
for( int i=0;i<Size;i++) {
	
if(direction>0){
newIndex=i+num;

if(newIndex>=Size){
newIndex=newIndex%Size;}}
					 			
else {
newIndex=i-num;
if(newIndex<0){
newIndex=newIndex%Size;
if(newIndex<0){
newIndex=newIndex+Size;}}}
									 
rotatedschedule[newIndex]=HighBudget[i];}	 
				 
cout<<"\n\n\t\t\tYour Schedule after rotating:  "<<endl;

for( int i=0;i<Size;i++) {
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<rotatedschedule[i]<<"\n"; }}}

else if(x<=2500 && x>1000){
cout<<"\n\t\t\tYour schedule for a week :";
for(int i=0;i<Size;i++){
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<LowBudget[i]<<"\n";
}
string choice,rotatedschedule[Size] ;
int direction, num, newIndex;
			 
cout<<endl<<"\t\t\tWould you like to exchange your schedule? "<<endl<<"\t\t\t";
cin>>choice;
	
if(choice=="Yes" || choice=="yes"){			
cout<<"\n\t\t\tPlease enter rotation direction:  ( [1] Down | [-1] Up )"<<endl<<"\t\t\t";
cin>>direction;
cout<<"\n\t\t\tPlease enter the number of cells to rotate: \n\t\t\t";
cin>>num;
/* rotate code */		     
for( int i=0;i<Size;i++) {
	
if(direction>0){
newIndex=i+num;

if(newIndex>=Size){
newIndex=newIndex%Size;}}
					 			
else {
newIndex=i-num;
if(newIndex<0){
newIndex=newIndex%Size;
if(newIndex<0){
newIndex=newIndex+Size;}}}
									 
rotatedschedule[newIndex]=LowBudget[i];}	 
				 
cout<<"\n\n\t\t\tYour Schedule after rotating:  "<<endl;

for( int i=0;i<Size;i++) {
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<rotatedschedule[i]<<"\n"; }}}
else {
cout<<"\n\t\t\tSorry.. your budget is not enough to travel try next month :)";
}}

void jeddah(int x) {
int Size=7 ;
string WeekDays[Size]={"\t\t\tSunday :","\t\t\tMonday :","\t\t\tTuesday :","\t\t\tWednesday :","\t\t\tThursday :","\t\t\tFriday :","\t\t\tSaturday :"} 
,
HighBudget[Size]={"\t\t\t 1-Caffeine Lab Branch\n\t\t\t 2-Al-Tayebat international City"
,"\t\t\t 1-BROOTS Coffee & Cocoa\n\t\t\t 2-ALshallal Theme Park\n\t\t\t 3-Khalil's BBQ Restaurant"
,"\t\t\t 1-Al-Khayyat Centre\n\t\t\t 2- Maqadeer Restuarant"
,"\t\t\t 1-Fakieh Aquarium\n\t\t\t 2-THE YEMENI VILLAGE Restaurant"
,"\t\t\t 1-Sakura Restuarant\n\t\t\t 2-Hemi Cafe & Roastrey"	,"\t\t\t 1-Al-Arab Mall\n\t\t\t 2-San Carlo Cicchetti Restuarant"
,"\t\t\t 1-IHOP Restuarant\n\t\t\t 2-Jeddah Boulevard\n\t\t\t 3-King Fahad Fountain"} 
, 
LowBudget[Size]={"\t\t\t 1-American Corner Restuarant\n\t\t\t 2-King Abdullah Economic City"
,"\t\t\t 1-Atallah Happy Land Park\n\t\t\t 2-FireGrill Restuarant"
,"\t\t\t 1-Fakieh Aquarium\n\t\t\t 2-Zillion Restuarant"
,"\t\t\t 1-IHOP Restuarant\n\t\t\t 2-Al-Tayebat international City"
,"\t\t\t 1-Thoul Beach\n\t\t\t 2-Al Sayed SeaFood Restaurant"
,"\t\t\t 1-Red Sea Mall\n\t\t\t 2-Nando's\n\t\t\t 3-Roshn WaterFront"
,"\t\t\t 1-Al-Arab Mall\n\t\t\t 2-King Fahad Fountain\n\t\t\t 3-Cup & Couch Cafe and Roastrey"} ;					 

if(x>=2500){
cout<<"\n\t\t\tYour schedule for a week :";
for(int i=0;i<Size;i++){
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<HighBudget[i]<<"\n";
}
string choice,rotatedschedule[Size] ;
int direction, num, newIndex;
			 
cout<<endl<<"\t\t\tWould you like to exchange your schedule? "<<endl<<"\t\t\t";
cin>>choice;
	
if(choice=="Yes" || choice=="yes"){			
cout<<"\n\t\t\tPlease enter rotation direction:  ( [1] Down | [-1] Up )"<<endl<<"\t\t\t";
cin>>direction;
cout<<"\n\t\t\tPlease enter the number of cells to rotate: \n\t\t\t";
cin>>num;
/* rotate code */		     
for( int i=0;i<Size;i++) {
	
if(direction>0){
newIndex=i+num;

if(newIndex>=Size){
newIndex=newIndex%Size;}}
					 			
else {
newIndex=i-num;
if(newIndex<0){
newIndex=newIndex%Size;
if(newIndex<0){
newIndex=newIndex+Size;}}}
									 
rotatedschedule[newIndex]=HighBudget[i];}	 
				 
cout<<"\n\n\t\t\tYour Schedule after rotating:  "<<endl;

for( int i=0;i<Size;i++) {
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<rotatedschedule[i]<<"\n"; }}}

else if(x<=2500 && x>1000){
cout<<"\n\t\t\tYour schedule for a week :";
for(int i=0;i<Size;i++){
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<LowBudget[i]<<"\n";
}
string choice,rotatedschedule[Size] ;
int direction, num, newIndex;
			 
cout<<endl<<"\t\t\tWould you like to exchange your schedule? "<<endl<<"\t\t\t";
cin>>choice;
	
if(choice=="Yes" || choice=="yes"){			
cout<<"\n\t\t\tPlease enter rotation direction:  ( [1] Down | [-1] Up )"<<endl<<"\t\t\t";
cin>>direction;
cout<<"\n\t\t\tPlease enter the number of cells to rotate: \n\t\t\t";
cin>>num;
/* rotate code */		     
for( int i=0;i<Size;i++) {
	
if(direction>0){
newIndex=i+num;

if(newIndex>=Size){
newIndex=newIndex%Size;}}
					 			
else {
newIndex=i-num;
if(newIndex<0){
newIndex=newIndex%Size;
if(newIndex<0){
newIndex=newIndex+Size;}}}
									 
rotatedschedule[newIndex]=LowBudget[i];}	 
				 
cout<<"\n\n\t\t\tYour Schedule after rotating:  "<<endl;

for( int i=0;i<Size;i++) {
cout<<"\n"<<WeekDays[i]<<"\n";
cout<<rotatedschedule[i]<<"\n"; }}}

else{
cout<<"\n\t\t\tSorry.. your budget is not enough to travel try next month :)";
}}
