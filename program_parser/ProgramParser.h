//
// Created by nathan on 15.01.2019.
//

#ifndef MCS_4_EMULATOR_PROGRAMPARSER_H
#define MCS_4_EMULATOR_PROGRAMPARSER_H

#include <cstdint>

class ProgramParser {
public:
    virtual void parse(uint8_t *prog) = 0;

    virtual ~ProgramParser();
};


#endif //MCS_4_EMULATOR_PROGRAMPARSER_H
