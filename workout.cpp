//
// Created by Justin on 23/08/2021.
//

#include <iostream>
#include "workout.h"


using namespace std;

void Workout::addExercise(Exercise &exercise) {
    m_exercises.insert(m_exercises.end(), &exercise);
    //    cout << exercise->getName() << " added to " << this->getName() << "\n";
}

void Workout::removeExercise(Exercise &exercise) {
    m_exercises.erase(find(m_exercises.cbegin(), m_exercises.cend(), &exercise));
}

void Workout::showExercise() const {
    cout << m_name << " :\n";
    for (Exercise const *exercise: m_exercises)
        cout << "-" << exercise->getName() << "\n";
    cout << "\n";
}

void Workout::startOfTheSession()const {
    cout << "For each series :\n"
         << "Doing the exercice -> 2min pause -> Press enter to continue \n";
    for (Exercise const *exercise: m_exercises) {
        cout << "6 times " << exercise->getName() << "\n\n";

        int i = 0;
        do {
            cout << exercise->getName() << " (" << i + 1 << "/6)\n";
            cin.ignore();
            ++i;
        } while (i < 6);
    }
    cout << "Session finish\n";
}

