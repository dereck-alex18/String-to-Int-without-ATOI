/* 
    The method bellow just returns the size of the string
*/

int stringLength(char str[]){
    int len = 0;

    while(str[len] != '\0'){
        len++;
    }

    return len;
}