#include "src/foo.h"
#include "C:/Ruby30-x64/lib/ruby/gems/3.0.0/gems/ceedling-0.31.1/vendor/unity/src/unity.h"










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

    UnityAssertEqualNumber((UNITY_INT)(UNITY_INT16)((0xFA0A)), (UNITY_INT)(UNITY_INT16)((foo_init(number))), (

   ((void *)0)

   ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT16);

}
