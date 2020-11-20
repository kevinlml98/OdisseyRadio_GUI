#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>


int main()
{
    std::fstream data("raw_genres.csv");
    std::string line;
    std::vector<std::vector<std::string> > parsedCsv;
    while (std::getline(data, line))
    {
        std::stringstream lineStream(line);
        std::string cell;
        std::vector<std::string> parsedRow;
        while (std::getline(lineStream, cell, ','))
        {
            parsedRow.push_back(cell);
        }

        parsedCsv.push_back(parsedRow);
    }

    for (int i = 0; i < parsedCsv.size(); i++)
    {
        for (int j = 0; j < parsedCsv[i].size(); j++)
        {
            std::cout << parsedCsv[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
};