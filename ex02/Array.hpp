/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 23:01:39 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/29 09:04:57 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <class T>
class Array{
    private:
        T *tab;
        unsigned int size;
    public:
        Array(){

        }
        Array(unsigned int size){
            this->size = size;
            this->tab = new[size];
            for(unsigned int i = 0; i < size; i++){
                this->tab[i] = NULL;
            } 
        }
        ~Array(){
            for(unsigned int i = 0; i < size; i++){
                delete this->tab[i];
            }
            delete tab[];
        }
        Array(const Array &other){

        }
        Array &operator=(const Array &other){

        }

        T *getTab() const{
            return (this->tab);
        }
        void setTab(T const *arr){
            this->tab = arr;
        }

        unsigned int size(){
            return (this->size);
        }
};


#endif