#pragma once

#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include "Windows.h"
#endif

#include "Core.h"

#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xstddef"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/type_traits"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/utility"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xutility"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/tuple"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/vcruntime_typeinfo.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/limits"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xmemory"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/iosfwd"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/memory"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/vector"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xstring"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/functional"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xcall_once.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/system_error"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xlocale"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Collection/FlatHashMap.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xlocmes"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xlocmon"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xloctime"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/ratio"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/chrono"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/thread"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../ThirdParty/GSL/include/gsl/gsl_assert"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../ThirdParty/GSL/include/gsl/gsl_util"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../ThirdParty/GSL/include/gsl/multi_span"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xfilesystem_abi.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/filesystem"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/mutex"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Handle/Handle.h"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/File/FileUtility.h"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Hash/HashUtility.h"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Network/NetworkLowLevelPublicTypes.h"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/RPC/RPCUtility.h"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Network/NetworkLowLevelHandles.h"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Network/NetworkLowLevelTypes.h"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Network/NetworkLowLevelValues.h"
#include "D:/Source/A1/ThirdParty/A1Backyard/CMake/../Source/System/Backyard/BackyardTypes.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/yvals.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/cstddef"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xatomic.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/xerrc.h"
#include "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.24.28314/include/codecvt"
#include "D:/Source/A1/ThirdParty/A1Utility/CMake/../Source/Utility/Math/MathTypes.h"
#include "D:/Source/A1/CMake/../ThirdParty/GameNetworkingSockets/include/steam/steamuniverse.h"


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
        // (blacklisted)Serialize(Out, static_cast<const std::integral_constant<unsigned long long, 0>&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Maximum<>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::integral_constant<unsigned long long, 0>&>(Out));
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
        // (blacklisted)Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Is_character<char>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::_Is_character<signed char> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Is_character<signed char>& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Is_character<signed char>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::_Is_character<unsigned char> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Is_character<unsigned char>& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Is_character<unsigned char>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::_Is_character_or_byte<std::byte> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Is_character_or_byte<std::byte>& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Is_character_or_byte<std::byte>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    // struct std::_Equal_memcmp_is_safe_helper<std::byte, std::byte, equal_to<> > is ignored 

    //********************************* Generated for struct std::_Lex_compare_check_element_types_helper<std::byte, std::byte, std::byte> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Lex_compare_check_element_types_helper<std::byte, std::byte, std::byte>& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Lex_compare_check_element_types_helper<std::byte, std::byte, std::byte>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::_Lex_compare_check_element_types_helper<std::byte, std::byte, void> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Lex_compare_check_element_types_helper<std::byte, std::byte, void>& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Lex_compare_check_element_types_helper<std::byte, std::byte, void>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
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
        // (blacklisted)Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::is_error_code_enum<std::io_errc>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
    }
    //********************************* Generated for struct std::is_error_condition_enum<std::errc> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::is_error_condition_enum<std::errc>& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, static_cast<const std::true_type&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::is_error_condition_enum<std::errc>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::true_type&>(Out));
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
    //********************************* Generated for struct std::ctype_base *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::ctype_base& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, static_cast<const std::locale::facet&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::ctype_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::locale::facet&>(Out));
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
        // (blacklisted)Serialize(Out, static_cast<const std::locale::facet&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::messages_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::locale::facet&>(Out));
    }
    //********************************* Generated for struct std::money_base *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::money_base& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, static_cast<const std::locale::facet&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::money_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::locale::facet&>(Out));
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
        // (blacklisted)Serialize(Out, static_cast<const std::locale::facet&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::time_base& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::locale::facet&>(Out));
    }
    //********************************* Generated for struct std::_Gcd<0, 0> *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const std::_Gcd<0, 0>& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, static_cast<const std::integral_constant<long long, 1>&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::_Gcd<0, 0>& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::integral_constant<long long, 1>&>(Out));
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
        // (blacklisted)Serialize(Out, static_cast<const std::logic_error&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, gsl::fail_fast& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::logic_error&>(Out));
    }
    //********************************* Generated for struct gsl::narrowing_error *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const gsl::narrowing_error& Value)
    {
        (void)Out;
        (void)Value;
        // (blacklisted)Serialize(Out, static_cast<const std::exception&>(Value));
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, gsl::narrowing_error& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::exception&>(Out));
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
    //********************************* Generated for struct FRPCLifecycle *********************************
    template <>
    inline void Serialize(vector<byte>& Out, const FRPCLifecycle& Value)
    {
        (void)Out;
        (void)Value;
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FRPCLifecycle& Out)
    {
        (void)InOutPointer;
        (void)Out;
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
        // (blacklisted)Serialize(Out, static_cast<const std::filesystem::_Dir_enum_impl&>(Value));
        Serialize(Out, Value._Stack);
        Serialize(Out, Value._Options);
        Serialize(Out, Value._Recursion_pending);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, std::filesystem::_Recursive_dir_enum_impl& Out)
    {
        (void)InOutPointer;
        (void)Out;
        // (blacklisted)Deserialize(InOutPointer, static_cast<std::filesystem::_Dir_enum_impl&>(Out));
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
        Serialize(Out, Value.ServerPlayerHandle);
    }

    template <>
    inline void Deserialize(const byte*& InOutPointer, FClientState& Out)
    {
        (void)InOutPointer;
        (void)Out;
        Deserialize(InOutPointer, Out.ServerPlayerHandle);
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

namespace FStringUtility
{
    //********************************* Generated for enum std::_Uninitialized *********************************
    inline const char* ToString(const std::_Uninitialized& Enum)
    {
        switch(Enum)
        {
        case std::_Uninitialized::_Noinit: return "_Noinit";
        default: Prevent();
        }
        return "";
    }

    // enum std::byte is empty 

    //********************************* Generated for enum std::float_denorm_style *********************************
    inline const char* ToString(const std::float_denorm_style& Enum)
    {
        switch(Enum)
        {
        case std::float_denorm_style::denorm_indeterminate: return "denorm_indeterminate";
        case std::float_denorm_style::denorm_absent: return "denorm_absent";
        case std::float_denorm_style::denorm_present: return "denorm_present";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::float_round_style *********************************
    inline const char* ToString(const std::float_round_style& Enum)
    {
        switch(Enum)
        {
        case std::float_round_style::round_indeterminate: return "round_indeterminate";
        case std::float_round_style::round_toward_zero: return "round_toward_zero";
        case std::float_round_style::round_to_nearest: return "round_to_nearest";
        case std::float_round_style::round_toward_infinity: return "round_toward_infinity";
        case std::float_round_style::round_toward_neg_infinity: return "round_toward_neg_infinity";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::memory_order *********************************
    inline const char* ToString(const std::memory_order& Enum)
    {
        switch(Enum)
        {
        case std::memory_order::memory_order_relaxed: return "memory_order_relaxed";
        case std::memory_order::memory_order_consume: return "memory_order_consume";
        case std::memory_order::memory_order_acquire: return "memory_order_acquire";
        case std::memory_order::memory_order_release: return "memory_order_release";
        case std::memory_order::memory_order_acq_rel: return "memory_order_acq_rel";
        case std::memory_order::memory_order_seq_cst: return "memory_order_seq_cst";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::pointer_safety *********************************
    inline const char* ToString(const std::pointer_safety& Enum)
    {
        switch(Enum)
        {
        case std::pointer_safety::relaxed: return "relaxed";
        case std::pointer_safety::preferred: return "preferred";
        case std::pointer_safety::strict: return "strict";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::errc *********************************
    inline const char* ToString(const std::errc& Enum)
    {
        switch(Enum)
        {
        case std::errc::address_family_not_supported: return "address_family_not_supported";
        case std::errc::address_in_use: return "address_in_use";
        case std::errc::address_not_available: return "address_not_available";
        case std::errc::already_connected: return "already_connected";
        case std::errc::argument_list_too_long: return "argument_list_too_long";
        case std::errc::argument_out_of_domain: return "argument_out_of_domain";
        case std::errc::bad_address: return "bad_address";
        case std::errc::bad_file_descriptor: return "bad_file_descriptor";
        case std::errc::bad_message: return "bad_message";
        case std::errc::broken_pipe: return "broken_pipe";
        case std::errc::connection_aborted: return "connection_aborted";
        case std::errc::connection_already_in_progress: return "connection_already_in_progress";
        case std::errc::connection_refused: return "connection_refused";
        case std::errc::connection_reset: return "connection_reset";
        case std::errc::cross_device_link: return "cross_device_link";
        case std::errc::destination_address_required: return "destination_address_required";
        case std::errc::device_or_resource_busy: return "device_or_resource_busy";
        case std::errc::directory_not_empty: return "directory_not_empty";
        case std::errc::executable_format_error: return "executable_format_error";
        case std::errc::file_exists: return "file_exists";
        case std::errc::file_too_large: return "file_too_large";
        case std::errc::filename_too_long: return "filename_too_long";
        case std::errc::function_not_supported: return "function_not_supported";
        case std::errc::host_unreachable: return "host_unreachable";
        case std::errc::identifier_removed: return "identifier_removed";
        case std::errc::illegal_byte_sequence: return "illegal_byte_sequence";
        case std::errc::inappropriate_io_control_operation: return "inappropriate_io_control_operation";
        case std::errc::interrupted: return "interrupted";
        case std::errc::invalid_argument: return "invalid_argument";
        case std::errc::invalid_seek: return "invalid_seek";
        case std::errc::io_error: return "io_error";
        case std::errc::is_a_directory: return "is_a_directory";
        case std::errc::message_size: return "message_size";
        case std::errc::network_down: return "network_down";
        case std::errc::network_reset: return "network_reset";
        case std::errc::network_unreachable: return "network_unreachable";
        case std::errc::no_buffer_space: return "no_buffer_space";
        case std::errc::no_child_process: return "no_child_process";
        case std::errc::no_link: return "no_link";
        case std::errc::no_lock_available: return "no_lock_available";
        case std::errc::no_message_available: return "no_message_available";
        case std::errc::no_message: return "no_message";
        case std::errc::no_protocol_option: return "no_protocol_option";
        case std::errc::no_space_on_device: return "no_space_on_device";
        case std::errc::no_stream_resources: return "no_stream_resources";
        case std::errc::no_such_device_or_address: return "no_such_device_or_address";
        case std::errc::no_such_device: return "no_such_device";
        case std::errc::no_such_file_or_directory: return "no_such_file_or_directory";
        case std::errc::no_such_process: return "no_such_process";
        case std::errc::not_a_directory: return "not_a_directory";
        case std::errc::not_a_socket: return "not_a_socket";
        case std::errc::not_a_stream: return "not_a_stream";
        case std::errc::not_connected: return "not_connected";
        case std::errc::not_enough_memory: return "not_enough_memory";
        case std::errc::not_supported: return "not_supported";
        case std::errc::operation_canceled: return "operation_canceled";
        case std::errc::operation_in_progress: return "operation_in_progress";
        case std::errc::operation_not_permitted: return "operation_not_permitted";
        case std::errc::operation_not_supported: return "operation_not_supported";
        case std::errc::operation_would_block: return "operation_would_block";
        case std::errc::owner_dead: return "owner_dead";
        case std::errc::permission_denied: return "permission_denied";
        case std::errc::protocol_error: return "protocol_error";
        case std::errc::protocol_not_supported: return "protocol_not_supported";
        case std::errc::read_only_file_system: return "read_only_file_system";
        case std::errc::resource_deadlock_would_occur: return "resource_deadlock_would_occur";
        case std::errc::resource_unavailable_try_again: return "resource_unavailable_try_again";
        case std::errc::result_out_of_range: return "result_out_of_range";
        case std::errc::state_not_recoverable: return "state_not_recoverable";
        case std::errc::stream_timeout: return "stream_timeout";
        case std::errc::text_file_busy: return "text_file_busy";
        case std::errc::timed_out: return "timed_out";
        case std::errc::too_many_files_open_in_system: return "too_many_files_open_in_system";
        case std::errc::too_many_files_open: return "too_many_files_open";
        case std::errc::too_many_links: return "too_many_links";
        case std::errc::too_many_symbolic_link_levels: return "too_many_symbolic_link_levels";
        case std::errc::value_too_large: return "value_too_large";
        case std::errc::wrong_protocol_type: return "wrong_protocol_type";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::io_errc *********************************
    inline const char* ToString(const std::io_errc& Enum)
    {
        switch(Enum)
        {
        case std::io_errc::stream: return "stream";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::_Codecvt_mode *********************************
    inline const char* ToString(const std::_Codecvt_mode& Enum)
    {
        switch(Enum)
        {
        case std::_Codecvt_mode::_Consume_header: return "_Consume_header";
        case std::_Codecvt_mode::_Generate_header: return "_Generate_header";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::time_base::dateorder *********************************
    inline const char* ToString(const std::time_base::dateorder& Enum)
    {
        switch(Enum)
        {
        case std::time_base::dateorder::no_order: return "no_order";
        case std::time_base::dateorder::dmy: return "dmy";
        case std::time_base::dateorder::mdy: return "mdy";
        case std::time_base::dateorder::ymd: return "ymd";
        case std::time_base::dateorder::ydm: return "ydm";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::codecvt_mode *********************************
    inline const char* ToString(const std::codecvt_mode& Enum)
    {
        switch(Enum)
        {
        case std::codecvt_mode::consume_header: return "consume_header";
        case std::codecvt_mode::generate_header: return "generate_header";
        case std::codecvt_mode::little_endian: return "little_endian";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_win_error *********************************
    inline const char* ToString(const __std_win_error& Enum)
    {
        switch(Enum)
        {
        case __std_win_error::_Success: return "_Success";
        case __std_win_error::_Invalid_function: return "_Invalid_function";
        case __std_win_error::_File_not_found: return "_File_not_found";
        case __std_win_error::_Path_not_found: return "_Path_not_found";
        case __std_win_error::_Access_denied: return "_Access_denied";
        case __std_win_error::_Not_enough_memory: return "_Not_enough_memory";
        case __std_win_error::_No_more_files: return "_No_more_files";
        case __std_win_error::_Sharing_violation: return "_Sharing_violation";
        case __std_win_error::_Not_supported: return "_Not_supported";
        case __std_win_error::_File_exists: return "_File_exists";
        case __std_win_error::_Invalid_parameter: return "_Invalid_parameter";
        case __std_win_error::_Insufficient_buffer: return "_Insufficient_buffer";
        case __std_win_error::_Invalid_name: return "_Invalid_name";
        case __std_win_error::_Directory_not_empty: return "_Directory_not_empty";
        case __std_win_error::_Already_exists: return "_Already_exists";
        case __std_win_error::_Filename_exceeds_range: return "_Filename_exceeds_range";
        case __std_win_error::_Directory_name_is_invalid: return "_Directory_name_is_invalid";
        case __std_win_error::_Max: return "_Max";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_fs_dir_handle *********************************
    inline const char* ToString(const __std_fs_dir_handle& Enum)
    {
        switch(Enum)
        {
        case __std_fs_dir_handle::_Invalid: return "_Invalid";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_fs_file_attr *********************************
    inline const char* ToString(const __std_fs_file_attr& Enum)
    {
        switch(Enum)
        {
        case __std_fs_file_attr::_Readonly: return "_Readonly";
        case __std_fs_file_attr::_Hidden: return "_Hidden";
        case __std_fs_file_attr::_System: return "_System";
        case __std_fs_file_attr::_Directory: return "_Directory";
        case __std_fs_file_attr::_Archive: return "_Archive";
        case __std_fs_file_attr::_Device: return "_Device";
        case __std_fs_file_attr::_Normal: return "_Normal";
        case __std_fs_file_attr::_Temporary: return "_Temporary";
        case __std_fs_file_attr::_Sparse_file: return "_Sparse_file";
        case __std_fs_file_attr::_Reparse_point: return "_Reparse_point";
        case __std_fs_file_attr::_Invalid: return "_Invalid";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_fs_reparse_tag *********************************
    inline const char* ToString(const __std_fs_reparse_tag& Enum)
    {
        switch(Enum)
        {
        case __std_fs_reparse_tag::_None: return "_None";
        case __std_fs_reparse_tag::_Mount_point: return "_Mount_point";
        case __std_fs_reparse_tag::_Symlink: return "_Symlink";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_fs_stats_flags *********************************
    inline const char* ToString(const __std_fs_stats_flags& Enum)
    {
        switch(Enum)
        {
        case __std_fs_stats_flags::_None: return "_None";
        case __std_fs_stats_flags::_Follow_symlinks: return "_Follow_symlinks";
        case __std_fs_stats_flags::_Attributes: return "_Attributes";
        case __std_fs_stats_flags::_Reparse_tag: return "_Reparse_tag";
        case __std_fs_stats_flags::_File_size: return "_File_size";
        case __std_fs_stats_flags::_Link_count: return "_Link_count";
        case __std_fs_stats_flags::_Last_write_time: return "_Last_write_time";
        case __std_fs_stats_flags::_All_data: return "_All_data";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_fs_volume_name_kind *********************************
    inline const char* ToString(const __std_fs_volume_name_kind& Enum)
    {
        switch(Enum)
        {
        case __std_fs_volume_name_kind::_Dos: return "_Dos";
        case __std_fs_volume_name_kind::_Guid: return "_Guid";
        case __std_fs_volume_name_kind::_Nt: return "_Nt";
        case __std_fs_volume_name_kind::_None: return "_None";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_access_rights *********************************
    inline const char* ToString(const __std_access_rights& Enum)
    {
        switch(Enum)
        {
        case __std_access_rights::_Delete: return "_Delete";
        case __std_access_rights::_File_read_attributes: return "_File_read_attributes";
        case __std_access_rights::_File_write_attributes: return "_File_write_attributes";
        case __std_access_rights::_File_generic_write: return "_File_generic_write";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_fs_file_flags *********************************
    inline const char* ToString(const __std_fs_file_flags& Enum)
    {
        switch(Enum)
        {
        case __std_fs_file_flags::_None: return "_None";
        case __std_fs_file_flags::_Backup_semantics: return "_Backup_semantics";
        case __std_fs_file_flags::_Open_reparse_point: return "_Open_reparse_point";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_fs_file_handle *********************************
    inline const char* ToString(const __std_fs_file_handle& Enum)
    {
        switch(Enum)
        {
        case __std_fs_file_handle::_Invalid: return "_Invalid";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_code_page *********************************
    inline const char* ToString(const __std_code_page& Enum)
    {
        switch(Enum)
        {
        case __std_code_page::_Utf8: return "_Utf8";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum __std_fs_copy_options *********************************
    inline const char* ToString(const __std_fs_copy_options& Enum)
    {
        switch(Enum)
        {
        case __std_fs_copy_options::_None: return "_None";
        case __std_fs_copy_options::_Existing_mask: return "_Existing_mask";
        case __std_fs_copy_options::_Skip_existing: return "_Skip_existing";
        case __std_fs_copy_options::_Overwrite_existing: return "_Overwrite_existing";
        case __std_fs_copy_options::_Update_existing: return "_Update_existing";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::filesystem::file_type *********************************
    inline const char* ToString(const std::filesystem::file_type& Enum)
    {
        switch(Enum)
        {
        case std::filesystem::file_type::none: return "none";
        case std::filesystem::file_type::not_found: return "not_found";
        case std::filesystem::file_type::regular: return "regular";
        case std::filesystem::file_type::directory: return "directory";
        case std::filesystem::file_type::symlink: return "symlink";
        case std::filesystem::file_type::block: return "block";
        case std::filesystem::file_type::character: return "character";
        case std::filesystem::file_type::fifo: return "fifo";
        case std::filesystem::file_type::socket: return "socket";
        case std::filesystem::file_type::unknown: return "unknown";
        case std::filesystem::file_type::junction: return "junction";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::filesystem::perms *********************************
    inline const char* ToString(const std::filesystem::perms& Enum)
    {
        switch(Enum)
        {
        case std::filesystem::perms::none: return "none";
        case std::filesystem::perms::owner_read: return "owner_read";
        case std::filesystem::perms::owner_write: return "owner_write";
        case std::filesystem::perms::owner_exec: return "owner_exec";
        case std::filesystem::perms::owner_all: return "owner_all";
        case std::filesystem::perms::group_read: return "group_read";
        case std::filesystem::perms::group_write: return "group_write";
        case std::filesystem::perms::group_exec: return "group_exec";
        case std::filesystem::perms::group_all: return "group_all";
        case std::filesystem::perms::others_read: return "others_read";
        case std::filesystem::perms::others_write: return "others_write";
        case std::filesystem::perms::others_exec: return "others_exec";
        case std::filesystem::perms::others_all: return "others_all";
        case std::filesystem::perms::all: return "all";
        case std::filesystem::perms::set_uid: return "set_uid";
        case std::filesystem::perms::set_gid: return "set_gid";
        case std::filesystem::perms::sticky_bit: return "sticky_bit";
        case std::filesystem::perms::mask: return "mask";
        case std::filesystem::perms::unknown: return "unknown";
        case std::filesystem::perms::_All_write: return "_All_write";
        case std::filesystem::perms::_File_attribute_readonly: return "_File_attribute_readonly";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::filesystem::copy_options *********************************
    inline const char* ToString(const std::filesystem::copy_options& Enum)
    {
        switch(Enum)
        {
        case std::filesystem::copy_options::none: return "none";
        case std::filesystem::copy_options::_Existing_mask: return "_Existing_mask";
        case std::filesystem::copy_options::skip_existing: return "skip_existing";
        case std::filesystem::copy_options::overwrite_existing: return "overwrite_existing";
        case std::filesystem::copy_options::update_existing: return "update_existing";
        case std::filesystem::copy_options::recursive: return "recursive";
        case std::filesystem::copy_options::_Symlinks_mask: return "_Symlinks_mask";
        case std::filesystem::copy_options::copy_symlinks: return "copy_symlinks";
        case std::filesystem::copy_options::skip_symlinks: return "skip_symlinks";
        case std::filesystem::copy_options::_Copy_form_mask: return "_Copy_form_mask";
        case std::filesystem::copy_options::directories_only: return "directories_only";
        case std::filesystem::copy_options::create_symlinks: return "create_symlinks";
        case std::filesystem::copy_options::create_hard_links: return "create_hard_links";
        case std::filesystem::copy_options::_Unspecified_copy_prevention_tag: return "_Unspecified_copy_prevention_tag";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::filesystem::directory_options *********************************
    inline const char* ToString(const std::filesystem::directory_options& Enum)
    {
        switch(Enum)
        {
        case std::filesystem::directory_options::none: return "none";
        case std::filesystem::directory_options::follow_directory_symlink: return "follow_directory_symlink";
        case std::filesystem::directory_options::skip_permission_denied: return "skip_permission_denied";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::filesystem::perm_options *********************************
    inline const char* ToString(const std::filesystem::perm_options& Enum)
    {
        switch(Enum)
        {
        case std::filesystem::perm_options::replace: return "replace";
        case std::filesystem::perm_options::add: return "add";
        case std::filesystem::perm_options::remove: return "remove";
        case std::filesystem::perm_options::nofollow: return "nofollow";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum std::cv_status *********************************
    inline const char* ToString(const std::cv_status& Enum)
    {
        switch(Enum)
        {
        case std::cv_status::no_timeout: return "no_timeout";
        case std::cv_status::timeout: return "timeout";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum EDirection *********************************
    inline const char* ToString(const EDirection& Enum)
    {
        switch(Enum)
        {
        case EDirection::Left: return "Left";
        case EDirection::Top: return "Top";
        case EDirection::Right: return "Right";
        case EDirection::Bottom: return "Bottom";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum EOctoDirection *********************************
    inline const char* ToString(const EOctoDirection& Enum)
    {
        switch(Enum)
        {
        case EOctoDirection::Left: return "Left";
        case EOctoDirection::TopLeft: return "TopLeft";
        case EOctoDirection::Top: return "Top";
        case EOctoDirection::TopRight: return "TopRight";
        case EOctoDirection::Right: return "Right";
        case EOctoDirection::BottomRight: return "BottomRight";
        case EOctoDirection::Bottom: return "Bottom";
        case EOctoDirection::BottomLeft: return "BottomLeft";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum EDiagonalDirection *********************************
    inline const char* ToString(const EDiagonalDirection& Enum)
    {
        switch(Enum)
        {
        case EDiagonalDirection::TopLeft: return "TopLeft";
        case EDiagonalDirection::TopRight: return "TopRight";
        case EDiagonalDirection::BottomRight: return "BottomRight";
        case EDiagonalDirection::BottomLeft: return "BottomLeft";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum EUniverse *********************************
    inline const char* ToString(const EUniverse& Enum)
    {
        switch(Enum)
        {
        case EUniverse::k_EUniverseInvalid: return "k_EUniverseInvalid";
        case EUniverse::k_EUniversePublic: return "k_EUniversePublic";
        case EUniverse::k_EUniverseBeta: return "k_EUniverseBeta";
        case EUniverse::k_EUniverseInternal: return "k_EUniverseInternal";
        case EUniverse::k_EUniverseDev: return "k_EUniverseDev";
        case EUniverse::k_EUniverseMax: return "k_EUniverseMax";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum ENetworkEventType *********************************
    inline const char* ToString(const ENetworkEventType& Enum)
    {
        switch(Enum)
        {
        case ENetworkEventType::Connected: return "Connected";
        case ENetworkEventType::FailedToConnect: return "FailedToConnect";
        case ENetworkEventType::Disconnected: return "Disconnected";
        default: Prevent();
        }
        return "";
    }

    //********************************* Generated for enum EPlayerState *********************************
    inline const char* ToString(const EPlayerState& Enum)
    {
        switch(Enum)
        {
        case EPlayerState::BecomingIdle: return "BecomingIdle";
        case EPlayerState::Idle: return "Idle";
        case EPlayerState::BecomingGameServer: return "BecomingGameServer";
        case EPlayerState::GameServer: return "GameServer";
        case EPlayerState::BecomingGameClient: return "BecomingGameClient";
        case EPlayerState::GameClient: return "GameClient";
        case EPlayerState::GameServerStarted: return "GameServerStarted";
        default: Prevent();
        }
        return "";
    }

}
