#include <iostream>
#include <cmath>
using namespace std;


int main(){
int quarter;
int dime;
int userInput;
int dlrNum;
int qNum;
int dNum;
int nNum;
int pNum;


cin >> userInput;

if (userInput >= 100){
   dlrNum = userInput / 100;
   cout << dlrNum;
   if (dlrNum == 1){
     cout << " dollar" << endl;
      }
   else {
      cout << " dollars" << endl;
      }
      }
if ((userInput - 100 * dlrNum) >= 25){
   qNum = (userInput - 100 * dlrNum) / 25; 
   cout << qNum;
   if (qNum == 1) {
      cout << " quarter" << endl;
      }
   else {
      cout << " quaters" << endl;
     }
      }
if ((userInput - 100 * dlrNum) - 25 * qNum  >= 10){
   dNum = ((userInput - 100 * dlrNum) - 25 * qNum)  / 10;  
   cout << dNum;
   if (dNum == 1){
      cout << " dime" << endl;
      }
   else {
      cout << " dimes" << endl;
      }
      }
if (((userInput - 100 * dlrNum) - 25 * qNum ) - 10 * dNum >= 5){
   nNum = (((userInput - 100 * dlrNum) - 25 * qNum ) - 10 * dNum) / 5;
   cout << nNum;
   if (nNum == 1){
      cout << " nickel" << endl;
      }
   else {
      cout << " nickels" << endl;
     }
      }
if  ((((userInput - 100 * dlrNum) - 25 * qNum ) - 10 * dNum) - 5 * nNum >= 1){
   pNum = ((((userInput - 100 * dlrNum) - 25 * qNum ) - 10 * dNum) - 5 * nNum)  / 1;
   cout << pNum;
   if (pNum == 1){
      cout << " penny" << endl;
      }
   else {
      cout << " pennies" << endl;
      }
    }      
if (userInput < 1){
   cout << "no change" << endl;
}
    return 0;
}
