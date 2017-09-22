//
//  main.c
//  09.20.5
//
//  Created by Kozak, Luca on 2017. 09. 20..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

// Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

int main() {
    
    int hours;
    int minutes;
    int sum;
    
    printf("Hours");
    scanf("%d", &hours);
    
    printf("Minutes");
    scanf("%d", &minutes);
    
    sum =(hours*60)+minutes;
    
    printf("%d osszeg \n", sum);
    
    return (0);
    
    
}
