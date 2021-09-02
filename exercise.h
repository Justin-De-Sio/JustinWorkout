//
// Created by Justin on 23/08/2021.
//

#pragma once

#include <string>


class Exercise {
public:
    Exercise();

    explicit Exercise(std::string name) : m_name(std::move(name)) {};

    std::string getName() const;

    void setName(const std::string &name);
    void setRepeat(unsigned repeat);
    unsigned getRepeat()const;

private:
    std::string m_name;
    unsigned m_repeat{};
};

