/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:53:04 by lschrafs          #+#    #+#             */
/*   Updated: 2022/09/30 15:55:36 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
 public:
	// Constructors
	Cat();
	Cat(const Cat &copy);
	
	// Destructor
	~Cat();

	// Operators
	Cat &operator=(Cat other);
	void swap(Cat &first, Cat &second);

	// Functions
	void makeSound() const;
	void implant_idea(std::string idea);
	void print_ideas() const;
 
 private:
	Brain *brain_;
};

#endif