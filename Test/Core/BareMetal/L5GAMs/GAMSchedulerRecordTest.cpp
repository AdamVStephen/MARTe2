/**
 * @file GAMSchedulerRecordTest.cpp
 * @brief Source file for class GAMSchedulerRecordTest
 * @date 04/04/2016
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
 * the class GAMSchedulerRecordTest (public, protected, and private). Be aware that some 
 * methods, such as those inline could be defined on the header file, instead.
 */

/*---------------------------------------------------------------------------*/
/*                         Standard header includes                          */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*                         Project header includes                           */
/*---------------------------------------------------------------------------*/

#include "GAMSchedulerRecordTest.h"

/*---------------------------------------------------------------------------*/
/*                           Static definitions                              */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*                           Method definitions                              */
/*---------------------------------------------------------------------------*/

bool GAMSchedulerRecordTest::TestConstructor() {

    GAMSchedulerRecord rec;
    return (rec.GetNumberOfThreads() == 0);

}

bool GAMSchedulerRecordTest::TestAddThread() {

    const uint32 size = 32;
    ReferenceT<RealTimeThread> threads[size];
    GAMSchedulerRecord rec;
    for (uint32 i = 0u; i < size; i++) {
        threads[i] = ReferenceT<RealTimeThread>(GlobalObjectsDatabase::Instance()->GetStandardHeap());
        rec.AddThread(threads[i]);
    }

    for (uint32 i = 0u; i < size; i++) {
        ReferenceT<RealTimeThread> test = rec.Peek(i);
        if (test != threads[i]) {
            return false;
        }
    }
    return rec.GetNumberOfThreads() == size;

}

bool GAMSchedulerRecordTest::TestPeek() {
    return TestAddThread();
}

bool GAMSchedulerRecordTest::TestPeekOutOfRange() {
    const uint32 size = 32;
    ReferenceT<RealTimeThread> threads[size];
    GAMSchedulerRecord rec;
    for (uint32 i = 0u; i < size; i++) {
        threads[i] = ReferenceT<RealTimeThread>(GlobalObjectsDatabase::Instance()->GetStandardHeap());
        rec.AddThread(threads[i]);
    }

    ReferenceT<RealTimeThread> test = rec.Peek(32);
    return !test.IsValid();
}

bool GAMSchedulerRecordTest::TestNumberOfThreads() {
    return TestAddThread();
}
