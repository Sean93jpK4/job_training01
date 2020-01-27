//
//  main.c
//  cosmosDiscipline
//
//  Created by 神部翔汰 on 2020/01/24.
//  Copyright © 2020 神部翔汰. All rights reserved.
//
#include"input.h"
#include <stdio.h>

int main() {
    int num = 0;
    puts("1から100までの数値を入力してください。");
    
    int err_no = get_int(&num);
    
    printf("error code: %d\n", err_no);
    
    if(num <= 0){
        return -5;
    }
    
    int adder = num;
    
    while(num <= 100){
        printf("%d ", num);
        num += adder;
    }
    printf("\n");
    
    return 0;
}
