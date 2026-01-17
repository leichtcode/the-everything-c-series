#include <stdio.h>
#include <stdlib.h>

int main(void){
//    puts("Hello, World!"); // this is called a single-line comment

//    printf("%s\n", "Hello, Space!");

    if(puts("Hello, World!") == EOF){ // a built-in representing a failure to sending to stdout for puts()
        printf("%s\n", "\"puts()\" EXIT_FAILURE");

        return EXIT_FAILURE; // nothing runs after a return
    }

    if(printf("%s\n", "Hello, Space!") != 14){ // success here equals the correct number of char sent to stdout
        puts("\"printf()\" EXIT_FAILURE");

        return EXIT_FAILURE; // nothing runs after a return
    }

    puts("Hi mom!"); // or dad... I don't know your life :-D

    return EXIT_SUCCESS; // basically stands in for 0 (a.k.a success)
}
