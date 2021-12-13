#pragma once

#define RELEASE(ptr) if (nullptr != ptr){delete[] ptr;ptr = nullptr;}