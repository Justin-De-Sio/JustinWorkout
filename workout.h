//
// Created by Justin on 23/08/2021.
//
#pragma once


#include "exercise.h"
#include <string>
#include <utility>
#include <vector>


class Workout {
public:
    explicit Workout(std::string name) : m_name(std::move(name)) {}

    void addExercise(Exercise &exercise);

    void removeExercise(Exercise &exercise);

    void showExercise() const;

    void startOfTheSession() const;

private:
    std::vector<Exercise *> m_exercises;
    std::string m_name;
};

