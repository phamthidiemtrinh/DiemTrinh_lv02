#include <stdio.h>
#include <math.h>
void main ()
{
    int so;
    float a,b,c,d,s,p,pi,r;
    printf("nhap lua chon : ");
    scanf("%d",&so);
    switch (so)
    {


case 1:
    {
    printf("nhap 3 canh tam giac \n");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    p = (a+b+c);
    printf("chu vi tam giac %f\n",p);
    p=p/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("dien tich tam giac %f\n", s);
    break;
    }
case 2:
    {
    printf("nhap canh hinh vuong : \n");
    scanf("%f",&a);
    p=4*a;
    s=a*a;
    printf(" chu vi hinh vuong la: \n%f", p);
    printf("dien tich hinh vuong la: \n%f",s);
    break;
    }
case 3:
    {
    printf("nhap chieu dai hinh chu nhat : \n");
    scanf("%f",&a);
    printf("nhap chieu rong hinh chu nhat: \n");
    scanf("%f",&b);
    printf(" chu vi hinh chu nhat la: \n%f", (a+b)*2);
    printf("dien tich hinh chu nhat la: \n%f",a*b);
    break;
    }
case 4:
    {
    pi=3.1416;
    printf("nhap ban kinh hinh tron\n");
    scanf("%f",&r);
    p=2*pi*r;
    s=r*r*pi;
    printf("chu vi hinh tron: \n%f",p);
    printf("dien tich hinh tron: \n%f",s);
    break;
    }
    default : printf ("ba nhap sai so");
}
}

