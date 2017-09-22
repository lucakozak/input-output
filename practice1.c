//
//  main.c
//  09.20
//
//  Created by Kozak, Luca on 2017. 09. 20..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>


int main() {
    
    
    /*Write a program that converts Centigrade to Fahrenheit.*/
    //Celsius to Fahrenheit: (°C × 9/5) + 32
    
    {
        float celsius;
        float farenheit;

        printf(" What's the temperature in°C? ");
        scanf( "%f", &celsius);
        
        farenheit = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%f degrees farenheit.\n", farenheit);
        
        return(0);
    }
    

}
