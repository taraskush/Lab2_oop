#include "Bill.h"
#include <gtest/gtest.h>
#define TESTING

TEST(Lab, firstTest)
{
    Bill a(5, 5);

    int functionResult = a.cost();
    int expectedValue = 25;

    ASSERT_EQ(expectedValue, functionResult);
}

#ifdef TESTING
int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#endif
