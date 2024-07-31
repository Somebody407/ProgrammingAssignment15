#ifndef INVALIDCHARACTEREXCEPTION_H
#define INVALIDCHARACTEREXCEPTION_H

#include <exception>
#include <string>

class invalidCharacterException : public std::exception {
private:
    std::string message;

public:
    invalidCharacterException(const std::string& msg) : message(msg) {}

    virtual const char* what() const throw() {
        return message.c_str();
    }
};

#endif // INVALIDCHARACTEREXCEPTION_H