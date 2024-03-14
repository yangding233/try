#include<stdio.h>
#include<stdlib.h>

void buchongfu(int a,int b,int c,int d)//1
{
    int count = 0;
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++){
            for(int k=1;k<=4;k++){
                if(i!=j&&i!=k&&j!=k){
                    printf("%d %d %d\n",i,j,k);
                    count++;

                }

            }
        }

    }
    printf("count=%d",count);
}

// int main()//1
// {
//     buchongfu(1,2,3,4);
//     system("pause");
//     return 0;
// }



void nianyueri(int year,int month,int day)
{
    int sum = 0;
    switch(month) // 先计算某月以前月份的总天数
    {
        case 1:sum=0;break;
        case 2:sum=31;break;
        case 3:sum=59;break;
        case 4:sum=90;break;
        case 5:sum=120;break;
        case 6:sum=151;break;
        case 7:sum=181;break;
        case 8:sum=212;break;
        case 9:sum=243;break;
        case 10:sum=273;break;
        case 11:sum=304;break;
        case 12:sum=334;break;
        default:printf("data error");break;
    }
    sum = sum + day;
    if(year%400==0||(year%4==0&&year%100!=0))
    {
        if(month>2)
        {
            sum + 1;
        }
    }
    printf("这是这一年的第 %d 天\n",sum);

}


int main(){
    printf("请输入年、月、日(2015 12 10)\n");
    int n,y,r;
    scanf("%d %d %d",&n,&y,&r);
    nianyueri(n,y,r);
    system("pause");
    return 0;
}


