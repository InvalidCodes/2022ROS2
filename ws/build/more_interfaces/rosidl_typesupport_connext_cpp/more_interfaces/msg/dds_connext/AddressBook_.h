

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from AddressBook_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef AddressBook__1770873985_h
#define AddressBook__1770873985_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace more_interfaces {
    namespace msg {
        namespace dds_ {
            namespace AddressBook_Constants {
                static const DDS_Boolean FEMALE_= DDS_BOOLEAN_TRUE;
                static const DDS_Boolean MALE_= DDS_BOOLEAN_FALSE;
            } /* namespace AddressBook_Constants  */

            extern const char *AddressBook_TYPENAME;

            struct AddressBook_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class AddressBook_TypeSupport;
            class AddressBook_DataWriter;
            class AddressBook_DataReader;
            #endif

            class AddressBook_ 
            {
              public:
                typedef struct AddressBook_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef AddressBook_TypeSupport TypeSupport;
                typedef AddressBook_DataWriter DataWriter;
                typedef AddressBook_DataReader DataReader;
                #endif

                DDS_Char *   first_name_ ;
                DDS_Char *   last_name_ ;
                DDS_Boolean   gender_ ;
                DDS_Octet   age_ ;
                DDS_Char *   address_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* AddressBook__get_typecode(void); /* Type code */

            DDS_SEQUENCE(AddressBook_Seq, AddressBook_);

            NDDSUSERDllExport
            RTIBool AddressBook__initialize(
                AddressBook_* self);

            NDDSUSERDllExport
            RTIBool AddressBook__initialize_ex(
                AddressBook_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool AddressBook__initialize_w_params(
                AddressBook_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void AddressBook__finalize(
                AddressBook_* self);

            NDDSUSERDllExport
            void AddressBook__finalize_ex(
                AddressBook_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void AddressBook__finalize_w_params(
                AddressBook_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void AddressBook__finalize_optional_members(
                AddressBook_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool AddressBook__copy(
                AddressBook_* dst,
                const AddressBook_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace more_interfaces  */

#endif /* AddressBook_ */

