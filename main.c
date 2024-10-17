#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i,j,hight,k;
    printf("請輸入數值:");
    scanf("%d",&hight);
    printf("印出長度為%d的菱形\n",hight);
    for(i=0;i<(hight*2)-1;i++)      //輸出菱形總行數為(hight*2)-1
    {                               // i從 0 ~ (hight*2)-1 總共會運行(hight*2)-1次
        if(i<hight)                 //當i在0~hight-1時 先輸出上半身大三角形
        {
            for(j=i+1;j<hight;j++)  //前面空格     （遞減） 當i越大時 執行次數越少
            {
                printf(" ");
            }
            for(k=0;k<=i;k++)       //需要輸出幾個＊ （遞增）當i越大時 執行次數越多
            {
                printf("* ");       //輸出 *並且空格
            }
            printf("\n");           //輸出完一排星星後換行
        }
        
        else if(i>=hight)           //當i為hight ~ (hight*2)-2 輸出下半身小三角形
        {
            for(j=hight;j<=i;j++)   //前面空格 （遞增） 當i越大時 執行次數越多
            {
                printf(" ");
            }
            for(k=i-hight;k<=hight-2;k++)   //需要輸出幾個＊ （遞減）當i越大時 執行次數越少
            {
                printf("* ");
            }
            printf("\n");           //輸出完一排星星後換行
        }
    }
    system("pause");
    return 0;
}
