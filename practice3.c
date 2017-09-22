//
//  main.c
//  09.20.3
//
//  Created by Kozak, Luca on 2017. 09. 20..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>
#include <math.h>

/*Write a C program that prints the perimeter of a rectangle to take its height and width as input.*/
//kicsit bonyolitottam, es az atmerot szamoltattam ki//

int main() {
    
    float height;
    float width;
    float diameter;
    
    printf("height");
    scanf("%f", &height);
    
    printf("width");
    scanf("%f", &width);
    
    diameter= sqrt(height*height+width*width);
    
    printf("diameter= %f \n", diameter);
    
    
    return 0;
}
