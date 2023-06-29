#ifndef USER_H
#define USER_H

#include <string>
using namespace std;

class User {
public:
    User(const string& username, const string& password) :
        m_username(username), m_passwordHash(encryptPassword(password)) {}

    const string& getUsername() const { return m_username; }
    const string& getPasswordHash() const { return m_passwordHash; }
    bool checkPassword(const string& password) const {
        return m_passwordHash == encryptPassword(password);
    }

private:
    string m_username;
    string m_passwordHash;

    string encryptPassword(const string& password) const {
        // TODO: Implement password encryption or hashing algorithm here
        return password;
    }
};

#endif // USER_H