#include <stdio.h>
#include <math.h>
void main ()
{
    float x1,x2,x3,x4,y1,y2,y3,y4,a,a1,a2,b1,b2,dx,dy,d,c1,c2;
    printf("nhap lan luot toa do A;B;C;D \n");
    scanf("%f%f",&x1,&y1);
    scanf("%f%f",&x2,&y2);
    scanf("%f%f",&x3,&y3);
    scanf("%f%f",&x4,&x4);
    a1=y2-y1;
    b1=x1-x2;
    a2=y4-y3;
    b2=x3-x4;
    c1=(y1-y2)*x1+(x1-x2)*y1;
    c2=(y3-y4)*y3+(y3-y4)*y3;
    d=a1*b2-a2*b1;
    dx=c1*b2-b1*c2;
    dy=a1*c2-a2*c1;
    if ((d==0)&&(dy==0)) printf (" hai duong thang trung nhau");
    else if (((dx==0)&&(dy!=0)) || ((dx!=0)&&(dy==0))) printf("hai duong thang song song");
    else
        printf("toa do diem trung nhau(x,y)= (%f;%f)",dx/d,dy/d);
}
