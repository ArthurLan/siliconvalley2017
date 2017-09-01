
/* sizeof() isn't a function but a basic functionality in C language, to get the size of our variable's type our own computer. Yup it can change from a computer to another.
 * "%lu" stand for : the argument has type 'unsigned long'
 * Sorry for the norme.. too many characters obviously !
 * */
#include <stdio.h>
int main(void)
{
    printf("\nchar      : %lu octets \n", sizeof(char));
    printf("unsigned char   : %lu octets \n", sizeof(unsigned char));
    printf("int     : %lu octets \n", sizeof(int));
    printf("unsigned int    : %lu octets \n", sizeof(unsigned int));
    printf("long        : %lu octets \n", sizeof(long));
    printf("unsigned long   : %lu octets \n", sizeof(unsigned long));
    printf("double      : %lu octets \n", sizeof(double));
    printf("\nEach octet has his own address, that's why an array of char : array[5], would occupy 5 addresses in the memory, the last one being the hexadecimal of the first one +4.");
    printf("\nAn array of int would occupy 4 octet for each int, and each int would have as an address the hexadecimal of the previous one +4.\n");
    printf("\nAn array 100 int \n\n int array[100]; \n\nWill then occuppy 400 octets in the memory.\n");
    printf("\nUnderstanding this can actually be usefull with an expression like this. think about #include <stdlib.h>\n\n");
    printf("int *str;\n\n   str = malloc(sizeof(int) * 100);\n\nWhich we could also write\n\n       str = (int*)malloc(sizeof(*str) * 100)\n\nSo that malloc will return int.\n");
    printf("You can afterward tell to your OS that you don't need that space in the memory anymore... Which will be particulary useful if your do programs for embarked devices like phones or robots.\n\n");
    return (0);
}
