// clrscr.hpp -- <lib> clear screen function

#ifndef CLRSCR_H
#define CLRSCR_H

#include <iostream>

int clrscr(short clearmode) {
	switch(clearmode) {
		case 0  : std::cout << "\033[2J\033[1;1H";
			  return !(std::cout);
		case 1  : return system("clear");
		case 2  : return system("cls");
		default : return 1;
		}
}
#endif

// last edit: 10/08
// developed by https://github.com/Dolfost
// license: https://github.com/Dolfost/clrscr-cpp/blob/main/COPYING
