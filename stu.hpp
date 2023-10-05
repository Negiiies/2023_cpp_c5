#ifndef STU_HPP_
#define STU_HPP_

#include <cstddef>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>

namespace stu {
class string {
public:
    string();
    string(const stu::string &other);
    string(const char *other);
    void        dump();
    const char *c_str() const;
    string     &operator=(const stu::string &other);
    string     &operator=(const char *other);
    size_t      size() const;
    char       &operator[](size_t index);
    const char &operator[](size_t index) const;

private:
    char  *str;
    size_t len_;
};
} // namespace stu
std::ostream &operator<<(std::ostream &, const stu::string &);
#endif /* STU_HPP_ */