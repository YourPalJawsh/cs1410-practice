#ifndef __AUTHOR_H__
#define __AUTHOR_H__

#include <string>
#include <iostream>

class Author {
private:
    std::string name, nationality;
public:
    Author(const std::string& nam, const std::string& nat);

    std::string getName() const;
    std::string getNationality() const;

    void setName(const std::string& name);
    void setNationality(const std::string& nat);

};

#endif