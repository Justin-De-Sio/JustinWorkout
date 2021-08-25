#include <iostream>
#include "workout.h"
#include "setup.h"
#include <chrono>

using namespace std;


Workout chooseWorkout() {
    cout << "Hello, choose your bodybuilding training:\n"
         << "1. Full Body\n"
         << "2. Upper Body\n";
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

    auto workout = chooseWorkout();
    workout.showExercise();
    workout.poo();

    auto t1{steady_clock::now()};
    auto totalTime = duration_cast<minutes>(t1 - t0).count();
    cout << "Total session time: " << totalTime << " minutes" << endl;
}

int main() {
    startedWorkout();
}