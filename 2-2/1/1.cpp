 #include <stdio.h>
   
typedef struct{
    double x;
    double y;
}Point;

typedef struct{
          char name[7];
         Point points[3];
 }Person;

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
	  printf("%s", p1.name);
          for (int i = 0; i<3; i++){
                  printf("(%.3lf %.3lf)",p1.points[i].x, p1.points[i].y);}
         printf("\n");
	 printf("%s", p2.name);
	 for (int i = 0; i<3; i++){
		 printf("(%.3lf %.3lf)", p2.points[i].x, p2.points[i].y);}
	 printf("\n");
         printf("%s", p3.name);
          for (int i = 0; i<3; i++){
                 printf("(%lf %lf)",p3.points[i].x, p3.points[i].y);}
  	return 0;
  }
