#include <iostream>
#include "workout.h"
#include <chrono>
#include "timer.h"
using namespace std;

namespace exerciseLibrary {
    Exercise pushUps{"Push-ups"}, dips{"Dips"}, tricepsExtensionOnFloor{"Triceps Extension On Floor"},
            pikePushUps{"pike push ups"}, squats{"Squats"}, lunges{"Lunges"}, australianTraction{"Australian traction"};

}

Workout setUpperBody() {
    using namespace exerciseLibrary;

    Workout uBody{"Upper body session"};

    uBody.addExercise(pikePushUps);
    uBody.addExercise(dips);
    uBody.addExercise(pushUps);
    uBody.addExercise(tricepsExtensionOnFloor);

    return uBody;
}

Workout setFullBody() {
    using namespace exerciseLibrary;

    Workout fBody{"Full body"};

    fBody.addExercise(squats);
    fBody.addExercise(lunges);
    fBody.addExercise(australianTraction);
    fBody.addExercise(pikePushUps);
    fBody.addExercise(dips);
    fBody.addExercise(pushUps);

    return fBody;
}

Workout chooseWorkout() {
    cout << "Hello, choose your bodybuilding training:\n" << "1. Full Body\n" << "2. Upper Body\n\n";
    int foo;
    cin >> foo;
    switch (foo) {
        case 1:
            return setFullBody();
        case 2:
            return setUpperBody();
        default:
            break;
    }
    return chooseWorkout();
}

void startedWorkout() {
    using namespace std::chrono;
    auto t0{steady_clock::now()};

    auto w = chooseWorkout();
    w.poo();

    auto t1{steady_clock::now()};
    auto totalTime = duration_cast<minutes>(t1 - t0).count();
    cout << "Total session time: " << totalTime << " minutes" << endl;
}



int main() {
    startedWorkout();


}


