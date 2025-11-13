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
    
    
    
    srand(1);
    int n;
    scanf("%d",&n);
    
    char buffer[1024]="========= lotto649 =========\n";
    FILE* fp;
    fp = fopen("lotto.txt","w+");
    fprintf(fp,"%s",buffer);
    
    time_t now;
    struct tm *local_time;
    char date_line[128]; // 用來儲存格式化後的日期字串

    time(&now); // 獲取當前時間戳
    local_time = localtime(&now); // 轉換為本地時間結構
    
    // 格式化字串 (範例格式: "November 13 2025\n")
    // %B = 完整的月份名稱, %d = 日期, %Y = 四位數年份
    strftime(date_line, sizeof(date_line), "%B %d %Y", local_time); 
    fprintf(fp, "===== %s =====\n", date_line); // 將動態產生的日期寫入檔案
    
    for(int i=0;i<5;i++){
        int used[80];
        for(int i=0;i<79;i++){
            used[i]=0;
        }

        fprintf(fp,"%c%d%c:",'[',i+1,']');
        
        if(i+1<=n){
            int count=0;
            while(count<7){
                int tmp=rand()%69+1;
                if(used[tmp]==0){
                    used[tmp]=1;
                    fprintf(fp," %02d",tmp);
                    count++;
                }
            }
        }
        else{
            for(int i=0;i<7;i++)
                fprintf(fp," __");
        }
        
        fprintf(fp,"\n");
    }
    
    char new_content[] = "========= csie@CGU =========\n";
    snprintf(buffer, sizeof(buffer), "%s", new_content); 
    fprintf(fp,"%s",buffer); 
    
    
    fclose(fp);
    
    
    //兌獎環節
    
    printf("請輸入中獎號碼三個: ");
    int win_num[3];
    scanf("%d %d %d",&win_num[0],&win_num[1],&win_num[2]);
    printf("輸入中獎號碼為: %02d %02d %02d\n",win_num[0],win_num[1],win_num[2]);
    printf("以下為中獎彩卷:\n");
    
    FILE* read_fp;
    read_fp = fopen("lotto.txt","r");
    
    char line_buffer[256];
    char date_str[256];
    
    strcpy(date_str,date_line);
    
    while(fgets(line_buffer, sizeof(line_buffer), read_fp) != NULL) {
        
        if (line_buffer[0] == '[') {
            int lotto_id;
            int ticket_nums[7];
            
            int parsed_count = sscanf(line_buffer, "[%d]: %d %d %d %d %d %d %d",
                                      &lotto_id, &ticket_nums[0], &ticket_nums[1],
                                      &ticket_nums[2], &ticket_nums[3], &ticket_nums[4],
                                      &ticket_nums[5], &ticket_nums[6]);
            
            if (parsed_count == 8) { 
                int match_count = 0;
                
                for (int i = 0; i < 7; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (ticket_nums[i] == win_num[j]) {
                            match_count++;
                        }
... (還剩 18 行)
收起
main (1).c
4 KB
﻿
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(){
    
    
    
    srand(1);
    int n;
    scanf("%d",&n);
    
    char buffer[1024]="========= lotto649 =========\n";
    FILE* fp;
    fp = fopen("lotto.txt","w+");
    fprintf(fp,"%s",buffer);
    
    time_t now;
    struct tm *local_time;
    char date_line[128]; // 用來儲存格式化後的日期字串

    time(&now); // 獲取當前時間戳
    local_time = localtime(&now); // 轉換為本地時間結構
    
    // 格式化字串 (範例格式: "November 13 2025\n")
    // %B = 完整的月份名稱, %d = 日期, %Y = 四位數年份
    strftime(date_line, sizeof(date_line), "%B %d %Y", local_time); 
    fprintf(fp, "===== %s =====\n", date_line); // 將動態產生的日期寫入檔案
    
    for(int i=0;i<5;i++){
        int used[80];
        for(int i=0;i<79;i++){
            used[i]=0;
        }

        fprintf(fp,"%c%d%c:",'[',i+1,']');
        
        if(i+1<=n){
            int count=0;
            while(count<7){
                int tmp=rand()%69+1;
                if(used[tmp]==0){
                    used[tmp]=1;
                    fprintf(fp," %02d",tmp);
                    count++;
                }
            }
        }
        else{
            for(int i=0;i<7;i++)
                fprintf(fp," __");
        }
        
        fprintf(fp,"\n");
    }
    
    char new_content[] = "========= csie@CGU =========\n";
    snprintf(buffer, sizeof(buffer), "%s", new_content); 
    fprintf(fp,"%s",buffer); 
    
    
    fclose(fp);
    
    
    //兌獎環節
    
    printf("請輸入中獎號碼三個: ");
    int win_num[3];
    scanf("%d %d %d",&win_num[0],&win_num[1],&win_num[2]);
    printf("輸入中獎號碼為: %02d %02d %02d\n",win_num[0],win_num[1],win_num[2]);
    printf("以下為中獎彩卷:\n");
    
    FILE* read_fp;
    read_fp = fopen("lotto.txt","r");
    
    char line_buffer[256];
    char date_str[256];
    
    strcpy(date_str,date_line);
    
    while(fgets(line_buffer, sizeof(line_buffer), read_fp) != NULL) {
        
        if (line_buffer[0] == '[') {
            int lotto_id;
            int ticket_nums[7];
            
            int parsed_count = sscanf(line_buffer, "[%d]: %d %d %d %d %d %d %d",
                                      &lotto_id, &ticket_nums[0], &ticket_nums[1],
                                      &ticket_nums[2], &ticket_nums[3], &ticket_nums[4],
                                      &ticket_nums[5], &ticket_nums[6]);
            
            if (parsed_count == 8) { 
                int match_count = 0;
                
                for (int i = 0; i < 7; i++) {
                    for (int j = 0; j < 3; j++) {
                        if (ticket_nums[i] == win_num[j]) {
                            match_count++;
                        }
                    }
                }
                
                if (match_count > 0) {
                    line_buffer[strcspn(line_buffer, "\n")] = 0; 
                    printf("售出時間: %s: %s\n", date_str, line_buffer);
                }
            }
        }
    }
    
    
    
    
    
    
    return 0;
}
