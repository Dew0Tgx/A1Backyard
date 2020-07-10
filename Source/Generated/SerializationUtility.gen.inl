#pragma once

#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include "Windows.h"
#endif

#include "Core.h"

#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/xstddef"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/type_traits"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/utility"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/xutility"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/tuple"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/vcruntime_typeinfo.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/limits"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/xmemory"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/iosfwd"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/memory"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/vector"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/functional"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/xcall_once.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/system_error"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/xlocale"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Collection/FlatHashMap.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/xlocmes"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/xlocmon"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/xloctime"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/ratio"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/chrono"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/thread"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../ThirdParty/GSL/include/gsl/gsl_assert"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../ThirdParty/GSL/include/gsl/gsl_util"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../ThirdParty/GSL/include/gsl/multi_span"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/xfilesystem_abi.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/filesystem"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/mutex"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Handle/Handle.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/random"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/File/FileUtility.h"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Hash/HashUtility.h"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Network/NetworkLowLevelPublicTypes.h"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Network/NetworkLowLevelTypes.h"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Network/NetworkLowLevelValues.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include/xiosbase"
#include "F:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Network/NetworkLowLevelHandles.h"
#include "F:/Source/A1/ThirdParty/A1Backyard/CMake/../Source/System/Backyard/BackyardTypes.h"


namespace FSerializationUtility
{
    //********************************* Generated for struct std::plus<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::plus<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::plus<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::minus<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::minus<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::minus<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::multiplies<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::multiplies<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::multiplies<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::equal_to<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::equal_to<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::equal_to<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::not_equal_to<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::not_equal_to<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::not_equal_to<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::greater<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::greater<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::greater<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::less<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::less<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::less<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::greater_equal<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::greater_equal<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::greater_equal<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::less_equal<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::less_equal<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::less_equal<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Select<false> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Select<false>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Select<false>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Make_signed2<1> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Make_signed2<1>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Make_signed2<1>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Make_signed2<2> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Make_signed2<2>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Make_signed2<2>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Make_signed2<4> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Make_signed2<4>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Make_signed2<4>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Make_signed2<8> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Make_signed2<8>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Make_signed2<8>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Make_unsigned2<1> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Make_unsigned2<1>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Make_unsigned2<1>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Make_unsigned2<2> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Make_unsigned2<2>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Make_unsigned2<2>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Make_unsigned2<4> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Make_unsigned2<4>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Make_unsigned2<4>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Make_unsigned2<8> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Make_unsigned2<8>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Make_unsigned2<8>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Maximum<> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Maximum<>& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::integral_constant<unsigned long long, 0>&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Maximum<>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::integral_constant<unsigned long long, 0>&>(Out));
    }
    //********************************* Generated for struct std::common_type<> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::common_type<>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::common_type<>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Invoker_pmf_object *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Invoker_pmf_object& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Invoker_pmf_object& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Invoker_pmf_refwrap *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Invoker_pmf_refwrap& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Invoker_pmf_refwrap& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Invoker_pmf_pointer *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Invoker_pmf_pointer& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Invoker_pmf_pointer& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Invoker_pmd_object *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Invoker_pmd_object& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Invoker_pmd_object& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Invoker_pmd_refwrap *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Invoker_pmd_refwrap& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Invoker_pmd_refwrap& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Invoker_pmd_pointer *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Invoker_pmd_pointer& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Invoker_pmd_pointer& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Invoker_functor *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Invoker_functor& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Invoker_functor& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_C__Invoker_pmf_object *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_C__Invoker_pmf_object& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_C__Invoker_pmf_object& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_C__Invoker_pmf_refwrap *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_C__Invoker_pmf_refwrap& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_C__Invoker_pmf_refwrap& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_C__Invoker_pmf_pointer *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_C__Invoker_pmf_pointer& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_C__Invoker_pmf_pointer& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_C__Invoker_pmd_object *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_C__Invoker_pmd_object& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_C__Invoker_pmd_object& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_C__Invoker_pmd_refwrap *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_C__Invoker_pmd_refwrap& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_C__Invoker_pmd_refwrap& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_C__Invoker_pmd_pointer *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_C__Invoker_pmd_pointer& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_C__Invoker_pmd_pointer& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_C__Invoker_functor *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_C__Invoker_functor& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_C__Invoker_functor& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Unforced *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Unforced& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Unforced& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Invoker_ret<std::_Unforced, false> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Invoker_ret<std::_Unforced, false>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Invoker_ret<std::_Unforced, false>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::hash<float> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::hash<float>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::hash<float>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::hash<double> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::hash<double>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::hash<double>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::hash<long double> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::hash<long double>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::hash<long double>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::hash<std::nullptr_t> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::hash<std::nullptr_t>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::hash<std::nullptr_t>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::piecewise_construct_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::piecewise_construct_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::piecewise_construct_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::in_place_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::in_place_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::in_place_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Unused_parameter *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Unused_parameter& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Unused_parameter& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::input_iterator_tag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::input_iterator_tag& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::input_iterator_tag& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::output_iterator_tag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::output_iterator_tag& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::output_iterator_tag& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Distance_unknown *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Distance_unknown& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Distance_unknown& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_False_copy_cat *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_False_copy_cat& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_False_copy_cat& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Container_proxy *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Container_proxy& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Container_proxy& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Iterator_base12 *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Iterator_base12& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Iterator_base12& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Default_sentinel *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Default_sentinel& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Default_sentinel& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Is_character<char> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Is_character<char>& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Is_character<char>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::_Is_character<signed char> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Is_character<signed char>& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Is_character<signed char>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::_Is_character<unsigned char> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Is_character<unsigned char>& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Is_character<unsigned char>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::_Is_character_or_byte<std::byte> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Is_character_or_byte<std::byte>& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Is_character_or_byte<std::byte>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    // struct std::_Equal_memcmp_is_safe_helper<std::byte, std::byte, equal_to<> > is ignored 

    //********************************* Generated for struct std::_Lex_compare_check_element_types_helper<std::byte, std::byte, std::byte> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Lex_compare_check_element_types_helper<std::byte, std::byte, std::byte>& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Lex_compare_check_element_types_helper<std::byte, std::byte, std::byte>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::_Lex_compare_check_element_types_helper<std::byte, std::byte, void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Lex_compare_check_element_types_helper<std::byte, std::byte, void>& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Lex_compare_check_element_types_helper<std::byte, std::byte, void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::allocator_arg_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::allocator_arg_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::allocator_arg_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Ignore *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Ignore& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Ignore& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Exact_args_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Exact_args_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Exact_args_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Unpack_tuple_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Unpack_tuple_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Unpack_tuple_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Alloc_exact_args_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Alloc_exact_args_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Alloc_exact_args_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Alloc_unpack_tuple_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Alloc_unpack_tuple_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Alloc_unpack_tuple_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct __type_info_node *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const __type_info_node& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, __type_info_node& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Num_base *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Num_base& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Num_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Default_allocate_traits *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Default_allocate_traits& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Default_allocate_traits& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Equal_allocators *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Equal_allocators& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Equal_allocators& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Fake_allocator *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Fake_allocator& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Fake_allocator& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Container_base0 *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Container_base0& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Container_base0& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Iterator_base0 *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Iterator_base0& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Iterator_base0& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Container_base12 *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Container_base12& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Container_base12& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Leave_proxy_unbound *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Leave_proxy_unbound& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Leave_proxy_unbound& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Fake_proxy_ptr_impl *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Fake_proxy_ptr_impl& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Fake_proxy_ptr_impl& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Basic_container_proxy_ptr12 *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Basic_container_proxy_ptr12& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Ptr);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Basic_container_proxy_ptr12& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Ptr);
    }
    //********************************* Generated for struct std::_Zero_then_variadic_args_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Zero_then_variadic_args_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Zero_then_variadic_args_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_One_then_variadic_args_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_One_then_variadic_args_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_One_then_variadic_args_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Move_allocator_tag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Move_allocator_tag& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Move_allocator_tag& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::char_traits<char> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::char_traits<char>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::char_traits<char>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::char_traits<char16_t> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::char_traits<char16_t>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::char_traits<char16_t>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::char_traits<char32_t> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::char_traits<char32_t>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::char_traits<char32_t>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::char_traits<wchar_t> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::char_traits<wchar_t>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::char_traits<wchar_t>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::char_traits<unsigned short> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::char_traits<unsigned short>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::char_traits<unsigned short>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Exception_ptr_access *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Exception_ptr_access& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Exception_ptr_access& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::owner_less<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::owner_less<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::owner_less<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Shared_ptr_spin_lock *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Shared_ptr_spin_lock& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Shared_ptr_spin_lock& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Value_init_tag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Value_init_tag& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Value_init_tag& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::divides<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::divides<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::divides<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::modulus<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::modulus<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::modulus<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::negate<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::negate<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::negate<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::logical_and<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::logical_and<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::logical_and<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::logical_or<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::logical_or<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::logical_or<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::logical_not<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::logical_not<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::logical_not<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::bit_and<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::bit_and<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::bit_and<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::bit_or<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::bit_or<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::bit_or<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::bit_xor<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::bit_xor<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::bit_xor<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::bit_not<void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::bit_not<void>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::bit_not<void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Not_fn_tag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Not_fn_tag& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Not_fn_tag& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Global_delete *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Global_delete& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Global_delete& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::once_flag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::once_flag& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Opaque);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::once_flag& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Opaque);
    }
    //********************************* Generated for struct std::is_error_code_enum<std::io_errc> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::is_error_code_enum<std::io_errc>& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::is_error_code_enum<std::io_errc>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::is_error_condition_enum<std::errc> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::is_error_condition_enum<std::errc>& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::is_error_condition_enum<std::errc>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::hash<std::error_code> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::hash<std::error_code>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::hash<std::error_code>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::hash<std::error_condition> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::hash<std::error_condition>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::hash<std::error_condition>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::_Crt_new_delete *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Crt_new_delete& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Crt_new_delete& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::locale::_Facet_guard *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::locale::_Facet_guard& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, Value._Target);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::locale::_Facet_guard& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, Out._Target);
    }
    //********************************* Generated for struct std::ctype_base *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::ctype_base& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::locale::facet&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::ctype_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::locale::facet&>(Out));
    }
    //********************************* Generated for struct ska::prime_number_hash_policy *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const ska::prime_number_hash_policy& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, ska::prime_number_hash_policy& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct ska::power_of_two_hash_policy *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const ska::power_of_two_hash_policy& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, ska::power_of_two_hash_policy& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct ska::fibonacci_hash_policy *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const ska::fibonacci_hash_policy& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, ska::fibonacci_hash_policy& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::messages_base *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::messages_base& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::locale::facet&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::messages_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::locale::facet&>(Out));
    }
    //********************************* Generated for struct std::money_base *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::money_base& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::locale::facet&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::money_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::locale::facet&>(Out));
    }
    //********************************* Generated for struct std::money_base::pattern *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::money_base::pattern& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.field);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::money_base::pattern& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.field);
    }
    //********************************* Generated for struct std::time_base *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::time_base& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::locale::facet&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::time_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::locale::facet&>(Out));
    }
    //********************************* Generated for struct std::_Gcd<0, 0> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Gcd<0, 0>& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::integral_constant<long long, 1>&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Gcd<0, 0>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::integral_constant<long long, 1>&>(Out));
    }
    //********************************* Generated for struct std::_Big_uint128 *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Big_uint128& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Upper);
        Serialize(Out, Value._Lower);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Big_uint128& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Upper);
        Deserialize(InOutPointer, Out._Lower);
    }
    //********************************* Generated for struct std::chrono::system_clock *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::chrono::system_clock& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::chrono::system_clock& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::chrono::steady_clock *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::chrono::steady_clock& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::chrono::steady_clock& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::hash<thread::id> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::hash<thread::id>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::hash<thread::id>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct gsl::fail_fast *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const gsl::fail_fast& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::logic_error&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, gsl::fail_fast& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::logic_error&>(Out));
    }
    //********************************* Generated for struct gsl::narrowing_error *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const gsl::narrowing_error& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::exception&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, gsl::narrowing_error& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::exception&>(Out));
    }
    //********************************* Generated for struct gsl::static_bounds_dynamic_range_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const gsl::static_bounds_dynamic_range_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, gsl::static_bounds_dynamic_range_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct gsl::generalized_mapping_tag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const gsl::generalized_mapping_tag& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, gsl::generalized_mapping_tag& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    // struct gsl::dim_t<dynamic_range> is ignored 

    //********************************* Generated for struct gsl::details::Sep *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const gsl::details::Sep& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, gsl::details::Sep& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct __std_fs_filetime *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const __std_fs_filetime& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Low);
        Serialize(Out, Value._High);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, __std_fs_filetime& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Low);
        Deserialize(InOutPointer, Out._High);
    }
    //********************************* Generated for struct __std_fs_stats *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const __std_fs_stats& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Last_write_time);
        Serialize(Out, Value._File_size);
        Serialize(Out, Value._Attributes);
        Serialize(Out, Value._Reparse_point_tag);
        Serialize(Out, Value._Link_count);
        Serialize(Out, Value._Available);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, __std_fs_stats& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Last_write_time);
        Deserialize(InOutPointer, Out._File_size);
        Deserialize(InOutPointer, Out._Attributes);
        Deserialize(InOutPointer, Out._Reparse_point_tag);
        Deserialize(InOutPointer, Out._Link_count);
        Deserialize(InOutPointer, Out._Available);
    }
    //********************************* Generated for struct __std_fs_reparse_data_buffer *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const __std_fs_reparse_data_buffer& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Reparse_tag);
        Serialize(Out, Value._Reparse_data_length);
        Serialize(Out, Value._Reserved);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, __std_fs_reparse_data_buffer& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Reparse_tag);
        Deserialize(InOutPointer, Out._Reparse_data_length);
        Deserialize(InOutPointer, Out._Reserved);
    }
    //********************************* Generated for struct __std_ulong_and_error *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const __std_ulong_and_error& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Size);
        Serialize(Out, Value._Error);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, __std_ulong_and_error& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Size);
        Deserialize(InOutPointer, Out._Error);
    }
    //********************************* Generated for struct __std_fs_convert_result *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const __std_fs_convert_result& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Len);
        Serialize(Out, Value._Err);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, __std_fs_convert_result& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Len);
        Deserialize(InOutPointer, Out._Err);
    }
    //********************************* Generated for struct __std_fs_file_id *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const __std_fs_file_id& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Volume_serial_number);
        Serialize(Out, Value._Id);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, __std_fs_file_id& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Volume_serial_number);
        Deserialize(InOutPointer, Out._Id);
    }
    //********************************* Generated for struct std::_Fs_file *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Fs_file& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Raw);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Fs_file& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Raw);
    }
    //********************************* Generated for struct std::_Is_slash_oper *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Is_slash_oper& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Is_slash_oper& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::filesystem::_Normal_conversion *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::filesystem::_Normal_conversion& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::filesystem::_Normal_conversion& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::filesystem::_Utf8_conversion *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::filesystem::_Utf8_conversion& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::filesystem::_Utf8_conversion& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::filesystem::_Find_file_handle *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::filesystem::_Find_file_handle& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Handle);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::filesystem::_Find_file_handle& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Handle);
    }
    // struct std::filesystem::_File_status_and_error is ignored 

    //********************************* Generated for struct std::filesystem::_File_time_clock *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::filesystem::_File_time_clock& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::filesystem::_File_time_clock& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    // struct std::filesystem::_Dir_enum_impl::_Creator::_Create_status is ignored 

    // struct std::filesystem::_Directory_entry_proxy is ignored 

    //********************************* Generated for struct std::filesystem::_Should_recurse_result *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::filesystem::_Should_recurse_result& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Should_recurse);
        Serialize(Out, Value._Error);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::filesystem::_Should_recurse_result& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Should_recurse);
        Deserialize(InOutPointer, Out._Error);
    }
    //********************************* Generated for struct std::filesystem::space_info *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::filesystem::space_info& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.capacity);
        Serialize(Out, Value.free);
        Serialize(Out, Value.available);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::filesystem::space_info& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.capacity);
        Deserialize(InOutPointer, Out.free);
        Deserialize(InOutPointer, Out.available);
    }
    //********************************* Generated for struct std::adopt_lock_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::adopt_lock_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::adopt_lock_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::defer_lock_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::defer_lock_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::defer_lock_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct std::try_to_lock_t *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::try_to_lock_t& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::try_to_lock_t& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    // struct std::_UInt_is_zero is ignored 

    //********************************* Generated for struct HHandle *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const HHandle& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Offset);
        Serialize(Out, Value.Class);
        Serialize(Out, Value.UID);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, HHandle& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Offset);
        Deserialize(InOutPointer, Out.Class);
        Deserialize(InOutPointer, Out.UID);
    }
    //********************************* Generated for struct std::bernoulli_distribution::param_type *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::bernoulli_distribution::param_type& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Px);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::bernoulli_distribution::param_type& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Px);
    }
    //********************************* Generated for struct FFileUtility::FFileCache *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FFileUtility::FFileCache& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Path);
        Serialize(Out, Value.Content);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FFileUtility::FFileCache& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Path);
        Deserialize(InOutPointer, Out.Content);
    }
    //********************************* Generated for struct THasherRaw<std::string> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const THasherRaw<std::string>& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, THasherRaw<std::string>& Out)
    {
        (void)InOutPointer;
        (void)Out;
    }
    //********************************* Generated for struct FNetworkAddress *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkAddress& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.IPV6);
        Serialize(Out, Value.Port);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkAddress& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.IPV6);
        Deserialize(InOutPointer, Out.Port);
    }
    //********************************* Generated for struct FNetworkAsyncData *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkAsyncData& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, Value.Mutex);
        Serialize(Out, Value.Messages);
        Serialize(Out, Value.Events);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkAsyncData& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, Out.Mutex);
        Deserialize(InOutPointer, Out.Messages);
        Deserialize(InOutPointer, Out.Events);
    }
    //********************************* Generated for struct FNetworkServer *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkServer& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.ListenSocket);
        Serialize(Out, Value.PollGroup);
        Serialize(Out, Value.ClientToDataMap);
        Serialize(Out, Value.AddressToConnectionMap);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkServer& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.ListenSocket);
        Deserialize(InOutPointer, Out.PollGroup);
        Deserialize(InOutPointer, Out.ClientToDataMap);
        Deserialize(InOutPointer, Out.AddressToConnectionMap);
    }
    //********************************* Generated for struct std::forward_iterator_tag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::forward_iterator_tag& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const std::input_iterator_tag&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::forward_iterator_tag& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<std::input_iterator_tag&>(Out));
    }
    //********************************* Generated for struct std::bidirectional_iterator_tag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::bidirectional_iterator_tag& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const std::forward_iterator_tag&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::bidirectional_iterator_tag& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<std::forward_iterator_tag&>(Out));
    }
    //********************************* Generated for struct std::random_access_iterator_tag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::random_access_iterator_tag& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const std::bidirectional_iterator_tag&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::random_access_iterator_tag& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<std::bidirectional_iterator_tag&>(Out));
    }
    //********************************* Generated for struct std::_Num_int_base *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Num_int_base& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const std::_Num_base&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Num_int_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<std::_Num_base&>(Out));
    }
    //********************************* Generated for struct std::_Num_float_base *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Num_float_base& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const std::_Num_base&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Num_float_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<std::_Num_base&>(Out));
    }
    // struct std::ios_base::_Iosarray is ignored 

    // struct std::ios_base::_Fnarray is ignored 

    //********************************* Generated for struct gsl::contiguous_mapping_tag *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const gsl::contiguous_mapping_tag& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const gsl::generalized_mapping_tag&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, gsl::contiguous_mapping_tag& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<gsl::generalized_mapping_tag&>(Out));
    }
    //********************************* Generated for struct __std_fs_find_data *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const __std_fs_find_data& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value._Attributes);
        Serialize(Out, Value._Creation_time);
        Serialize(Out, Value._Last_access_time);
        Serialize(Out, Value._Last_write_time);
        Serialize(Out, Value._File_size_high);
        Serialize(Out, Value._File_size_low);
        Serialize(Out, Value._Reparse_point_tag);
        Serialize(Out, Value._Reserved1);
        Serialize(Out, Value._File_name);
        Serialize(Out, Value._Short_file_name);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, __std_fs_find_data& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out._Attributes);
        Deserialize(InOutPointer, Out._Creation_time);
        Deserialize(InOutPointer, Out._Last_access_time);
        Deserialize(InOutPointer, Out._Last_write_time);
        Deserialize(InOutPointer, Out._File_size_high);
        Deserialize(InOutPointer, Out._File_size_low);
        Deserialize(InOutPointer, Out._Reparse_point_tag);
        Deserialize(InOutPointer, Out._Reserved1);
        Deserialize(InOutPointer, Out._File_name);
        Deserialize(InOutPointer, Out._Short_file_name);
    }
    // struct std::filesystem::_Dir_enum_impl is ignored 

    // struct std::filesystem::_Dir_enum_impl::_Creator is ignored 

    //********************************* Generated for struct std::filesystem::_Recursive_dir_enum_impl *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::filesystem::_Recursive_dir_enum_impl& Value)
    {
        (void)Out;
        (void)Value;
        // Serialize(Out, static_cast<const std::filesystem::_Dir_enum_impl&>(Value));
        Serialize(Out, Value._Stack);
        Serialize(Out, Value._Options);
        Serialize(Out, Value._Recursion_pending);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::filesystem::_Recursive_dir_enum_impl& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // Deserialize(InOutPointer, static_cast<std::filesystem::_Dir_enum_impl&>(Out));
        Deserialize(InOutPointer, Out._Stack);
        Deserialize(InOutPointer, Out._Options);
        Deserialize(InOutPointer, Out._Recursion_pending);
    }
    //********************************* Generated for struct HNetworkInterface *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const HNetworkInterface& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const HHandle&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, HNetworkInterface& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<HHandle&>(Out));
    }
    //********************************* Generated for struct HNetworkServer *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const HNetworkServer& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const HHandle&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, HNetworkServer& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<HHandle&>(Out));
    }
    //********************************* Generated for struct HNetworkClient *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const HNetworkClient& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const HHandle&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, HNetworkClient& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<HHandle&>(Out));
    }
    //********************************* Generated for struct FNetworkServerClientData *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkServerClientData& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Address);
        Serialize(Out, Value.Nick);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkServerClientData& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Address);
        Deserialize(InOutPointer, Out.Nick);
    }
    //********************************* Generated for struct FNetworkMessage *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkMessage& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Address);
        Serialize(Out, Value.Bytes);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkMessage& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Address);
        Deserialize(InOutPointer, Out.Bytes);
    }
    //********************************* Generated for struct FNetworkEvent *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkEvent& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Address);
        Serialize(Out, Value.Type);
        Serialize(Out, Value.Description);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkEvent& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Address);
        Deserialize(InOutPointer, Out.Type);
        Deserialize(InOutPointer, Out.Description);
    }
    //********************************* Generated for struct FNetworkClient *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FNetworkClient& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.ServerAddress);
        Serialize(Out, Value.Connection);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FNetworkClient& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.ServerAddress);
        Deserialize(InOutPointer, Out.Connection);
    }
    //********************************* Generated for struct HPlayerState *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const HPlayerState& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, static_cast<const HHandle&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, HPlayerState& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, static_cast<HHandle&>(Out));
    }
    //********************************* Generated for struct FPendingClient *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FPendingClient& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.ConnectTime);
        Serialize(Out, Value.Player);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FPendingClient& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.ConnectTime);
        Deserialize(InOutPointer, Out.Player);
    }
    //********************************* Generated for struct FServerState *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FServerState& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.ConnectedClients);
        Serialize(Out, Value.PendingClients);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FServerState& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.ConnectedClients);
        Deserialize(InOutPointer, Out.PendingClients);
    }
    //********************************* Generated for struct FClientState *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FClientState& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Server);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FClientState& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Server);
    }
    //********************************* Generated for struct FPlayerState *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FPlayerState& Value)
    {
        (void)Out;
        (void)Value;
        Serialize(Out, Value.Address);
        Serialize(Out, Value.State);
        Serialize(Out, Value.ServerState);
        Serialize(Out, Value.ClientState);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FPlayerState& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.Address);
        Deserialize(InOutPointer, Out.State);
        Deserialize(InOutPointer, Out.ServerState);
        Deserialize(InOutPointer, Out.ClientState);
    }
}
