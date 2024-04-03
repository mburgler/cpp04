/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburgler <mburgler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 21:13:09 by mburgler          #+#    #+#             */
/*   Updated: 2024/04/01 23:04:11 by mburgler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Brain {
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& ref);
		~Brain();
		Brain& operator=(const Brain& ref);
		void	think_obsessively_about(const std::string thought);
		void	whats_on_your_mind_darling();
};
