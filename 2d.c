#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm," ");
    int choice;
    printf("\n Enter your choice : \n 1. Translation \n 2. Scaling \n 3. Rotation\n\n ");
    scanf("%d", &choice);
    if(choice == 1)
    {
        int x3,y3,x2,y2,x1,y1,x,y;
        printf(" Enter the co-ordinates: ");
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        int tri1[8] = {x1,y1,x2,y2,x3,y3,x1,y1};
        drawpoly(4,tri1);
        printf(" Enter translation co-ordinates: ");
        scanf("%d%d",&x,&y);
        x1 = x1+x;
        y1 = y1+y;
        x2 = x2+x;
        y2 = y2+y;
        x3 = x3+x;
        y3 = y3+y;
        int tri2[8] = {x1,y1,x2,y2,x3,y3,x1,y1};
        drawpoly(4,tri2);
    }
    else if(choice == 2)
    {
        int x3,y3,x2,y2,x1,y1,x,y;
        printf(" Enter the co-ordinates: ");
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        int tri1[8] = {x1,y1,x2,y2,x3,y3,x1,y1};
        drawpoly(4,tri1);
        printf(" Enter scaling co-ordinates: ");
        scanf("%d%d",&x,&y);
        x1=(x1*x);
        y1=(y1*y);
        x2=(x2*x);
        y2=(y2*y);
        x3=(x3*x);
        y3=(y3*y);
        int tri2[8] = {x1,y1,x2,y2,x3,y3,x1,y1};
        drawpoly(4,tri2);
    }
    else if(choice == 3)
    {
        int x3,y3,x2,y2,x1,y1,x,y;
        printf(" Enter the co-ordinates: ");
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        int tri1[8] = {x1,y1,x2,y2,x3,y3,x1,y1};
        drawpoly(4,tri1);
        double angle;
        x = x2;
        y = y2;
        printf(" Enter rotation angle: ");
        scanf("%lf", &angle);
        angle = (angle*3.14)/180;
        double c = cos(angle);
        double s = sin(angle);
        int a1,b1,a2,b2,a3,b3;
        a1=x+(x1-x)*c-(y1-y)*s;
        b1=y+(x1-x)*s+(y1-y)*c;
        a2=x+(x2-x)*c-(y2-y)*s;
        b2=y+(x2-x)*s+(y2-y)*c;
        a3=x+(x3-x)*c-(y3-y)*s;
        b3=y+(x3-x)*s+(y3-y)*c;
        int tri2[8] = {a1,b1,a2,b2,a3,b3,a1,b1};
        drawpoly(4,tri2);
    }
    else
        printf(" INVALID CHOICE");
    getch();
    closegraph();
    return 0;
}
