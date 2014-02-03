//=======================================================================
// Copyright Baptiste Wicht 2013-2014.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)
//=======================================================================

#ifndef TIMER_H
#define TIMER_H

#include "stl/types.hpp"

namespace timer {

void install();

uint64_t ticks();
uint64_t seconds();

//TODO Remove when kernel shell is no more
void sleep_ms(uint64_t delay);

void tick();

} //end of timer namespace

#endif
