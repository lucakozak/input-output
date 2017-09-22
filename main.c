//
//  main.c
//  09.22.10
//
//  Created by Kozak, Luca on 2017. 09. 22..
//  Copyright © 2017. Kozak, Luca. All rights reserved.
//

#include <stdio.h>

int main() {
  
    float fa;
    float sa;
    float ta;
    
    printf("Write two angles separated by comma");
    scanf("%f,%f", &fa,&sa);
    
    ta=360-sa-fa;
    
    printf("Third angle=%f",ta);
    
    return 0;
}
