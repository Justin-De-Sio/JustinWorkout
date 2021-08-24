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
//    std::cout << exercise->getName() << " added to " << this->getName() << std::endl;
}

void Workout::showExercise() {
    std::cout << m_name << " :\n";
    for(auto it{m_exercises.cbegin()}; it != m_exercises.cend(); ++it){
        std::cout << "- " << (*it)->getName() << std::endl;
    }

}

