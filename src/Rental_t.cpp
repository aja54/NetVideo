/*
  Rental_t.cpp

  Test program for class Rental
*/

#include <cassert>

#include "Rental.hpp"

int main() {
	Video movie("A", Video::REGULAR);
	
	//rented 0 days
	{
		Rental rental(movie, 0);
		assert(rental.getDaysRented() == 0 );
	}
    return 0;
}
