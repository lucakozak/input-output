//
//  main.c
//  09.20.6
//
//  Created by Kozak, Luca on 2017. 09. 20..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
   
    /*Write a program in C that reads a forename, surname and year of birth and display the names and the year one after another sequentially.*/
 
    
    char firstname [10] ;
    char lastname [10];
    int year,month,day ;
    
    printf("What is your first name?");
    scanf("%s", firstname);
    
    printf("What is your last name?");
    scanf("%s", lastname);
    
    printf("What is your date of birth?");
    scanf("%d.%d.%d.", &year,&month,&day);
    
    
    printf("%s %s,%d.%d.%d.\n",firstname,lastname,year,month,day);
    
    
    
    return 0;
}
