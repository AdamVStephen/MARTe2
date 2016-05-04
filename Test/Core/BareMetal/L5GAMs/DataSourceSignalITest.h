/**
 * @file DataSourceSignalITest.h
 * @brief Header file for class DataSourceSignalITest
 * @date 22/04/2016
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

 * @details This header file contains the declaration of the class DataSourceSignalITest
 * with all of its public, protected and private members. It may also include
 * definitions for inline methods which need to be visible to the compiler.
 */

#ifndef DATASOURCESIGNALITEST_H_
#define DATASOURCESIGNALITEST_H_

/*---------------------------------------------------------------------------*/
/*                        Standard header includes                           */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*                        Project header includes                            */
/*---------------------------------------------------------------------------*/

#include "DataSourceSignal.h"

/*---------------------------------------------------------------------------*/
/*                           Class declaration                               */
/*---------------------------------------------------------------------------*/

using namespace MARTe;

class DataSourceSignalITest {

public:

    bool TestConstructor();

    bool TestInitialise();

    bool TestAddConsumer();

    bool TestAddProducer();

    bool TestGetNumberOfConsumers(uint32 nConsumers);

    /**
     * @brief Tests if the function returns the number producer gams.
     */
    bool TestGetNumberOfProducers(uint32 nProducers);

    bool TestVerify();

    bool TestVerifyFalse_TwoProducers();

    bool TestGetType();

    bool TestGetNumberOfElements();

    bool TestGetNumberOfElements_DifferentSizes();

    bool TestGetNumberOfSamples();

};
/*---------------------------------------------------------------------------*/
/*                        Inline method definitions                          */
/*---------------------------------------------------------------------------*/

#endif /* DATASOURCESIGNALITEST_H_ */

