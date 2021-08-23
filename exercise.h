//
// Created by Justin on 23/08/2021.
//

#ifndef JUSTINWORKOUT_EXERCISE_H
#define JUSTINWORKOUT_EXERCISE_H


#include <string>
#include <utility>

class Exercise {
public:
    Exercise(std::string name) : m_name(name) {};

    void setDifficulty(unsigned short difficulty);

    std::string getName();

    unsigned short getDifficulty() const;

private:
    unsigned short m_difficulty{1};
    std::string m_name;
    unsigned short m_cpt{0};
};


#endif //JUSTINWORKOUT_EXERCISE_H
