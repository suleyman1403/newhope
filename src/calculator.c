#include<stdio.h>

int main(){
    
    int simple;
    int navi;

    scanf("%d %d", &simple, &navi);
    
    int pose = simple + navi;
    printf("%d + %d = %i\n", simple, navi, pose);
    int iro = simple * navi;
    printf("%d * %d = %d\n", simple, navi, iro);
    float fuck = (float) navi / simple;
    printf("%d / %d = %f\n",  simple, navi, fuck);
    int hate_polyglot = simple - navi;
    printf("%d - %d = %i\n", simple, navi, hate_polyglot);



    if (pose%2 == 0) 
    { printf ("aaaaaaaaaaaa\n");
    } else {
      printf("1111111111"); }
    if (iro%2 == 0) 
    { printf ("bbbbbbbbbbbb\n");
    } else {
      printf("22222222222222"); }

    if (hate_polyglot%2 == 0) 
    { printf ("ccccccccccc\n");
    } else {
      printf("3333333333"); }


   return 0;
}
