#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct Point{
  
   float x;
   float y;
} pt;


float calperimeter(pt point[], int len){
  
   float dist = 0.0;
   for(int i=0;i<len-1;i++){
      
       dist= dist +(sqrt((point[i].x -point[i+1].x)*(point[i].x -point[i+1].x) + (point[i].y -point[i+1].y)*(point[i].y -point[i+1].y)));
   }
  
   dist= dist+(sqrt((point[len-1].x -point[0].x)*(point[len-1].x -point[0].x) + (point[len-1].y -point[0].y)*(point[len-1].y -point[0].y)));
  
   return dist;
  
}

int main(){
  
   srand(time(NULL));
   pt points[3];
   for(int i=0; i<3; i++){
       points[i].x = -7 + rand()%(7+7+1);
       points[i].y = -7 + rand()%(7+7+1);
         printf("X%d = %f\n",i,points[i].x);
         printf("Y%d = %f\n",i,points[i].y);
   }
  
   float perimeter = calperimeter(points, 3);

   printf("calculated Perimeter = %.2f", perimeter);
}