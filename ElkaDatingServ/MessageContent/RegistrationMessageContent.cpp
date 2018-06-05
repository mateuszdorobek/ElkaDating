#include "RegistrationMessageContent.hpp"

std::string RegistrationMessageContent::getEmail() const
{
    return email_;
}

bool RegistrationMessageContent::getIsLecturer() const
{
    return isLecturer_;
}

RegistrationMessageContent::RegistrationMessageContent(std::string userName,std::string password,std::string name, std::string surname, std::string studentNumber)
    :LoginMessageContent(userName,password),name_(name),surname_(surname),studentNumber_(studentNumber)
{

}

std::string RegistrationMessageContent::getName()
{
    return name_;
}

std::string RegistrationMessageContent::getSurname()
{
    return surname_;
}

std::string RegistrationMessageContent::getStudentNumber()
{
    return studentNumber_;
}
