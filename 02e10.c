/*
 * Ch02 Ex10 | C Programming, A Modern Approach
 *
 * In the dweight.c program (Section 2.4), which spaces
 * are essential?
 */
#include<stdio.h>
int main(void){int height,length,width,volume,weight;height=8;length=12;width=10;volume=height*length*width;weight=(volume+165)/166;printf("Dimensions: %dx%dx%d\n",length,width,height);printf("Volume (cubic inches): %d\n",volume);printf("Dimensional weight (pounds): %d\n",weight);return 0;}
/*
 * The newline after the compiler directive, the space after the type in
 * variable definitions, and any spaces inside string tokens. Those are the
 * only spaces that must stay in order to keep the integrity of the dweight.c
 * program.
 */
