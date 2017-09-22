//
//  main.c
//  09.20.4
//
//  Created by Kozak, Luca on 2017. 09. 20..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

// Write a C program that converts kilometers per hour to miles per hour.

int main() {
    float kmph;
    float mph;
    
    printf("Km/h?");
    
    scanf("%f", &kmph);
  
    mph = kmph/1.609344;
  
    printf("M/h= %f Km/h \n", mph);
    
  
    
}
