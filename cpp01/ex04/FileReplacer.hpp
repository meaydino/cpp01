#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <string>

class FileReplacer
{
private:
    std::string _filename;
    std::string _s1;
    std::string _s2;

public:
    FileReplacer(std::string filename, std::string s1, std::string s2);
    ~FileReplacer();
    
    bool replaceInFile();
    
private:
    std::string _readFile();
    bool _writeFile(const std::string& content);
    std::string _replaceString(const std::string& content);
};

#endif