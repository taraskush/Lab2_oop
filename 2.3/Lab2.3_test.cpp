#include "Point.h"
#include <gtest/gtest.h>
#define TESTING

TEST(Lab, firstTest)
{
    Point a(0, 5);

    double functionResult = a.Distance();
    double expectedValue = 5;

    ASSERT_EQ(expectedValue, functionResult);
}

#ifdef TESTING
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#endif
