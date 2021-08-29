//
// Created by Justin on 25/08/2021.
//

#include "setup.h"
#include <memory>



Exercise pushUps{ "Push-ups" }, dips{ "Dips" }, tricepsExtensionOnFloor{ "Triceps Extension On Floor" },
		pikePushUps{ "pike push ups" }, squats{ "Squats" }, lunges{ "Lunges" }, australianTraction{ "Australian traction" };

Workout setUpperBody() {

    
	Workout uBody{ "Upper body session" };
	uBody.addExercise(pikePushUps);
	uBody.addExercise(dips);
	uBody.addExercise(pushUps);
	uBody.addExercise(tricepsExtensionOnFloor);

	return uBody;
}

Workout setFullBody() {



	Workout fBody{ "Full body" };

	fBody.addExercise(squats);
	fBody.addExercise(lunges);
	fBody.addExercise(australianTraction);
	fBody.addExercise(pikePushUps);
	fBody.addExercise(dips);
	fBody.addExercise(pushUps);

	return fBody;
}