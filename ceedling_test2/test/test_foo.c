#ifdef TEST

#include "unity.h"

#include "foo.h"
#include "stdint.h"

int16_t number; 

void setUp(void)
{
    number = 0xFA09;
}

void tearDown(void)
{
}

void test_foo_NeedToImplement(void)
{
    TEST_ASSERT_EQUAL_INT16 (0xFA0A, foo_init(number));
}

#endif // TEST
