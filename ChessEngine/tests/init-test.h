#pragma once

#include <gtest/gtest.h>
#include <string>

TEST(init, egality)
{
    ASSERT_EQ(0, 0);
}


TEST(init_invalid, egality)
{
    ASSERT_EQ(0, 1);
}