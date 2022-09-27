/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kanykei <kanykei@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:26:34 by kanykei           #+#    #+#             */
/*   Updated: 2022/09/27 18:36:11 by kanykei          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/Dog.hpp"
#include "include/Cat.hpp"
// #include <stdlib.h>
#include <iomanip>

// To check leaks:
// void checkLeaks(void)
// {
// 	system("leaks Brains");
// }

int main()
{
	Animal* CatsAndDogs[10];

	// atexit(&checkLeaks);
	for (int i = 0; i < 10; i++)
	{
		if (i >= 5)
			CatsAndDogs[i] = new Dog();
		else
			CatsAndDogs[i] = new Cat();
	}
	std::cout << std::endl;
	Cat copyCat(*(Cat *)CatsAndDogs[0]);
	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			std::cout << std::setw(50) << std::left << copyCat.getBrain()->getIdea(j);
			std::cout << std::setw(50) << std::left << ((Cat *)CatsAndDogs[i])->getBrain()->getIdea(j) << std::endl;
		}
	}
	std::cout << std::endl;
	Dog copyDog(*(Dog*)CatsAndDogs[5]);
	std::cout << std::endl;
	for (int i = 5; i < 10; i++)
	{
		for (int j = 0; j < 5; j++) {
			std::cout << std::setw(50) << std::left << copyDog.getBrain()->getIdea(j);
			std::cout << std::setw(50) << std::left << ((Dog *)CatsAndDogs[i])->getBrain()->getIdea(j) << std::endl;
		}
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete CatsAndDogs[i];
	}
}
