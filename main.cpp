#include <iostream>
#include "workout.h"
#include "exercise.h"

using namespace std;

void test() {
    Workout w1{"seance haut du corp"};
    Exercise e1{"pompe"};

    cout << e1.getName()  << endl;
    cout << w1.getName() << endl;
//    w1.addExercise(e1);


}

int main() {
    test();


}
