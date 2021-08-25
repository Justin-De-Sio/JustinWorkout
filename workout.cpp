//
// Created by Justin on 23/08/2021.
//
#include <limits>
#include <iostream>
#include "workout.h"
#include <thread>
#include <chrono>
using namespace std;
string Workout::getName() {
	return m_name;
}

void Workout::setName(string name) {
	m_name = move(name);
}

void Workout::addExercise(Exercise& exercise) {
	m_exercises.insert(m_exercises.end(), &exercise);
	//    cout << exercise->getName() << " added to " << this->getName() << endl;
}

void Workout::removeExercise(Exercise& exercise) {
	m_exercises.erase(find(m_exercises.cbegin(), m_exercises.cend(), &exercise));
}

void Workout::showExercise() {
	cout << m_name << " :\n";
	for (auto it{ m_exercises.cbegin() }; it != m_exercises.cend(); ++it) {
		cout << "- " << (*it)->getName() << endl;
	}
}

void Workout::poo() {
	for (auto it{ m_exercises.cbegin() }; it != m_exercises.cend(); ++it) {
		cout << "6 times " << (*it)->getName() << endl;
		cout << "Press enter each time the series is done:" << endl;
		int i = 0;
		do {
			cout << (*it)->getName() << " (" << i + 1 << "/6) " << endl;
			next();
			++i;
		} while (i < 6);
	}
}

void Workout::next()
{
	cout << "Press Enter to Continue";
	cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
}