/* 
    The method bellow is responsible for the conversion. 
    The while loop will start to "analyze" the string by its
    last character. 
    The the charachter will be converted into a number
    by subtracting 48, which corresponds to 0 in ASCII table.
    It's multiplied by a variable call multiplier and added to a variable
    called IntNumber, which will be the coverted number.
    Finally the while loop goes to the next character and the whole process is repeated
    until the beginning of the string. 
    Once it's done, the function returns the converted number

    EXAMPLE:
    convert the number 250!

    1. The first char analyzed will be 0
    2. It's converted to a number. 0 is 48 in ASCII, then 48 - 48 = 0
    3. Multiply 0 by multiplier. 0 * 1 = 0
    4. Add the digit to IntNumber, now IntNumber is 0
    5. Multiplies the multiplier variable by 10

    6. The second char analyzed will be 5
    7. It's converted to a number. 5 is 53 in ASCII, then 53 - 48 = 5
    8. Multiply 5 by multiplier. 5 * 10 = 50
    9. Add the digit to IntNumber, IntNumber = 0 + 50 = 50
    10. Multiplies the multiplier variable by 10

    11. The last char analyzed will be 2
    12. It's converted to a number. 2 is 50 in ASCII, then 53 - 48 = 2
    13. Multiply 5 by multiplier. 2 * 100 = 200
    14. Add the digit to IntNumber, IntNumber = 200 + 50 = 250
    15. Return IntNumber.

*/



int stringToInt(char str[], int len){
    
    int multiplier = 1; 
    int IntNumber = 0;
    while(len > 0){
        int digit = str[len -1] - 48;
        IntNumber += multiplier * digit;
        multiplier *= 10;

        len--;
    }

    return IntNumber;
}