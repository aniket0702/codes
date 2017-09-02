#include <stdio.h>
#include <math.h>
int a = 0,b = 0, c = 0, a1 = 0, b1 = 0, com[5] = { 1, 0, 0, 0, 0};
int arr1[5] = {0}, arr2[5] = {0}, bnum[5] = {0};
int compare_a[5] = {0}, compare_b[5] = {0}, pro[5] = {0}, res[5] = {0};
void binary()
{
     a1 = fabs(a);
     b1 = fabs(b);
     int r, r2, i, temp;
     for (i = 0; i < 5; i++)
     {
           r = a1 % 2;
           a1 = a1 / 2;
           r2 = b1 % 2;
           b1 = b1 / 2;
           arr1[i] = r;
           arr2[i] = r;
           bnum[i] = r2;
           if(r2 == 0)
              compare_b[i] = 1;
           if(r == 0)
              compare_a[i] =1;
     }
   c = 0;
   for ( i = 0; i < 5; i++)
   {
      res[i] = com[i]+ compare_b[i] + c;
      if(res[i] >= 2)
        c = 1;
      else
        c = 0;
      res[i] = res[i] % 2;
     }
   for (i = 4; i >= 0; i--)
     compare_b[i] = res[i];
   if (a < 0)
   {
      c = 0;
     for (i = 4; i >= 0; i--)
        res[i] = 0;
     for ( i = 0; i < 5; i++)
     {
           res[i] = com[i] + compare_a[i] + c;
           if (res[i] >= 2)
                c = 1;
           else
                c = 0;
           res[i] = res[i]%2;
     }
     for (i = 4; i >= 0; i--)
     {
           arr1[i] = res[i];
           arr2[i] = res[i];
     }
   }
   if(b < 0)
   {
     for (i = 0; i < 5; i++){
           temp = bnum[i];
           bnum[i] = compare_b[i];
           compare_b[i] = temp;
     }
   }
}
void add_bit(int num[])
{
    int i;
    c = 0;
    for ( i = 0; i < 5; i++)
    {
           res[i] = pro[i] + num[i] + c;
           if (res[i] >= 2)
           {
                c = 1;
           }
           else
           {
                c = 0;
           }
           res[i] = res[i]%2;
     }
     for (i = 4; i >= 0; i--)
         pro[i] = res[i];
}
void fun_shift(){
    int temp = pro[4], temp2 = pro[0], i;
    for (i = 1; i < 5  ; i++)
       pro[i-1] = pro[i];
    pro[4] = temp;
    for (i = 1; i < 5  ; i++)
        arr2[i-1] = arr2[i];
    arr2[4] = temp2;
}
void main()
{
    int i, q = 0;
    printf("Enter A: ");
    scanf("%d",&a);
    printf("Enter B: ");
    scanf("%d", &b);
    binary();
    for (i = 0;i < 5; i++)
    {
           if (arr1[i] == q)
           {
               fun_shift();
               q = arr1[i];
           }
           else if(arr1[i] == 1 && q == 0)
           {

              add_bit(compare_b);
              fun_shift();
              q = arr1[i];
           }
           else
           {
              add_bit(bnum);
              fun_shift();
              q = arr1[i];
           }
     }
     for (i = 4; i >= 0; i--)
        printf("%d", pro[i]);
     for (i = 4; i >= 0; i--)
           printf("%d", arr2[i]);
}
