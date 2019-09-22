#include <stdio.h>
int main(void)
{
  int height;
  printf("Enter the height of your desired triangle:");
  scanf("%d", &height);
  //making loops for for subsequent lines
  for(int row = 1; row <=height; row = row+1)
  {
    //printing the leading space characters
    for (int x=1; x <= height-row; x=x+1 )
      printf(" ");
      //the amount of "o" that we need
    for(int x=1; x<=row*2-1; x=x+1)
      printf("o");
        //go for next line
    printf("\n");

  }
}
