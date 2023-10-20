/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratinax <ratinax@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 10:43:25 by ratinax           #+#    #+#             */
/*   Updated: 2023/03/11 11:01:39 by ratinax          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include <iostream>
#include <string>
#define uintptr_t unsigned long

struct Data {
	int i;
	std::string s;
	double d;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int	main()
{
	Data data;
	data.i = 42;
	data.s = "fourty two";
	data.d = 42.42;

	uintptr_t ptr = serialize(&data);
	Data* result = deserialize(ptr);

	std::cout << "Original data: " << YELLOW << &data << ", " << data.i << ", " << data.s << ", " << data.d << WHITEENDL;
	std::cout << "Serialized pointer: " << ptr << WHITEENDL;
	std::cout << "Deserialized data: " << YELLOW << result << ", " << result->i << ", " << result->s << ", " << result->d << WHITEENDL;

	if (&data == result)

	return 0;
}
