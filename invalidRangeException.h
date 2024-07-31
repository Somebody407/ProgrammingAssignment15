#ifndef INVALIDRANGEEXCEPTION_H
#define INVALIDRANGEEXCEPTION_H

#include <exception>
#include <string>

class invalidRangeException : public std::exception {
private:
    std::string message;

public:
    invalidRangeException(const std::string& msg) : message(msg) {}

    virtual const char* what() const throw() {
        return message.c_str();
    }
};

#endif // INVALIDRANGEEXCEPTION_H