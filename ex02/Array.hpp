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

#include <stdexcept>
#include <cstddef>

template <typename T>
class Array {
private:
    T* data;
    std::size_t length;

public:
    Array() : data(NULL), length(0) {}

    Array(unsigned int n) : data(new T[n]()), length(n) {}

    Array(const Array& other) : data(new T[other.length]), length(other.length) {
        for (std::size_t i = 0; i < length; ++i)
            data[i] = other.data[i];
    }

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data;
            length = other.length;
            data = new T[length];
            for (std::size_t i = 0; i < length; ++i)
                data[i] = other.data[i];
        }
        return *this;
    }
    ~Array() {
        delete[] data;
    }

    T& operator[](std::size_t index) {
        if (index >= length)
            throw std::out_of_range("Index out of bounds");
        return data[index];
    }

    const T& operator[](std::size_t index) const {
        if (index >= length)
            throw std::out_of_range("Index out of bounds");
        return data[index];
    }

    std::size_t size() const {
        return length;
    }
};

#endif
