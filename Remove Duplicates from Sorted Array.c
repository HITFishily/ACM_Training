//
//  main.c
//  Remove Duplicates from Sorted Array
//
//  Created by 国与同 on 16/5/18.
//  Copyright © 2016年 国与同. All rights reserved.
//

#include <stdio.h>
#define MAX 100

int a[MAX];
int main(int argc, const char * argv[]) {
    int i,j;
    for(i = 0;i < MAX; i++){
        scanf("%d",&a[i]);
        if(a[i] < 0){
            break;
        }
    }
    int b = i;
    for(i = 0; i < b; i++){      //a[i] yu a[0]-a[i-1] bijiao
        for(j = 0; j < i; j++){
            if(a[i] == a[j]){
                break;
            }
        }
        if(j == i)  printf("%d ",a[i]);
    }
    return 0;
}
