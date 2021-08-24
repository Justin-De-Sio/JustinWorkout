//
// Created by Justin on 23/08/2021.
//

#ifndef JUSTINWORKOUT_WORKOUT_H
#define JUSTINWORKOUT_WORKOUT_H

#include "exercise.h"
#include <string>
#include <vector>

class Workout {
public:
    Workout(std::string name) : m_name(name){}
    std::string getName();

    void setName(std::string name);

    void addExercise(Exercise *exercise);

    void showExercise();
private:
    std::vector<Exercise*> m_exercises;
    std::string m_name;


};


#endif //JUSTINWORKOUT_WORKOUT_H
