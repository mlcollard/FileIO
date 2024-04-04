/*
    FileIO.hpp

    Declaration file for class FileIO
*/

#ifndef INCLUDED_FILEIO_HPP
#define INCLUDED_FILEIO_HPP

#include <istream>
#include <ostream>

class FileIO {
public:

    // read all data from the input stream
    virtual void read(std::istream& in) {}

    // write all data to the output stream
    virtual void write(std::ostream& out) const {}
};

#endif
