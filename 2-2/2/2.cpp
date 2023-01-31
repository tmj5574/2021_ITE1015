#include <stdio.h>
#include <math.h>
   
typedef struct{
    double x;
    double y;
}Point;

typedef struct{
          char name[7];
         Point points[3];
 }Person;

double length(double x, double y){
	return sqrt(pow(x,2)+pow(y,2));}

  int main(void){
          Person p1,p2,p3;
	  
          scanf("%s", p1.name);
          for (int i = 0; i<3; i++){
                 scanf("%lf %lf", &p1.points[i].x, &p1.points[i].y);}
	  scanf("%s", p2.name);
	  for (int i = 0; i<3; i++){
		scanf("%lf %lf", &p2.points[i].x, &p2.points[i].y);}
	  scanf("%s", p3.name);
	  for (int i = 0; i<3; i++){
		  scanf("%lf %lf", &p3.points[i].x, &p3.points[i].y);}
	  
	  double mx = p1.points[0].x;
	  double my = p1.points[0].y;
	  double maxlen = length(mx, my);

	  printf("%s", p1.name);
          for (int i = 0; i<3; i++){
                  double len = length(p1.points[i].x, p1.points[i].y);
		  if (len >= maxlen){
			maxlen = len;
			mx = p1.points[i].x;
			my = p1.points[i].y;
		  }
		  }
		  printf("(%lf %lf)",mx, my); 

         printf("\n");

	 printf("%s", p2.name);
	 mx = p2.points[0].x;
	 my = p2.points[0].y;
	 maxlen = length(mx,my);
	 for (int i = 0; i<3; i++){
		 double len = length(p2.points[i].x, p2.points[i].y);
		if (len > maxlen){
			maxlen = len;
			mx = p2.points[i].x;
			my = p2.points[i].y;
		}
	 }
		
	 printf("(%lf %lf)",mx, my);
	
	 printf("\n");

         printf("%s", p3.name);
	 mx = p3.points[0].x;
	 my = p3.points[0].y;
	 maxlen = length(mx,my);
          for (int i = 0; i<3; i++){
		 double len = length(p3.points[i].x, p3.points[i].y);
		 if (len > maxlen){
			 maxlen = len;
			 mx = p3.points[i].x;
			 my = p3.points[i].y;}}
		  printf("(%lf %lf)",mx, my);
  	return 0;
  }
