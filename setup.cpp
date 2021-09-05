//
// Created by Justin on 25/08/2021.
//

#include "setup.h"
#include <memory>
#include<iostream>

using namespace std;

Exercise pushUps{"Push-ups"}, dipsOnFloor{"Dips on floor"}, tricepsExtensionOnFloor{
        "Triceps extension on the floor"}, tricepsExtensionOnWall("Triceps extension on the wall"),
        pikePushUps{"Pike push ups"}, squats{"Squats"}, lunges{"Lunges"},
        australianTractionPronation{"Australian traction"}, australianTractionSupination(
        "Australian traction supination"), archerSquat("Archer squat"),
        DeclineLunges("Decline lunges"), tractionPronation("Traction pronation"), tractionSupination(
        "Traction supination"),
        DeclinePikePushUp("Decline pike push up"), BenchDips(
        "Bench dips"), DeclineDiamondPumps("Decline  diamond pumps"), superman("Superman"),
        calfExtension("calf extension"), weightedSuperman("Weighted superman");


Workout setUpperBody() {

    Workout uBody{"Upper body session"};

    switch (askDay()) {
        case 1:
            switch (askDifficulty()) {
                case 1:
                    uBody.addExercise(pikePushUps);
                    uBody.addExercise(dipsOnFloor);
                    uBody.addExercise(pushUps);
                    uBody.addExercise(tricepsExtensionOnFloor);
                    break;
                case 2:
                    uBody.addExercise(DeclinePikePushUp);
                    uBody.addExercise(BenchDips);
                    uBody.addExercise(DeclineDiamondPumps);
                    uBody.addExercise(tricepsExtensionOnWall);
                    break;
            }
            break;

        case 2:
            switch (askDifficulty()) {
                case 1:
                    uBody.addExercise(squats);
                    uBody.addExercise(lunges);
                    uBody.addExercise(calfExtension);
                    uBody.addExercise(australianTractionPronation);
                    uBody.addExercise(australianTractionSupination);
                    uBody.addExercise(superman);
                    break;
                case 2:
                    uBody.addExercise(archerSquat);
                    uBody.addExercise(DeclineLunges);
                    uBody.addExercise(calfExtension);
                    uBody.addExercise(tractionPronation);
                    uBody.addExercise(tractionSupination);
                    uBody.addExercise(weightedSuperman);
                    break;
            }
            break;

    }
    return uBody;
}

Workout setFullBody() {


    Workout fBody{"Full body"};
    switch (askDifficulty()) {
        case 1:
            fBody.addExercise(squats);
            fBody.addExercise(lunges);
            fBody.addExercise(australianTractionPronation);
            fBody.addExercise(pikePushUps);
            fBody.addExercise(dipsOnFloor);
            fBody.addExercise(pushUps);
            break;
        case 2:
            fBody.addExercise(archerSquat);
            fBody.addExercise(DeclineLunges);
            fBody.addExercise(tractionPronation);
            fBody.addExercise(DeclinePikePushUp);
            fBody.addExercise(BenchDips);
            fBody.addExercise(DeclineDiamondPumps);
            break;

    }

    return fBody;
}

unsigned askDifficulty() {
    cout << "Choose your difficulty:\n"
            "1. Easy\n"
            "2. Medium\n";
    unsigned difficulty{};
    cin >> difficulty;
    cout << "\n";
    if (!inRange(1, 2, difficulty))
        askDifficulty();
    return difficulty;
}

unsigned askRepeat() {
    unsigned repeat{0};
    cout << "You will do 6 sets of each exercise.\n"
            "How many repetitions do you want to do between 6 and 10 ?\n";
    cin >> repeat;
    cout << "\n";
    cin.ignore();
    if (!inRange(6, 10, repeat))
        askRepeat();
    return repeat;
}

unsigned askDay() {
    unsigned day{0};
    cout << "Choose your training day:\n"
            "1. Day 1\n"
            "2. Day 2\n";
    cin >> day;
    cout << "\n";
    if (!inRange(1, 2, day))
        askDay();
    return day;
}


bool inRange(unsigned low, unsigned high, unsigned x) {
    return (low <= x && x <= high);
}