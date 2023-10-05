#include "stu.hpp"
#include <cstddef>
#include <cstring>

stu::string::string() : str{nullptr}
{}

stu::string::string(const stu::string &other)
{
    str = new char[strlen(other.str) + 1];
    std::strcpy(str, other.str);
}

stu::string::string(const char *other)
{
    str = new char[strlen(other) + 1];
    std::strcpy(str, other);
}

const char *stu::string::c_str() const
{
    return str;
}

std::ostream &operator<<(std::ostream &os, const stu::string &other)
{
    os << other.c_str();
    return os;
}

stu::string &stu::string::operator=(const stu::string &other)
{
    delete[] str;
    str = new char[strlen(other.str) + 1];
    std::strcpy(str, other.str);
    return *this;
}
stu::string &stu::string::operator=(const char *other)
{
    delete[] str;
    str = new char[strlen(other) + 1];
    std::strcpy(str, other);
    return *this;
}

size_t stu::string::size() const
{
    return strlen(str);
}

char &stu::string::operator[](size_t index)
{
    return str[index];
}

const char &stu::string::operator[](size_t index) const
{
    return str[index];
}
