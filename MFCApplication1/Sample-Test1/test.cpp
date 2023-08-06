#include "pch.h"
#include "mockApp.h"

TEST(set, setTest_retval_err) {
	// EXPECT_EQ(1, 1);
	// EXPECT_TRUE(true);
	
	Clock clo;
	clo.m_hour = 1;
	clo.m_minute = 1;
	int retval = 0;

	retval = clo.set(2, 2, retval);
	EXPECT_EQ(clo.m_hour, 2);
}
