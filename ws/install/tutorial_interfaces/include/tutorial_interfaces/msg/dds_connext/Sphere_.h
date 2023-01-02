

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from Sphere_.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef Sphere__1642312062_h
#define Sphere__1642312062_h

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "geometry_msgs/msg/dds_connext/Point_.h"
namespace tutorial_interfaces {
    namespace msg {
        namespace dds_ {

            extern const char *Sphere_TYPENAME;

            struct Sphere_Seq;
            #ifndef NDDS_STANDALONE_TYPE
            class Sphere_TypeSupport;
            class Sphere_DataWriter;
            class Sphere_DataReader;
            #endif

            class Sphere_ 
            {
              public:
                typedef struct Sphere_Seq Seq;
                #ifndef NDDS_STANDALONE_TYPE
                typedef Sphere_TypeSupport TypeSupport;
                typedef Sphere_DataWriter DataWriter;
                typedef Sphere_DataReader DataReader;
                #endif

                geometry_msgs::msg::dds_::Point_   center_ ;
                DDS_Double   radius_ ;

            };
            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, start exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport __declspec(dllexport)
            #endif

            NDDSUSERDllExport DDS_TypeCode* Sphere__get_typecode(void); /* Type code */

            DDS_SEQUENCE(Sphere_Seq, Sphere_);

            NDDSUSERDllExport
            RTIBool Sphere__initialize(
                Sphere_* self);

            NDDSUSERDllExport
            RTIBool Sphere__initialize_ex(
                Sphere_* self,RTIBool allocatePointers,RTIBool allocateMemory);

            NDDSUSERDllExport
            RTIBool Sphere__initialize_w_params(
                Sphere_* self,
                const struct DDS_TypeAllocationParams_t * allocParams);  

            NDDSUSERDllExport
            void Sphere__finalize(
                Sphere_* self);

            NDDSUSERDllExport
            void Sphere__finalize_ex(
                Sphere_* self,RTIBool deletePointers);

            NDDSUSERDllExport
            void Sphere__finalize_w_params(
                Sphere_* self,
                const struct DDS_TypeDeallocationParams_t * deallocParams);

            NDDSUSERDllExport
            void Sphere__finalize_optional_members(
                Sphere_* self, RTIBool deletePointers);  

            NDDSUSERDllExport
            RTIBool Sphere__copy(
                Sphere_* dst,
                const Sphere_* src);

            #if (defined(RTI_WIN32) || defined (RTI_WINCE)) && defined(NDDS_USER_DLL_EXPORT)
            /* If the code is building on Windows, stop exporting symbols.
            */
            #undef NDDSUSERDllExport
            #define NDDSUSERDllExport
            #endif
        } /* namespace dds_  */
    } /* namespace msg  */
} /* namespace tutorial_interfaces  */

#endif /* Sphere_ */

