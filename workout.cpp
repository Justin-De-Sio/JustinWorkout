//
// Created by Justin on 23/08/2021.
//

#include "workout.h"




std::string Workout::getName() {
    return m_name;
}

void Workout::setName(std::string name) {
    m_name = std::move(name);
}

void Workout::addExercise(const Exercise& exercise) {
    m_exercises->push_back(exercise);
}

