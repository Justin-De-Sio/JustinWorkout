//
// Created by Justin on 23/08/2021.
//
#include "timer.h"
#include <iostream>
#include "workout.h"
#include <thread>
#include <chrono>
using namespace std;
std::string Workout::getName() {
    return m_name;
}

void Workout::setName(std::string name) {
    m_name = std::move(name);
}

void Workout::addExercise(Exercise &exercise) {
    m_exercises.insert(m_exercises.end(), &exercise);
//    std::cout << exercise->getName() << " added to " << this->getName() << std::endl;
}

void Workout::removeExercise(Exercise &exercise) {
    m_exercises.erase(find(m_exercises.cbegin(), m_exercises.cend(), &exercise));
}

void Workout::showExercise() {
    std::cout << m_name << " :\n";
    for (auto it{m_exercises.cbegin()}; it != m_exercises.cend(); ++it) {
        std::cout << "- " << (*it)->getName() << std::endl;
    }

}

void Workout::poo() {
    for (auto it{m_exercises.cbegin()}; it != m_exercises.cend(); ++it) {
        std::cout << "6 times "<< (*it)->getName() << std::endl;
        cout << "Press enter each time the series is done:"<< endl;
        for(int i{};i<6;++i){
            cin.ignore();
            std::cout << (*it)->getName()<< " ("<< i+1 << "/6) " << std::endl;
            

        }

    }
}

