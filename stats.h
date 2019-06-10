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
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/**
 * @brief Print statistics of an array including min, max, mean and median.
 *
 * <Add Extended Description Here>
 *
 * @param The array
 * @param Size of array
 *
 * @return void
 */
void print_statistics(unsigned char* array, unsigned int size);

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
void print_array(unsigned char* array, unsigned int size);
void sort_array(unsigned char* array, unsigned int size);
unsigned char find_maximum(unsigned char* array, unsigned int size);
unsigned char find_minimum(unsigned char* array, unsigned int size);
unsigned char find_mean(unsigned char* array, unsigned int size);
unsigned char find_median(unsigned char* array, unsigned int size);


#endif /* __STATS_H__ */
