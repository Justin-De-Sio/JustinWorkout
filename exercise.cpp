//
// Created by Justin on 23/08/2021.
//

#include <iostream>
#include "exercise.h"

  std::string Exercise::getName() const {
    return m_name;
}

 inline void Exercise::setName(const std::string &name) {
    m_name = name;
}

 void Exercise::setRepeat(unsigned repeat)
 {
     m_repeat = repeat;
 }

 unsigned Exercise::getRepeat() const
 {
     return m_repeat;
 }



