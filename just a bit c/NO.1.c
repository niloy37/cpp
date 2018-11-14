#include<stdio.h>
#include<math.h>
void Area();
void Triangle_area(float areaCircle);
void Circle_area();
int main()
{
    Area();
}
void Area()
{

  Circle_area();


}
void Circle_area()
{
    int r; //r is the radius of the circle
    printf("enter the radius of the circle: ");
    scanf("%d",&r);
    float areaofcircle=3.1416*pow(r,2);
    printf("The area of the circle is %0.2f",areaofcircle);
    Triangle_area(areaofcircle);
}
void Triangle_area(float areaCircle)
{
    int b,h; // b=breadth and h=height of the triangle
    printf("\nenter the breadth and height of the triangle:");
    scanf("%d %d",&b,&h);
    float areaoftriangle=0.5*b*h;
    printf("Area of the triangle is %0.2f\n",areaoftriangle);
   printf("The difference of area of the circle and triangle is %0.2f",(areaCircle-areaoftriangle));
}
