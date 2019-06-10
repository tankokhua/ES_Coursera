/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
#define SIZE2 (4)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  unsigned char test2[SIZE2] = { 4, 3, 1, 2 };

  /* Other Variable Declarations Go Here */
  print_statistics(test, SIZE);
  /* Statistics and Printing Functions Go Here */

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char* array, unsigned int size)
{
   print_array(array, size);
   printf("Min: %d\n" , find_minimum(array, size));
   printf("Max: %d\n" , find_maximum(array, size));
   printf("Mean: %d\n" , find_mean(array, size));
   printf("Median: %d\n" , find_median(array, size));
   print_array(array, size);
   return;
}
void print_array(unsigned char* array, unsigned int size)
{
    for (int i=0; i<size; i++)
    {
       printf("%03d ", array[i]);
       if ( (i+1)%5==0) { printf("\n"); }
    }
}
void sort_array(unsigned char* array, unsigned int size)
{
    unsigned char i, j, tmp;
    for (i=1; i<size; i++) {
       j=i;
       while( (j>0) && (array[j] > array[j-1])) {
              tmp = array[j];
              array[j] = array[j-1];
              array[j-1] = tmp;
              j--;
       }
    }
}
unsigned char find_minimum(unsigned char* array, unsigned int size)
{
    sort_array(array, size);
    return array[size-1];
}
unsigned char find_maximum(unsigned char* array, unsigned int size)
{
    sort_array(array, size);
    return array[0];
}
unsigned char find_mean(unsigned char* array, unsigned int size)
{
    unsigned int total = 0;
    for(int i=0; i<size; i++)
    {
       total += array[i];
    }
    return total/size;
}
unsigned char find_median(unsigned char* array, unsigned int size)
{
    sort_array(array, size);
    return (array[size/2]+array[size/2-1])/2;
}
