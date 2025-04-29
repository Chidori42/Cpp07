/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:23:34 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/28 11:29:25 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
template <typename T>

void swap(T &n1, T &n2){
    T tmp = n1;
    n1 = n2;
    n2 = tmp;
}
template <typename T>
T &min(const T& n1, const T& n2){
    if (n1 > n2)
        return (n2);
    return (n1);
}
template <typename T>
T &max(const T& n1, const T& n2){
    if (n1 > n2)
        return (n1);
    return (n2);
}
template <typename T>

T &min(T& n1, T& n2){
    if (n1 > n2)
        return (n2);
    return (n1);
}
template <typename T>
T &max(T& n1, T& n2){
    if (n1 > n2)
        return (n1);
    return (n2);
}

#endif
