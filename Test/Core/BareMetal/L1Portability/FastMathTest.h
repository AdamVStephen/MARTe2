/**
 * @file FastMathTest.h
 * @brief Header file for class FastMathTest
 * @date 26/06/2015
 * @author Giuseppe Ferr�
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

 * @details This header file contains the declaration of the class FastMathTest
 * with all of its public, protected and private members. It may also include
 * definitions for inline methods which need to be visible to the compiler.
 */

#ifndef FASTMATHTEST_H_
#define FASTMATHTEST_H_

/*---------------------------------------------------------------------------*/
/*                        Standard header includes                           */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*                        Project header includes                            */
/*---------------------------------------------------------------------------*/

#include "FastMath.h"
using namespace MARTe;

/*---------------------------------------------------------------------------*/
/*                           Class declaration                               */
/*---------------------------------------------------------------------------*/

/**
 * @brief A Class to test the FastMath functions.
 */
class FastMathTest {

public:

    /**
     * @brief Constructor
     */
    FastMathTest();

    /**
     * @brief Tests the fast float to int32 conversion.
     * @param[in] testFloat is the number to convert.
     * @param[in] expectedValue is the expected integer value after conversion.
     * @return true if the conversion result is equal to the expected value.
     */
    bool TestFloatToInt32(float testFloat,
                          int32 expectedValue);

    /**
     * @brief Tests the fast Sin function
     * @param[in] angle is the number input.
     * @param[in] expectedValue is the expected result value after the operation.
     * @return true if the result is equal to the expected value.
     */
    bool TestSin(float angle,
                 float expectedValue);

    /**
     * @brief Tests the fast Cos function
     * @param[in] angle is the number input.
     * @param[in] expectedValue is the expected result value after the operation.
     * @return true if the result is equal to the expected value.
     */
    bool TestCos(float angle,
                 float expectedValue);

    /**
     * @brief Tests for each angle that sin^2(a)+cos^2(a)=1.
     * @return true if sin^2(a)+cos^2(a)=1.
     */
    bool CircleTest();

    /**
     * @brief Executes all the tests.
     * @detail Run TestFloatToInt32, TestSin and TestCos tests with different input values.
     * @return true if all tests return true.
     */
    bool All();

private:

    // Math constants

    static const float SIN_1;
    static const float SIN_PI_2;
    static const float SIN_PI_4;

    static const float COS_1;
    static const float COS_PI_2;
    static const float COS_PI_4;

    static const float EPSILON;
};

/*---------------------------------------------------------------------------*/
/*                        Inline method definitions                          */
/*---------------------------------------------------------------------------*/

#endif /* FASTMATHTEST_H_ */

