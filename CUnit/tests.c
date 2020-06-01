#include "CUnit/Automated.h"

int init_suite(void)
{
    return 0;
}

int clean_suite(void)
{
    return 0;
}

/* Test de div */
void test_div(void)
{
    CU_ASSERT(3 == div(9,3));
    CU_ASSERT(5 == div(5,1));
    CU_ASSERT(-4 == div(-8,2));
}

/* Test de max */
void test_max(void)
{
    CU_ASSERT(9 == max(9, 3));
    CU_ASSERT(0 == max(0, -3));
    CU_ASSERT(3 == max(3, 3));
}

/* Test de min */
void test_min(void)
{
    CU_ASSERT(3 == min(9, 3));
    CU_ASSERT(-9 == min(-9, 0));
    CU_ASSERT(4 == min(4, 4));
}

/* Test de mod */
void test_mod(void)
{
    CU_ASSERT(0 == mod(9, 3));
    CU_ASSERT(2 == mod(6, -4));
    CU_ASSERT(1 == mod(7, 3));
}

/* Test de multi */
void test_multi(void)
{
    CU_ASSERT(27 == multi(9, 3));
    CU_ASSERT(0 == multi(0, 6));
    CU_ASSERT(-14 == multi(2, -7));
}

int main(void)
{
    CU_pSuite pSuite1, pSuite2, pSuite3, pSuite4, pSuite5 = NULL;

    if(CUE_SUCCESS != CU_initialize_registry())
    {
        return CU_get_error();
    }

    pSuite1 = CU_add_suite("Suite_1", init_suite, clean_suite);
    if(NULL == pSuite1)
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if((NULL == CU_add_test(pSuite1, "....test of div....\n", test_div)))
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    pSuite2 = CU_add_suite("Suite_2", init_suite, clean_suite);
    if(NULL == pSuite2)
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if((NULL == CU_add_test(pSuite2, "....test of max....\n", test_max)))
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    pSuite3 = CU_add_suite("Suite_3", init_suite, clean_suite);
    if(NULL == pSuite3)
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if((NULL == CU_add_test(pSuite3, "....test of min....\n", test_min)))
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    pSuite4 = CU_add_suite("Suite_4", init_suite, clean_suite);
    if(NULL == pSuite4)
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if((NULL == CU_add_test(pSuite4, "....test of mod....\n", test_mod)))
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    pSuite5 = CU_add_suite("Suite_5", init_suite, clean_suite);
    if(NULL == pSuite5)
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    if((NULL == CU_add_test(pSuite5, "....test of multi....\n", test_multi)))
    {
        CU_cleanup_registry();
        return CU_get_error();
    }

    CU_automated_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
