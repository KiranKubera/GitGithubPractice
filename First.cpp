#include<iostream>

void PrintPrimeNumbers(){
    std::cout<<"Prime numbers are ";
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
               std::cout<<i<<" ";
         }
    }
    std::cout<<"\n";

}
int main(){

    std::cout<<"Hello world\n";
    PrintPrimeNumbers();
    return 0;
}