#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05_4/lab_05_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1 {
    TEST_CLASS(UnitTest1) {
    public:

    TEST_METHOD(TestMethod1) {
        double t;

        t = rec_d_par_d(1, 1, 0);
        Assert::AreEqual(t, 2.30693, 0.0001);

        t = rec_d_par_up(1, 1, 0);
        Assert::AreEqual(t, 2.30693, 0.0001);

        t = rec_up_par_d(1, 1);
        Assert::AreEqual(t, 2.30693, 0.0001);

        t = rec_up_par_up(1, 1);
        Assert::AreEqual(t, 2.30693, 0.0001);

        t = c_iter(1, 1);
        Assert::AreEqual(t, 2.30693, 0.0001);
        }
    };
}