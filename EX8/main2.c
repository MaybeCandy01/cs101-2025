短暫的糖果
maybecandy.
請勿打擾

這就是 #抄作業 頻道的起點。 
好吃咖哩

 — 2025/10/23 下午1:05
@惡魔本魔 是學霸😬😬🙏🙏
LoveeeeBunny

 — 2025/10/23 下午1:15
帥啊
joseph0830. — 2025/10/23 下午2:48
/******************************************************************************

                                Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
展開
main.c
2 KB
附件檔案類型：unknown
employee.bin
79 bytes
好吃咖哩

 — 2025/10/30 下午3:51
小考考卷 答案不是最終版本
圖片
圖片
圖片
圖片
LoveeeeBunny

 — 2025/10/30 下午3:51
每個人答案都不一樣 
看來是AI的智鬥巔峰
.ೃ! H∆RM£E

 — 2025/10/30 下午4:03
圖片
圖片
圖片
圖片
圖片
圖片
冬☆ — 2025/11/5 下午3:39
計概LAB 11/11（二）23:59
好像是說下載的時候一直next會沒設定到SSH&不小心把防火牆打開還怎樣
要自己查 
圖片
Tung

 — 2025/11/5 下午3:40
🛐 🛐 🛐
冬☆ — 2025/11/5 下午3:50
計概HW4 11/11（二）23:59
 
冬☆ — 2025/11/5 晚上8:43
欸結果他說要出但teams 沒放
最好給我忘到下禮拜ㄛ:emoji_42:
惡魔本魔 — 2025/11/5 晚上10:03
圖片
短暫的糖果 — 2025/11/5 晚上10:27
:emoji_30:
惡魔本魔 — 2025/11/10 凌晨1:15
圖片
冬☆ — 2025/11/10 下午4:01
這禮拜物理應該會有作業ㄛ
.ೃ! H∆RM£E

 — 2025/11/10 晚上8:09
誰來 救救我我的vm又卡了
MaRk

 — 2025/11/10 晚上8:39
我的建議是截圖問ai
.ೃ! H∆RM£E

 — 2025/11/10 晚上8:46
金鑰在本機要怎麼複製到vm裡阿
ai講不清
.ೃ! H∆RM£E

 — 2025/11/10 晚上8:56
我是要把本機的公鑰複製到虛擬機
我甚至不能在本機密碼登入vm
joseph0830. — 下午3:59
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.
展開
main.c
4 KB
好吃咖哩

 — 下午4:00
main1.c 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
展開
main (1).c
4 KB
﻿
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define COUNTER_FILE "counter.bin"
#define MAX_LOTTO_NUM 7
#define MAX_LOTTO_NUMSET 5

void init_file(){
    int write_array[1] = {0};
    FILE* fp = fopen(COUNTER_FILE, "r");
    if(fp == NULL) {
     FILE* tmpfp = fopen(COUNTER_FILE, "wb+");
     fwrite(write_array, sizeof(int), 1, tmpfp);
     fclose(tmpfp);
    }else {
        fclose(fp);
    }
}

int get_counter() {
    int read_array[1];
    FILE* tmpfp = fopen(COUNTER_FILE, "rb");
    fread(read_array, sizeof(int), 1, tmpfp);
    fclose(tmpfp);
    return read_array[0];
}    

int num_in_numset(int num, int numset[], int Len) {
    int ret = 0;
    for(int i = 0; i< Len; i++){
        if (num == numset[i]) {
            ret = 1;
            break;
        }
    }
    return ret;
}

void print_lotto_row(FILE* tmpfp, int n) {
    int numset[MAX_LOTTO_NUM];
    
    fprintf(tmpfp, "[%d]: ", n);
    for(int i = 0; i<MAX_LOTTO_NUM-1; ) {
        int num = (rand() % 69) + 1;
        if(num_in_numset(num, numset, MAX_LOTTO_NUM-1)) {
            continue;
        } else {
            numset[i] = num;
            i++;
        } 
    }
    
    for(int i = 0; i < 1; ) {
        int num = (rand() % 10) + 1;
        if(num_in_numset(num, numset, MAX_LOTTO_NUM-1)) {
            continue;
        } else {
            numset[MAX_LOTTO_NUM-1] = num;
            i++;
        } 
    }
    
    for(int i = 0; i < MAX_LOTTO_NUM-1; ++i) {
        for(int j = 0; j < i; ++j) {
            if (numset[j] > numset[i]) {
                int temp = numset[j];
                numset[j] = numset[i];
                numset[i] = temp;
            }
        }
    }
    
    for(int i =0; i< MAX_LOTTO_NUM; i++) {
        fprintf(tmpfp, "%02d ", numset[i]);
    }
    fprintf(tmpfp, "\n");
}
void print_lottofile(int num_set, int counter, char lotto_file[]) {
    time_t curtime;
    time(&curtime);
    srand(time(0));
    
    FILE* tmpfp = fopen(lotto_file, "w+");
    fprintf(tmpfp, "========= lotto649 =========\n");
    fprintf(tmpfp, "========+ No.%05d +========\n", counter);
    fprintf(tmpfp, "= %. *s =\n", 24, ctime(&curtime));
    
    for(int i = 0; i <MAX_LOTTO_NUMSET;i++){
        if(i < num_set) {
            print_lotto_row(tmpfp, i+1);
        } else {
            fprintf(tmpfp, "[%d]: -- -- -- -- -- -- --\n", i+1);
        }
    }
    
    fprintf(tmpfp, "========= csie@CGU =========\n");
    fclose(tmpfp);
}
void do_lotto_main(int counter) {
    char lotto_file[32];
    int num_set = 0;
    snprintf(lotto_file, 32, "lotto[%05d].txt", counter);
    printf("歡迎光臨長庚樂透彩購買機台\n");
    printf("請問您要買幾組樂透彩 : ");
    scanf("%d", &num_set);
    print_lottofile(num_set, counter, lotto_file);
    printf("已為您購買的 %d 組樂透組合輸出至 %S\n", num_set, lotto_file);
}
void set_counter(int counter) {
    int write_array[1];
    write_array[0] = counter;
    FILE* tmpfp = fopen(COUNTER_FILE, "wb");
    fwrite(write_array, sizeof(int), 1, tmpfp);
    fclose(tmpfp);
}
int main()
{
    int counter;
    init_file();
    counter = get_counter();printf("counter = %d\n", counter);
    do_lotto_main(++counter);
    set_counter(counter);
    return 0;
}
