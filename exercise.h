//
// Created by Justin on 23/08/2021.
//

#ifndef JUSTINWORKOUT_EXERCISE_H
#define JUSTINWORKOUT_EXERCISE_H


#include <string>
#include <utility>

class Exercise {
public:
    explicit Exercise(std::string name) : m_name(std::move(name)) {};

    std::string getName();

private:

    std::string m_name;
    unsigned short m_cpt{0};
    unsigned short m_cptMax{6};
};


#endif //JUSTINWORKOUT_EXERCISE_H
