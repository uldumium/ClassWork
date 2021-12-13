#pragma once
#include "HelperToolz.h"
class StringEx
{
public:

#pragma region CONSTUCTORS

	StringEx();

	StringEx(char* charContainer);

	StringEx(size_t size, char charContainer);

	StringEx(const StringEx& right);

	virtual ~StringEx();

	StringEx& operator=(const StringEx& right);

#pragma endregion

#pragma region GETandSET

	size_t getLength() const;

#pragma endregion

#pragma region METHODTH

	size_t getLength() const;

#pragma endregion

private:

	char* charContainer;

	size_t length;

	void clear();

};

