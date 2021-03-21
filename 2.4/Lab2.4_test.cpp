#include "Vector.h"
#include <gtest/gtest.h>
#define TESTING

TEST(Lab, firstTest)
{
    Vector a(2);
	a[0] = 1;
    a[1] = 2;

	Vector b(2);
    b[0] = 1;
    b[1] = 1;

    bool functionResult = (a == b);
    bool expectedValue = true;

    ASSERT_EQ(expectedValue, functionResult);
}

#ifdef TESTING
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#endif
