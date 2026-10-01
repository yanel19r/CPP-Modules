#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>


class Contact {
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;

public:
    Contact();
    ~Contact();
    void setContact(const std::string &fn, const std::string &ln,
                    const std::string &nn, const std::string &pn,
                    const std::string &secret);

    std::string getFirstName() const;
    std::string getLastName() const;
    std::string getNickname() const;
    std::string getPhoneNumber() const;
    std::string getDarkestSecret() const;
};

#endif