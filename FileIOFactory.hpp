/*
    FileIOFactory.hpp

    Factory for FileIOFactory
*/

#ifndef INCLUDED_FILEIOFACTORY_HPP
#define INCLUDED_FILEIOFACTORY_HPP

#include <string_view>
#include <memory>

#include "FileIO.hpp"

class FileIOFactory {
public:

    // factory based on approach
    static std::unique_ptr<FileIO> createFileIO(std::string_view approach);
};

#endif
