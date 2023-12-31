/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhung-yi <bhung-yi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 15:35:26 by bhung-yi          #+#    #+#             */
/*   Updated: 2023/10/14 15:51:55 by bhung-yi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	j = 0;
	while (argc > 1 && argv && argv[j])
	{
		i = 0;
		while (j > 0 && argv[j][i])
        {
			std::cout << (char)std::toupper(argv[j][i]);
            i++;
        }
        j++;
	}
	std::cout << std::endl;
	return (0);
}