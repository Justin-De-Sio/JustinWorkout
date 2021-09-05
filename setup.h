//
// Created by Justin on 25/08/2021.
//

#pragma once

#include "workout.h"

Workout setUpperBody();

Workout setFullBody();


bool inRange(unsigned low, unsigned high, unsigned x);
unsigned askDifficulty();
unsigned askRepeat();
unsigned askDay();