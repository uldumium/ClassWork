#include "StringEx.h"

StringEx::StringEx()
{
}

StringEx::StringEx(char* charContainer)
{
}

StringEx::StringEx(size_t size, char charContainer)
{
}

StringEx::StringEx(const StringEx& right)
{
}

StringEx::~StringEx()
{
}

StringEx& StringEx::operator=(const StringEx& right)
{
    // TODO: вставьте здесь оператор return
}

size_t StringEx::getLength() const
{
    return size_t();
}

void StringEx::clear()
{
    StringEx::length = 0;

    RELEASE(StringEx::charContainer)
}
