#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<conio.h>

void translation()
{
            int x1,y1,x2,y2,x3,y3;
            int tx,ty;
            printf("\nEnter the co-ordinates of Triangle:\n ");
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
            int before[] = {x1,y1,x2,y2,x3,y3,x1,y1};
            int xo1,yo1,xo2,yo2,xo3,yo3;
            printf("\nEnter Translation amount (tx,ty):\n ");
            scanf("%d%d",&tx,&ty);
            drawpoly(4,before);
            xo1 = x1+tx;
            yo1 = y1+ty;
            xo2 = x2+tx;
            yo2 = y2+ty;
            xo3 = x3+tx;
            yo3 = y3+ty;
            int after[] = {xo1,yo1,xo2,yo2,xo3,yo3,xo1,yo1};
            drawpoly(4,after);
}

void scaling()
{
            float x1,y1,x2,y2,x3,y3;
            float sx,sy;
            printf("\nEnter the co-ordinates of Triangle:\n ");
            scanf("%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3);
            int before[] = {x1,y1,x2,y2,x3,y3,x1,y1};
            drawpoly(4,before);
            float xo1,yo1,xo2,yo2,xo3,yo3;
            printf("\n Enter Scaling amount (sx,sy):\n ");
            scanf("%f%f",&sx,&sy);
            xo1=(x1*sx);
            yo1=(y1*sy);
            xo2=(x2*sx);
            yo2=(y2*sy);
            xo3=(x3*sx);
            yo3=(y3*sy);
            int after[] = {xo1,yo1,xo2,yo2,xo3,yo3,xo1,yo1};
            drawpoly(4,after);
}

void rotation()
{
            int x1,y1,x2,y2,x3,y3;
            int xo1,yo1,xo2,yo2,xo3,yo3;
            printf("\nEnter the coordinates of triangle:\n ");
            scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
            int before[] = {x1,y1,x2,y2,x3,y3,x1,y1};
            drawpoly(4,before);
            double s,c,angle;
            printf("\nEnter the angle: ");
            scanf("%lf",&angle);
            int p=x1,q=y1;
            c = cos(angle*3.14/180);
            s = sin(angle*3.14/180);
            xo1=p+(x1-p)*c-(y1-q)*s;
            yo1=q+(x1-p)*s+(y1-q)*c;
            xo2=p+(x2-p)*c-(y2-q)*s;
            yo2=q+(x2-p)*s+(y2-q)*c;
            xo3=p+(x3-p)*c-(y3-q)*s;
            yo3=q+(x3-p)*s+(y3-q)*c;
            line(xo1,yo1,xo2,yo2);
            line(xo2,yo2,xo3,yo3);
            line(xo3,yo3,xo1,yo1);
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    int choice = 0;
    printf("Transformations are : \n \t 1. Translation \n \t 2. Scaling \n \t 3. Rotation");
    printf("\nEnter your Choice:\n ");
    scanf("%d", &choice);
    switch(choice)
     {
      case 1:
        {

            translation();
            break;
        }
      case 2:
        {
            scaling();
            break;
        }
      case 3:
        {
            rotation();
            break;
        }
      default:
            printf("INVALID CHOICE");
     }
    getch();
    closegraph();
    return 0;
}
