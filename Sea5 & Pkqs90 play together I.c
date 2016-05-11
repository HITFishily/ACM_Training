//
//  main.c
//  Sea5 & Pkqs90 play together I
//
//  Created by 国与同 on 16/5/10.
//  Copyright © 2016年 国与同. All rights reserved.
//

#include <stdio.h>
#define MAX 104
int main() {
    int t;
    int m,n;
    int a[MAX][MAX];
    int i,j,k;
    char z;
    int key[5];
    int count;
    scanf("%d",&t);
    for(i = 1; i <= t; i++){
        scanf("%d %d",&m,&n);
        for(j = 0; j < MAX; j++){
            for(k = 0; k < MAX; k++){
                a[j][k] = 0;
            }
        }
        z = getchar();
        for(j = 2; j <= m+1; j++){
            for(k = 2; k <= n+2; k++){
                z = getchar();
                if(z == '.'){
                    a[j][k] = 0;
                }
                else if(z =='#'){
                    a[j][k] = 1;
                }
            }
        }
       /* for(j = 0; j <= m+3; j++){
            for(k = 0; k <= n+3; k++){
                printf("%d ",a[j][k]);
            }
            printf("\n");
        }  */
        for(j = 1; j <= m+2; j++){
            for(k = 1; k <= n+2; k++){
                if(a[j][k] == 0){
                    count = 0;
                    if(a[j][k-1] == 1){
                        count++;
                    }
                    if(a[j][k+1] == 1){
                        count++;
                    }
                    if(a[j-1][k] == 1){
                        count++;
                    }
                    if(a[j+1][k] == 1){
                        count++;
                    }
                    key[count]++;
                }
            }
        }
        for(j = 4; j >=1; j--){
            if(key[j]!=0){
                printf("%d\n",key[j]);
                break;
            }
        }
    }
}
