

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Addints_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Addints__1093325160_h
#define Addints__1093325160_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

namespace base_interfaces_demo {
    namespace srv {
        namespace dds_ {

            extern const char *Addints_Request_TYPENAME;

            struct Addints_Request_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Addints_Request_TypeSupport;
            class Addints_Request_DataWriter;
            class Addints_Request_DataReader;
            #endif

            class Addints_Request_ 
            {
              public:
                typedef struct Addints_Request_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Addints_Request_TypeSupport TypeSupport;
                typedef Addints_Request_DataWriter DataWriter;
                typedef Addints_Request_DataReader DataReader;
                #endif

                DDS_Long   num1_ ;
                DDS_Long   num2_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Addints_Request__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Addints_Request_Seq, Addints_Request_);

            NDDSUSERDllExport
            RTIBool Addints_Request__initialize(
                Addints_Request_* self);

            NDDSUSERDllExport
            RTIBool Addints_Request__initialize_ex(
                Addints_Request_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Addints_Request__initialize_w_params(
                Addints_Request_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Addints_Request__finalize(
                Addints_Request_* self);

            NDDSUSERDllExport
            void Addints_Request__finalize_ex(
                Addints_Request_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Addints_Request__finalize_w_params(
                Addints_Request_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Addints_Request__finalize_optional_members(
                Addints_Request_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Addints_Request__copy(
                Addints_Request_* dst,
                const Addints_Request_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace base_interfaces_demo  */
namespace base_interfaces_demo {
    namespace srv {
        namespace dds_ {

            extern const char *Addints_Response_TYPENAME;

            struct Addints_Response_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Addints_Response_TypeSupport;
            class Addints_Response_DataWriter;
            class Addints_Response_DataReader;
            #endif

            class Addints_Response_ 
            {
              public:
                typedef struct Addints_Response_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Addints_Response_TypeSupport TypeSupport;
                typedef Addints_Response_DataWriter DataWriter;
                typedef Addints_Response_DataReader DataReader;
                #endif

                DDS_Long   sum_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Addints_Response__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Addints_Response_Seq, Addints_Response_);

            NDDSUSERDllExport
            RTIBool Addints_Response__initialize(
                Addints_Response_* self);

            NDDSUSERDllExport
            RTIBool Addints_Response__initialize_ex(
                Addints_Response_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Addints_Response__initialize_w_params(
                Addints_Response_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Addints_Response__finalize(
                Addints_Response_* self);

            NDDSUSERDllExport
            void Addints_Response__finalize_ex(
                Addints_Response_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Addints_Response__finalize_w_params(
                Addints_Response_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Addints_Response__finalize_optional_members(
                Addints_Response_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Addints_Response__copy(
                Addints_Response_* dst,
                const Addints_Response_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace srv  */
} /* namespace base_interfaces_demo  */

#endif /* Addints_ */

