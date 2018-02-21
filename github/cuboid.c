#include <stdio.h>

int main(void) {
  float l,b,h,vol;
  printf("enter the length breadth and height of the cuboid");
  scanf("%f%f%f",&l,&b,&h);
  vol=l*b*h;
  printf("the volume of cuboid is %f",vol);
	return 0;
}
