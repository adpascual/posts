
#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int sumOdds(int a[], int size) {
    int oddSum=0;
    for(int i=0; i<size; i++){
        if(arr[i]%2==1){
            oddSum=oddSum+arr[i];
        }
    }

  return oddSum; // STUB!  Replace with correct code.
}
