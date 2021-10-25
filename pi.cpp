#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double leibniz(int x){
   double pi = 0;
   for(int y=1 ;y<=x; y++){
       pi += pow(-1,y+1)/(2*y-1);
   }
   pi = 4*pi;
   return pi;
}

int main(){
  
   int n;
   double pi;
  
   cout << setprecision(3) << fixed;
   do{
       cout << "Enter the value of the parameter \'n\' in the Leibniz formula (or -1 to quit)\n";
       cin >> n;
       n+=1;
       if(n>0){
           pi = leibniz(n);
           if(n==1)
           cout << "The approximaete value of pi using " << n << " term is: " << pi << endl;
           else
           cout << "The approximaete value of pi using " << n << " terms is: " << pi << endl;
          
       }
   }while(n!=0);
  


   return 0;
}