// a header file defining the register class
#ifndef REGISTER_HPP
#define REGISTER_HPP

#include <vector>


class simulated_register
{
    // unsure of how to implement program counter
    private:
    // unsigned int general_purpose_registors[32];
    // unsigned int general_purpose_registors[];

    std::vector<unsigned int> general_purpose_registors;
    unsigned int HI, LO;

    public:
    //getters
    unsigned int read_register(const unsigned char& register_number);
    unsigned int read_HI();
    unsigned int read_LO();

    //setters
    void write_register(const unsigned char& register_number, const unsigned int& value);
    void write_HI(const unsigned int& value);
    void write_LO(const unsigned int& value);

    // NB, consider using $ notation
    //unsigned int& $(const unsigned char &register_number);

    // constructor
    simulated_register();
};

#endif
