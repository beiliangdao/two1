/*����n������������Ϊ��������ɵ�����a[1],a[2],a[3],��,a[n],���������a[i]+a[i+1]+��+a[j]���Ӷκ͵����ֵ��
��������������Ϊ����ʱ�����Ӷκ�Ϊ0�����˶��壬���������ֵΪ�� Max{0,a[i]+a[i+1]+��+a[j]},1<=i<=j<=n
���磬����a[1],a[2],a[3],a[4],a[5],a[6]��=(-2,11,-4,13,-5,-2)ʱ������Ӷκ�Ϊ20��*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int n,a[10],i,sum=0,max=0;
    printf("���������");
    scanf("%d",&n);
    printf("�������У�");
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
       printf("����Ӷκͣ�0");
    }
    else
    {
        printf("����Ӷκͣ�%d",max);
    }

    return 0;
}
