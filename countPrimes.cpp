#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int countPrimes(int a[], int size) {
    int numPrimes = 0;
    for(int i =0; i< size; i++){
        if((a[i]%2==1){
            numPrimes++;
        }
    }
  return numPrimes; // STUB!  Replace with correct code.
}