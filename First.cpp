#include<iostream> // Header file includes input and output functions
using namespace std;
// function printing prime numbers from 2 to 10 
void PrintPrimeNumbers(){
    cout<<"Prime numbers are ";
    for(int i=2;i<=10;i++){
         int count = 0;
         for(int j=1;j<11;j++){
             if(i%j==0){
                 count++;
             }
         }
         if(count>2){
             continue;
         }
         else{
               cout<<i<<" ";
         }
    }
    cout<<"\n";

}
int main(){

    cout<<"Hello world\n";
    PrintPrimeNumbers(); // calling a function 
    return 0;
}