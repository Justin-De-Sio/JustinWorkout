#include <iostream>
#include "workout.h"

using namespace std;

void test() {
    Workout uBody{"Upper body session"}, fBody{"Full body"};

    Exercise pushUps{"Push-ups"}, dips{"Dips"}, tricepsExtensionOnFloor{"Triceps Extension On Floor"},
    pikePushUps{"pike push ups"}, l1{"Mountain Climbers"}, l2{"Lying Leg Raises"}, l3{"Crunches"},
    l4{"Scissor Kicks"}, squats{"Squats"}, lunges{"Lunges"}, australianTraction{"Australian traction"};

    uBody.addExercise(pikePushUps);
    uBody.addExercise(dips);
    uBody.addExercise(pushUps);
    uBody.addExercise(tricepsExtensionOnFloor);

    fBody.addExercise(squats);
    fBody.addExercise(lunges);
    fBody.addExercise(australianTraction);
    fBody.addExercise(pikePushUps);
    fBody.addExercise(dips);
    fBody.addExercise(pushUps);

    uBody.showExercise();
    fBody.showExercise();




}

int main() {
    test();


}
