/*
    FileIORead.hpp

    Declaration file for class FileIORead
*/

#ifndef INCLUDED_FILEIOREAD_HPP
#define INCLUDED_FILEIOREAD_HPP

#include "FileIO.hpp"
#include <string>

class FileIORead : public FileIO {
public:

    // constructor
    FileIORead();

    // read all data from the input stream
    void read(std::istream& in) override;

    // write all data to the output stream
    void write(std::ostream& out) const override;

    // destructor
    ~FileIORead();

private:
    std::string data;
};

#endif
