/*
    FileIOFactory.cpp

    Implementation for FileIOFactory
*/

#include <string_view>
#include "FileIOFactory.hpp"
#include "FileIOGet.hpp"
#include "FileIORead.hpp"
#include "FileIOFileRead.hpp"

// factory based on approach
std::unique_ptr<FileIO> FileIOFactory::createFileIO(std::string_view approach) {

    if (approach == "get")
        return std::unique_ptr<FileIO>(new FileIOGet());
    else if (approach == "read")
        return std::unique_ptr<FileIO>(new FileIOFileRead());
    else if (approach == "fileread")
        return std::unique_ptr<FileIO>(new FileIORead());
    else
        return nullptr;
}
