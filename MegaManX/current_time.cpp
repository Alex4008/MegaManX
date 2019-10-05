#include "current_time.h"

uint64_t CurrentTime::milliseconds()
{
	return std::chrono::duration_cast<std::chrono::milliseconds>
		(m_clock.now().time_since_epoch()).count();
}

uint64_t CurrentTime::microseconds()
{
	return std::chrono::duration_cast<std::chrono::microseconds>
		(m_clock.now().time_since_epoch()).count();
}

uint64_t CurrentTime::nanoseconds()
{
	return std::chrono::duration_cast<std::chrono::nanoseconds>
		(m_clock.now().time_since_epoch()).count();
}