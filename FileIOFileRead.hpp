/*
    FileIOFileRead.hpp

    Declaration file for class FileIOFileRead
*/

#ifndef INCLUDED_FILEIOFILEREAD_HPP
#define INCLUDED_FILEIOFILEREAD_HPP

#include "FileIO.hpp"
#include <istream>
#include <ostream>
#include <memory>

class FileIOFileRead : public FileIO {
public:

    // constructor
    FileIOFileRead();

    // read all data from the input
    void read(std::istream& in) override;

    // get of the data from the input
    void write(std::ostream& out) const override;

    // destructor
    ~FileIOFileRead();

private:
    std::unique_ptr<char[]> pdata;
    int pos;
};

#endif
