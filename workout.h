//
// Created by Justin on 23/08/2021.
//

#ifndef JUSTINWORKOUT_WORKOUT_H
#define JUSTINWORKOUT_WORKOUT_H

#include "exercise.h"
#include <string>
#include <utility>
#include <vector>
#include <cstdarg>

class Workout {
public:
	explicit Workout(std::string name) : m_name(std::move(name)) {}

    std::string getName();

	void setName(std::string name);

	void addExercise(Exercise& exercise);

	void removeExercise(Exercise& exercise);

	void showExercise();

	void poo();
	void next();

private:
	std::vector<Exercise*> m_exercises;
	std::string m_name;
};

#endif //JUSTINWORKOUT_WORKOUT_H
