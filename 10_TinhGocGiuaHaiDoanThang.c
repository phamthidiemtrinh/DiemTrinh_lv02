#include <stdio.h>
#include <math.h>
void main ()
{
    float x1,x2,x3,x4,y1,y2,y3,y4,cosGoc,a1,a2,b1,b2;
    printf("nhap lan luot toa do A;B;C;D \n");
    scanf("%f%f",&x1,&y1);
    scanf("%f%f",&x2,&y2);
    scanf("%f%f",&x3,&y3);
    scanf("%f%f",&x4,&x4);
    a1=y2-y1;
    b1=x1-x2;
    a2=y4-y3;
    b2=x3-x4;
    cosGoc= (a1*a2+b1*b2)/( sqrt(a1*a1+b1*b1)*sqrt(a2*a2+b2*b2));
    if (cosGoc<0 ) cosGoc=-cosGoc;
    if ((cosGoc==1) || (cosGoc==0)) printf ("giua hai duong thang khong co goc ton tai");
    else printf("cos goc giua hai doan AB=%f",cosGoc);
}
