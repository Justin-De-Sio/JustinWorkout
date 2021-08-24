#include <iostream>
#include "workout.h"
#include "exercise.h"

using namespace std;

void test() {
    Workout w1{"Upper body session"};

    Exercise e1{"Push-ups"};
    Exercise e2{"Dips"};
    Exercise e3{"Triceps extension on floor"};
    Exercise e4{"Pick push ups"};

    w1.addExercise(&e1);
    w1.addExercise(&e2);
    w1.addExercise(&e3);
    w1.addExercise(&e4);


    w1.showExercise();

}

int main() {
    test();


}
