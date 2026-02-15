#pragma once
#include <string>

class PRad2Detector
{
public:
    PRad2Detector(int id, const std::string &name);

    int GetDetID() const {return det_id;}
    const std::string &GetName() const {return det_name;}

protected:
    int det_id;
    std::string det_name;
};

