//
//  main.c
//  09.22.9
//
//  Created by Kozak, Luca on 2017. 09. 22..
//  Copyright © 2017. Kozak, Luca. All rights reserved.

//Write a C program to perform addition, subtraction, multiplication and  division of two numbers.

#include <stdio.h>

int main() {
   
    int a;
    int b;
    int sum;
    int difference;
    int product;
    float quotient;
    
    printf("Write two numbers separated with comma");
    scanf("%d,%d", &a, &b);
    
    sum=a+b;
    difference=a-b;
    product=a*b;
    quotient=a/b;
    
    printf("The sum of the given numbers:%d\n", sum);
    printf("The difference of the given numbers:%d\n", difference);
    printf("The product of the given numbers:%d\n", product);
    printf("The quotient of the given numbers:%f\n", quotient);
    
    return 0;
    
}
