/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-fagr <ael-fagr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 09:00:47 by ael-fagr          #+#    #+#             */
/*   Updated: 2025/04/29 09:01:50 by ael-fagr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main() {
    try {
        Array<int> a1;
        std::cout << "a1 size: " << a1.size() << "\n";

        Array<int> a2(5);
        std::cout << "a2 size: " << a2.size() << "\n";

        for (std::size_t i = 0; i < a2.size(); ++i)
            a2[i] = static_cast<int>(i * 10);

        Array<int> a3 = a2;
        a2[0] = 999;

        std::cout << "a3[0] (should be 0): " << a3[0] << "\n";
        std::cout << "a2[0] (should be 999): " << a2[0] << "\n";

        Array<int> a4;
        a4 = a3;
        a3[1] = 888;
        std::cout << "a4[1] (should be 10): " << a4[1] << "\n";

        std::cout << "a2[5] (should throw): ";
        std::cout << a2[5] << "\n";

    } catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << "\n";
    }

    return 0;
}
