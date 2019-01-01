#include <iostream>
#include <stdio.h>
#include "strToInt.h"

using namespace std;



int main(){
    char str[256];
    
    //get the string from the user
    scanf("%s", str);

    //Divide by 2 to prove that the string was successfully converted into a number
    cout <<  stringToInt(str, stringLength(str)) / 2 <<  endl; 

    return 0;
}



