/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdstream.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:15:19 by dcarrilh          #+#    #+#             */
/*   Updated: 2023/11/30 14:10:14 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	char input[256];

	std::cout << "Error: Need New Username!" << std::endl;

	std::cout << "New User: ";
	std::cin >> input;
	
	std::cout << "User: [" << input << "]" << std::endl;
}