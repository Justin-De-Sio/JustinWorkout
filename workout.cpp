//
// Created by Justin on 23/08/2021.
//

#include <iostream>
#include "workout.h"




std::string Workout::getName() {
    return m_name;
}

void Workout::setName(std::string name) {
    m_name = std::move(name);
}

void Workout::addExercise(Exercise *exercise) {
    (m_exercises).insert(m_exercises.end(),exercise);
    std::cout << exercise->getName() << " Ajouter à" << this->getName() << std::endl;
}

