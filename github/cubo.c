#include <stdio.h>

int main(void) {
  float l,b,h,vol,area;
  printf("enter the length breadth and height of the cuboid");
  scanf("%f%f%f",&l,&b,&h);
  area=l*b;	
  vol=l*b*h;
  printf("the area of the cuboid is %f",area);	
  printf("the volume of cuboid is %f",vol);
	return 0;
}
