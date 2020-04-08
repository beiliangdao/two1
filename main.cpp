/*给定n个整数（可能为负数）组成的序列a[1],a[2],a[3],…,a[n],求该序列如a[i]+a[i+1]+…+a[j]的子段和的最大值。
当所给的整数均为负数时定义子段和为0，依此定义，所求的最优值为： Max{0,a[i]+a[i+1]+…+a[j]},1<=i<=j<=n
例如，当（a[1],a[2],a[3],a[4],a[5],a[6]）=(-2,11,-4,13,-5,-2)时，最大子段和为20。*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,a[10],i,sum=0,max=0;
    printf("数组个数：");
    scanf("%d",&n);
    printf("数组序列：");
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum<0)
        {
            sum=0;
        }
        if(sum>max)
        {


        max=sum;}


    }
    if(max<0)
    {
       printf("最大子段和：0");
    }
    else
    {
        printf("最大子段和：%d",max);
    }

    return 0;
}
