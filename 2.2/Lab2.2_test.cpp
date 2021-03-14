#include "Complex.h"
#include <gtest/gtest.h>
#define TESTING

TEST(Lab, firstTest)
{
    Complex a(5, 5);

    int functionResult = a.GetRe();
    int expectedValue = 5;

    ASSERT_EQ(expectedValue, functionResult);
}

#ifdef TESTING
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#endif
