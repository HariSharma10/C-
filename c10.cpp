// //Describe the Role of Access Specifiers (Public, Private, Protected) in C++.


// Access Specifier	Access Inside Class	Access by Derived Class	Access Outside Class
// Public	✅ Yes	✅ Yes	✅ Yes
// Private	✅ Yes	❌ No	❌ No
// Protected	✅ Yes	✅ Yes	❌ No
// Example:


class A {
    private:
        int privateVar;
    protected:
        int protectedVar;
    public:
        int publicVar;
    };
    