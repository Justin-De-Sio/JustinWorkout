//
// Created by Justin on 23/08/2021.
//

#pragma once

#include <string>
#include <utility>

class Exercise {
public:
    Exercise();

    explicit Exercise(std::string name) : m_name(std::move(name)) {};

    std::string getName() const;

    void setName(const std::string &name);


private:
    std::string m_name;
};

