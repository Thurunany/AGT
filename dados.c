#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h>
#include "agt.h"

int main() {
    for(int d1 = 1; d1 < 7;){
        for(int d2 = 1; d2 < 7;){
        print("[", d1, ",", d2, "]");
        d2++;
        }
    d1++;
    };


// ou com o uso do WHILE:

//    int t = 1, c = 1;
//     while (c != 7){
//         t = 1;
//         while (t!= 7){
//             print(c, t)
//             t += 1;}
//     c += 1; 
//     }

 return EXIT_SUCCESS;
}