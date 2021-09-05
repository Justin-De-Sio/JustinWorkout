#include <iostream>
#include "workout.h"
#include "setup.h"
#include <chrono>
#include <memory>

using namespace std;
using namespace std::chrono;

Workout chooseWorkout() {
    cout << "Hello, choose your bodybuilding training:\n1. Full Body\n2. Upper Body\n";
    int foo;
    cin >> foo;
    cin.ignore();
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

int main() {

    auto workout = chooseWorkout();
    workout.showExercise();
    workout.setAllRepeat(askRepeat());

    auto t0{steady_clock::now()};

    workout.startOfTheSession();

    auto t1{steady_clock::now()};
    auto totalTimeMinutes = duration_cast<minutes>(t1 - t0);
    auto secondsLeft = duration_cast<seconds>(t1 - t0) - totalTimeMinutes;
    cout << "Total session time: " << totalTimeMinutes.count() << " minutes " << secondsLeft.count() << " seconds\n";
    system("pause");
}