#ifndef OG_FUNCTIONS_H
#define OG_FUNCTIONS_H

unsigned long long random_number(unsigned long long min,
                                 unsigned long long max);

void to_lower_case(char *str);

unsigned long long collatz_og(unsigned long long random_num);

void output_og(unsigned long long n, unsigned long long min,
               unsigned long long max);

#endif