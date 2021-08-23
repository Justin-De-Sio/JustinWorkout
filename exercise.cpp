//
// Created by Justin on 23/08/2021.
//

#include <iostream>
#include "exercise.h"

void Exercise::setDifficulty(unsigned short difficulty) {
    m_difficulty = difficulty;
}

unsigned short Exercise::getDifficulty() const {
    return m_difficulty;
}

std::string Exercise::getName() {
    return m_name;
}

