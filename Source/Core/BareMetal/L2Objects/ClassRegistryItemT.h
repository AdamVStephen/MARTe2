/**
 * @file ClassRegistryItemT.h
 * @brief Header file for class ClassRegistryItemT
 * @date 17/06/2016
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

 * @details This header file contains the declaration of the class ClassRegistryItemT
 * with all of its public, protected and private members. It may also include
 * definitions for inline methods which need to be visible to the compiler.
 */

#ifndef CLASSREGISTRYITEMT_H_
#define CLASSREGISTRYITEMT_H_

/*---------------------------------------------------------------------------*/
/*                        Standard header includes                           */
/*---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*/
/*                        Project header includes                            */
/*---------------------------------------------------------------------------*/
#include "ClassRegistryItem.h"
/*---------------------------------------------------------------------------*/
/*                           Class declaration                               */
/*---------------------------------------------------------------------------*/
namespace MARTe {
/**
 * @brief Template version of ClassRegistryItem.
 */
template<typename T>
class DLL_API ClassRegistryItemT: public ClassRegistryItem {

public:
    /**
     * @brief Singleton access to the database.
     * @return a reference to the database.
     */
    static inline ClassRegistryItem *Instance();

    /**
     * @brief Destructor.
     */
    virtual ~ClassRegistryItemT();
private:
    /**
     * @brief Constructor.
     */
    ClassRegistryItemT(ClassProperties &classProperties_in);
};

/*---------------------------------------------------------------------------*/
/*                        Inline method definitions                          */
/*---------------------------------------------------------------------------*/

template<typename T>
ClassRegistryItem *ClassRegistryItemT<T>::Instance() {
    static ClassRegistryItem *instance = NULL_PTR(ClassRegistryItem *);
    if (instance == NULL_PTR(ClassRegistryItem *)) {
        ClassRegistryItem::Instance(instance, T::classProperties);
        /* The next line, i.e. the instantiation of a static ObjectBuilderT
         * is necessary because it registers an ObjectBuilder object with a
         * default Build's implementation for the T class. Otherwise, it
         * will be a NULL pointer and a segmentation fault will eventually
         * arise when trying to use the object builder.
         */
        static ObjectBuilderT<T> defaultObjectBuilder;
    }
    return instance;
}

template<typename T>
ClassRegistryItemT<T>::~ClassRegistryItemT() {

}

template<typename T>
ClassRegistryItemT<T>::ClassRegistryItemT(ClassProperties &classProperties_in) :
        ClassRegistryItem(classProperties_in) {
}

}
#endif /* CLASSREGISTRYITEMT_H_ */

