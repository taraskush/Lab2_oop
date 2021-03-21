#include "Triad.h"
#include <gtest/gtest.h>
#define TESTING

TEST(Lab, firstTest)
{
    Triad c(3, 6, 4);
    c.incSeconds();

    double functionResult = c.GetSeconds();
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
