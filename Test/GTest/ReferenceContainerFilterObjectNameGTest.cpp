/**
 * @file ReferenceContainerFilterObjectNameGTest.cpp
 * @brief Source file for class ReferenceContainerFilterObjectNameGTest
 * @date 19/08/2015
 * @author Giuseppe Ferrò
 *
 * @copyright Copyright 2015 F4E | European Joint Undertaking for ITER and
 * the Development of Fusion Energy ('Fusion for Energy').
 * Licensed under the EUPL, Version 1.1 or - as soon they will be approved
 * by the European Commission - subsequent versions of the EUPL (the "Licence")
 * You may not use this work except in compliance with the Licence.
 * You may obtain a copy of the Licence at: http://ec.europa.eu/idabc/eupl
 *
 * @warning Unless required by applicable law or agreed to in writing, 
 * software distributed under the Licence is distributed on an "AS IS"
 * basis, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
 * or implied. See the Licence permissions and limitations under the Licence.

 * @details This source file contains the definition of all the methods for
 * the class ReferenceContainerFilterObjectNameGTest (public, protected, and private). Be aware that some 
 * methods, such as those inline could be defined on the header file, instead.
 */

/*---------------------------------------------------------------------------*/
/*                         Standard header includes                          */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*                         Project header includes                           */
/*---------------------------------------------------------------------------*/
#include <limits.h>

/*---------------------------------------------------------------------------*/
/*                         Project header includes                           */
/*---------------------------------------------------------------------------*/

#include "ReferenceContainerFilterObjectNameTest.h"
#include "gtest/gtest.h"

/*---------------------------------------------------------------------------*/
/*                           Static definitions                              */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*                           Method definitions                              */
/*---------------------------------------------------------------------------*/

TEST(ReferenceContainerFilterObjectNameGTest,TestDefaultConstructor) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestDefaultConstructor());
}

TEST(ReferenceContainerFilterObjectNameGTest,TestFullConstructorOneNode) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestFullConstructor(5, "Hello"));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestFullConstructorMoreNodes) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestFullConstructor(5, "Hello.World"));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestFullConstructorMoreNodesSearchAll) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestFullConstructor(-1, "Hello.World"));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestFullConstructorFakeNodeSearchAll) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestFullConstructor(-1, ".Hello."));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestFullConstructorInvalidNodeSearchAll) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestFullConstructor(-1, "He..llo"));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestDestructor) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestDestructor());
}

TEST(ReferenceContainerFilterObjectNameGTest,TestCopyConstructor) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestCopyConstructor(20, "Hello"));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestCopyConstructorSearchAll) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestCopyConstructor(-1, "Hello"));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestTestFullPath) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestTest("A.B.C", true));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestTestWrongPath) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestTest("A.C", false));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestTestNotFullPath) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestTest("A.B", true));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestTestNoPath) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestTest("B", true));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestTestWrongPath2) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestTest("B.C", false));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestAssignOperator) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestAssignOperator(20, "Hello"));
}

TEST(ReferenceContainerFilterObjectNameGTest,TestAssignOperatorSearchAll) {
    ReferenceContainerFilterObjectNameTest referenceContainerFilterObjectNameTest;
    ASSERT_TRUE(referenceContainerFilterObjectNameTest.TestAssignOperator(-1, "Hello"));
}

