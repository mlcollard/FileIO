/*
    FileIOGet.hpp

    Declaration file for class FileIOGet
*/

#ifndef INCLUDED_FILEIOGET_HPP
#define INCLUDED_FILEIOGET_HPP

#include "FileIO.hpp"
#include <istream>
#include <ostream>
#include <string>

class FileIOGet : public FileIO {
public:

    // constructor
    FileIOGet();

    // read all data from the input stream
    void read(std::istream& in) override;

    // write all data to the output stream
    void write(std::ostream& out) const override;

    // destructor
    ~FileIOGet();

private:
    std::string data;
};

#endif
