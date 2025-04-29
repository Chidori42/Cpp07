#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template <typename T, typename soufian>

void iter(T array, int length, soufian func){
   if (length < 0)
      return ;
   for (int i = 0; i < length; i++){
      func(array[i]);
   } 
}

#endif