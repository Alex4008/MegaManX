#ifndef CURRENT_TIME_H
#define CURRENT_TIME_H

#include <chrono>
#include <cstdint>

class CurrentTime {
	std::chrono::high_resolution_clock m_clock;

public:
	uint64_t milliseconds();
	uint64_t microseconds();
	uint64_t nanoseconds();
};

#endif  /* CURRENT_TIME_H */