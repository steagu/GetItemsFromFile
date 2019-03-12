#include <vector>
#include <string>
#include <exception>

class file_not_found : public std::logic_error
{
public:
    file_not_found(std::string s) : std::logic_error(s) {}
};

std::vector<std::string> getItemsFromFile(std::string fileName)
{
    /*
        @param: takes a string fileName, the file to from.
        @return: a vector of strings, each string holding the name and description of a 
            single Star Trek episode
    */
    std::vector<std::string> toFill;
    std::ifstream file;

    file.open(fileName);

    if (!file.is_open())
        throw file_not_found("Unable to open file " + fileName);

    std::string episodeData;
    while(!file.eof())
    {

        std::getline(file, episodeData);

        toFill.push_back(episodeData);

        episodeData = "";
    }
    file.close();
    
    return toFill;
}
