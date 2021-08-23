//
// Created by Justin on 23/08/2021.
//

#ifndef JUSTINWORKOUT_EXERCISE_H
#define JUSTINWORKOUT_EXERCISE_H


#include <string>

class Exercise {
public:
    void setDifficulty(unsigned short difficulty);

    [[nodiscard]] unsigned short getDifficulty() const;
private:
    unsigned short m_difficulty{1};
    std::string m_name;
    unsigned short m_cpt{0};
};


#endif //JUSTINWORKOUT_EXERCISE_H
