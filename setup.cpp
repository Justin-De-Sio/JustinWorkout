//
// Created by Justin on 25/08/2021.
//

#include "setup.h"
#include <memory>
#include<iostream>
using namespace std;

Exercise pushUps{ "Push-ups" }, dips{ "Dips" }, tricepsExtensionOnFloor{ "Triceps Extension On Floor" },
pikePushUps{ "pike push ups" }, squats{ "Squats" }, lunges{ "Lunges" }, australianTraction{ "Australian traction" };

Workout setUpperBody() {
	auto repeat = askRepeat();

	Workout uBody{ "Upper body session" };

	uBody.addExercise(pikePushUps);
	uBody.addExercise(dips);
	uBody.addExercise(pushUps);
	uBody.addExercise(tricepsExtensionOnFloor);

	uBody.setAllRepeat(repeat);

	return uBody;
}

Workout setFullBody() {
	auto repeat = askRepeat();

	Workout fBody{ "Full body" };

	fBody.addExercise(squats);
	fBody.addExercise(lunges);
	fBody.addExercise(australianTraction);
	fBody.addExercise(pikePushUps);
	fBody.addExercise(dips);
	fBody.addExercise(pushUps);

	fBody.setAllRepeat(repeat);

	return fBody;
}

unsigned askRepeat() {
	unsigned repeat{ 0 };
	cout << "How many repetitions do you do between 6-10 ?";
	cin >> repeat;
	cin.ignore();
	if (inRange(6, 10, repeat))
		return repeat;
	else
		askRepeat();
}

bool inRange(unsigned low, unsigned high, unsigned x) {
	return (low <= x && x <= high);
}