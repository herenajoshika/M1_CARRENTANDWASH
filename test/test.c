#include "unity.h"
#include "carrent.h"
#define PROJECT_NAME   "CARRENT"

void test_options(void);
void test_menuExit(void);
void test_errorMessage(void);
void test_rentcar(void);
void test_carwash(void);

void setUp()
{

}
void tearDown()
{

}

int main()
{
  UNITY_BEGIN();

  RUN_TEST(test_options);
  RUN_TEST(test_menuExit);
  RUN_TEST(test_errorMessage);
  RUN_TEST(test_rentcar);
  RUN_TEST(test_carwash);

  return UNITY_END();
}

void test_options(void) 
{
  TEST_ASSERT_EQUAL(6,options()); 
}
void test_menuExit(void) 
{
  TEST_ASSERT_EQUAL(5,menuExit());
}
void test_errorMessage(void)
{
  TEST_ASSERT_EQUAL(9,errorMessage());
}
void test_rentcar(void)
{
  TEST_ASSERT_INT_WITHIN(1500,13500,Rentcar(15000));
}
void test_carwash(void)
{
  TEST_ASSERT_EQUAL(13500,Carwash(15000));
}