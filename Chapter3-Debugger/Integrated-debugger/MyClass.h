#include  <iostream>




class MyClass {
public:
    MyClass(int value);

    int getValue() const;
    void setValue(int value);

private:
    int m_value;
};