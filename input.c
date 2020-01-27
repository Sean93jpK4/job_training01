//
//  input02.c
//  cosmosDiscipline
//
//  Created by 神部翔汰 on 2020/01/27.
//  Copyright © 2020 神部翔汰. All rights reserved.
//

#include "input.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>

int get_int(int *num){
    *num = 0;
    //int check = 0;
    char buff[5];
    char *endp;
    long long_num;
    
    //5文字まで入力受付、標準入力
    fgets(buff, sizeof(buff), stdin);
    
    
    //何も入力されていない場合は\nしか入っていない
    if(buff[0] == '\n'){
        puts("何も入力されませんでした。");
        return -5;
    }
    
    //isalphaで文字が入っているかを検索、入り混じりをキャッチ
    for(int i=0; i < sizeof(buff); i++){
        if(isalpha(buff[i]) != 0){
            puts("文字以外が入力されました。");
            return -7;
        }
    }
    
    //改行文字をヌル終端に変換
    if(strchr(buff, '\n') != NULL){
        
        buff[strlen(buff)-1]='\0';
        long_num = strtol(buff, &endp, 10);
        *num = (int)long_num;
        
    }
    // 改行文字がない場合は桁数オーバー、入力ストリームをクリアする
    else {
        
        while(getchar() != '\n');
        puts("入力文字数がオーバーしています。");
        return -4;
        
    }

    return 0;

}
