//
//  main.c
//  09.20.2
//
//  Created by Kozak, Luca on 2017. 09. 20..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>
#include <math.h>

/*Write a C program that calculates the volume of a sphere.*/

int main() {
    float volume;
    float radius;
    
    printf(" What's the radius of the sphere? ");
    scanf( "%f", &radius);
    volume = (((radius*radius*radius)*4*3.1415)/4);
    printf("%f Volume of the sphere\n", volume);
    
    return(0);
}
