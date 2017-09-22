//
//  main.c
//  09.20.7
//
//  Created by Kozak, Luca on 2017. 09. 20..
//  Copyright © 2017. Kozak, Luca. All rights reserved.


//Write a program in C to calculate the sum of three numbers with getting input in one line separated by a comma.

#include <stdio.h>

int main() {
    
    int a;
    int b;
    int c;
    int osszeg;
    
    printf("Write 3 numbers separated by comma");
    
    scanf("%d,%d,%d", &a, &b, &c);
    
    osszeg=a+b+c;
    
    printf("osszeg=%d\n", osszeg );
    
    return 0;
}
