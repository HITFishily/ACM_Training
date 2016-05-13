//
//  main.c
//  To and Fro
//
//  Created by 国与同 on 16/5/13.
//  Copyright © 2016年 国与同. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    int m;
    scanf("%d",&m);
    char a[300];
    int b,c;
    int i,j;
    int count;
    char z;
    int x,y;
    while (m != 0) {
        scanf("%s",a);
        b = strlen(a);
        c = b / m;
        count = 0;
        for(i = 0; i <= b - m; i = i + m){
            if(count % 2 == 1){
                x = i;
                y = i + m - 1;
                for(j = 1; j <= m /2; j++){
                    z = a[x];
                    a[x] = a[y];
                    a[y] = z;
                    x++;
                    y--;
                }
            }
            count++;
        }
        for(i = 0; i < m ; i++){
            count = i;
            for(j = 0; j <= c; j++){
                printf("%c",a[count]);
                count = count + m;
            }
        }
        printf("\n");
        memset(a, '\0', sizeof(a));
        scanf("%d",&m);
    }
}
