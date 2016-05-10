//
//  main.c
//  Jackpot
//
//  Created by 国与同 on 16/5/7.
//  Copyright © 2016年 国与同. All rights reserved.
//

#include <stdio.h>

long mother(long a, long b){
    long m = (a > b)?a:b;
    long n = (a <= b)?a:b;
    long t;
    while(n){
        t = m % n;
        m = n;
        n = t;
    }
    t = a * b / m;
    
    return t;
}

int main(){
    int c;      //ji qi de shu liang
    int i = 0,j = 0;     //ji shu qi
    int m;      //lun pan de shu liang
    scanf("%d",&c);
    int d = c;
    long b[c];
    long a[6];   //cun fang shi jian
    while(c != 0){
        scanf("%d",&m);
        for (i = 1; i <=m; i++){
            scanf("%ld",&a[i]);
        }
        for (i = 2; i <=m; i++){
            a[i] = mother(a[i-1], a[i]);
        }
        b[j++] = a[m];
        if(a[m] == 0){
            printf("More than a billion.\n");
        }
        else{
            printf("%d\n",a[m]);
        }
        c--;
    }
   /*for(i = 0; i < d; i++){
        if(b[i] > 1000000000){
            printf("More than a billion.\n");
        }
        else{
            printf("%ld\n",b[i]);
        }
    }*/
    return 0;
}
