#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2289511703;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.ComponentModel.AttributeCollection/AttributeEntry[]
struct AttributeEntryU5BU5D_t2297172821;
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t446526699;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.Net.Cache.RequestCache
struct RequestCache_t1417804387;
// System.Net.Cache.RequestCacheValidator
struct RequestCacheValidator_t1766318073;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Configuration.IConfigurationSystem
struct IConfigurationSystem_t3937028158;
// System.Diagnostics.TraceImplSettings
struct TraceImplSettings_t1186465586;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.ComponentModel.CultureInfoConverter
struct CultureInfoConverter_t2239982248;
// System.Configuration.ElementMap
struct ElementMap_t997038224;
// System.Configuration.ConfigurationPropertyCollection
struct ConfigurationPropertyCollection_t3473514151;
// System.Configuration.ConfigurationElementCollection
struct ConfigurationElementCollection_t1911180302;
// System.Configuration.ElementInformation
struct ElementInformation_t3165583784;
// System.Configuration.Configuration
struct Configuration_t3335372970;
// System.Configuration.ConfigurationLockCollection
struct ConfigurationLockCollection_t1011762925;
// System.Configuration.ConfigurationElement/SaveContext
struct SaveContext_t3996373180;
// System.Configuration.ConfigurationSectionCollection
struct ConfigurationSectionCollection_t4261113299;
// System.Configuration.ConfigurationSectionGroupCollection
struct ConfigurationSectionGroupCollection_t575145286;
// System.Configuration.SectionGroupInfo
struct SectionGroupInfo_t2346323570;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1656058977;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t1975884510;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t2217612696;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t594940201;
// System.Type
struct Type_t;
// System.Configuration.ConfigurationProperty
struct ConfigurationProperty_t2048066811;
// System.Void
struct Void_t1841601450;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.ComponentModel.ISite
struct ISite_t1774720436;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t1298116880;
// System.Configuration.SectionInformation
struct SectionInformation_t2754609709;
// System.Configuration.IConfigurationSectionHandler
struct IConfigurationSectionHandler_t4214479838;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// System.Diagnostics.EventLogImpl
struct EventLogImpl_t3456077238;
// System.Diagnostics.TraceFilter
struct TraceFilter_t87508953;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t1070889667;
// System.Diagnostics.SystemDiagnosticsSection
struct SystemDiagnosticsSection_t2222033606;
// System.Delegate[]
struct DelegateU5BU5D_t1606206610;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t191679357;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Diagnostics.EventLog
struct EventLog_t681067562;
// System.Xml.XmlNode
struct XmlNode_t616554813;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;
// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.Xml.XmlTextWriter
struct XmlTextWriter_t2527250655;

struct Exception_t1927440687_marshaled_pinvoke;
struct Exception_t1927440687_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ARRAYSUBSETENUMERATOR_T764103185_H
#define ARRAYSUBSETENUMERATOR_T764103185_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArraySubsetEnumerator
struct  ArraySubsetEnumerator_t764103185  : public RuntimeObject
{
public:
	// System.Array System.ComponentModel.ArraySubsetEnumerator::array
	RuntimeArray * ___array_0;
	// System.Int32 System.ComponentModel.ArraySubsetEnumerator::total
	int32_t ___total_1;
	// System.Int32 System.ComponentModel.ArraySubsetEnumerator::current
	int32_t ___current_2;

public:
	inline static int32_t get_offset_of_array_0() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t764103185, ___array_0)); }
	inline RuntimeArray * get_array_0() const { return ___array_0; }
	inline RuntimeArray ** get_address_of_array_0() { return &___array_0; }
	inline void set_array_0(RuntimeArray * value)
	{
		___array_0 = value;
		Il2CppCodeGenWriteBarrier((&___array_0), value);
	}

	inline static int32_t get_offset_of_total_1() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t764103185, ___total_1)); }
	inline int32_t get_total_1() const { return ___total_1; }
	inline int32_t* get_address_of_total_1() { return &___total_1; }
	inline void set_total_1(int32_t value)
	{
		___total_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(ArraySubsetEnumerator_t764103185, ___current_2)); }
	inline int32_t get_current_2() const { return ___current_2; }
	inline int32_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(int32_t value)
	{
		___current_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYSUBSETENUMERATOR_T764103185_H
#ifndef REQUESTCACHEPROTOCOL_T2110185277_H
#define REQUESTCACHEPROTOCOL_T2110185277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheProtocol
struct  RequestCacheProtocol_t2110185277  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPROTOCOL_T2110185277_H
#ifndef TRACEIMPLSETTINGS_T1186465586_H
#define TRACEIMPLSETTINGS_T1186465586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceImplSettings
struct  TraceImplSettings_t1186465586  : public RuntimeObject
{
public:
	// System.Boolean System.Diagnostics.TraceImplSettings::AutoFlush
	bool ___AutoFlush_0;
	// System.Int32 System.Diagnostics.TraceImplSettings::IndentSize
	int32_t ___IndentSize_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImplSettings::Listeners
	TraceListenerCollection_t2289511703 * ___Listeners_2;

public:
	inline static int32_t get_offset_of_AutoFlush_0() { return static_cast<int32_t>(offsetof(TraceImplSettings_t1186465586, ___AutoFlush_0)); }
	inline bool get_AutoFlush_0() const { return ___AutoFlush_0; }
	inline bool* get_address_of_AutoFlush_0() { return &___AutoFlush_0; }
	inline void set_AutoFlush_0(bool value)
	{
		___AutoFlush_0 = value;
	}

	inline static int32_t get_offset_of_IndentSize_1() { return static_cast<int32_t>(offsetof(TraceImplSettings_t1186465586, ___IndentSize_1)); }
	inline int32_t get_IndentSize_1() const { return ___IndentSize_1; }
	inline int32_t* get_address_of_IndentSize_1() { return &___IndentSize_1; }
	inline void set_IndentSize_1(int32_t value)
	{
		___IndentSize_1 = value;
	}

	inline static int32_t get_offset_of_Listeners_2() { return static_cast<int32_t>(offsetof(TraceImplSettings_t1186465586, ___Listeners_2)); }
	inline TraceListenerCollection_t2289511703 * get_Listeners_2() const { return ___Listeners_2; }
	inline TraceListenerCollection_t2289511703 ** get_address_of_Listeners_2() { return &___Listeners_2; }
	inline void set_Listeners_2(TraceListenerCollection_t2289511703 * value)
	{
		___Listeners_2 = value;
		Il2CppCodeGenWriteBarrier((&___Listeners_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEIMPLSETTINGS_T1186465586_H
#ifndef PRIVILEGEDCONFIGURATIONMANAGER_T3772865982_H
#define PRIVILEGEDCONFIGURATIONMANAGER_T3772865982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.PrivilegedConfigurationManager
struct  PrivilegedConfigurationManager_t3772865982  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PRIVILEGEDCONFIGURATIONMANAGER_T3772865982_H
#ifndef ATTRIBUTECOLLECTION_T1925812292_H
#define ATTRIBUTECOLLECTION_T1925812292_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection
struct  AttributeCollection_t1925812292  : public RuntimeObject
{
public:
	// System.Attribute[] System.ComponentModel.AttributeCollection::_attributes
	AttributeU5BU5D_t4255796347* ____attributes_2;
	// System.ComponentModel.AttributeCollection/AttributeEntry[] System.ComponentModel.AttributeCollection::_foundAttributeTypes
	AttributeEntryU5BU5D_t2297172821* ____foundAttributeTypes_4;
	// System.Int32 System.ComponentModel.AttributeCollection::_index
	int32_t ____index_5;

public:
	inline static int32_t get_offset_of__attributes_2() { return static_cast<int32_t>(offsetof(AttributeCollection_t1925812292, ____attributes_2)); }
	inline AttributeU5BU5D_t4255796347* get__attributes_2() const { return ____attributes_2; }
	inline AttributeU5BU5D_t4255796347** get_address_of__attributes_2() { return &____attributes_2; }
	inline void set__attributes_2(AttributeU5BU5D_t4255796347* value)
	{
		____attributes_2 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_2), value);
	}

	inline static int32_t get_offset_of__foundAttributeTypes_4() { return static_cast<int32_t>(offsetof(AttributeCollection_t1925812292, ____foundAttributeTypes_4)); }
	inline AttributeEntryU5BU5D_t2297172821* get__foundAttributeTypes_4() const { return ____foundAttributeTypes_4; }
	inline AttributeEntryU5BU5D_t2297172821** get_address_of__foundAttributeTypes_4() { return &____foundAttributeTypes_4; }
	inline void set__foundAttributeTypes_4(AttributeEntryU5BU5D_t2297172821* value)
	{
		____foundAttributeTypes_4 = value;
		Il2CppCodeGenWriteBarrier((&____foundAttributeTypes_4), value);
	}

	inline static int32_t get_offset_of__index_5() { return static_cast<int32_t>(offsetof(AttributeCollection_t1925812292, ____index_5)); }
	inline int32_t get__index_5() const { return ____index_5; }
	inline int32_t* get_address_of__index_5() { return &____index_5; }
	inline void set__index_5(int32_t value)
	{
		____index_5 = value;
	}
};

struct AttributeCollection_t1925812292_StaticFields
{
public:
	// System.ComponentModel.AttributeCollection System.ComponentModel.AttributeCollection::Empty
	AttributeCollection_t1925812292 * ___Empty_0;
	// System.Collections.Hashtable System.ComponentModel.AttributeCollection::_defaultAttributes
	Hashtable_t909839986 * ____defaultAttributes_1;
	// System.Object System.ComponentModel.AttributeCollection::internalSyncObject
	RuntimeObject * ___internalSyncObject_3;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(AttributeCollection_t1925812292_StaticFields, ___Empty_0)); }
	inline AttributeCollection_t1925812292 * get_Empty_0() const { return ___Empty_0; }
	inline AttributeCollection_t1925812292 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(AttributeCollection_t1925812292 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}

	inline static int32_t get_offset_of__defaultAttributes_1() { return static_cast<int32_t>(offsetof(AttributeCollection_t1925812292_StaticFields, ____defaultAttributes_1)); }
	inline Hashtable_t909839986 * get__defaultAttributes_1() const { return ____defaultAttributes_1; }
	inline Hashtable_t909839986 ** get_address_of__defaultAttributes_1() { return &____defaultAttributes_1; }
	inline void set__defaultAttributes_1(Hashtable_t909839986 * value)
	{
		____defaultAttributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____defaultAttributes_1), value);
	}

	inline static int32_t get_offset_of_internalSyncObject_3() { return static_cast<int32_t>(offsetof(AttributeCollection_t1925812292_StaticFields, ___internalSyncObject_3)); }
	inline RuntimeObject * get_internalSyncObject_3() const { return ___internalSyncObject_3; }
	inline RuntimeObject ** get_address_of_internalSyncObject_3() { return &___internalSyncObject_3; }
	inline void set_internalSyncObject_3(RuntimeObject * value)
	{
		___internalSyncObject_3 = value;
		Il2CppCodeGenWriteBarrier((&___internalSyncObject_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTECOLLECTION_T1925812292_H
#ifndef SWITCH_T2611057356_H
#define SWITCH_T2611057356_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.Switch
struct  Switch_t2611057356  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.Switch::description
	String_t* ___description_0;
	// System.String System.Diagnostics.Switch::displayName
	String_t* ___displayName_1;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Switch::switchValueString
	String_t* ___switchValueString_2;
	// System.String System.Diagnostics.Switch::defaultValue
	String_t* ___defaultValue_3;

public:
	inline static int32_t get_offset_of_description_0() { return static_cast<int32_t>(offsetof(Switch_t2611057356, ___description_0)); }
	inline String_t* get_description_0() const { return ___description_0; }
	inline String_t** get_address_of_description_0() { return &___description_0; }
	inline void set_description_0(String_t* value)
	{
		___description_0 = value;
		Il2CppCodeGenWriteBarrier((&___description_0), value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(Switch_t2611057356, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((&___displayName_1), value);
	}

	inline static int32_t get_offset_of_switchValueString_2() { return static_cast<int32_t>(offsetof(Switch_t2611057356, ___switchValueString_2)); }
	inline String_t* get_switchValueString_2() const { return ___switchValueString_2; }
	inline String_t** get_address_of_switchValueString_2() { return &___switchValueString_2; }
	inline void set_switchValueString_2(String_t* value)
	{
		___switchValueString_2 = value;
		Il2CppCodeGenWriteBarrier((&___switchValueString_2), value);
	}

	inline static int32_t get_offset_of_defaultValue_3() { return static_cast<int32_t>(offsetof(Switch_t2611057356, ___defaultValue_3)); }
	inline String_t* get_defaultValue_3() const { return ___defaultValue_3; }
	inline String_t** get_address_of_defaultValue_3() { return &___defaultValue_3; }
	inline void set_defaultValue_3(String_t* value)
	{
		___defaultValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultValue_3), value);
	}
};

struct Switch_t2611057356_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.WeakReference> System.Diagnostics.Switch::switches
	List_1_t446526699 * ___switches_4;
	// System.Int32 System.Diagnostics.Switch::s_LastCollectionCount
	int32_t ___s_LastCollectionCount_5;

public:
	inline static int32_t get_offset_of_switches_4() { return static_cast<int32_t>(offsetof(Switch_t2611057356_StaticFields, ___switches_4)); }
	inline List_1_t446526699 * get_switches_4() const { return ___switches_4; }
	inline List_1_t446526699 ** get_address_of_switches_4() { return &___switches_4; }
	inline void set_switches_4(List_1_t446526699 * value)
	{
		___switches_4 = value;
		Il2CppCodeGenWriteBarrier((&___switches_4), value);
	}

	inline static int32_t get_offset_of_s_LastCollectionCount_5() { return static_cast<int32_t>(offsetof(Switch_t2611057356_StaticFields, ___s_LastCollectionCount_5)); }
	inline int32_t get_s_LastCollectionCount_5() const { return ___s_LastCollectionCount_5; }
	inline int32_t* get_address_of_s_LastCollectionCount_5() { return &___s_LastCollectionCount_5; }
	inline void set_s_LastCollectionCount_5(int32_t value)
	{
		___s_LastCollectionCount_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCH_T2611057356_H
#ifndef REQUESTCACHE_T1417804387_H
#define REQUESTCACHE_T1417804387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCache
struct  RequestCache_t1417804387  : public RuntimeObject
{
public:

public:
};

struct RequestCache_t1417804387_StaticFields
{
public:
	// System.Char[] System.Net.Cache.RequestCache::LineSplits
	CharU5BU5D_t1328083999* ___LineSplits_0;

public:
	inline static int32_t get_offset_of_LineSplits_0() { return static_cast<int32_t>(offsetof(RequestCache_t1417804387_StaticFields, ___LineSplits_0)); }
	inline CharU5BU5D_t1328083999* get_LineSplits_0() const { return ___LineSplits_0; }
	inline CharU5BU5D_t1328083999** get_address_of_LineSplits_0() { return &___LineSplits_0; }
	inline void set_LineSplits_0(CharU5BU5D_t1328083999* value)
	{
		___LineSplits_0 = value;
		Il2CppCodeGenWriteBarrier((&___LineSplits_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHE_T1417804387_H
#ifndef REQUESTCACHEBINDING_T114276176_H
#define REQUESTCACHEBINDING_T114276176_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheBinding
struct  RequestCacheBinding_t114276176  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCache System.Net.Cache.RequestCacheBinding::m_RequestCache
	RequestCache_t1417804387 * ___m_RequestCache_0;
	// System.Net.Cache.RequestCacheValidator System.Net.Cache.RequestCacheBinding::m_CacheValidator
	RequestCacheValidator_t1766318073 * ___m_CacheValidator_1;

public:
	inline static int32_t get_offset_of_m_RequestCache_0() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t114276176, ___m_RequestCache_0)); }
	inline RequestCache_t1417804387 * get_m_RequestCache_0() const { return ___m_RequestCache_0; }
	inline RequestCache_t1417804387 ** get_address_of_m_RequestCache_0() { return &___m_RequestCache_0; }
	inline void set_m_RequestCache_0(RequestCache_t1417804387 * value)
	{
		___m_RequestCache_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_RequestCache_0), value);
	}

	inline static int32_t get_offset_of_m_CacheValidator_1() { return static_cast<int32_t>(offsetof(RequestCacheBinding_t114276176, ___m_CacheValidator_1)); }
	inline RequestCacheValidator_t1766318073 * get_m_CacheValidator_1() const { return ___m_CacheValidator_1; }
	inline RequestCacheValidator_t1766318073 ** get_address_of_m_CacheValidator_1() { return &___m_CacheValidator_1; }
	inline void set_m_CacheValidator_1(RequestCacheValidator_t1766318073 * value)
	{
		___m_CacheValidator_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_CacheValidator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEBINDING_T114276176_H
#ifndef REQUESTCACHEVALIDATOR_T1766318073_H
#define REQUESTCACHEVALIDATOR_T1766318073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheValidator
struct  RequestCacheValidator_t1766318073  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEVALIDATOR_T1766318073_H
#ifndef CONFIGURATIONMANAGERINTERNALFACTORY_T3801022026_H
#define CONFIGURATIONMANAGERINTERNALFACTORY_T3801022026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ConfigurationManagerInternalFactory
struct  ConfigurationManagerInternalFactory_t3801022026  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONMANAGERINTERNALFACTORY_T3801022026_H
#ifndef INSTANCE_T3259527665_H
#define INSTANCE_T3259527665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ConfigurationManagerInternalFactory/Instance
struct  Instance_t3259527665  : public RuntimeObject
{
public:

public:
};

struct Instance_t3259527665_StaticFields
{
public:
	// System.Boolean System.Diagnostics.ConfigurationManagerInternalFactory/Instance::SetConfigurationSystemInProgress
	bool ___SetConfigurationSystemInProgress_0;

public:
	inline static int32_t get_offset_of_SetConfigurationSystemInProgress_0() { return static_cast<int32_t>(offsetof(Instance_t3259527665_StaticFields, ___SetConfigurationSystemInProgress_0)); }
	inline bool get_SetConfigurationSystemInProgress_0() const { return ___SetConfigurationSystemInProgress_0; }
	inline bool* get_address_of_SetConfigurationSystemInProgress_0() { return &___SetConfigurationSystemInProgress_0; }
	inline void set_SetConfigurationSystemInProgress_0(bool value)
	{
		___SetConfigurationSystemInProgress_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCE_T3259527665_H
#ifndef TRACEUTILS_T1563802540_H
#define TRACEUTILS_T1563802540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceUtils
struct  TraceUtils_t1563802540  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEUTILS_T1563802540_H
#ifndef TRACEFILTER_T87508953_H
#define TRACEFILTER_T87508953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceFilter
struct  TraceFilter_t87508953  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.TraceFilter::initializeData
	String_t* ___initializeData_0;

public:
	inline static int32_t get_offset_of_initializeData_0() { return static_cast<int32_t>(offsetof(TraceFilter_t87508953, ___initializeData_0)); }
	inline String_t* get_initializeData_0() const { return ___initializeData_0; }
	inline String_t** get_address_of_initializeData_0() { return &___initializeData_0; }
	inline void set_initializeData_0(String_t* value)
	{
		___initializeData_0 = value;
		Il2CppCodeGenWriteBarrier((&___initializeData_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEFILTER_T87508953_H
#ifndef TRACELISTENERCOLLECTION_T2289511703_H
#define TRACELISTENERCOLLECTION_T2289511703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceListenerCollection
struct  TraceListenerCollection_t2289511703  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Diagnostics.TraceListenerCollection::list
	ArrayList_t4252133567 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(TraceListenerCollection_t2289511703, ___list_0)); }
	inline ArrayList_t4252133567 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4252133567 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4252133567 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACELISTENERCOLLECTION_T2289511703_H
#ifndef DEFAULTCONFIG_T320482295_H
#define DEFAULTCONFIG_T320482295_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.DefaultConfig
struct  DefaultConfig_t320482295  : public RuntimeObject
{
public:

public:
};

struct DefaultConfig_t320482295_StaticFields
{
public:
	// System.Configuration.DefaultConfig System.Configuration.DefaultConfig::instance
	DefaultConfig_t320482295 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(DefaultConfig_t320482295_StaticFields, ___instance_0)); }
	inline DefaultConfig_t320482295 * get_instance_0() const { return ___instance_0; }
	inline DefaultConfig_t320482295 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(DefaultConfig_t320482295 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTCONFIG_T320482295_H
#ifndef CONFIGURATIONSETTINGS_T1600776263_H
#define CONFIGURATIONSETTINGS_T1600776263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSettings
struct  ConfigurationSettings_t1600776263  : public RuntimeObject
{
public:

public:
};

struct ConfigurationSettings_t1600776263_StaticFields
{
public:
	// System.Configuration.IConfigurationSystem System.Configuration.ConfigurationSettings::config
	RuntimeObject* ___config_0;
	// System.Object System.Configuration.ConfigurationSettings::lockobj
	RuntimeObject * ___lockobj_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(ConfigurationSettings_t1600776263_StaticFields, ___config_0)); }
	inline RuntimeObject* get_config_0() const { return ___config_0; }
	inline RuntimeObject** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(RuntimeObject* value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier((&___config_0), value);
	}

	inline static int32_t get_offset_of_lockobj_1() { return static_cast<int32_t>(offsetof(ConfigurationSettings_t1600776263_StaticFields, ___lockobj_1)); }
	inline RuntimeObject * get_lockobj_1() const { return ___lockobj_1; }
	inline RuntimeObject ** get_address_of_lockobj_1() { return &___lockobj_1; }
	inline void set_lockobj_1(RuntimeObject * value)
	{
		___lockobj_1 = value;
		Il2CppCodeGenWriteBarrier((&___lockobj_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSETTINGS_T1600776263_H
#ifndef EVENTLOGINSTALLER_T4025365612_H
#define EVENTLOGINSTALLER_T4025365612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLogInstaller
struct  EventLogInstaller_t4025365612  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOGINSTALLER_T4025365612_H
#ifndef DIAGNOSTICSCONFIGURATIONHANDLER_T610492850_H
#define DIAGNOSTICSCONFIGURATIONHANDLER_T610492850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DiagnosticsConfigurationHandler
struct  DiagnosticsConfigurationHandler_t610492850  : public RuntimeObject
{
public:
	// System.Diagnostics.TraceImplSettings System.Diagnostics.DiagnosticsConfigurationHandler::configValues
	TraceImplSettings_t1186465586 * ___configValues_0;
	// System.Collections.IDictionary System.Diagnostics.DiagnosticsConfigurationHandler::elementHandlers
	RuntimeObject* ___elementHandlers_1;

public:
	inline static int32_t get_offset_of_configValues_0() { return static_cast<int32_t>(offsetof(DiagnosticsConfigurationHandler_t610492850, ___configValues_0)); }
	inline TraceImplSettings_t1186465586 * get_configValues_0() const { return ___configValues_0; }
	inline TraceImplSettings_t1186465586 ** get_address_of_configValues_0() { return &___configValues_0; }
	inline void set_configValues_0(TraceImplSettings_t1186465586 * value)
	{
		___configValues_0 = value;
		Il2CppCodeGenWriteBarrier((&___configValues_0), value);
	}

	inline static int32_t get_offset_of_elementHandlers_1() { return static_cast<int32_t>(offsetof(DiagnosticsConfigurationHandler_t610492850, ___elementHandlers_1)); }
	inline RuntimeObject* get_elementHandlers_1() const { return ___elementHandlers_1; }
	inline RuntimeObject** get_address_of_elementHandlers_1() { return &___elementHandlers_1; }
	inline void set_elementHandlers_1(RuntimeObject* value)
	{
		___elementHandlers_1 = value;
		Il2CppCodeGenWriteBarrier((&___elementHandlers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIAGNOSTICSCONFIGURATIONHANDLER_T610492850_H
#ifndef EVENTLOGIMPL_T3456077238_H
#define EVENTLOGIMPL_T3456077238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLogImpl
struct  EventLogImpl_t3456077238  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOGIMPL_T3456077238_H
#ifndef CULTURECOMPARER_T1185978443_H
#define CULTURECOMPARER_T1185978443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureComparer
struct  CultureComparer_t1185978443  : public RuntimeObject
{
public:
	// System.ComponentModel.CultureInfoConverter System.ComponentModel.CultureInfoConverter/CultureComparer::converter
	CultureInfoConverter_t2239982248 * ___converter_0;

public:
	inline static int32_t get_offset_of_converter_0() { return static_cast<int32_t>(offsetof(CultureComparer_t1185978443, ___converter_0)); }
	inline CultureInfoConverter_t2239982248 * get_converter_0() const { return ___converter_0; }
	inline CultureInfoConverter_t2239982248 ** get_address_of_converter_0() { return &___converter_0; }
	inline void set_converter_0(CultureInfoConverter_t2239982248 * value)
	{
		___converter_0 = value;
		Il2CppCodeGenWriteBarrier((&___converter_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTURECOMPARER_T1185978443_H
#ifndef CONNECTIONMANAGEMENTDATA_T2657447783_H
#define CONNECTIONMANAGEMENTDATA_T2657447783_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementData
struct  ConnectionManagementData_t2657447783  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Net.Configuration.ConnectionManagementData::data
	Hashtable_t909839986 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(ConnectionManagementData_t2657447783, ___data_0)); }
	inline Hashtable_t909839986 * get_data_0() const { return ___data_0; }
	inline Hashtable_t909839986 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(Hashtable_t909839986 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTDATA_T2657447783_H
#ifndef READONLYCOLLECTIONBASE_T22281769_H
#define READONLYCOLLECTIONBASE_T22281769_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ReadOnlyCollectionBase
struct  ReadOnlyCollectionBase_t22281769  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.ReadOnlyCollectionBase::list
	ArrayList_t4252133567 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollectionBase_t22281769, ___list_0)); }
	inline ArrayList_t4252133567 * get_list_0() const { return ___list_0; }
	inline ArrayList_t4252133567 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t4252133567 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTIONBASE_T22281769_H
#ifndef CONFIGURATIONELEMENT_T1776195828_H
#define CONFIGURATIONELEMENT_T1776195828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElement
struct  ConfigurationElement_t1776195828  : public RuntimeObject
{
public:
	// System.String System.Configuration.ConfigurationElement::rawXml
	String_t* ___rawXml_0;
	// System.Boolean System.Configuration.ConfigurationElement::modified
	bool ___modified_1;
	// System.Configuration.ElementMap System.Configuration.ConfigurationElement::map
	ElementMap_t997038224 * ___map_2;
	// System.Configuration.ConfigurationPropertyCollection System.Configuration.ConfigurationElement::keyProps
	ConfigurationPropertyCollection_t3473514151 * ___keyProps_3;
	// System.Configuration.ConfigurationElementCollection System.Configuration.ConfigurationElement::defaultCollection
	ConfigurationElementCollection_t1911180302 * ___defaultCollection_4;
	// System.Boolean System.Configuration.ConfigurationElement::readOnly
	bool ___readOnly_5;
	// System.Configuration.ElementInformation System.Configuration.ConfigurationElement::elementInfo
	ElementInformation_t3165583784 * ___elementInfo_6;
	// System.Configuration.Configuration System.Configuration.ConfigurationElement::_configuration
	Configuration_t3335372970 * ____configuration_7;
	// System.Boolean System.Configuration.ConfigurationElement::elementPresent
	bool ___elementPresent_8;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllAttributesExcept
	ConfigurationLockCollection_t1011762925 * ___lockAllAttributesExcept_9;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAllElementsExcept
	ConfigurationLockCollection_t1011762925 * ___lockAllElementsExcept_10;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockAttributes
	ConfigurationLockCollection_t1011762925 * ___lockAttributes_11;
	// System.Configuration.ConfigurationLockCollection System.Configuration.ConfigurationElement::lockElements
	ConfigurationLockCollection_t1011762925 * ___lockElements_12;
	// System.Boolean System.Configuration.ConfigurationElement::lockItem
	bool ___lockItem_13;
	// System.Configuration.ConfigurationElement/SaveContext System.Configuration.ConfigurationElement::saveContext
	SaveContext_t3996373180 * ___saveContext_14;

public:
	inline static int32_t get_offset_of_rawXml_0() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___rawXml_0)); }
	inline String_t* get_rawXml_0() const { return ___rawXml_0; }
	inline String_t** get_address_of_rawXml_0() { return &___rawXml_0; }
	inline void set_rawXml_0(String_t* value)
	{
		___rawXml_0 = value;
		Il2CppCodeGenWriteBarrier((&___rawXml_0), value);
	}

	inline static int32_t get_offset_of_modified_1() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___modified_1)); }
	inline bool get_modified_1() const { return ___modified_1; }
	inline bool* get_address_of_modified_1() { return &___modified_1; }
	inline void set_modified_1(bool value)
	{
		___modified_1 = value;
	}

	inline static int32_t get_offset_of_map_2() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___map_2)); }
	inline ElementMap_t997038224 * get_map_2() const { return ___map_2; }
	inline ElementMap_t997038224 ** get_address_of_map_2() { return &___map_2; }
	inline void set_map_2(ElementMap_t997038224 * value)
	{
		___map_2 = value;
		Il2CppCodeGenWriteBarrier((&___map_2), value);
	}

	inline static int32_t get_offset_of_keyProps_3() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___keyProps_3)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_keyProps_3() const { return ___keyProps_3; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_keyProps_3() { return &___keyProps_3; }
	inline void set_keyProps_3(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___keyProps_3 = value;
		Il2CppCodeGenWriteBarrier((&___keyProps_3), value);
	}

	inline static int32_t get_offset_of_defaultCollection_4() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___defaultCollection_4)); }
	inline ConfigurationElementCollection_t1911180302 * get_defaultCollection_4() const { return ___defaultCollection_4; }
	inline ConfigurationElementCollection_t1911180302 ** get_address_of_defaultCollection_4() { return &___defaultCollection_4; }
	inline void set_defaultCollection_4(ConfigurationElementCollection_t1911180302 * value)
	{
		___defaultCollection_4 = value;
		Il2CppCodeGenWriteBarrier((&___defaultCollection_4), value);
	}

	inline static int32_t get_offset_of_readOnly_5() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___readOnly_5)); }
	inline bool get_readOnly_5() const { return ___readOnly_5; }
	inline bool* get_address_of_readOnly_5() { return &___readOnly_5; }
	inline void set_readOnly_5(bool value)
	{
		___readOnly_5 = value;
	}

	inline static int32_t get_offset_of_elementInfo_6() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___elementInfo_6)); }
	inline ElementInformation_t3165583784 * get_elementInfo_6() const { return ___elementInfo_6; }
	inline ElementInformation_t3165583784 ** get_address_of_elementInfo_6() { return &___elementInfo_6; }
	inline void set_elementInfo_6(ElementInformation_t3165583784 * value)
	{
		___elementInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&___elementInfo_6), value);
	}

	inline static int32_t get_offset_of__configuration_7() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ____configuration_7)); }
	inline Configuration_t3335372970 * get__configuration_7() const { return ____configuration_7; }
	inline Configuration_t3335372970 ** get_address_of__configuration_7() { return &____configuration_7; }
	inline void set__configuration_7(Configuration_t3335372970 * value)
	{
		____configuration_7 = value;
		Il2CppCodeGenWriteBarrier((&____configuration_7), value);
	}

	inline static int32_t get_offset_of_elementPresent_8() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___elementPresent_8)); }
	inline bool get_elementPresent_8() const { return ___elementPresent_8; }
	inline bool* get_address_of_elementPresent_8() { return &___elementPresent_8; }
	inline void set_elementPresent_8(bool value)
	{
		___elementPresent_8 = value;
	}

	inline static int32_t get_offset_of_lockAllAttributesExcept_9() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___lockAllAttributesExcept_9)); }
	inline ConfigurationLockCollection_t1011762925 * get_lockAllAttributesExcept_9() const { return ___lockAllAttributesExcept_9; }
	inline ConfigurationLockCollection_t1011762925 ** get_address_of_lockAllAttributesExcept_9() { return &___lockAllAttributesExcept_9; }
	inline void set_lockAllAttributesExcept_9(ConfigurationLockCollection_t1011762925 * value)
	{
		___lockAllAttributesExcept_9 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllAttributesExcept_9), value);
	}

	inline static int32_t get_offset_of_lockAllElementsExcept_10() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___lockAllElementsExcept_10)); }
	inline ConfigurationLockCollection_t1011762925 * get_lockAllElementsExcept_10() const { return ___lockAllElementsExcept_10; }
	inline ConfigurationLockCollection_t1011762925 ** get_address_of_lockAllElementsExcept_10() { return &___lockAllElementsExcept_10; }
	inline void set_lockAllElementsExcept_10(ConfigurationLockCollection_t1011762925 * value)
	{
		___lockAllElementsExcept_10 = value;
		Il2CppCodeGenWriteBarrier((&___lockAllElementsExcept_10), value);
	}

	inline static int32_t get_offset_of_lockAttributes_11() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___lockAttributes_11)); }
	inline ConfigurationLockCollection_t1011762925 * get_lockAttributes_11() const { return ___lockAttributes_11; }
	inline ConfigurationLockCollection_t1011762925 ** get_address_of_lockAttributes_11() { return &___lockAttributes_11; }
	inline void set_lockAttributes_11(ConfigurationLockCollection_t1011762925 * value)
	{
		___lockAttributes_11 = value;
		Il2CppCodeGenWriteBarrier((&___lockAttributes_11), value);
	}

	inline static int32_t get_offset_of_lockElements_12() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___lockElements_12)); }
	inline ConfigurationLockCollection_t1011762925 * get_lockElements_12() const { return ___lockElements_12; }
	inline ConfigurationLockCollection_t1011762925 ** get_address_of_lockElements_12() { return &___lockElements_12; }
	inline void set_lockElements_12(ConfigurationLockCollection_t1011762925 * value)
	{
		___lockElements_12 = value;
		Il2CppCodeGenWriteBarrier((&___lockElements_12), value);
	}

	inline static int32_t get_offset_of_lockItem_13() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___lockItem_13)); }
	inline bool get_lockItem_13() const { return ___lockItem_13; }
	inline bool* get_address_of_lockItem_13() { return &___lockItem_13; }
	inline void set_lockItem_13(bool value)
	{
		___lockItem_13 = value;
	}

	inline static int32_t get_offset_of_saveContext_14() { return static_cast<int32_t>(offsetof(ConfigurationElement_t1776195828, ___saveContext_14)); }
	inline SaveContext_t3996373180 * get_saveContext_14() const { return ___saveContext_14; }
	inline SaveContext_t3996373180 ** get_address_of_saveContext_14() { return &___saveContext_14; }
	inline void set_saveContext_14(SaveContext_t3996373180 * value)
	{
		___saveContext_14 = value;
		Il2CppCodeGenWriteBarrier((&___saveContext_14), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENT_T1776195828_H
#ifndef VALUETYPE_T3507792607_H
#define VALUETYPE_T3507792607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3507792607  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3507792607_marshaled_com
{
};
#endif // VALUETYPE_T3507792607_H
#ifndef ATTRIBUTE_T542643598_H
#define ATTRIBUTE_T542643598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t542643598  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T542643598_H
#ifndef CONFIGURATIONSECTIONGROUP_T2230982736_H
#define CONFIGURATIONSECTIONGROUP_T2230982736_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSectionGroup
struct  ConfigurationSectionGroup_t2230982736  : public RuntimeObject
{
public:
	// System.Configuration.ConfigurationSectionCollection System.Configuration.ConfigurationSectionGroup::sections
	ConfigurationSectionCollection_t4261113299 * ___sections_0;
	// System.Configuration.ConfigurationSectionGroupCollection System.Configuration.ConfigurationSectionGroup::groups
	ConfigurationSectionGroupCollection_t575145286 * ___groups_1;
	// System.Configuration.Configuration System.Configuration.ConfigurationSectionGroup::config
	Configuration_t3335372970 * ___config_2;
	// System.Configuration.SectionGroupInfo System.Configuration.ConfigurationSectionGroup::group
	SectionGroupInfo_t2346323570 * ___group_3;
	// System.Boolean System.Configuration.ConfigurationSectionGroup::initialized
	bool ___initialized_4;

public:
	inline static int32_t get_offset_of_sections_0() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2230982736, ___sections_0)); }
	inline ConfigurationSectionCollection_t4261113299 * get_sections_0() const { return ___sections_0; }
	inline ConfigurationSectionCollection_t4261113299 ** get_address_of_sections_0() { return &___sections_0; }
	inline void set_sections_0(ConfigurationSectionCollection_t4261113299 * value)
	{
		___sections_0 = value;
		Il2CppCodeGenWriteBarrier((&___sections_0), value);
	}

	inline static int32_t get_offset_of_groups_1() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2230982736, ___groups_1)); }
	inline ConfigurationSectionGroupCollection_t575145286 * get_groups_1() const { return ___groups_1; }
	inline ConfigurationSectionGroupCollection_t575145286 ** get_address_of_groups_1() { return &___groups_1; }
	inline void set_groups_1(ConfigurationSectionGroupCollection_t575145286 * value)
	{
		___groups_1 = value;
		Il2CppCodeGenWriteBarrier((&___groups_1), value);
	}

	inline static int32_t get_offset_of_config_2() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2230982736, ___config_2)); }
	inline Configuration_t3335372970 * get_config_2() const { return ___config_2; }
	inline Configuration_t3335372970 ** get_address_of_config_2() { return &___config_2; }
	inline void set_config_2(Configuration_t3335372970 * value)
	{
		___config_2 = value;
		Il2CppCodeGenWriteBarrier((&___config_2), value);
	}

	inline static int32_t get_offset_of_group_3() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2230982736, ___group_3)); }
	inline SectionGroupInfo_t2346323570 * get_group_3() const { return ___group_3; }
	inline SectionGroupInfo_t2346323570 ** get_address_of_group_3() { return &___group_3; }
	inline void set_group_3(SectionGroupInfo_t2346323570 * value)
	{
		___group_3 = value;
		Il2CppCodeGenWriteBarrier((&___group_3), value);
	}

	inline static int32_t get_offset_of_initialized_4() { return static_cast<int32_t>(offsetof(ConfigurationSectionGroup_t2230982736, ___initialized_4)); }
	inline bool get_initialized_4() const { return ___initialized_4; }
	inline bool* get_address_of_initialized_4() { return &___initialized_4; }
	inline void set_initialized_4(bool value)
	{
		___initialized_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTIONGROUP_T2230982736_H
#ifndef CULTUREINFOMAPPER_T26447631_H
#define CULTUREINFOMAPPER_T26447631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter/CultureInfoMapper
struct  CultureInfoMapper_t26447631  : public RuntimeObject
{
public:

public:
};

struct CultureInfoMapper_t26447631_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.CultureInfoConverter/CultureInfoMapper::cultureInfoNameMap
	Dictionary_2_t3943999495 * ___cultureInfoNameMap_0;

public:
	inline static int32_t get_offset_of_cultureInfoNameMap_0() { return static_cast<int32_t>(offsetof(CultureInfoMapper_t26447631_StaticFields, ___cultureInfoNameMap_0)); }
	inline Dictionary_2_t3943999495 * get_cultureInfoNameMap_0() const { return ___cultureInfoNameMap_0; }
	inline Dictionary_2_t3943999495 ** get_address_of_cultureInfoNameMap_0() { return &___cultureInfoNameMap_0; }
	inline void set_cultureInfoNameMap_0(Dictionary_2_t3943999495 * value)
	{
		___cultureInfoNameMap_0 = value;
		Il2CppCodeGenWriteBarrier((&___cultureInfoNameMap_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOMAPPER_T26447631_H
#ifndef MARSHALBYREFOBJECT_T1285298191_H
#define MARSHALBYREFOBJECT_T1285298191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MarshalByRefObject
struct  MarshalByRefObject_t1285298191  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::_identity
	ServerIdentity_t1656058977 * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_t1285298191, ____identity_0)); }
	inline ServerIdentity_t1656058977 * get__identity_0() const { return ____identity_0; }
	inline ServerIdentity_t1656058977 ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(ServerIdentity_t1656058977 * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((&____identity_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t1285298191_marshaled_pinvoke
{
	ServerIdentity_t1656058977 * ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t1285298191_marshaled_com
{
	ServerIdentity_t1656058977 * ____identity_0;
};
#endif // MARSHALBYREFOBJECT_T1285298191_H
#ifndef EXCEPTION_T1927440687_H
#define EXCEPTION_T1927440687_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1927440687  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t1927440687 * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t1975884510 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t2217612696* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t169632028* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____innerException_4)); }
	inline Exception_t1927440687 * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t1927440687 ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t1927440687 * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t1975884510 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t1975884510 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t1975884510 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t2217612696* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t2217612696** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t2217612696* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t1927440687, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t169632028* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t169632028** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t169632028* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t1927440687_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t1927440687_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t1927440687_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t1927440687_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t1975884510 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t2217612696* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t1927440687_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t1927440687_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t1975884510 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t2217612696* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T1927440687_H
#ifndef CUSTOMTYPEDESCRIPTOR_T1720788626_H
#define CUSTOMTYPEDESCRIPTOR_T1720788626_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CustomTypeDescriptor
struct  CustomTypeDescriptor_t1720788626  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t1720788626, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CUSTOMTYPEDESCRIPTOR_T1720788626_H
#ifndef DESCRIPTIONATTRIBUTE_T3207779672_H
#define DESCRIPTIONATTRIBUTE_T3207779672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DescriptionAttribute
struct  DescriptionAttribute_t3207779672  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DescriptionAttribute::description
	String_t* ___description_1;

public:
	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3207779672, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((&___description_1), value);
	}
};

struct DescriptionAttribute_t3207779672_StaticFields
{
public:
	// System.ComponentModel.DescriptionAttribute System.ComponentModel.DescriptionAttribute::Default
	DescriptionAttribute_t3207779672 * ___Default_0;

public:
	inline static int32_t get_offset_of_Default_0() { return static_cast<int32_t>(offsetof(DescriptionAttribute_t3207779672_StaticFields, ___Default_0)); }
	inline DescriptionAttribute_t3207779672 * get_Default_0() const { return ___Default_0; }
	inline DescriptionAttribute_t3207779672 ** get_address_of_Default_0() { return &___Default_0; }
	inline void set_Default_0(DescriptionAttribute_t3207779672 * value)
	{
		___Default_0 = value;
		Il2CppCodeGenWriteBarrier((&___Default_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESCRIPTIONATTRIBUTE_T3207779672_H
#ifndef ATTRIBUTEENTRY_T168441916_H
#define ATTRIBUTEENTRY_T168441916_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.AttributeCollection/AttributeEntry
struct  AttributeEntry_t168441916 
{
public:
	// System.Type System.ComponentModel.AttributeCollection/AttributeEntry::type
	Type_t * ___type_0;
	// System.Int32 System.ComponentModel.AttributeCollection/AttributeEntry::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(AttributeEntry_t168441916, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(AttributeEntry_t168441916, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.AttributeCollection/AttributeEntry
struct AttributeEntry_t168441916_marshaled_pinvoke
{
	Type_t * ___type_0;
	int32_t ___index_1;
};
// Native definition for COM marshalling of System.ComponentModel.AttributeCollection/AttributeEntry
struct AttributeEntry_t168441916_marshaled_com
{
	Type_t * ___type_0;
	int32_t ___index_1;
};
#endif // ATTRIBUTEENTRY_T168441916_H
#ifndef VOID_T1841601450_H
#define VOID_T1841601450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1841601450 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1841601450__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1841601450_H
#ifndef SWITCHLEVELATTRIBUTE_T1251804674_H
#define SWITCHLEVELATTRIBUTE_T1251804674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SwitchLevelAttribute
struct  SwitchLevelAttribute_t1251804674  : public Attribute_t542643598
{
public:
	// System.Type System.Diagnostics.SwitchLevelAttribute::type
	Type_t * ___type_0;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(SwitchLevelAttribute_t1251804674, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((&___type_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHLEVELATTRIBUTE_T1251804674_H
#ifndef SWITCHELEMENT_T4125397718_H
#define SWITCHELEMENT_T4125397718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SwitchElement
struct  SwitchElement_t4125397718  : public ConfigurationElement_t1776195828
{
public:
	// System.Collections.Hashtable System.Diagnostics.SwitchElement::_attributes
	Hashtable_t909839986 * ____attributes_18;

public:
	inline static int32_t get_offset_of__attributes_18() { return static_cast<int32_t>(offsetof(SwitchElement_t4125397718, ____attributes_18)); }
	inline Hashtable_t909839986 * get__attributes_18() const { return ____attributes_18; }
	inline Hashtable_t909839986 ** get_address_of__attributes_18() { return &____attributes_18; }
	inline void set__attributes_18(Hashtable_t909839986 * value)
	{
		____attributes_18 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_18), value);
	}
};

struct SwitchElement_t4125397718_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.SwitchElement::_properties
	ConfigurationPropertyCollection_t3473514151 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SwitchElement::_propName
	ConfigurationProperty_t2048066811 * ____propName_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SwitchElement::_propValue
	ConfigurationProperty_t2048066811 * ____propValue_17;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(SwitchElement_t4125397718_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propName_16() { return static_cast<int32_t>(offsetof(SwitchElement_t4125397718_StaticFields, ____propName_16)); }
	inline ConfigurationProperty_t2048066811 * get__propName_16() const { return ____propName_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propName_16() { return &____propName_16; }
	inline void set__propName_16(ConfigurationProperty_t2048066811 * value)
	{
		____propName_16 = value;
		Il2CppCodeGenWriteBarrier((&____propName_16), value);
	}

	inline static int32_t get_offset_of__propValue_17() { return static_cast<int32_t>(offsetof(SwitchElement_t4125397718_StaticFields, ____propValue_17)); }
	inline ConfigurationProperty_t2048066811 * get__propValue_17() const { return ____propValue_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propValue_17() { return &____propValue_17; }
	inline void set__propValue_17(ConfigurationProperty_t2048066811 * value)
	{
		____propValue_17 = value;
		Il2CppCodeGenWriteBarrier((&____propValue_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHELEMENT_T4125397718_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef TYPEDELEMENT_T4034655484_H
#define TYPEDELEMENT_T4034655484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TypedElement
struct  TypedElement_t4034655484  : public ConfigurationElement_t1776195828
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.TypedElement::_properties
	ConfigurationPropertyCollection_t3473514151 * ____properties_17;
	// System.Object System.Diagnostics.TypedElement::_runtimeObject
	RuntimeObject * ____runtimeObject_18;
	// System.Type System.Diagnostics.TypedElement::_baseType
	Type_t * ____baseType_19;

public:
	inline static int32_t get_offset_of__properties_17() { return static_cast<int32_t>(offsetof(TypedElement_t4034655484, ____properties_17)); }
	inline ConfigurationPropertyCollection_t3473514151 * get__properties_17() const { return ____properties_17; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of__properties_17() { return &____properties_17; }
	inline void set__properties_17(ConfigurationPropertyCollection_t3473514151 * value)
	{
		____properties_17 = value;
		Il2CppCodeGenWriteBarrier((&____properties_17), value);
	}

	inline static int32_t get_offset_of__runtimeObject_18() { return static_cast<int32_t>(offsetof(TypedElement_t4034655484, ____runtimeObject_18)); }
	inline RuntimeObject * get__runtimeObject_18() const { return ____runtimeObject_18; }
	inline RuntimeObject ** get_address_of__runtimeObject_18() { return &____runtimeObject_18; }
	inline void set__runtimeObject_18(RuntimeObject * value)
	{
		____runtimeObject_18 = value;
		Il2CppCodeGenWriteBarrier((&____runtimeObject_18), value);
	}

	inline static int32_t get_offset_of__baseType_19() { return static_cast<int32_t>(offsetof(TypedElement_t4034655484, ____baseType_19)); }
	inline Type_t * get__baseType_19() const { return ____baseType_19; }
	inline Type_t ** get_address_of__baseType_19() { return &____baseType_19; }
	inline void set__baseType_19(Type_t * value)
	{
		____baseType_19 = value;
		Il2CppCodeGenWriteBarrier((&____baseType_19), value);
	}
};

struct TypedElement_t4034655484_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Diagnostics.TypedElement::_propTypeName
	ConfigurationProperty_t2048066811 * ____propTypeName_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TypedElement::_propInitData
	ConfigurationProperty_t2048066811 * ____propInitData_16;

public:
	inline static int32_t get_offset_of__propTypeName_15() { return static_cast<int32_t>(offsetof(TypedElement_t4034655484_StaticFields, ____propTypeName_15)); }
	inline ConfigurationProperty_t2048066811 * get__propTypeName_15() const { return ____propTypeName_15; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propTypeName_15() { return &____propTypeName_15; }
	inline void set__propTypeName_15(ConfigurationProperty_t2048066811 * value)
	{
		____propTypeName_15 = value;
		Il2CppCodeGenWriteBarrier((&____propTypeName_15), value);
	}

	inline static int32_t get_offset_of__propInitData_16() { return static_cast<int32_t>(offsetof(TypedElement_t4034655484_StaticFields, ____propInitData_16)); }
	inline ConfigurationProperty_t2048066811 * get__propInitData_16() const { return ____propInitData_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propInitData_16() { return &____propInitData_16; }
	inline void set__propInitData_16(ConfigurationProperty_t2048066811 * value)
	{
		____propInitData_16 = value;
		Il2CppCodeGenWriteBarrier((&____propInitData_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDELEMENT_T4034655484_H
#ifndef TRACESECTION_T1057220406_H
#define TRACESECTION_T1057220406_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceSection
struct  TraceSection_t1057220406  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct TraceSection_t1057220406_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.TraceSection::_properties
	ConfigurationPropertyCollection_t3473514151 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propListeners
	ConfigurationProperty_t2048066811 * ____propListeners_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propAutoFlush
	ConfigurationProperty_t2048066811 * ____propAutoFlush_17;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propIndentSize
	ConfigurationProperty_t2048066811 * ____propIndentSize_18;
	// System.Configuration.ConfigurationProperty System.Diagnostics.TraceSection::_propUseGlobalLock
	ConfigurationProperty_t2048066811 * ____propUseGlobalLock_19;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(TraceSection_t1057220406_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propListeners_16() { return static_cast<int32_t>(offsetof(TraceSection_t1057220406_StaticFields, ____propListeners_16)); }
	inline ConfigurationProperty_t2048066811 * get__propListeners_16() const { return ____propListeners_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propListeners_16() { return &____propListeners_16; }
	inline void set__propListeners_16(ConfigurationProperty_t2048066811 * value)
	{
		____propListeners_16 = value;
		Il2CppCodeGenWriteBarrier((&____propListeners_16), value);
	}

	inline static int32_t get_offset_of__propAutoFlush_17() { return static_cast<int32_t>(offsetof(TraceSection_t1057220406_StaticFields, ____propAutoFlush_17)); }
	inline ConfigurationProperty_t2048066811 * get__propAutoFlush_17() const { return ____propAutoFlush_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propAutoFlush_17() { return &____propAutoFlush_17; }
	inline void set__propAutoFlush_17(ConfigurationProperty_t2048066811 * value)
	{
		____propAutoFlush_17 = value;
		Il2CppCodeGenWriteBarrier((&____propAutoFlush_17), value);
	}

	inline static int32_t get_offset_of__propIndentSize_18() { return static_cast<int32_t>(offsetof(TraceSection_t1057220406_StaticFields, ____propIndentSize_18)); }
	inline ConfigurationProperty_t2048066811 * get__propIndentSize_18() const { return ____propIndentSize_18; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propIndentSize_18() { return &____propIndentSize_18; }
	inline void set__propIndentSize_18(ConfigurationProperty_t2048066811 * value)
	{
		____propIndentSize_18 = value;
		Il2CppCodeGenWriteBarrier((&____propIndentSize_18), value);
	}

	inline static int32_t get_offset_of__propUseGlobalLock_19() { return static_cast<int32_t>(offsetof(TraceSection_t1057220406_StaticFields, ____propUseGlobalLock_19)); }
	inline ConfigurationProperty_t2048066811 * get__propUseGlobalLock_19() const { return ____propUseGlobalLock_19; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propUseGlobalLock_19() { return &____propUseGlobalLock_19; }
	inline void set__propUseGlobalLock_19(ConfigurationProperty_t2048066811 * value)
	{
		____propUseGlobalLock_19 = value;
		Il2CppCodeGenWriteBarrier((&____propUseGlobalLock_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACESECTION_T1057220406_H
#ifndef DEFAULTEVENTATTRIBUTE_T1079704873_H
#define DEFAULTEVENTATTRIBUTE_T1079704873_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultEventAttribute
struct  DefaultEventAttribute_t1079704873  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DefaultEventAttribute::name
	String_t* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t1079704873, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}
};

struct DefaultEventAttribute_t1079704873_StaticFields
{
public:
	// System.ComponentModel.DefaultEventAttribute System.ComponentModel.DefaultEventAttribute::Default
	DefaultEventAttribute_t1079704873 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(DefaultEventAttribute_t1079704873_StaticFields, ___Default_1)); }
	inline DefaultEventAttribute_t1079704873 * get_Default_1() const { return ___Default_1; }
	inline DefaultEventAttribute_t1079704873 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(DefaultEventAttribute_t1079704873 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEVENTATTRIBUTE_T1079704873_H
#ifndef CONFIGURATIONELEMENTCOLLECTION_T1911180302_H
#define CONFIGURATIONELEMENTCOLLECTION_T1911180302_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationElementCollection
struct  ConfigurationElementCollection_t1911180302  : public ConfigurationElement_t1776195828
{
public:
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::list
	ArrayList_t4252133567 * ___list_15;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::removed
	ArrayList_t4252133567 * ___removed_16;
	// System.Collections.ArrayList System.Configuration.ConfigurationElementCollection::inherited
	ArrayList_t4252133567 * ___inherited_17;
	// System.Boolean System.Configuration.ConfigurationElementCollection::emitClear
	bool ___emitClear_18;
	// System.Boolean System.Configuration.ConfigurationElementCollection::modified
	bool ___modified_19;
	// System.Collections.IComparer System.Configuration.ConfigurationElementCollection::comparer
	RuntimeObject* ___comparer_20;
	// System.Int32 System.Configuration.ConfigurationElementCollection::inheritedLimitIndex
	int32_t ___inheritedLimitIndex_21;
	// System.String System.Configuration.ConfigurationElementCollection::addElementName
	String_t* ___addElementName_22;
	// System.String System.Configuration.ConfigurationElementCollection::clearElementName
	String_t* ___clearElementName_23;
	// System.String System.Configuration.ConfigurationElementCollection::removeElementName
	String_t* ___removeElementName_24;

public:
	inline static int32_t get_offset_of_list_15() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t1911180302, ___list_15)); }
	inline ArrayList_t4252133567 * get_list_15() const { return ___list_15; }
	inline ArrayList_t4252133567 ** get_address_of_list_15() { return &___list_15; }
	inline void set_list_15(ArrayList_t4252133567 * value)
	{
		___list_15 = value;
		Il2CppCodeGenWriteBarrier((&___list_15), value);
	}

	inline static int32_t get_offset_of_removed_16() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t1911180302, ___removed_16)); }
	inline ArrayList_t4252133567 * get_removed_16() const { return ___removed_16; }
	inline ArrayList_t4252133567 ** get_address_of_removed_16() { return &___removed_16; }
	inline void set_removed_16(ArrayList_t4252133567 * value)
	{
		___removed_16 = value;
		Il2CppCodeGenWriteBarrier((&___removed_16), value);
	}

	inline static int32_t get_offset_of_inherited_17() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t1911180302, ___inherited_17)); }
	inline ArrayList_t4252133567 * get_inherited_17() const { return ___inherited_17; }
	inline ArrayList_t4252133567 ** get_address_of_inherited_17() { return &___inherited_17; }
	inline void set_inherited_17(ArrayList_t4252133567 * value)
	{
		___inherited_17 = value;
		Il2CppCodeGenWriteBarrier((&___inherited_17), value);
	}

	inline static int32_t get_offset_of_emitClear_18() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t1911180302, ___emitClear_18)); }
	inline bool get_emitClear_18() const { return ___emitClear_18; }
	inline bool* get_address_of_emitClear_18() { return &___emitClear_18; }
	inline void set_emitClear_18(bool value)
	{
		___emitClear_18 = value;
	}

	inline static int32_t get_offset_of_modified_19() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t1911180302, ___modified_19)); }
	inline bool get_modified_19() const { return ___modified_19; }
	inline bool* get_address_of_modified_19() { return &___modified_19; }
	inline void set_modified_19(bool value)
	{
		___modified_19 = value;
	}

	inline static int32_t get_offset_of_comparer_20() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t1911180302, ___comparer_20)); }
	inline RuntimeObject* get_comparer_20() const { return ___comparer_20; }
	inline RuntimeObject** get_address_of_comparer_20() { return &___comparer_20; }
	inline void set_comparer_20(RuntimeObject* value)
	{
		___comparer_20 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_20), value);
	}

	inline static int32_t get_offset_of_inheritedLimitIndex_21() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t1911180302, ___inheritedLimitIndex_21)); }
	inline int32_t get_inheritedLimitIndex_21() const { return ___inheritedLimitIndex_21; }
	inline int32_t* get_address_of_inheritedLimitIndex_21() { return &___inheritedLimitIndex_21; }
	inline void set_inheritedLimitIndex_21(int32_t value)
	{
		___inheritedLimitIndex_21 = value;
	}

	inline static int32_t get_offset_of_addElementName_22() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t1911180302, ___addElementName_22)); }
	inline String_t* get_addElementName_22() const { return ___addElementName_22; }
	inline String_t** get_address_of_addElementName_22() { return &___addElementName_22; }
	inline void set_addElementName_22(String_t* value)
	{
		___addElementName_22 = value;
		Il2CppCodeGenWriteBarrier((&___addElementName_22), value);
	}

	inline static int32_t get_offset_of_clearElementName_23() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t1911180302, ___clearElementName_23)); }
	inline String_t* get_clearElementName_23() const { return ___clearElementName_23; }
	inline String_t** get_address_of_clearElementName_23() { return &___clearElementName_23; }
	inline void set_clearElementName_23(String_t* value)
	{
		___clearElementName_23 = value;
		Il2CppCodeGenWriteBarrier((&___clearElementName_23), value);
	}

	inline static int32_t get_offset_of_removeElementName_24() { return static_cast<int32_t>(offsetof(ConfigurationElementCollection_t1911180302, ___removeElementName_24)); }
	inline String_t* get_removeElementName_24() const { return ___removeElementName_24; }
	inline String_t** get_address_of_removeElementName_24() { return &___removeElementName_24; }
	inline void set_removeElementName_24(String_t* value)
	{
		___removeElementName_24 = value;
		Il2CppCodeGenWriteBarrier((&___removeElementName_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONELEMENTCOLLECTION_T1911180302_H
#ifndef BROWSABLEATTRIBUTE_T2487167291_H
#define BROWSABLEATTRIBUTE_T2487167291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BrowsableAttribute
struct  BrowsableAttribute_t2487167291  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.BrowsableAttribute::browsable
	bool ___browsable_3;

public:
	inline static int32_t get_offset_of_browsable_3() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2487167291, ___browsable_3)); }
	inline bool get_browsable_3() const { return ___browsable_3; }
	inline bool* get_address_of_browsable_3() { return &___browsable_3; }
	inline void set_browsable_3(bool value)
	{
		___browsable_3 = value;
	}
};

struct BrowsableAttribute_t2487167291_StaticFields
{
public:
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Yes
	BrowsableAttribute_t2487167291 * ___Yes_0;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::No
	BrowsableAttribute_t2487167291 * ___No_1;
	// System.ComponentModel.BrowsableAttribute System.ComponentModel.BrowsableAttribute::Default
	BrowsableAttribute_t2487167291 * ___Default_2;

public:
	inline static int32_t get_offset_of_Yes_0() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2487167291_StaticFields, ___Yes_0)); }
	inline BrowsableAttribute_t2487167291 * get_Yes_0() const { return ___Yes_0; }
	inline BrowsableAttribute_t2487167291 ** get_address_of_Yes_0() { return &___Yes_0; }
	inline void set_Yes_0(BrowsableAttribute_t2487167291 * value)
	{
		___Yes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_0), value);
	}

	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2487167291_StaticFields, ___No_1)); }
	inline BrowsableAttribute_t2487167291 * get_No_1() const { return ___No_1; }
	inline BrowsableAttribute_t2487167291 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(BrowsableAttribute_t2487167291 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Default_2() { return static_cast<int32_t>(offsetof(BrowsableAttribute_t2487167291_StaticFields, ___Default_2)); }
	inline BrowsableAttribute_t2487167291 * get_Default_2() const { return ___Default_2; }
	inline BrowsableAttribute_t2487167291 ** get_address_of_Default_2() { return &___Default_2; }
	inline void set_Default_2(BrowsableAttribute_t2487167291 * value)
	{
		___Default_2 = value;
		Il2CppCodeGenWriteBarrier((&___Default_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BROWSABLEATTRIBUTE_T2487167291_H
#ifndef COMPONENTCOLLECTION_T737017907_H
#define COMPONENTCOLLECTION_T737017907_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentCollection
struct  ComponentCollection_t737017907  : public ReadOnlyCollectionBase_t22281769
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCOLLECTION_T737017907_H
#ifndef COMPONENT_T2826673791_H
#define COMPONENT_T2826673791_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Component
struct  Component_t2826673791  : public MarshalByRefObject_t1285298191
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t1298116880 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t2826673791, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((&___site_2), value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t2826673791, ___events_3)); }
	inline EventHandlerList_t1298116880 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t1298116880 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t1298116880 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((&___events_3), value);
	}
};

struct Component_t2826673791_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t2826673791_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((&___EventDisposed_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2826673791_H
#ifndef CONFIGURATIONSECTION_T2600766927_H
#define CONFIGURATIONSECTION_T2600766927_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationSection
struct  ConfigurationSection_t2600766927  : public ConfigurationElement_t1776195828
{
public:
	// System.Configuration.SectionInformation System.Configuration.ConfigurationSection::sectionInformation
	SectionInformation_t2754609709 * ___sectionInformation_15;
	// System.Configuration.IConfigurationSectionHandler System.Configuration.ConfigurationSection::section_handler
	RuntimeObject* ___section_handler_16;
	// System.String System.Configuration.ConfigurationSection::externalDataXml
	String_t* ___externalDataXml_17;
	// System.Object System.Configuration.ConfigurationSection::_configContext
	RuntimeObject * ____configContext_18;

public:
	inline static int32_t get_offset_of_sectionInformation_15() { return static_cast<int32_t>(offsetof(ConfigurationSection_t2600766927, ___sectionInformation_15)); }
	inline SectionInformation_t2754609709 * get_sectionInformation_15() const { return ___sectionInformation_15; }
	inline SectionInformation_t2754609709 ** get_address_of_sectionInformation_15() { return &___sectionInformation_15; }
	inline void set_sectionInformation_15(SectionInformation_t2754609709 * value)
	{
		___sectionInformation_15 = value;
		Il2CppCodeGenWriteBarrier((&___sectionInformation_15), value);
	}

	inline static int32_t get_offset_of_section_handler_16() { return static_cast<int32_t>(offsetof(ConfigurationSection_t2600766927, ___section_handler_16)); }
	inline RuntimeObject* get_section_handler_16() const { return ___section_handler_16; }
	inline RuntimeObject** get_address_of_section_handler_16() { return &___section_handler_16; }
	inline void set_section_handler_16(RuntimeObject* value)
	{
		___section_handler_16 = value;
		Il2CppCodeGenWriteBarrier((&___section_handler_16), value);
	}

	inline static int32_t get_offset_of_externalDataXml_17() { return static_cast<int32_t>(offsetof(ConfigurationSection_t2600766927, ___externalDataXml_17)); }
	inline String_t* get_externalDataXml_17() const { return ___externalDataXml_17; }
	inline String_t** get_address_of_externalDataXml_17() { return &___externalDataXml_17; }
	inline void set_externalDataXml_17(String_t* value)
	{
		___externalDataXml_17 = value;
		Il2CppCodeGenWriteBarrier((&___externalDataXml_17), value);
	}

	inline static int32_t get_offset_of__configContext_18() { return static_cast<int32_t>(offsetof(ConfigurationSection_t2600766927, ____configContext_18)); }
	inline RuntimeObject * get__configContext_18() const { return ____configContext_18; }
	inline RuntimeObject ** get_address_of__configContext_18() { return &____configContext_18; }
	inline void set__configContext_18(RuntimeObject * value)
	{
		____configContext_18 = value;
		Il2CppCodeGenWriteBarrier((&____configContext_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONSECTION_T2600766927_H
#ifndef BOOLEAN_T3825574718_H
#define BOOLEAN_T3825574718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t3825574718 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t3825574718, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t3825574718_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t3825574718_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T3825574718_H
#ifndef INT32_T2071877448_H
#define INT32_T2071877448_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2071877448 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2071877448, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2071877448_H
#ifndef SYSTEMEXCEPTION_T3877406272_H
#define SYSTEMEXCEPTION_T3877406272_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3877406272  : public Exception_t1927440687
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3877406272_H
#ifndef EXCLUDEFROMCODECOVERAGEATTRIBUTE_T1738743065_H
#define EXCLUDEFROMCODECOVERAGEATTRIBUTE_T1738743065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.CodeAnalysis.ExcludeFromCodeCoverageAttribute
struct  ExcludeFromCodeCoverageAttribute_t1738743065  : public Attribute_t542643598
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCLUDEFROMCODECOVERAGEATTRIBUTE_T1738743065_H
#ifndef ENUM_T2459695545_H
#define ENUM_T2459695545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2459695545  : public ValueType_t3507792607
{
public:

public:
};

struct Enum_t2459695545_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t1328083999* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2459695545_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t1328083999* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t1328083999** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t1328083999* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2459695545_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2459695545_marshaled_com
{
};
#endif // ENUM_T2459695545_H
#ifndef NETSECTIONGROUP_T2546413291_H
#define NETSECTIONGROUP_T2546413291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.NetSectionGroup
struct  NetSectionGroup_t2546413291  : public ConfigurationSectionGroup_t2230982736
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NETSECTIONGROUP_T2546413291_H
#ifndef PERFORMANCECOUNTERSELEMENT_T1606215027_H
#define PERFORMANCECOUNTERSELEMENT_T1606215027_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.PerformanceCountersElement
struct  PerformanceCountersElement_t1606215027  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct PerformanceCountersElement_t1606215027_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.PerformanceCountersElement::enabledProp
	ConfigurationProperty_t2048066811 * ___enabledProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.PerformanceCountersElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_16;

public:
	inline static int32_t get_offset_of_enabledProp_15() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t1606215027_StaticFields, ___enabledProp_15)); }
	inline ConfigurationProperty_t2048066811 * get_enabledProp_15() const { return ___enabledProp_15; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_enabledProp_15() { return &___enabledProp_15; }
	inline void set_enabledProp_15(ConfigurationProperty_t2048066811 * value)
	{
		___enabledProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(PerformanceCountersElement_t1606215027_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFORMANCECOUNTERSELEMENT_T1606215027_H
#ifndef MODULEELEMENT_T3031348726_H
#define MODULEELEMENT_T3031348726_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ModuleElement
struct  ModuleElement_t3031348726  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct ModuleElement_t3031348726_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ModuleElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ModuleElement::typeProp
	ConfigurationProperty_t2048066811 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ModuleElement_t3031348726_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(ModuleElement_t3031348726_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MODULEELEMENT_T3031348726_H
#ifndef HTTPWEBREQUESTELEMENT_T2106051069_H
#define HTTPWEBREQUESTELEMENT_T2106051069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.HttpWebRequestElement
struct  HttpWebRequestElement_t2106051069  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct HttpWebRequestElement_t2106051069_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumErrorResponseLengthProp
	ConfigurationProperty_t2048066811 * ___maximumErrorResponseLengthProp_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumResponseHeadersLengthProp
	ConfigurationProperty_t2048066811 * ___maximumResponseHeadersLengthProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::maximumUnauthorizedUploadLengthProp
	ConfigurationProperty_t2048066811 * ___maximumUnauthorizedUploadLengthProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.HttpWebRequestElement::useUnsafeHeaderParsingProp
	ConfigurationProperty_t2048066811 * ___useUnsafeHeaderParsingProp_18;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.HttpWebRequestElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_19;

public:
	inline static int32_t get_offset_of_maximumErrorResponseLengthProp_15() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2106051069_StaticFields, ___maximumErrorResponseLengthProp_15)); }
	inline ConfigurationProperty_t2048066811 * get_maximumErrorResponseLengthProp_15() const { return ___maximumErrorResponseLengthProp_15; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_maximumErrorResponseLengthProp_15() { return &___maximumErrorResponseLengthProp_15; }
	inline void set_maximumErrorResponseLengthProp_15(ConfigurationProperty_t2048066811 * value)
	{
		___maximumErrorResponseLengthProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___maximumErrorResponseLengthProp_15), value);
	}

	inline static int32_t get_offset_of_maximumResponseHeadersLengthProp_16() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2106051069_StaticFields, ___maximumResponseHeadersLengthProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_maximumResponseHeadersLengthProp_16() const { return ___maximumResponseHeadersLengthProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_maximumResponseHeadersLengthProp_16() { return &___maximumResponseHeadersLengthProp_16; }
	inline void set_maximumResponseHeadersLengthProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___maximumResponseHeadersLengthProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___maximumResponseHeadersLengthProp_16), value);
	}

	inline static int32_t get_offset_of_maximumUnauthorizedUploadLengthProp_17() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2106051069_StaticFields, ___maximumUnauthorizedUploadLengthProp_17)); }
	inline ConfigurationProperty_t2048066811 * get_maximumUnauthorizedUploadLengthProp_17() const { return ___maximumUnauthorizedUploadLengthProp_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_maximumUnauthorizedUploadLengthProp_17() { return &___maximumUnauthorizedUploadLengthProp_17; }
	inline void set_maximumUnauthorizedUploadLengthProp_17(ConfigurationProperty_t2048066811 * value)
	{
		___maximumUnauthorizedUploadLengthProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___maximumUnauthorizedUploadLengthProp_17), value);
	}

	inline static int32_t get_offset_of_useUnsafeHeaderParsingProp_18() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2106051069_StaticFields, ___useUnsafeHeaderParsingProp_18)); }
	inline ConfigurationProperty_t2048066811 * get_useUnsafeHeaderParsingProp_18() const { return ___useUnsafeHeaderParsingProp_18; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_useUnsafeHeaderParsingProp_18() { return &___useUnsafeHeaderParsingProp_18; }
	inline void set_useUnsafeHeaderParsingProp_18(ConfigurationProperty_t2048066811 * value)
	{
		___useUnsafeHeaderParsingProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___useUnsafeHeaderParsingProp_18), value);
	}

	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(HttpWebRequestElement_t2106051069_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HTTPWEBREQUESTELEMENT_T2106051069_H
#ifndef WEBREQUESTMODULEELEMENT_T4070853259_H
#define WEBREQUESTMODULEELEMENT_T4070853259_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModuleElement
struct  WebRequestModuleElement_t4070853259  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct WebRequestModuleElement_t4070853259_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModuleElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::prefixProp
	ConfigurationProperty_t2048066811 * ___prefixProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModuleElement::typeProp
	ConfigurationProperty_t2048066811 * ___typeProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t4070853259_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_prefixProp_16() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t4070853259_StaticFields, ___prefixProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_prefixProp_16() const { return ___prefixProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_prefixProp_16() { return &___prefixProp_16; }
	inline void set_prefixProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___prefixProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___prefixProp_16), value);
	}

	inline static int32_t get_offset_of_typeProp_17() { return static_cast<int32_t>(offsetof(WebRequestModuleElement_t4070853259_StaticFields, ___typeProp_17)); }
	inline ConfigurationProperty_t2048066811 * get_typeProp_17() const { return ___typeProp_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_typeProp_17() { return &___typeProp_17; }
	inline void set_typeProp_17(ConfigurationProperty_t2048066811 * value)
	{
		___typeProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULEELEMENT_T4070853259_H
#ifndef PROXYELEMENT_T1414493002_H
#define PROXYELEMENT_T1414493002_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement
struct  ProxyElement_t1414493002  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct ProxyElement_t1414493002_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ProxyElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::autoDetectProp
	ConfigurationProperty_t2048066811 * ___autoDetectProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::bypassOnLocalProp
	ConfigurationProperty_t2048066811 * ___bypassOnLocalProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::proxyAddressProp
	ConfigurationProperty_t2048066811 * ___proxyAddressProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::scriptLocationProp
	ConfigurationProperty_t2048066811 * ___scriptLocationProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ProxyElement::useSystemDefaultProp
	ConfigurationProperty_t2048066811 * ___useSystemDefaultProp_20;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ProxyElement_t1414493002_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_autoDetectProp_16() { return static_cast<int32_t>(offsetof(ProxyElement_t1414493002_StaticFields, ___autoDetectProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_autoDetectProp_16() const { return ___autoDetectProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_autoDetectProp_16() { return &___autoDetectProp_16; }
	inline void set_autoDetectProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___autoDetectProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___autoDetectProp_16), value);
	}

	inline static int32_t get_offset_of_bypassOnLocalProp_17() { return static_cast<int32_t>(offsetof(ProxyElement_t1414493002_StaticFields, ___bypassOnLocalProp_17)); }
	inline ConfigurationProperty_t2048066811 * get_bypassOnLocalProp_17() const { return ___bypassOnLocalProp_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_bypassOnLocalProp_17() { return &___bypassOnLocalProp_17; }
	inline void set_bypassOnLocalProp_17(ConfigurationProperty_t2048066811 * value)
	{
		___bypassOnLocalProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___bypassOnLocalProp_17), value);
	}

	inline static int32_t get_offset_of_proxyAddressProp_18() { return static_cast<int32_t>(offsetof(ProxyElement_t1414493002_StaticFields, ___proxyAddressProp_18)); }
	inline ConfigurationProperty_t2048066811 * get_proxyAddressProp_18() const { return ___proxyAddressProp_18; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_proxyAddressProp_18() { return &___proxyAddressProp_18; }
	inline void set_proxyAddressProp_18(ConfigurationProperty_t2048066811 * value)
	{
		___proxyAddressProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___proxyAddressProp_18), value);
	}

	inline static int32_t get_offset_of_scriptLocationProp_19() { return static_cast<int32_t>(offsetof(ProxyElement_t1414493002_StaticFields, ___scriptLocationProp_19)); }
	inline ConfigurationProperty_t2048066811 * get_scriptLocationProp_19() const { return ___scriptLocationProp_19; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_scriptLocationProp_19() { return &___scriptLocationProp_19; }
	inline void set_scriptLocationProp_19(ConfigurationProperty_t2048066811 * value)
	{
		___scriptLocationProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___scriptLocationProp_19), value);
	}

	inline static int32_t get_offset_of_useSystemDefaultProp_20() { return static_cast<int32_t>(offsetof(ProxyElement_t1414493002_StaticFields, ___useSystemDefaultProp_20)); }
	inline ConfigurationProperty_t2048066811 * get_useSystemDefaultProp_20() const { return ___useSystemDefaultProp_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_useSystemDefaultProp_20() { return &___useSystemDefaultProp_20; }
	inline void set_useSystemDefaultProp_20(ConfigurationProperty_t2048066811 * value)
	{
		___useSystemDefaultProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___useSystemDefaultProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYELEMENT_T1414493002_H
#ifndef SOCKETELEMENT_T792962077_H
#define SOCKETELEMENT_T792962077_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SocketElement
struct  SocketElement_t792962077  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct SocketElement_t792962077_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SocketElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForAcceptProp
	ConfigurationProperty_t2048066811 * ___alwaysUseCompletionPortsForAcceptProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SocketElement::alwaysUseCompletionPortsForConnectProp
	ConfigurationProperty_t2048066811 * ___alwaysUseCompletionPortsForConnectProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(SocketElement_t792962077_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForAcceptProp_16() { return static_cast<int32_t>(offsetof(SocketElement_t792962077_StaticFields, ___alwaysUseCompletionPortsForAcceptProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_alwaysUseCompletionPortsForAcceptProp_16() const { return ___alwaysUseCompletionPortsForAcceptProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_alwaysUseCompletionPortsForAcceptProp_16() { return &___alwaysUseCompletionPortsForAcceptProp_16; }
	inline void set_alwaysUseCompletionPortsForAcceptProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___alwaysUseCompletionPortsForAcceptProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseCompletionPortsForAcceptProp_16), value);
	}

	inline static int32_t get_offset_of_alwaysUseCompletionPortsForConnectProp_17() { return static_cast<int32_t>(offsetof(SocketElement_t792962077_StaticFields, ___alwaysUseCompletionPortsForConnectProp_17)); }
	inline ConfigurationProperty_t2048066811 * get_alwaysUseCompletionPortsForConnectProp_17() const { return ___alwaysUseCompletionPortsForConnectProp_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_alwaysUseCompletionPortsForConnectProp_17() { return &___alwaysUseCompletionPortsForConnectProp_17; }
	inline void set_alwaysUseCompletionPortsForConnectProp_17(ConfigurationProperty_t2048066811 * value)
	{
		___alwaysUseCompletionPortsForConnectProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___alwaysUseCompletionPortsForConnectProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOCKETELEMENT_T792962077_H
#ifndef WEBPROXYSCRIPTELEMENT_T1017943775_H
#define WEBPROXYSCRIPTELEMENT_T1017943775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebProxyScriptElement
struct  WebProxyScriptElement_t1017943775  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct WebProxyScriptElement_t1017943775_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebProxyScriptElement::downloadTimeoutProp
	ConfigurationProperty_t2048066811 * ___downloadTimeoutProp_15;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebProxyScriptElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_16;

public:
	inline static int32_t get_offset_of_downloadTimeoutProp_15() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t1017943775_StaticFields, ___downloadTimeoutProp_15)); }
	inline ConfigurationProperty_t2048066811 * get_downloadTimeoutProp_15() const { return ___downloadTimeoutProp_15; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_downloadTimeoutProp_15() { return &___downloadTimeoutProp_15; }
	inline void set_downloadTimeoutProp_15(ConfigurationProperty_t2048066811 * value)
	{
		___downloadTimeoutProp_15 = value;
		Il2CppCodeGenWriteBarrier((&___downloadTimeoutProp_15), value);
	}

	inline static int32_t get_offset_of_properties_16() { return static_cast<int32_t>(offsetof(WebProxyScriptElement_t1017943775_StaticFields, ___properties_16)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_16() const { return ___properties_16; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_16() { return &___properties_16; }
	inline void set_properties_16(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_16 = value;
		Il2CppCodeGenWriteBarrier((&___properties_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBPROXYSCRIPTELEMENT_T1017943775_H
#ifndef SERVICEPOINTMANAGERELEMENT_T1132364388_H
#define SERVICEPOINTMANAGERELEMENT_T1132364388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ServicePointManagerElement
struct  ServicePointManagerElement_t1132364388  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct ServicePointManagerElement_t1132364388_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ServicePointManagerElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateNameProp
	ConfigurationProperty_t2048066811 * ___checkCertificateNameProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::checkCertificateRevocationListProp
	ConfigurationProperty_t2048066811 * ___checkCertificateRevocationListProp_17;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::dnsRefreshTimeoutProp
	ConfigurationProperty_t2048066811 * ___dnsRefreshTimeoutProp_18;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::enableDnsRoundRobinProp
	ConfigurationProperty_t2048066811 * ___enableDnsRoundRobinProp_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::expect100ContinueProp
	ConfigurationProperty_t2048066811 * ___expect100ContinueProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ServicePointManagerElement::useNagleAlgorithmProp
	ConfigurationProperty_t2048066811 * ___useNagleAlgorithmProp_21;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t1132364388_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_checkCertificateNameProp_16() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t1132364388_StaticFields, ___checkCertificateNameProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_checkCertificateNameProp_16() const { return ___checkCertificateNameProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_checkCertificateNameProp_16() { return &___checkCertificateNameProp_16; }
	inline void set_checkCertificateNameProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___checkCertificateNameProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___checkCertificateNameProp_16), value);
	}

	inline static int32_t get_offset_of_checkCertificateRevocationListProp_17() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t1132364388_StaticFields, ___checkCertificateRevocationListProp_17)); }
	inline ConfigurationProperty_t2048066811 * get_checkCertificateRevocationListProp_17() const { return ___checkCertificateRevocationListProp_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_checkCertificateRevocationListProp_17() { return &___checkCertificateRevocationListProp_17; }
	inline void set_checkCertificateRevocationListProp_17(ConfigurationProperty_t2048066811 * value)
	{
		___checkCertificateRevocationListProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___checkCertificateRevocationListProp_17), value);
	}

	inline static int32_t get_offset_of_dnsRefreshTimeoutProp_18() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t1132364388_StaticFields, ___dnsRefreshTimeoutProp_18)); }
	inline ConfigurationProperty_t2048066811 * get_dnsRefreshTimeoutProp_18() const { return ___dnsRefreshTimeoutProp_18; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_dnsRefreshTimeoutProp_18() { return &___dnsRefreshTimeoutProp_18; }
	inline void set_dnsRefreshTimeoutProp_18(ConfigurationProperty_t2048066811 * value)
	{
		___dnsRefreshTimeoutProp_18 = value;
		Il2CppCodeGenWriteBarrier((&___dnsRefreshTimeoutProp_18), value);
	}

	inline static int32_t get_offset_of_enableDnsRoundRobinProp_19() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t1132364388_StaticFields, ___enableDnsRoundRobinProp_19)); }
	inline ConfigurationProperty_t2048066811 * get_enableDnsRoundRobinProp_19() const { return ___enableDnsRoundRobinProp_19; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_enableDnsRoundRobinProp_19() { return &___enableDnsRoundRobinProp_19; }
	inline void set_enableDnsRoundRobinProp_19(ConfigurationProperty_t2048066811 * value)
	{
		___enableDnsRoundRobinProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___enableDnsRoundRobinProp_19), value);
	}

	inline static int32_t get_offset_of_expect100ContinueProp_20() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t1132364388_StaticFields, ___expect100ContinueProp_20)); }
	inline ConfigurationProperty_t2048066811 * get_expect100ContinueProp_20() const { return ___expect100ContinueProp_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_expect100ContinueProp_20() { return &___expect100ContinueProp_20; }
	inline void set_expect100ContinueProp_20(ConfigurationProperty_t2048066811 * value)
	{
		___expect100ContinueProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___expect100ContinueProp_20), value);
	}

	inline static int32_t get_offset_of_useNagleAlgorithmProp_21() { return static_cast<int32_t>(offsetof(ServicePointManagerElement_t1132364388_StaticFields, ___useNagleAlgorithmProp_21)); }
	inline ConfigurationProperty_t2048066811 * get_useNagleAlgorithmProp_21() const { return ___useNagleAlgorithmProp_21; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_useNagleAlgorithmProp_21() { return &___useNagleAlgorithmProp_21; }
	inline void set_useNagleAlgorithmProp_21(ConfigurationProperty_t2048066811 * value)
	{
		___useNagleAlgorithmProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___useNagleAlgorithmProp_21), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVICEPOINTMANAGERELEMENT_T1132364388_H
#ifndef BOOLEANSWITCH_T1490001656_H
#define BOOLEANSWITCH_T1490001656_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.BooleanSwitch
struct  BooleanSwitch_t1490001656  : public Switch_t2611057356
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANSWITCH_T1490001656_H
#ifndef ASSERTSECTION_T2202838995_H
#define ASSERTSECTION_T2202838995_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.AssertSection
struct  AssertSection_t2202838995  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct AssertSection_t2202838995_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.AssertSection::_properties
	ConfigurationPropertyCollection_t3473514151 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.AssertSection::_propAssertUIEnabled
	ConfigurationProperty_t2048066811 * ____propAssertUIEnabled_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.AssertSection::_propLogFile
	ConfigurationProperty_t2048066811 * ____propLogFile_17;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(AssertSection_t2202838995_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propAssertUIEnabled_16() { return static_cast<int32_t>(offsetof(AssertSection_t2202838995_StaticFields, ____propAssertUIEnabled_16)); }
	inline ConfigurationProperty_t2048066811 * get__propAssertUIEnabled_16() const { return ____propAssertUIEnabled_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propAssertUIEnabled_16() { return &____propAssertUIEnabled_16; }
	inline void set__propAssertUIEnabled_16(ConfigurationProperty_t2048066811 * value)
	{
		____propAssertUIEnabled_16 = value;
		Il2CppCodeGenWriteBarrier((&____propAssertUIEnabled_16), value);
	}

	inline static int32_t get_offset_of__propLogFile_17() { return static_cast<int32_t>(offsetof(AssertSection_t2202838995_StaticFields, ____propLogFile_17)); }
	inline ConfigurationProperty_t2048066811 * get__propLogFile_17() const { return ____propLogFile_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propLogFile_17() { return &____propLogFile_17; }
	inline void set__propLogFile_17(ConfigurationProperty_t2048066811 * value)
	{
		____propLogFile_17 = value;
		Il2CppCodeGenWriteBarrier((&____propLogFile_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSERTSECTION_T2202838995_H
#ifndef PERFCOUNTERSECTION_T3986468662_H
#define PERFCOUNTERSECTION_T3986468662_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.PerfCounterSection
struct  PerfCounterSection_t3986468662  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct PerfCounterSection_t3986468662_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.PerfCounterSection::_properties
	ConfigurationPropertyCollection_t3473514151 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.PerfCounterSection::_propFileMappingSize
	ConfigurationProperty_t2048066811 * ____propFileMappingSize_16;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(PerfCounterSection_t3986468662_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propFileMappingSize_16() { return static_cast<int32_t>(offsetof(PerfCounterSection_t3986468662_StaticFields, ____propFileMappingSize_16)); }
	inline ConfigurationProperty_t2048066811 * get__propFileMappingSize_16() const { return ____propFileMappingSize_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propFileMappingSize_16() { return &____propFileMappingSize_16; }
	inline void set__propFileMappingSize_16(ConfigurationProperty_t2048066811 * value)
	{
		____propFileMappingSize_16 = value;
		Il2CppCodeGenWriteBarrier((&____propFileMappingSize_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERFCOUNTERSECTION_T3986468662_H
#ifndef BYPASSELEMENT_T4253212366_H
#define BYPASSELEMENT_T4253212366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElement
struct  BypassElement_t4253212366  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct BypassElement_t4253212366_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.BypassElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.BypassElement::addressProp
	ConfigurationProperty_t2048066811 * ___addressProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(BypassElement_t4253212366_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_addressProp_16() { return static_cast<int32_t>(offsetof(BypassElement_t4253212366_StaticFields, ___addressProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_addressProp_16() const { return ___addressProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_addressProp_16() { return &___addressProp_16; }
	inline void set_addressProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___addressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENT_T4253212366_H
#ifndef SOURCEELEMENT_T2880823865_H
#define SOURCEELEMENT_T2880823865_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SourceElement
struct  SourceElement_t2880823865  : public ConfigurationElement_t1776195828
{
public:
	// System.Collections.Hashtable System.Diagnostics.SourceElement::_attributes
	Hashtable_t909839986 * ____attributes_21;

public:
	inline static int32_t get_offset_of__attributes_21() { return static_cast<int32_t>(offsetof(SourceElement_t2880823865, ____attributes_21)); }
	inline Hashtable_t909839986 * get__attributes_21() const { return ____attributes_21; }
	inline Hashtable_t909839986 ** get_address_of__attributes_21() { return &____attributes_21; }
	inline void set__attributes_21(Hashtable_t909839986 * value)
	{
		____attributes_21 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_21), value);
	}
};

struct SourceElement_t2880823865_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.SourceElement::_properties
	ConfigurationPropertyCollection_t3473514151 * ____properties_15;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propName
	ConfigurationProperty_t2048066811 * ____propName_16;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propSwitchName
	ConfigurationProperty_t2048066811 * ____propSwitchName_17;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propSwitchValue
	ConfigurationProperty_t2048066811 * ____propSwitchValue_18;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propSwitchType
	ConfigurationProperty_t2048066811 * ____propSwitchType_19;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SourceElement::_propListeners
	ConfigurationProperty_t2048066811 * ____propListeners_20;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(SourceElement_t2880823865_StaticFields, ____properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get__properties_15() const { return ____properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier((&____properties_15), value);
	}

	inline static int32_t get_offset_of__propName_16() { return static_cast<int32_t>(offsetof(SourceElement_t2880823865_StaticFields, ____propName_16)); }
	inline ConfigurationProperty_t2048066811 * get__propName_16() const { return ____propName_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propName_16() { return &____propName_16; }
	inline void set__propName_16(ConfigurationProperty_t2048066811 * value)
	{
		____propName_16 = value;
		Il2CppCodeGenWriteBarrier((&____propName_16), value);
	}

	inline static int32_t get_offset_of__propSwitchName_17() { return static_cast<int32_t>(offsetof(SourceElement_t2880823865_StaticFields, ____propSwitchName_17)); }
	inline ConfigurationProperty_t2048066811 * get__propSwitchName_17() const { return ____propSwitchName_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propSwitchName_17() { return &____propSwitchName_17; }
	inline void set__propSwitchName_17(ConfigurationProperty_t2048066811 * value)
	{
		____propSwitchName_17 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitchName_17), value);
	}

	inline static int32_t get_offset_of__propSwitchValue_18() { return static_cast<int32_t>(offsetof(SourceElement_t2880823865_StaticFields, ____propSwitchValue_18)); }
	inline ConfigurationProperty_t2048066811 * get__propSwitchValue_18() const { return ____propSwitchValue_18; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propSwitchValue_18() { return &____propSwitchValue_18; }
	inline void set__propSwitchValue_18(ConfigurationProperty_t2048066811 * value)
	{
		____propSwitchValue_18 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitchValue_18), value);
	}

	inline static int32_t get_offset_of__propSwitchType_19() { return static_cast<int32_t>(offsetof(SourceElement_t2880823865_StaticFields, ____propSwitchType_19)); }
	inline ConfigurationProperty_t2048066811 * get__propSwitchType_19() const { return ____propSwitchType_19; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propSwitchType_19() { return &____propSwitchType_19; }
	inline void set__propSwitchType_19(ConfigurationProperty_t2048066811 * value)
	{
		____propSwitchType_19 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitchType_19), value);
	}

	inline static int32_t get_offset_of__propListeners_20() { return static_cast<int32_t>(offsetof(SourceElement_t2880823865_StaticFields, ____propListeners_20)); }
	inline ConfigurationProperty_t2048066811 * get__propListeners_20() const { return ____propListeners_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propListeners_20() { return &____propListeners_20; }
	inline void set__propListeners_20(ConfigurationProperty_t2048066811 * value)
	{
		____propListeners_20 = value;
		Il2CppCodeGenWriteBarrier((&____propListeners_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEELEMENT_T2880823865_H
#ifndef CONNECTIONMANAGEMENTELEMENT_T1734801665_H
#define CONNECTIONMANAGEMENTELEMENT_T1734801665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElement
struct  ConnectionManagementElement_t1734801665  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct ConnectionManagementElement_t1734801665_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::addressProp
	ConfigurationProperty_t2048066811 * ___addressProp_16;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementElement::maxConnectionProp
	ConfigurationProperty_t2048066811 * ___maxConnectionProp_17;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t1734801665_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_addressProp_16() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t1734801665_StaticFields, ___addressProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_addressProp_16() const { return ___addressProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_addressProp_16() { return &___addressProp_16; }
	inline void set_addressProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___addressProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___addressProp_16), value);
	}

	inline static int32_t get_offset_of_maxConnectionProp_17() { return static_cast<int32_t>(offsetof(ConnectionManagementElement_t1734801665_StaticFields, ___maxConnectionProp_17)); }
	inline ConfigurationProperty_t2048066811 * get_maxConnectionProp_17() const { return ___maxConnectionProp_17; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_maxConnectionProp_17() { return &___maxConnectionProp_17; }
	inline void set_maxConnectionProp_17(ConfigurationProperty_t2048066811 * value)
	{
		___maxConnectionProp_17 = value;
		Il2CppCodeGenWriteBarrier((&___maxConnectionProp_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENT_T1734801665_H
#ifndef AUTHENTICATIONMODULEELEMENT_T1426459758_H
#define AUTHENTICATIONMODULEELEMENT_T1426459758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElement
struct  AuthenticationModuleElement_t1426459758  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct AuthenticationModuleElement_t1426459758_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModuleElement::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModuleElement::typeProp
	ConfigurationProperty_t2048066811 * ___typeProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t1426459758_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_typeProp_16() { return static_cast<int32_t>(offsetof(AuthenticationModuleElement_t1426459758_StaticFields, ___typeProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_typeProp_16() const { return ___typeProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_typeProp_16() { return &___typeProp_16; }
	inline void set_typeProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___typeProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___typeProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENT_T1426459758_H
#ifndef IPV6ELEMENT_T977943121_H
#define IPV6ELEMENT_T977943121_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.Ipv6Element
struct  Ipv6Element_t977943121  : public ConfigurationElement_t1776195828
{
public:

public:
};

struct Ipv6Element_t977943121_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.Ipv6Element::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_15;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.Ipv6Element::enabledProp
	ConfigurationProperty_t2048066811 * ___enabledProp_16;

public:
	inline static int32_t get_offset_of_properties_15() { return static_cast<int32_t>(offsetof(Ipv6Element_t977943121_StaticFields, ___properties_15)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_15() const { return ___properties_15; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_15() { return &___properties_15; }
	inline void set_properties_15(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_15 = value;
		Il2CppCodeGenWriteBarrier((&___properties_15), value);
	}

	inline static int32_t get_offset_of_enabledProp_16() { return static_cast<int32_t>(offsetof(Ipv6Element_t977943121_StaticFields, ___enabledProp_16)); }
	inline ConfigurationProperty_t2048066811 * get_enabledProp_16() const { return ___enabledProp_16; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_enabledProp_16() { return &___enabledProp_16; }
	inline void set_enabledProp_16(ConfigurationProperty_t2048066811 * value)
	{
		___enabledProp_16 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IPV6ELEMENT_T977943121_H
#ifndef AUTODETECTVALUES_T735769531_H
#define AUTODETECTVALUES_T735769531_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/AutoDetectValues
struct  AutoDetectValues_t735769531 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/AutoDetectValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AutoDetectValues_t735769531, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTODETECTVALUES_T735769531_H
#ifndef USESYSTEMDEFAULTVALUES_T1457033350_H
#define USESYSTEMDEFAULTVALUES_T1457033350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/UseSystemDefaultValues
struct  UseSystemDefaultValues_t1457033350 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/UseSystemDefaultValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UseSystemDefaultValues_t1457033350, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USESYSTEMDEFAULTVALUES_T1457033350_H
#ifndef TRACEOPTIONS_T4183547961_H
#define TRACEOPTIONS_T4183547961_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceOptions
struct  TraceOptions_t4183547961 
{
public:
	// System.Int32 System.Diagnostics.TraceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TraceOptions_t4183547961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEOPTIONS_T4183547961_H
#ifndef DELEGATE_T3022476291_H
#define DELEGATE_T3022476291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t3022476291  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1572802995 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___data_9)); }
	inline DelegateData_t1572802995 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1572802995 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1572802995 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t3022476291, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t3022476291_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1572802995 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t3022476291_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1572802995 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T3022476291_H
#ifndef SETTINGSSECTION_T2300716058_H
#define SETTINGSSECTION_T2300716058_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.SettingsSection
struct  SettingsSection_t2300716058  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct SettingsSection_t2300716058_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.SettingsSection::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::httpWebRequestProp
	ConfigurationProperty_t2048066811 * ___httpWebRequestProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::ipv6Prop
	ConfigurationProperty_t2048066811 * ___ipv6Prop_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::performanceCountersProp
	ConfigurationProperty_t2048066811 * ___performanceCountersProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::servicePointManagerProp
	ConfigurationProperty_t2048066811 * ___servicePointManagerProp_23;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::webProxyScriptProp
	ConfigurationProperty_t2048066811 * ___webProxyScriptProp_24;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.SettingsSection::socketProp
	ConfigurationProperty_t2048066811 * ___socketProp_25;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(SettingsSection_t2300716058_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_httpWebRequestProp_20() { return static_cast<int32_t>(offsetof(SettingsSection_t2300716058_StaticFields, ___httpWebRequestProp_20)); }
	inline ConfigurationProperty_t2048066811 * get_httpWebRequestProp_20() const { return ___httpWebRequestProp_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_httpWebRequestProp_20() { return &___httpWebRequestProp_20; }
	inline void set_httpWebRequestProp_20(ConfigurationProperty_t2048066811 * value)
	{
		___httpWebRequestProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___httpWebRequestProp_20), value);
	}

	inline static int32_t get_offset_of_ipv6Prop_21() { return static_cast<int32_t>(offsetof(SettingsSection_t2300716058_StaticFields, ___ipv6Prop_21)); }
	inline ConfigurationProperty_t2048066811 * get_ipv6Prop_21() const { return ___ipv6Prop_21; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_ipv6Prop_21() { return &___ipv6Prop_21; }
	inline void set_ipv6Prop_21(ConfigurationProperty_t2048066811 * value)
	{
		___ipv6Prop_21 = value;
		Il2CppCodeGenWriteBarrier((&___ipv6Prop_21), value);
	}

	inline static int32_t get_offset_of_performanceCountersProp_22() { return static_cast<int32_t>(offsetof(SettingsSection_t2300716058_StaticFields, ___performanceCountersProp_22)); }
	inline ConfigurationProperty_t2048066811 * get_performanceCountersProp_22() const { return ___performanceCountersProp_22; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_performanceCountersProp_22() { return &___performanceCountersProp_22; }
	inline void set_performanceCountersProp_22(ConfigurationProperty_t2048066811 * value)
	{
		___performanceCountersProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___performanceCountersProp_22), value);
	}

	inline static int32_t get_offset_of_servicePointManagerProp_23() { return static_cast<int32_t>(offsetof(SettingsSection_t2300716058_StaticFields, ___servicePointManagerProp_23)); }
	inline ConfigurationProperty_t2048066811 * get_servicePointManagerProp_23() const { return ___servicePointManagerProp_23; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_servicePointManagerProp_23() { return &___servicePointManagerProp_23; }
	inline void set_servicePointManagerProp_23(ConfigurationProperty_t2048066811 * value)
	{
		___servicePointManagerProp_23 = value;
		Il2CppCodeGenWriteBarrier((&___servicePointManagerProp_23), value);
	}

	inline static int32_t get_offset_of_webProxyScriptProp_24() { return static_cast<int32_t>(offsetof(SettingsSection_t2300716058_StaticFields, ___webProxyScriptProp_24)); }
	inline ConfigurationProperty_t2048066811 * get_webProxyScriptProp_24() const { return ___webProxyScriptProp_24; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_webProxyScriptProp_24() { return &___webProxyScriptProp_24; }
	inline void set_webProxyScriptProp_24(ConfigurationProperty_t2048066811 * value)
	{
		___webProxyScriptProp_24 = value;
		Il2CppCodeGenWriteBarrier((&___webProxyScriptProp_24), value);
	}

	inline static int32_t get_offset_of_socketProp_25() { return static_cast<int32_t>(offsetof(SettingsSection_t2300716058_StaticFields, ___socketProp_25)); }
	inline ConfigurationProperty_t2048066811 * get_socketProp_25() const { return ___socketProp_25; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_socketProp_25() { return &___socketProp_25; }
	inline void set_socketProp_25(ConfigurationProperty_t2048066811 * value)
	{
		___socketProp_25 = value;
		Il2CppCodeGenWriteBarrier((&___socketProp_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETTINGSSECTION_T2300716058_H
#ifndef CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3244012643_H
#define CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3244012643_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementElementCollection
struct  ConnectionManagementElementCollection_t3244012643  : public ConfigurationElementCollection_t1911180302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTELEMENTCOLLECTION_T3244012643_H
#ifndef BYPASSELEMENTCOLLECTION_T3411512674_H
#define BYPASSELEMENTCOLLECTION_T3411512674_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.BypassElementCollection
struct  BypassElementCollection_t3411512674  : public ConfigurationElementCollection_t1911180302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSELEMENTCOLLECTION_T3411512674_H
#ifndef CONNECTIONMANAGEMENTSECTION_T1533889992_H
#define CONNECTIONMANAGEMENTSECTION_T1533889992_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ConnectionManagementSection
struct  ConnectionManagementSection_t1533889992  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct ConnectionManagementSection_t1533889992_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Net.Configuration.ConnectionManagementSection::connectionManagementProp
	ConfigurationProperty_t2048066811 * ___connectionManagementProp_19;
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.ConnectionManagementSection::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_20;

public:
	inline static int32_t get_offset_of_connectionManagementProp_19() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1533889992_StaticFields, ___connectionManagementProp_19)); }
	inline ConfigurationProperty_t2048066811 * get_connectionManagementProp_19() const { return ___connectionManagementProp_19; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_connectionManagementProp_19() { return &___connectionManagementProp_19; }
	inline void set_connectionManagementProp_19(ConfigurationProperty_t2048066811 * value)
	{
		___connectionManagementProp_19 = value;
		Il2CppCodeGenWriteBarrier((&___connectionManagementProp_19), value);
	}

	inline static int32_t get_offset_of_properties_20() { return static_cast<int32_t>(offsetof(ConnectionManagementSection_t1533889992_StaticFields, ___properties_20)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_20() const { return ___properties_20; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_20() { return &___properties_20; }
	inline void set_properties_20(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_20 = value;
		Il2CppCodeGenWriteBarrier((&___properties_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONNECTIONMANAGEMENTSECTION_T1533889992_H
#ifndef DEFAULTPROXYSECTION_T2916409848_H
#define DEFAULTPROXYSECTION_T2916409848_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.DefaultProxySection
struct  DefaultProxySection_t2916409848  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct DefaultProxySection_t2916409848_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.DefaultProxySection::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::bypassListProp
	ConfigurationProperty_t2048066811 * ___bypassListProp_20;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::enabledProp
	ConfigurationProperty_t2048066811 * ___enabledProp_21;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::moduleProp
	ConfigurationProperty_t2048066811 * ___moduleProp_22;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::proxyProp
	ConfigurationProperty_t2048066811 * ___proxyProp_23;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.DefaultProxySection::useDefaultCredentialsProp
	ConfigurationProperty_t2048066811 * ___useDefaultCredentialsProp_24;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(DefaultProxySection_t2916409848_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_bypassListProp_20() { return static_cast<int32_t>(offsetof(DefaultProxySection_t2916409848_StaticFields, ___bypassListProp_20)); }
	inline ConfigurationProperty_t2048066811 * get_bypassListProp_20() const { return ___bypassListProp_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_bypassListProp_20() { return &___bypassListProp_20; }
	inline void set_bypassListProp_20(ConfigurationProperty_t2048066811 * value)
	{
		___bypassListProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___bypassListProp_20), value);
	}

	inline static int32_t get_offset_of_enabledProp_21() { return static_cast<int32_t>(offsetof(DefaultProxySection_t2916409848_StaticFields, ___enabledProp_21)); }
	inline ConfigurationProperty_t2048066811 * get_enabledProp_21() const { return ___enabledProp_21; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_enabledProp_21() { return &___enabledProp_21; }
	inline void set_enabledProp_21(ConfigurationProperty_t2048066811 * value)
	{
		___enabledProp_21 = value;
		Il2CppCodeGenWriteBarrier((&___enabledProp_21), value);
	}

	inline static int32_t get_offset_of_moduleProp_22() { return static_cast<int32_t>(offsetof(DefaultProxySection_t2916409848_StaticFields, ___moduleProp_22)); }
	inline ConfigurationProperty_t2048066811 * get_moduleProp_22() const { return ___moduleProp_22; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_moduleProp_22() { return &___moduleProp_22; }
	inline void set_moduleProp_22(ConfigurationProperty_t2048066811 * value)
	{
		___moduleProp_22 = value;
		Il2CppCodeGenWriteBarrier((&___moduleProp_22), value);
	}

	inline static int32_t get_offset_of_proxyProp_23() { return static_cast<int32_t>(offsetof(DefaultProxySection_t2916409848_StaticFields, ___proxyProp_23)); }
	inline ConfigurationProperty_t2048066811 * get_proxyProp_23() const { return ___proxyProp_23; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_proxyProp_23() { return &___proxyProp_23; }
	inline void set_proxyProp_23(ConfigurationProperty_t2048066811 * value)
	{
		___proxyProp_23 = value;
		Il2CppCodeGenWriteBarrier((&___proxyProp_23), value);
	}

	inline static int32_t get_offset_of_useDefaultCredentialsProp_24() { return static_cast<int32_t>(offsetof(DefaultProxySection_t2916409848_StaticFields, ___useDefaultCredentialsProp_24)); }
	inline ConfigurationProperty_t2048066811 * get_useDefaultCredentialsProp_24() const { return ___useDefaultCredentialsProp_24; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_useDefaultCredentialsProp_24() { return &___useDefaultCredentialsProp_24; }
	inline void set_useDefaultCredentialsProp_24(ConfigurationProperty_t2048066811 * value)
	{
		___useDefaultCredentialsProp_24 = value;
		Il2CppCodeGenWriteBarrier((&___useDefaultCredentialsProp_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTPROXYSECTION_T2916409848_H
#ifndef TYPECONVERTER_T745995970_H
#define TYPECONVERTER_T745995970_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter
struct  TypeConverter_t745995970  : public RuntimeObject
{
public:

public:
};

struct TypeConverter_t745995970_StaticFields
{
public:
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeConverter::useCompatibleTypeConversion
	bool ___useCompatibleTypeConversion_1;

public:
	inline static int32_t get_offset_of_useCompatibleTypeConversion_1() { return static_cast<int32_t>(offsetof(TypeConverter_t745995970_StaticFields, ___useCompatibleTypeConversion_1)); }
	inline bool get_useCompatibleTypeConversion_1() const { return ___useCompatibleTypeConversion_1; }
	inline bool* get_address_of_useCompatibleTypeConversion_1() { return &___useCompatibleTypeConversion_1; }
	inline void set_useCompatibleTypeConversion_1(bool value)
	{
		___useCompatibleTypeConversion_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTER_T745995970_H
#ifndef AUTHENTICATIONMODULEELEMENTCOLLECTION_T1084300802_H
#define AUTHENTICATIONMODULEELEMENTCOLLECTION_T1084300802_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModuleElementCollection
struct  AuthenticationModuleElementCollection_t1084300802  : public ConfigurationElementCollection_t1911180302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULEELEMENTCOLLECTION_T1084300802_H
#ifndef AUTHENTICATIONMODULESSECTION_T1750570770_H
#define AUTHENTICATIONMODULESSECTION_T1750570770_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.AuthenticationModulesSection
struct  AuthenticationModulesSection_t1750570770  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct AuthenticationModulesSection_t1750570770_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.AuthenticationModulesSection::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.AuthenticationModulesSection::authenticationModulesProp
	ConfigurationProperty_t2048066811 * ___authenticationModulesProp_20;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1750570770_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_authenticationModulesProp_20() { return static_cast<int32_t>(offsetof(AuthenticationModulesSection_t1750570770_StaticFields, ___authenticationModulesProp_20)); }
	inline ConfigurationProperty_t2048066811 * get_authenticationModulesProp_20() const { return ___authenticationModulesProp_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_authenticationModulesProp_20() { return &___authenticationModulesProp_20; }
	inline void set_authenticationModulesProp_20(ConfigurationProperty_t2048066811 * value)
	{
		___authenticationModulesProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___authenticationModulesProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUTHENTICATIONMODULESSECTION_T1750570770_H
#ifndef BYPASSONLOCALVALUES_T3271087145_H
#define BYPASSONLOCALVALUES_T3271087145_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.ProxyElement/BypassOnLocalValues
struct  BypassOnLocalValues_t3271087145 
{
public:
	// System.Int32 System.Net.Configuration.ProxyElement/BypassOnLocalValues::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BypassOnLocalValues_t3271087145, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYPASSONLOCALVALUES_T3271087145_H
#ifndef WEBREQUESTMODULEELEMENTCOLLECTION_T2218695785_H
#define WEBREQUESTMODULEELEMENTCOLLECTION_T2218695785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModuleElementCollection
struct  WebRequestModuleElementCollection_t2218695785  : public ConfigurationElementCollection_t1911180302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULEELEMENTCOLLECTION_T2218695785_H
#ifndef CONFIGURATIONEXCEPTION_T3814184945_H
#define CONFIGURATIONEXCEPTION_T3814184945_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Configuration.ConfigurationException
struct  ConfigurationException_t3814184945  : public SystemException_t3877406272
{
public:
	// System.String System.Configuration.ConfigurationException::filename
	String_t* ___filename_16;
	// System.Int32 System.Configuration.ConfigurationException::line
	int32_t ___line_17;

public:
	inline static int32_t get_offset_of_filename_16() { return static_cast<int32_t>(offsetof(ConfigurationException_t3814184945, ___filename_16)); }
	inline String_t* get_filename_16() const { return ___filename_16; }
	inline String_t** get_address_of_filename_16() { return &___filename_16; }
	inline void set_filename_16(String_t* value)
	{
		___filename_16 = value;
		Il2CppCodeGenWriteBarrier((&___filename_16), value);
	}

	inline static int32_t get_offset_of_line_17() { return static_cast<int32_t>(offsetof(ConfigurationException_t3814184945, ___line_17)); }
	inline int32_t get_line_17() const { return ___line_17; }
	inline int32_t* get_address_of_line_17() { return &___line_17; }
	inline void set_line_17(int32_t value)
	{
		___line_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGURATIONEXCEPTION_T3814184945_H
#ifndef MONITORINGDESCRIPTIONATTRIBUTE_T1660295144_H
#define MONITORINGDESCRIPTIONATTRIBUTE_T1660295144_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.MonitoringDescriptionAttribute
struct  MonitoringDescriptionAttribute_t1660295144  : public DescriptionAttribute_t3207779672
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONITORINGDESCRIPTIONATTRIBUTE_T1660295144_H
#ifndef TRACEINTERNAL_T2818294232_H
#define TRACEINTERNAL_T2818294232_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceInternal
struct  TraceInternal_t2818294232  : public RuntimeObject
{
public:

public:
};

struct TraceInternal_t2818294232_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::appName
	String_t* ___appName_0;
	// System.Diagnostics.TraceListenerCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::listeners
	TraceListenerCollection_t2289511703 * ___listeners_1;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::autoFlush
	bool ___autoFlush_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::useGlobalLock
	bool ___useGlobalLock_3;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::indentSize
	int32_t ___indentSize_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::settingsInitialized
	bool ___settingsInitialized_6;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.TraceInternal::defaultInitialized
	bool ___defaultInitialized_7;
	// System.Object System.Diagnostics.TraceInternal::critSec
	RuntimeObject * ___critSec_8;

public:
	inline static int32_t get_offset_of_appName_0() { return static_cast<int32_t>(offsetof(TraceInternal_t2818294232_StaticFields, ___appName_0)); }
	inline String_t* get_appName_0() const { return ___appName_0; }
	inline String_t** get_address_of_appName_0() { return &___appName_0; }
	inline void set_appName_0(String_t* value)
	{
		___appName_0 = value;
		Il2CppCodeGenWriteBarrier((&___appName_0), value);
	}

	inline static int32_t get_offset_of_listeners_1() { return static_cast<int32_t>(offsetof(TraceInternal_t2818294232_StaticFields, ___listeners_1)); }
	inline TraceListenerCollection_t2289511703 * get_listeners_1() const { return ___listeners_1; }
	inline TraceListenerCollection_t2289511703 ** get_address_of_listeners_1() { return &___listeners_1; }
	inline void set_listeners_1(TraceListenerCollection_t2289511703 * value)
	{
		___listeners_1 = value;
		Il2CppCodeGenWriteBarrier((&___listeners_1), value);
	}

	inline static int32_t get_offset_of_autoFlush_2() { return static_cast<int32_t>(offsetof(TraceInternal_t2818294232_StaticFields, ___autoFlush_2)); }
	inline bool get_autoFlush_2() const { return ___autoFlush_2; }
	inline bool* get_address_of_autoFlush_2() { return &___autoFlush_2; }
	inline void set_autoFlush_2(bool value)
	{
		___autoFlush_2 = value;
	}

	inline static int32_t get_offset_of_useGlobalLock_3() { return static_cast<int32_t>(offsetof(TraceInternal_t2818294232_StaticFields, ___useGlobalLock_3)); }
	inline bool get_useGlobalLock_3() const { return ___useGlobalLock_3; }
	inline bool* get_address_of_useGlobalLock_3() { return &___useGlobalLock_3; }
	inline void set_useGlobalLock_3(bool value)
	{
		___useGlobalLock_3 = value;
	}

	inline static int32_t get_offset_of_indentSize_5() { return static_cast<int32_t>(offsetof(TraceInternal_t2818294232_StaticFields, ___indentSize_5)); }
	inline int32_t get_indentSize_5() const { return ___indentSize_5; }
	inline int32_t* get_address_of_indentSize_5() { return &___indentSize_5; }
	inline void set_indentSize_5(int32_t value)
	{
		___indentSize_5 = value;
	}

	inline static int32_t get_offset_of_settingsInitialized_6() { return static_cast<int32_t>(offsetof(TraceInternal_t2818294232_StaticFields, ___settingsInitialized_6)); }
	inline bool get_settingsInitialized_6() const { return ___settingsInitialized_6; }
	inline bool* get_address_of_settingsInitialized_6() { return &___settingsInitialized_6; }
	inline void set_settingsInitialized_6(bool value)
	{
		___settingsInitialized_6 = value;
	}

	inline static int32_t get_offset_of_defaultInitialized_7() { return static_cast<int32_t>(offsetof(TraceInternal_t2818294232_StaticFields, ___defaultInitialized_7)); }
	inline bool get_defaultInitialized_7() const { return ___defaultInitialized_7; }
	inline bool* get_address_of_defaultInitialized_7() { return &___defaultInitialized_7; }
	inline void set_defaultInitialized_7(bool value)
	{
		___defaultInitialized_7 = value;
	}

	inline static int32_t get_offset_of_critSec_8() { return static_cast<int32_t>(offsetof(TraceInternal_t2818294232_StaticFields, ___critSec_8)); }
	inline RuntimeObject * get_critSec_8() const { return ___critSec_8; }
	inline RuntimeObject ** get_address_of_critSec_8() { return &___critSec_8; }
	inline void set_critSec_8(RuntimeObject * value)
	{
		___critSec_8 = value;
		Il2CppCodeGenWriteBarrier((&___critSec_8), value);
	}
};

struct TraceInternal_t2818294232_ThreadStaticFields
{
public:
	// System.Int32 System.Diagnostics.TraceInternal::indentLevel
	int32_t ___indentLevel_4;

public:
	inline static int32_t get_offset_of_indentLevel_4() { return static_cast<int32_t>(offsetof(TraceInternal_t2818294232_ThreadStaticFields, ___indentLevel_4)); }
	inline int32_t get_indentLevel_4() const { return ___indentLevel_4; }
	inline int32_t* get_address_of_indentLevel_4() { return &___indentLevel_4; }
	inline void set_indentLevel_4(int32_t value)
	{
		___indentLevel_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACEINTERNAL_T2818294232_H
#ifndef INITSTATE_T1768812501_H
#define INITSTATE_T1768812501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.InitState
struct  InitState_t1768812501 
{
public:
	// System.Int32 System.Diagnostics.InitState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitState_t1768812501, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INITSTATE_T1768812501_H
#ifndef EVENTLOG_T681067562_H
#define EVENTLOG_T681067562_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLog
struct  EventLog_t681067562  : public Component_t2826673791
{
public:
	// System.String System.Diagnostics.EventLog::source
	String_t* ___source_4;
	// System.Boolean System.Diagnostics.EventLog::doRaiseEvents
	bool ___doRaiseEvents_5;
	// System.Diagnostics.EventLogImpl System.Diagnostics.EventLog::Impl
	EventLogImpl_t3456077238 * ___Impl_6;

public:
	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(EventLog_t681067562, ___source_4)); }
	inline String_t* get_source_4() const { return ___source_4; }
	inline String_t** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(String_t* value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((&___source_4), value);
	}

	inline static int32_t get_offset_of_doRaiseEvents_5() { return static_cast<int32_t>(offsetof(EventLog_t681067562, ___doRaiseEvents_5)); }
	inline bool get_doRaiseEvents_5() const { return ___doRaiseEvents_5; }
	inline bool* get_address_of_doRaiseEvents_5() { return &___doRaiseEvents_5; }
	inline void set_doRaiseEvents_5(bool value)
	{
		___doRaiseEvents_5 = value;
	}

	inline static int32_t get_offset_of_Impl_6() { return static_cast<int32_t>(offsetof(EventLog_t681067562, ___Impl_6)); }
	inline EventLogImpl_t3456077238 * get_Impl_6() const { return ___Impl_6; }
	inline EventLogImpl_t3456077238 ** get_address_of_Impl_6() { return &___Impl_6; }
	inline void set_Impl_6(EventLogImpl_t3456077238 * value)
	{
		___Impl_6 = value;
		Il2CppCodeGenWriteBarrier((&___Impl_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOG_T681067562_H
#ifndef FILTERELEMENT_T959960876_H
#define FILTERELEMENT_T959960876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.FilterElement
struct  FilterElement_t959960876  : public TypedElement_t4034655484
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERELEMENT_T959960876_H
#ifndef LISTENERELEMENT_T2632490878_H
#define LISTENERELEMENT_T2632490878_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ListenerElement
struct  ListenerElement_t2632490878  : public TypedElement_t4034655484
{
public:
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propListenerTypeName
	ConfigurationProperty_t2048066811 * ____propListenerTypeName_23;
	// System.Boolean System.Diagnostics.ListenerElement::_allowReferences
	bool ____allowReferences_24;
	// System.Collections.Hashtable System.Diagnostics.ListenerElement::_attributes
	Hashtable_t909839986 * ____attributes_25;
	// System.Boolean System.Diagnostics.ListenerElement::_isAddedByDefault
	bool ____isAddedByDefault_26;

public:
	inline static int32_t get_offset_of__propListenerTypeName_23() { return static_cast<int32_t>(offsetof(ListenerElement_t2632490878, ____propListenerTypeName_23)); }
	inline ConfigurationProperty_t2048066811 * get__propListenerTypeName_23() const { return ____propListenerTypeName_23; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propListenerTypeName_23() { return &____propListenerTypeName_23; }
	inline void set__propListenerTypeName_23(ConfigurationProperty_t2048066811 * value)
	{
		____propListenerTypeName_23 = value;
		Il2CppCodeGenWriteBarrier((&____propListenerTypeName_23), value);
	}

	inline static int32_t get_offset_of__allowReferences_24() { return static_cast<int32_t>(offsetof(ListenerElement_t2632490878, ____allowReferences_24)); }
	inline bool get__allowReferences_24() const { return ____allowReferences_24; }
	inline bool* get_address_of__allowReferences_24() { return &____allowReferences_24; }
	inline void set__allowReferences_24(bool value)
	{
		____allowReferences_24 = value;
	}

	inline static int32_t get_offset_of__attributes_25() { return static_cast<int32_t>(offsetof(ListenerElement_t2632490878, ____attributes_25)); }
	inline Hashtable_t909839986 * get__attributes_25() const { return ____attributes_25; }
	inline Hashtable_t909839986 ** get_address_of__attributes_25() { return &____attributes_25; }
	inline void set__attributes_25(Hashtable_t909839986 * value)
	{
		____attributes_25 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_25), value);
	}

	inline static int32_t get_offset_of__isAddedByDefault_26() { return static_cast<int32_t>(offsetof(ListenerElement_t2632490878, ____isAddedByDefault_26)); }
	inline bool get__isAddedByDefault_26() const { return ____isAddedByDefault_26; }
	inline bool* get_address_of__isAddedByDefault_26() { return &____isAddedByDefault_26; }
	inline void set__isAddedByDefault_26(bool value)
	{
		____isAddedByDefault_26 = value;
	}
};

struct ListenerElement_t2632490878_StaticFields
{
public:
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propFilter
	ConfigurationProperty_t2048066811 * ____propFilter_20;
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propName
	ConfigurationProperty_t2048066811 * ____propName_21;
	// System.Configuration.ConfigurationProperty System.Diagnostics.ListenerElement::_propOutputOpts
	ConfigurationProperty_t2048066811 * ____propOutputOpts_22;

public:
	inline static int32_t get_offset_of__propFilter_20() { return static_cast<int32_t>(offsetof(ListenerElement_t2632490878_StaticFields, ____propFilter_20)); }
	inline ConfigurationProperty_t2048066811 * get__propFilter_20() const { return ____propFilter_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propFilter_20() { return &____propFilter_20; }
	inline void set__propFilter_20(ConfigurationProperty_t2048066811 * value)
	{
		____propFilter_20 = value;
		Il2CppCodeGenWriteBarrier((&____propFilter_20), value);
	}

	inline static int32_t get_offset_of__propName_21() { return static_cast<int32_t>(offsetof(ListenerElement_t2632490878_StaticFields, ____propName_21)); }
	inline ConfigurationProperty_t2048066811 * get__propName_21() const { return ____propName_21; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propName_21() { return &____propName_21; }
	inline void set__propName_21(ConfigurationProperty_t2048066811 * value)
	{
		____propName_21 = value;
		Il2CppCodeGenWriteBarrier((&____propName_21), value);
	}

	inline static int32_t get_offset_of__propOutputOpts_22() { return static_cast<int32_t>(offsetof(ListenerElement_t2632490878_StaticFields, ____propOutputOpts_22)); }
	inline ConfigurationProperty_t2048066811 * get__propOutputOpts_22() const { return ____propOutputOpts_22; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propOutputOpts_22() { return &____propOutputOpts_22; }
	inline void set__propOutputOpts_22(ConfigurationProperty_t2048066811 * value)
	{
		____propOutputOpts_22 = value;
		Il2CppCodeGenWriteBarrier((&____propOutputOpts_22), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENERELEMENT_T2632490878_H
#ifndef LISTENERELEMENTSCOLLECTION_T1237474813_H
#define LISTENERELEMENTSCOLLECTION_T1237474813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.ListenerElementsCollection
struct  ListenerElementsCollection_t1237474813  : public ConfigurationElementCollection_t1911180302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENERELEMENTSCOLLECTION_T1237474813_H
#ifndef SOURCELEVELS_T1530190938_H
#define SOURCELEVELS_T1530190938_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SourceLevels
struct  SourceLevels_t1530190938 
{
public:
	// System.Int32 System.Diagnostics.SourceLevels::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SourceLevels_t1530190938, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCELEVELS_T1530190938_H
#ifndef REQUESTCACHELEVEL_T2979444753_H
#define REQUESTCACHELEVEL_T2979444753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCacheLevel
struct  RequestCacheLevel_t2979444753 
{
public:
	// System.Int32 System.Net.Cache.RequestCacheLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RequestCacheLevel_t2979444753, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHELEVEL_T2979444753_H
#ifndef SWITCHELEMENTSCOLLECTION_T835246741_H
#define SWITCHELEMENTSCOLLECTION_T835246741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SwitchElementsCollection
struct  SwitchElementsCollection_t835246741  : public ConfigurationElementCollection_t1911180302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SWITCHELEMENTSCOLLECTION_T835246741_H
#ifndef WEBREQUESTMODULESSECTION_T3717257007_H
#define WEBREQUESTMODULESSECTION_T3717257007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Configuration.WebRequestModulesSection
struct  WebRequestModulesSection_t3717257007  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct WebRequestModulesSection_t3717257007_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Net.Configuration.WebRequestModulesSection::properties
	ConfigurationPropertyCollection_t3473514151 * ___properties_19;
	// System.Configuration.ConfigurationProperty System.Net.Configuration.WebRequestModulesSection::webRequestModulesProp
	ConfigurationProperty_t2048066811 * ___webRequestModulesProp_20;

public:
	inline static int32_t get_offset_of_properties_19() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t3717257007_StaticFields, ___properties_19)); }
	inline ConfigurationPropertyCollection_t3473514151 * get_properties_19() const { return ___properties_19; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of_properties_19() { return &___properties_19; }
	inline void set_properties_19(ConfigurationPropertyCollection_t3473514151 * value)
	{
		___properties_19 = value;
		Il2CppCodeGenWriteBarrier((&___properties_19), value);
	}

	inline static int32_t get_offset_of_webRequestModulesProp_20() { return static_cast<int32_t>(offsetof(WebRequestModulesSection_t3717257007_StaticFields, ___webRequestModulesProp_20)); }
	inline ConfigurationProperty_t2048066811 * get_webRequestModulesProp_20() const { return ___webRequestModulesProp_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of_webRequestModulesProp_20() { return &___webRequestModulesProp_20; }
	inline void set_webRequestModulesProp_20(ConfigurationProperty_t2048066811 * value)
	{
		___webRequestModulesProp_20 = value;
		Il2CppCodeGenWriteBarrier((&___webRequestModulesProp_20), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEBREQUESTMODULESSECTION_T3717257007_H
#ifndef SOURCEELEMENTSCOLLECTION_T1050626936_H
#define SOURCEELEMENTSCOLLECTION_T1050626936_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SourceElementsCollection
struct  SourceElementsCollection_t1050626936  : public ConfigurationElementCollection_t1911180302
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOURCEELEMENTSCOLLECTION_T1050626936_H
#ifndef SYSTEMDIAGNOSTICSSECTION_T2222033606_H
#define SYSTEMDIAGNOSTICSSECTION_T2222033606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SystemDiagnosticsSection
struct  SystemDiagnosticsSection_t2222033606  : public ConfigurationSection_t2600766927
{
public:

public:
};

struct SystemDiagnosticsSection_t2222033606_StaticFields
{
public:
	// System.Configuration.ConfigurationPropertyCollection System.Diagnostics.SystemDiagnosticsSection::_properties
	ConfigurationPropertyCollection_t3473514151 * ____properties_19;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propAssert
	ConfigurationProperty_t2048066811 * ____propAssert_20;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propPerfCounters
	ConfigurationProperty_t2048066811 * ____propPerfCounters_21;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propSources
	ConfigurationProperty_t2048066811 * ____propSources_22;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propSharedListeners
	ConfigurationProperty_t2048066811 * ____propSharedListeners_23;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propSwitches
	ConfigurationProperty_t2048066811 * ____propSwitches_24;
	// System.Configuration.ConfigurationProperty System.Diagnostics.SystemDiagnosticsSection::_propTrace
	ConfigurationProperty_t2048066811 * ____propTrace_25;

public:
	inline static int32_t get_offset_of__properties_19() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t2222033606_StaticFields, ____properties_19)); }
	inline ConfigurationPropertyCollection_t3473514151 * get__properties_19() const { return ____properties_19; }
	inline ConfigurationPropertyCollection_t3473514151 ** get_address_of__properties_19() { return &____properties_19; }
	inline void set__properties_19(ConfigurationPropertyCollection_t3473514151 * value)
	{
		____properties_19 = value;
		Il2CppCodeGenWriteBarrier((&____properties_19), value);
	}

	inline static int32_t get_offset_of__propAssert_20() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t2222033606_StaticFields, ____propAssert_20)); }
	inline ConfigurationProperty_t2048066811 * get__propAssert_20() const { return ____propAssert_20; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propAssert_20() { return &____propAssert_20; }
	inline void set__propAssert_20(ConfigurationProperty_t2048066811 * value)
	{
		____propAssert_20 = value;
		Il2CppCodeGenWriteBarrier((&____propAssert_20), value);
	}

	inline static int32_t get_offset_of__propPerfCounters_21() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t2222033606_StaticFields, ____propPerfCounters_21)); }
	inline ConfigurationProperty_t2048066811 * get__propPerfCounters_21() const { return ____propPerfCounters_21; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propPerfCounters_21() { return &____propPerfCounters_21; }
	inline void set__propPerfCounters_21(ConfigurationProperty_t2048066811 * value)
	{
		____propPerfCounters_21 = value;
		Il2CppCodeGenWriteBarrier((&____propPerfCounters_21), value);
	}

	inline static int32_t get_offset_of__propSources_22() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t2222033606_StaticFields, ____propSources_22)); }
	inline ConfigurationProperty_t2048066811 * get__propSources_22() const { return ____propSources_22; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propSources_22() { return &____propSources_22; }
	inline void set__propSources_22(ConfigurationProperty_t2048066811 * value)
	{
		____propSources_22 = value;
		Il2CppCodeGenWriteBarrier((&____propSources_22), value);
	}

	inline static int32_t get_offset_of__propSharedListeners_23() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t2222033606_StaticFields, ____propSharedListeners_23)); }
	inline ConfigurationProperty_t2048066811 * get__propSharedListeners_23() const { return ____propSharedListeners_23; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propSharedListeners_23() { return &____propSharedListeners_23; }
	inline void set__propSharedListeners_23(ConfigurationProperty_t2048066811 * value)
	{
		____propSharedListeners_23 = value;
		Il2CppCodeGenWriteBarrier((&____propSharedListeners_23), value);
	}

	inline static int32_t get_offset_of__propSwitches_24() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t2222033606_StaticFields, ____propSwitches_24)); }
	inline ConfigurationProperty_t2048066811 * get__propSwitches_24() const { return ____propSwitches_24; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propSwitches_24() { return &____propSwitches_24; }
	inline void set__propSwitches_24(ConfigurationProperty_t2048066811 * value)
	{
		____propSwitches_24 = value;
		Il2CppCodeGenWriteBarrier((&____propSwitches_24), value);
	}

	inline static int32_t get_offset_of__propTrace_25() { return static_cast<int32_t>(offsetof(SystemDiagnosticsSection_t2222033606_StaticFields, ____propTrace_25)); }
	inline ConfigurationProperty_t2048066811 * get__propTrace_25() const { return ____propTrace_25; }
	inline ConfigurationProperty_t2048066811 ** get_address_of__propTrace_25() { return &____propTrace_25; }
	inline void set__propTrace_25(ConfigurationProperty_t2048066811 * value)
	{
		____propTrace_25 = value;
		Il2CppCodeGenWriteBarrier((&____propTrace_25), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMDIAGNOSTICSSECTION_T2222033606_H
#ifndef TRACELISTENER_T3414949279_H
#define TRACELISTENER_T3414949279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceListener
struct  TraceListener_t3414949279  : public MarshalByRefObject_t1285298191
{
public:
	// System.Int32 System.Diagnostics.TraceListener::indentLevel
	int32_t ___indentLevel_1;
	// System.Int32 System.Diagnostics.TraceListener::indentSize
	int32_t ___indentSize_2;
	// System.Diagnostics.TraceOptions System.Diagnostics.TraceListener::traceOptions
	int32_t ___traceOptions_3;
	// System.Boolean System.Diagnostics.TraceListener::needIndent
	bool ___needIndent_4;
	// System.String System.Diagnostics.TraceListener::listenerName
	String_t* ___listenerName_5;
	// System.Diagnostics.TraceFilter System.Diagnostics.TraceListener::filter
	TraceFilter_t87508953 * ___filter_6;
	// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceListener::attributes
	StringDictionary_t1070889667 * ___attributes_7;
	// System.String System.Diagnostics.TraceListener::initializeData
	String_t* ___initializeData_8;

public:
	inline static int32_t get_offset_of_indentLevel_1() { return static_cast<int32_t>(offsetof(TraceListener_t3414949279, ___indentLevel_1)); }
	inline int32_t get_indentLevel_1() const { return ___indentLevel_1; }
	inline int32_t* get_address_of_indentLevel_1() { return &___indentLevel_1; }
	inline void set_indentLevel_1(int32_t value)
	{
		___indentLevel_1 = value;
	}

	inline static int32_t get_offset_of_indentSize_2() { return static_cast<int32_t>(offsetof(TraceListener_t3414949279, ___indentSize_2)); }
	inline int32_t get_indentSize_2() const { return ___indentSize_2; }
	inline int32_t* get_address_of_indentSize_2() { return &___indentSize_2; }
	inline void set_indentSize_2(int32_t value)
	{
		___indentSize_2 = value;
	}

	inline static int32_t get_offset_of_traceOptions_3() { return static_cast<int32_t>(offsetof(TraceListener_t3414949279, ___traceOptions_3)); }
	inline int32_t get_traceOptions_3() const { return ___traceOptions_3; }
	inline int32_t* get_address_of_traceOptions_3() { return &___traceOptions_3; }
	inline void set_traceOptions_3(int32_t value)
	{
		___traceOptions_3 = value;
	}

	inline static int32_t get_offset_of_needIndent_4() { return static_cast<int32_t>(offsetof(TraceListener_t3414949279, ___needIndent_4)); }
	inline bool get_needIndent_4() const { return ___needIndent_4; }
	inline bool* get_address_of_needIndent_4() { return &___needIndent_4; }
	inline void set_needIndent_4(bool value)
	{
		___needIndent_4 = value;
	}

	inline static int32_t get_offset_of_listenerName_5() { return static_cast<int32_t>(offsetof(TraceListener_t3414949279, ___listenerName_5)); }
	inline String_t* get_listenerName_5() const { return ___listenerName_5; }
	inline String_t** get_address_of_listenerName_5() { return &___listenerName_5; }
	inline void set_listenerName_5(String_t* value)
	{
		___listenerName_5 = value;
		Il2CppCodeGenWriteBarrier((&___listenerName_5), value);
	}

	inline static int32_t get_offset_of_filter_6() { return static_cast<int32_t>(offsetof(TraceListener_t3414949279, ___filter_6)); }
	inline TraceFilter_t87508953 * get_filter_6() const { return ___filter_6; }
	inline TraceFilter_t87508953 ** get_address_of_filter_6() { return &___filter_6; }
	inline void set_filter_6(TraceFilter_t87508953 * value)
	{
		___filter_6 = value;
		Il2CppCodeGenWriteBarrier((&___filter_6), value);
	}

	inline static int32_t get_offset_of_attributes_7() { return static_cast<int32_t>(offsetof(TraceListener_t3414949279, ___attributes_7)); }
	inline StringDictionary_t1070889667 * get_attributes_7() const { return ___attributes_7; }
	inline StringDictionary_t1070889667 ** get_address_of_attributes_7() { return &___attributes_7; }
	inline void set_attributes_7(StringDictionary_t1070889667 * value)
	{
		___attributes_7 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_7), value);
	}

	inline static int32_t get_offset_of_initializeData_8() { return static_cast<int32_t>(offsetof(TraceListener_t3414949279, ___initializeData_8)); }
	inline String_t* get_initializeData_8() const { return ___initializeData_8; }
	inline String_t** get_address_of_initializeData_8() { return &___initializeData_8; }
	inline void set_initializeData_8(String_t* value)
	{
		___initializeData_8 = value;
		Il2CppCodeGenWriteBarrier((&___initializeData_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACELISTENER_T3414949279_H
#ifndef DIAGNOSTICSCONFIGURATION_T1565268762_H
#define DIAGNOSTICSCONFIGURATION_T1565268762_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DiagnosticsConfiguration
struct  DiagnosticsConfiguration_t1565268762  : public RuntimeObject
{
public:

public:
};

struct DiagnosticsConfiguration_t1565268762_StaticFields
{
public:
	// System.Diagnostics.SystemDiagnosticsSection modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.DiagnosticsConfiguration::configSection
	SystemDiagnosticsSection_t2222033606 * ___configSection_0;
	// System.Diagnostics.InitState modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.DiagnosticsConfiguration::initState
	int32_t ___initState_1;

public:
	inline static int32_t get_offset_of_configSection_0() { return static_cast<int32_t>(offsetof(DiagnosticsConfiguration_t1565268762_StaticFields, ___configSection_0)); }
	inline SystemDiagnosticsSection_t2222033606 * get_configSection_0() const { return ___configSection_0; }
	inline SystemDiagnosticsSection_t2222033606 ** get_address_of_configSection_0() { return &___configSection_0; }
	inline void set_configSection_0(SystemDiagnosticsSection_t2222033606 * value)
	{
		___configSection_0 = value;
		Il2CppCodeGenWriteBarrier((&___configSection_0), value);
	}

	inline static int32_t get_offset_of_initState_1() { return static_cast<int32_t>(offsetof(DiagnosticsConfiguration_t1565268762_StaticFields, ___initState_1)); }
	inline int32_t get_initState_1() const { return ___initState_1; }
	inline int32_t* get_address_of_initState_1() { return &___initState_1; }
	inline void set_initState_1(int32_t value)
	{
		___initState_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DIAGNOSTICSCONFIGURATION_T1565268762_H
#ifndef BASENUMBERCONVERTER_T1130358776_H
#define BASENUMBERCONVERTER_T1130358776_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BaseNumberConverter
struct  BaseNumberConverter_t1130358776  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASENUMBERCONVERTER_T1130358776_H
#ifndef REFERENCECONVERTER_T3131270729_H
#define REFERENCECONVERTER_T3131270729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter
struct  ReferenceConverter_t3131270729  : public TypeConverter_t745995970
{
public:
	// System.Type System.ComponentModel.ReferenceConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(ReferenceConverter_t3131270729, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

struct ReferenceConverter_t3131270729_StaticFields
{
public:
	// System.String System.ComponentModel.ReferenceConverter::none
	String_t* ___none_2;

public:
	inline static int32_t get_offset_of_none_2() { return static_cast<int32_t>(offsetof(ReferenceConverter_t3131270729_StaticFields, ___none_2)); }
	inline String_t* get_none_2() const { return ___none_2; }
	inline String_t** get_address_of_none_2() { return &___none_2; }
	inline void set_none_2(String_t* value)
	{
		___none_2 = value;
		Il2CppCodeGenWriteBarrier((&___none_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECONVERTER_T3131270729_H
#ifndef SHAREDLISTENERELEMENTSCOLLECTION_T1354813622_H
#define SHAREDLISTENERELEMENTSCOLLECTION_T1354813622_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.SharedListenerElementsCollection
struct  SharedListenerElementsCollection_t1354813622  : public ListenerElementsCollection_t1237474813
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SHAREDLISTENERELEMENTSCOLLECTION_T1354813622_H
#ifndef MULTICASTDELEGATE_T3201952435_H
#define MULTICASTDELEGATE_T3201952435_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t3201952435  : public Delegate_t3022476291
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1606206610* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t3201952435, ___delegates_11)); }
	inline DelegateU5BU5D_t1606206610* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1606206610** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1606206610* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t3201952435_marshaled_pinvoke : public Delegate_t3022476291_marshaled_pinvoke
{
	DelegateU5BU5D_t1606206610* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t3201952435_marshaled_com : public Delegate_t3022476291_marshaled_com
{
	DelegateU5BU5D_t1606206610* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T3201952435_H
#ifndef DATETIMEOFFSETCONVERTER_T2176982818_H
#define DATETIMEOFFSETCONVERTER_T2176982818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeOffsetConverter
struct  DateTimeOffsetConverter_t2176982818  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSETCONVERTER_T2176982818_H
#ifndef CULTUREINFOCONVERTER_T2239982248_H
#define CULTUREINFOCONVERTER_T2239982248_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CultureInfoConverter
struct  CultureInfoConverter_t2239982248  : public TypeConverter_t745995970
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.CultureInfoConverter::values
	StandardValuesCollection_t191679357 * ___values_2;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(CultureInfoConverter_t2239982248, ___values_2)); }
	inline StandardValuesCollection_t191679357 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t191679357 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t191679357 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CULTUREINFOCONVERTER_T2239982248_H
#ifndef REQUESTCACHEPOLICY_T2663429579_H
#define REQUESTCACHEPOLICY_T2663429579_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Net.Cache.RequestCachePolicy
struct  RequestCachePolicy_t2663429579  : public RuntimeObject
{
public:
	// System.Net.Cache.RequestCacheLevel System.Net.Cache.RequestCachePolicy::m_Level
	int32_t ___m_Level_0;

public:
	inline static int32_t get_offset_of_m_Level_0() { return static_cast<int32_t>(offsetof(RequestCachePolicy_t2663429579, ___m_Level_0)); }
	inline int32_t get_m_Level_0() const { return ___m_Level_0; }
	inline int32_t* get_address_of_m_Level_0() { return &___m_Level_0; }
	inline void set_m_Level_0(int32_t value)
	{
		___m_Level_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUESTCACHEPOLICY_T2663429579_H
#ifndef DATETIMECONVERTER_T2436647419_H
#define DATETIMECONVERTER_T2436647419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DateTimeConverter
struct  DateTimeConverter_t2436647419  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMECONVERTER_T2436647419_H
#ifndef COLLECTIONCONVERTER_T2459375096_H
#define COLLECTIONCONVERTER_T2459375096_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CollectionConverter
struct  CollectionConverter_t2459375096  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLLECTIONCONVERTER_T2459375096_H
#ifndef CHARCONVERTER_T437233350_H
#define CHARCONVERTER_T437233350_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.CharConverter
struct  CharConverter_t437233350  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHARCONVERTER_T437233350_H
#ifndef TRACESOURCEINFO_T8795084_H
#define TRACESOURCEINFO_T8795084_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TraceSourceInfo
struct  TraceSourceInfo_t8795084  : public RuntimeObject
{
public:
	// System.String System.Diagnostics.TraceSourceInfo::name
	String_t* ___name_0;
	// System.Diagnostics.SourceLevels System.Diagnostics.TraceSourceInfo::levels
	int32_t ___levels_1;
	// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSourceInfo::listeners
	TraceListenerCollection_t2289511703 * ___listeners_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(TraceSourceInfo_t8795084, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_levels_1() { return static_cast<int32_t>(offsetof(TraceSourceInfo_t8795084, ___levels_1)); }
	inline int32_t get_levels_1() const { return ___levels_1; }
	inline int32_t* get_address_of_levels_1() { return &___levels_1; }
	inline void set_levels_1(int32_t value)
	{
		___levels_1 = value;
	}

	inline static int32_t get_offset_of_listeners_2() { return static_cast<int32_t>(offsetof(TraceSourceInfo_t8795084, ___listeners_2)); }
	inline TraceListenerCollection_t2289511703 * get_listeners_2() const { return ___listeners_2; }
	inline TraceListenerCollection_t2289511703 ** get_address_of_listeners_2() { return &___listeners_2; }
	inline void set_listeners_2(TraceListenerCollection_t2289511703 * value)
	{
		___listeners_2 = value;
		Il2CppCodeGenWriteBarrier((&___listeners_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACESOURCEINFO_T8795084_H
#ifndef BOOLEANCONVERTER_T284715810_H
#define BOOLEANCONVERTER_T284715810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.BooleanConverter
struct  BooleanConverter_t284715810  : public TypeConverter_t745995970
{
public:

public:
};

struct BooleanConverter_t284715810_StaticFields
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.BooleanConverter::values
	StandardValuesCollection_t191679357 * ___values_2;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(BooleanConverter_t284715810_StaticFields, ___values_2)); }
	inline StandardValuesCollection_t191679357 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t191679357 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t191679357 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEANCONVERTER_T284715810_H
#ifndef TEXTWRITERTRACELISTENER_T3365973051_H
#define TEXTWRITERTRACELISTENER_T3365973051_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.TextWriterTraceListener
struct  TextWriterTraceListener_t3365973051  : public TraceListener_t3414949279
{
public:
	// System.IO.TextWriter System.Diagnostics.TextWriterTraceListener::writer
	TextWriter_t4027217640 * ___writer_9;

public:
	inline static int32_t get_offset_of_writer_9() { return static_cast<int32_t>(offsetof(TextWriterTraceListener_t3365973051, ___writer_9)); }
	inline TextWriter_t4027217640 * get_writer_9() const { return ___writer_9; }
	inline TextWriter_t4027217640 ** get_address_of_writer_9() { return &___writer_9; }
	inline void set_writer_9(TextWriter_t4027217640 * value)
	{
		___writer_9 = value;
		Il2CppCodeGenWriteBarrier((&___writer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTWRITERTRACELISTENER_T3365973051_H
#ifndef BYTECONVERTER_T1265255600_H
#define BYTECONVERTER_T1265255600_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ByteConverter
struct  ByteConverter_t1265255600  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTECONVERTER_T1265255600_H
#ifndef ARRAYCONVERTER_T2804512129_H
#define ARRAYCONVERTER_T2804512129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ArrayConverter
struct  ArrayConverter_t2804512129  : public CollectionConverter_t2459375096
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYCONVERTER_T2804512129_H
#ifndef EVENTLOGTRACELISTENER_T2981657285_H
#define EVENTLOGTRACELISTENER_T2981657285_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.EventLogTraceListener
struct  EventLogTraceListener_t2981657285  : public TraceListener_t3414949279
{
public:
	// System.Diagnostics.EventLog System.Diagnostics.EventLogTraceListener::event_log
	EventLog_t681067562 * ___event_log_9;
	// System.String System.Diagnostics.EventLogTraceListener::name
	String_t* ___name_10;

public:
	inline static int32_t get_offset_of_event_log_9() { return static_cast<int32_t>(offsetof(EventLogTraceListener_t2981657285, ___event_log_9)); }
	inline EventLog_t681067562 * get_event_log_9() const { return ___event_log_9; }
	inline EventLog_t681067562 ** get_address_of_event_log_9() { return &___event_log_9; }
	inline void set_event_log_9(EventLog_t681067562 * value)
	{
		___event_log_9 = value;
		Il2CppCodeGenWriteBarrier((&___event_log_9), value);
	}

	inline static int32_t get_offset_of_name_10() { return static_cast<int32_t>(offsetof(EventLogTraceListener_t2981657285, ___name_10)); }
	inline String_t* get_name_10() const { return ___name_10; }
	inline String_t** get_address_of_name_10() { return &___name_10; }
	inline void set_name_10(String_t* value)
	{
		___name_10 = value;
		Il2CppCodeGenWriteBarrier((&___name_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTLOGTRACELISTENER_T2981657285_H
#ifndef ELEMENTHANDLER_T1009623312_H
#define ELEMENTHANDLER_T1009623312_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DiagnosticsConfigurationHandler/ElementHandler
struct  ElementHandler_t1009623312  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENTHANDLER_T1009623312_H
#ifndef DECIMALCONVERTER_T1618403211_H
#define DECIMALCONVERTER_T1618403211_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DecimalConverter
struct  DecimalConverter_t1618403211  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DECIMALCONVERTER_T1618403211_H
#ifndef COMPONENTCONVERTER_T3121608223_H
#define COMPONENTCONVERTER_T3121608223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentConverter
struct  ComponentConverter_t3121608223  : public ReferenceConverter_t3131270729
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENTCONVERTER_T3121608223_H
#ifndef DEFAULTTRACELISTENER_T1568159610_H
#define DEFAULTTRACELISTENER_T1568159610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DefaultTraceListener
struct  DefaultTraceListener_t1568159610  : public TraceListener_t3414949279
{
public:
	// System.String System.Diagnostics.DefaultTraceListener::logFileName
	String_t* ___logFileName_12;
	// System.Boolean System.Diagnostics.DefaultTraceListener::assertUiEnabled
	bool ___assertUiEnabled_13;

public:
	inline static int32_t get_offset_of_logFileName_12() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t1568159610, ___logFileName_12)); }
	inline String_t* get_logFileName_12() const { return ___logFileName_12; }
	inline String_t** get_address_of_logFileName_12() { return &___logFileName_12; }
	inline void set_logFileName_12(String_t* value)
	{
		___logFileName_12 = value;
		Il2CppCodeGenWriteBarrier((&___logFileName_12), value);
	}

	inline static int32_t get_offset_of_assertUiEnabled_13() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t1568159610, ___assertUiEnabled_13)); }
	inline bool get_assertUiEnabled_13() const { return ___assertUiEnabled_13; }
	inline bool* get_address_of_assertUiEnabled_13() { return &___assertUiEnabled_13; }
	inline void set_assertUiEnabled_13(bool value)
	{
		___assertUiEnabled_13 = value;
	}
};

struct DefaultTraceListener_t1568159610_StaticFields
{
public:
	// System.Boolean System.Diagnostics.DefaultTraceListener::OnWin32
	bool ___OnWin32_9;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTracePrefix
	String_t* ___MonoTracePrefix_10;
	// System.String System.Diagnostics.DefaultTraceListener::MonoTraceFile
	String_t* ___MonoTraceFile_11;

public:
	inline static int32_t get_offset_of_OnWin32_9() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t1568159610_StaticFields, ___OnWin32_9)); }
	inline bool get_OnWin32_9() const { return ___OnWin32_9; }
	inline bool* get_address_of_OnWin32_9() { return &___OnWin32_9; }
	inline void set_OnWin32_9(bool value)
	{
		___OnWin32_9 = value;
	}

	inline static int32_t get_offset_of_MonoTracePrefix_10() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t1568159610_StaticFields, ___MonoTracePrefix_10)); }
	inline String_t* get_MonoTracePrefix_10() const { return ___MonoTracePrefix_10; }
	inline String_t** get_address_of_MonoTracePrefix_10() { return &___MonoTracePrefix_10; }
	inline void set_MonoTracePrefix_10(String_t* value)
	{
		___MonoTracePrefix_10 = value;
		Il2CppCodeGenWriteBarrier((&___MonoTracePrefix_10), value);
	}

	inline static int32_t get_offset_of_MonoTraceFile_11() { return static_cast<int32_t>(offsetof(DefaultTraceListener_t1568159610_StaticFields, ___MonoTraceFile_11)); }
	inline String_t* get_MonoTraceFile_11() const { return ___MonoTraceFile_11; }
	inline String_t** get_address_of_MonoTraceFile_11() { return &___MonoTraceFile_11; }
	inline void set_MonoTraceFile_11(String_t* value)
	{
		___MonoTraceFile_11 = value;
		Il2CppCodeGenWriteBarrier((&___MonoTraceFile_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTTRACELISTENER_T1568159610_H
#ifndef DELIMITEDLISTTRACELISTENER_T1075289718_H
#define DELIMITEDLISTTRACELISTENER_T1075289718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.DelimitedListTraceListener
struct  DelimitedListTraceListener_t1075289718  : public TextWriterTraceListener_t3365973051
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELIMITEDLISTTRACELISTENER_T1075289718_H
#ifndef XMLWRITERTRACELISTENER_T1947709591_H
#define XMLWRITERTRACELISTENER_T1947709591_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Diagnostics.XmlWriterTraceListener
struct  XmlWriterTraceListener_t1947709591  : public TextWriterTraceListener_t3365973051
{
public:
	// System.Text.StringBuilder System.Diagnostics.XmlWriterTraceListener::strBldr
	StringBuilder_t1221177846 * ___strBldr_10;
	// System.Xml.XmlTextWriter System.Diagnostics.XmlWriterTraceListener::xmlBlobWriter
	XmlTextWriter_t2527250655 * ___xmlBlobWriter_11;
	// System.Boolean System.Diagnostics.XmlWriterTraceListener::shouldRespectFilterOnTraceTransfer
	bool ___shouldRespectFilterOnTraceTransfer_12;

public:
	inline static int32_t get_offset_of_strBldr_10() { return static_cast<int32_t>(offsetof(XmlWriterTraceListener_t1947709591, ___strBldr_10)); }
	inline StringBuilder_t1221177846 * get_strBldr_10() const { return ___strBldr_10; }
	inline StringBuilder_t1221177846 ** get_address_of_strBldr_10() { return &___strBldr_10; }
	inline void set_strBldr_10(StringBuilder_t1221177846 * value)
	{
		___strBldr_10 = value;
		Il2CppCodeGenWriteBarrier((&___strBldr_10), value);
	}

	inline static int32_t get_offset_of_xmlBlobWriter_11() { return static_cast<int32_t>(offsetof(XmlWriterTraceListener_t1947709591, ___xmlBlobWriter_11)); }
	inline XmlTextWriter_t2527250655 * get_xmlBlobWriter_11() const { return ___xmlBlobWriter_11; }
	inline XmlTextWriter_t2527250655 ** get_address_of_xmlBlobWriter_11() { return &___xmlBlobWriter_11; }
	inline void set_xmlBlobWriter_11(XmlTextWriter_t2527250655 * value)
	{
		___xmlBlobWriter_11 = value;
		Il2CppCodeGenWriteBarrier((&___xmlBlobWriter_11), value);
	}

	inline static int32_t get_offset_of_shouldRespectFilterOnTraceTransfer_12() { return static_cast<int32_t>(offsetof(XmlWriterTraceListener_t1947709591, ___shouldRespectFilterOnTraceTransfer_12)); }
	inline bool get_shouldRespectFilterOnTraceTransfer_12() const { return ___shouldRespectFilterOnTraceTransfer_12; }
	inline bool* get_address_of_shouldRespectFilterOnTraceTransfer_12() { return &___shouldRespectFilterOnTraceTransfer_12; }
	inline void set_shouldRespectFilterOnTraceTransfer_12(bool value)
	{
		___shouldRespectFilterOnTraceTransfer_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XMLWRITERTRACELISTENER_T1947709591_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2100 = { sizeof (AuthenticationModuleElement_t1426459758), -1, sizeof(AuthenticationModuleElement_t1426459758_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2100[2] = 
{
	AuthenticationModuleElement_t1426459758_StaticFields::get_offset_of_properties_15(),
	AuthenticationModuleElement_t1426459758_StaticFields::get_offset_of_typeProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2101 = { sizeof (AuthenticationModuleElementCollection_t1084300802), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2102 = { sizeof (AuthenticationModulesSection_t1750570770), -1, sizeof(AuthenticationModulesSection_t1750570770_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2102[2] = 
{
	AuthenticationModulesSection_t1750570770_StaticFields::get_offset_of_properties_19(),
	AuthenticationModulesSection_t1750570770_StaticFields::get_offset_of_authenticationModulesProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2103 = { sizeof (BypassElement_t4253212366), -1, sizeof(BypassElement_t4253212366_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2103[2] = 
{
	BypassElement_t4253212366_StaticFields::get_offset_of_properties_15(),
	BypassElement_t4253212366_StaticFields::get_offset_of_addressProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2104 = { sizeof (BypassElementCollection_t3411512674), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2105 = { sizeof (ConnectionManagementElement_t1734801665), -1, sizeof(ConnectionManagementElement_t1734801665_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2105[3] = 
{
	ConnectionManagementElement_t1734801665_StaticFields::get_offset_of_properties_15(),
	ConnectionManagementElement_t1734801665_StaticFields::get_offset_of_addressProp_16(),
	ConnectionManagementElement_t1734801665_StaticFields::get_offset_of_maxConnectionProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2106 = { sizeof (ConnectionManagementElementCollection_t3244012643), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2107 = { sizeof (ConnectionManagementData_t2657447783), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2107[1] = 
{
	ConnectionManagementData_t2657447783::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2108 = { sizeof (ConnectionManagementSection_t1533889992), -1, sizeof(ConnectionManagementSection_t1533889992_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2108[2] = 
{
	ConnectionManagementSection_t1533889992_StaticFields::get_offset_of_connectionManagementProp_19(),
	ConnectionManagementSection_t1533889992_StaticFields::get_offset_of_properties_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2109 = { sizeof (DefaultProxySection_t2916409848), -1, sizeof(DefaultProxySection_t2916409848_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2109[6] = 
{
	DefaultProxySection_t2916409848_StaticFields::get_offset_of_properties_19(),
	DefaultProxySection_t2916409848_StaticFields::get_offset_of_bypassListProp_20(),
	DefaultProxySection_t2916409848_StaticFields::get_offset_of_enabledProp_21(),
	DefaultProxySection_t2916409848_StaticFields::get_offset_of_moduleProp_22(),
	DefaultProxySection_t2916409848_StaticFields::get_offset_of_proxyProp_23(),
	DefaultProxySection_t2916409848_StaticFields::get_offset_of_useDefaultCredentialsProp_24(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2110 = { sizeof (HttpWebRequestElement_t2106051069), -1, sizeof(HttpWebRequestElement_t2106051069_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2110[5] = 
{
	HttpWebRequestElement_t2106051069_StaticFields::get_offset_of_maximumErrorResponseLengthProp_15(),
	HttpWebRequestElement_t2106051069_StaticFields::get_offset_of_maximumResponseHeadersLengthProp_16(),
	HttpWebRequestElement_t2106051069_StaticFields::get_offset_of_maximumUnauthorizedUploadLengthProp_17(),
	HttpWebRequestElement_t2106051069_StaticFields::get_offset_of_useUnsafeHeaderParsingProp_18(),
	HttpWebRequestElement_t2106051069_StaticFields::get_offset_of_properties_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2111 = { sizeof (Ipv6Element_t977943121), -1, sizeof(Ipv6Element_t977943121_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2111[2] = 
{
	Ipv6Element_t977943121_StaticFields::get_offset_of_properties_15(),
	Ipv6Element_t977943121_StaticFields::get_offset_of_enabledProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2112 = { sizeof (ModuleElement_t3031348726), -1, sizeof(ModuleElement_t3031348726_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2112[2] = 
{
	ModuleElement_t3031348726_StaticFields::get_offset_of_properties_15(),
	ModuleElement_t3031348726_StaticFields::get_offset_of_typeProp_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2113 = { sizeof (NetSectionGroup_t2546413291), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2114 = { sizeof (PerformanceCountersElement_t1606215027), -1, sizeof(PerformanceCountersElement_t1606215027_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2114[2] = 
{
	PerformanceCountersElement_t1606215027_StaticFields::get_offset_of_enabledProp_15(),
	PerformanceCountersElement_t1606215027_StaticFields::get_offset_of_properties_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2115 = { sizeof (ProxyElement_t1414493002), -1, sizeof(ProxyElement_t1414493002_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2115[6] = 
{
	ProxyElement_t1414493002_StaticFields::get_offset_of_properties_15(),
	ProxyElement_t1414493002_StaticFields::get_offset_of_autoDetectProp_16(),
	ProxyElement_t1414493002_StaticFields::get_offset_of_bypassOnLocalProp_17(),
	ProxyElement_t1414493002_StaticFields::get_offset_of_proxyAddressProp_18(),
	ProxyElement_t1414493002_StaticFields::get_offset_of_scriptLocationProp_19(),
	ProxyElement_t1414493002_StaticFields::get_offset_of_useSystemDefaultProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2116 = { sizeof (BypassOnLocalValues_t3271087145)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2116[4] = 
{
	BypassOnLocalValues_t3271087145::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2117 = { sizeof (UseSystemDefaultValues_t1457033350)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2117[4] = 
{
	UseSystemDefaultValues_t1457033350::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2118 = { sizeof (AutoDetectValues_t735769531)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2118[4] = 
{
	AutoDetectValues_t735769531::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2119 = { sizeof (ServicePointManagerElement_t1132364388), -1, sizeof(ServicePointManagerElement_t1132364388_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2119[7] = 
{
	ServicePointManagerElement_t1132364388_StaticFields::get_offset_of_properties_15(),
	ServicePointManagerElement_t1132364388_StaticFields::get_offset_of_checkCertificateNameProp_16(),
	ServicePointManagerElement_t1132364388_StaticFields::get_offset_of_checkCertificateRevocationListProp_17(),
	ServicePointManagerElement_t1132364388_StaticFields::get_offset_of_dnsRefreshTimeoutProp_18(),
	ServicePointManagerElement_t1132364388_StaticFields::get_offset_of_enableDnsRoundRobinProp_19(),
	ServicePointManagerElement_t1132364388_StaticFields::get_offset_of_expect100ContinueProp_20(),
	ServicePointManagerElement_t1132364388_StaticFields::get_offset_of_useNagleAlgorithmProp_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2120 = { sizeof (SettingsSection_t2300716058), -1, sizeof(SettingsSection_t2300716058_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2120[7] = 
{
	SettingsSection_t2300716058_StaticFields::get_offset_of_properties_19(),
	SettingsSection_t2300716058_StaticFields::get_offset_of_httpWebRequestProp_20(),
	SettingsSection_t2300716058_StaticFields::get_offset_of_ipv6Prop_21(),
	SettingsSection_t2300716058_StaticFields::get_offset_of_performanceCountersProp_22(),
	SettingsSection_t2300716058_StaticFields::get_offset_of_servicePointManagerProp_23(),
	SettingsSection_t2300716058_StaticFields::get_offset_of_webProxyScriptProp_24(),
	SettingsSection_t2300716058_StaticFields::get_offset_of_socketProp_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2121 = { sizeof (SocketElement_t792962077), -1, sizeof(SocketElement_t792962077_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2121[3] = 
{
	SocketElement_t792962077_StaticFields::get_offset_of_properties_15(),
	SocketElement_t792962077_StaticFields::get_offset_of_alwaysUseCompletionPortsForAcceptProp_16(),
	SocketElement_t792962077_StaticFields::get_offset_of_alwaysUseCompletionPortsForConnectProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2122 = { sizeof (WebProxyScriptElement_t1017943775), -1, sizeof(WebProxyScriptElement_t1017943775_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2122[2] = 
{
	WebProxyScriptElement_t1017943775_StaticFields::get_offset_of_downloadTimeoutProp_15(),
	WebProxyScriptElement_t1017943775_StaticFields::get_offset_of_properties_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2123 = { sizeof (WebRequestModuleElement_t4070853259), -1, sizeof(WebRequestModuleElement_t4070853259_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2123[3] = 
{
	WebRequestModuleElement_t4070853259_StaticFields::get_offset_of_properties_15(),
	WebRequestModuleElement_t4070853259_StaticFields::get_offset_of_prefixProp_16(),
	WebRequestModuleElement_t4070853259_StaticFields::get_offset_of_typeProp_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2124 = { sizeof (WebRequestModuleElementCollection_t2218695785), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2125 = { sizeof (WebRequestModulesSection_t3717257007), -1, sizeof(WebRequestModulesSection_t3717257007_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2125[2] = 
{
	WebRequestModulesSection_t3717257007_StaticFields::get_offset_of_properties_19(),
	WebRequestModulesSection_t3717257007_StaticFields::get_offset_of_webRequestModulesProp_20(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2126 = { sizeof (RequestCache_t1417804387), -1, sizeof(RequestCache_t1417804387_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2126[1] = 
{
	RequestCache_t1417804387_StaticFields::get_offset_of_LineSplits_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2127 = { sizeof (RequestCacheValidator_t1766318073), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2128 = { sizeof (RequestCacheBinding_t114276176), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2128[2] = 
{
	RequestCacheBinding_t114276176::get_offset_of_m_RequestCache_0(),
	RequestCacheBinding_t114276176::get_offset_of_m_CacheValidator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2129 = { sizeof (RequestCacheLevel_t2979444753)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2129[8] = 
{
	RequestCacheLevel_t2979444753::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2130 = { sizeof (RequestCachePolicy_t2663429579), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2130[1] = 
{
	RequestCachePolicy_t2663429579::get_offset_of_m_Level_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2131 = { sizeof (RequestCacheProtocol_t2110185277), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2132 = { sizeof (PrivilegedConfigurationManager_t3772865982), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2133 = { sizeof (ConfigurationException_t3814184945), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2133[2] = 
{
	ConfigurationException_t3814184945::get_offset_of_filename_16(),
	ConfigurationException_t3814184945::get_offset_of_line_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2134 = { sizeof (ConfigurationSettings_t1600776263), -1, sizeof(ConfigurationSettings_t1600776263_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2134[2] = 
{
	ConfigurationSettings_t1600776263_StaticFields::get_offset_of_config_0(),
	ConfigurationSettings_t1600776263_StaticFields::get_offset_of_lockobj_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2135 = { sizeof (DefaultConfig_t320482295), -1, sizeof(DefaultConfig_t320482295_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2135[1] = 
{
	DefaultConfig_t320482295_StaticFields::get_offset_of_instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2136 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2137 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2138 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2139 = { sizeof (AssertSection_t2202838995), -1, sizeof(AssertSection_t2202838995_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2139[3] = 
{
	AssertSection_t2202838995_StaticFields::get_offset_of__properties_15(),
	AssertSection_t2202838995_StaticFields::get_offset_of__propAssertUIEnabled_16(),
	AssertSection_t2202838995_StaticFields::get_offset_of__propLogFile_17(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2140 = { sizeof (BooleanSwitch_t1490001656), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2141 = { sizeof (DelimitedListTraceListener_t1075289718), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2142 = { sizeof (InitState_t1768812501)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2142[4] = 
{
	InitState_t1768812501::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2143 = { sizeof (DiagnosticsConfiguration_t1565268762), -1, sizeof(DiagnosticsConfiguration_t1565268762_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2143[2] = 
{
	DiagnosticsConfiguration_t1565268762_StaticFields::get_offset_of_configSection_0(),
	DiagnosticsConfiguration_t1565268762_StaticFields::get_offset_of_initState_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2144 = { sizeof (FilterElement_t959960876), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2145 = { sizeof (ListenerElementsCollection_t1237474813), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2146 = { sizeof (SharedListenerElementsCollection_t1354813622), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2147 = { sizeof (ListenerElement_t2632490878), -1, sizeof(ListenerElement_t2632490878_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2147[7] = 
{
	ListenerElement_t2632490878_StaticFields::get_offset_of__propFilter_20(),
	ListenerElement_t2632490878_StaticFields::get_offset_of__propName_21(),
	ListenerElement_t2632490878_StaticFields::get_offset_of__propOutputOpts_22(),
	ListenerElement_t2632490878::get_offset_of__propListenerTypeName_23(),
	ListenerElement_t2632490878::get_offset_of__allowReferences_24(),
	ListenerElement_t2632490878::get_offset_of__attributes_25(),
	ListenerElement_t2632490878::get_offset_of__isAddedByDefault_26(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2148 = { sizeof (PerfCounterSection_t3986468662), -1, sizeof(PerfCounterSection_t3986468662_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2148[2] = 
{
	PerfCounterSection_t3986468662_StaticFields::get_offset_of__properties_15(),
	PerfCounterSection_t3986468662_StaticFields::get_offset_of__propFileMappingSize_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2149 = { sizeof (SourceElementsCollection_t1050626936), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2150 = { sizeof (SourceElement_t2880823865), -1, sizeof(SourceElement_t2880823865_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2150[7] = 
{
	SourceElement_t2880823865_StaticFields::get_offset_of__properties_15(),
	SourceElement_t2880823865_StaticFields::get_offset_of__propName_16(),
	SourceElement_t2880823865_StaticFields::get_offset_of__propSwitchName_17(),
	SourceElement_t2880823865_StaticFields::get_offset_of__propSwitchValue_18(),
	SourceElement_t2880823865_StaticFields::get_offset_of__propSwitchType_19(),
	SourceElement_t2880823865_StaticFields::get_offset_of__propListeners_20(),
	SourceElement_t2880823865::get_offset_of__attributes_21(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2151 = { sizeof (SourceLevels_t1530190938)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2151[9] = 
{
	SourceLevels_t1530190938::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2152 = { sizeof (Switch_t2611057356), -1, sizeof(Switch_t2611057356_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2152[6] = 
{
	Switch_t2611057356::get_offset_of_description_0(),
	Switch_t2611057356::get_offset_of_displayName_1(),
	Switch_t2611057356::get_offset_of_switchValueString_2(),
	Switch_t2611057356::get_offset_of_defaultValue_3(),
	Switch_t2611057356_StaticFields::get_offset_of_switches_4(),
	Switch_t2611057356_StaticFields::get_offset_of_s_LastCollectionCount_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2153 = { sizeof (SwitchElementsCollection_t835246741), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2154 = { sizeof (SwitchElement_t4125397718), -1, sizeof(SwitchElement_t4125397718_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2154[4] = 
{
	SwitchElement_t4125397718_StaticFields::get_offset_of__properties_15(),
	SwitchElement_t4125397718_StaticFields::get_offset_of__propName_16(),
	SwitchElement_t4125397718_StaticFields::get_offset_of__propValue_17(),
	SwitchElement_t4125397718::get_offset_of__attributes_18(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2155 = { sizeof (SwitchLevelAttribute_t1251804674), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2155[1] = 
{
	SwitchLevelAttribute_t1251804674::get_offset_of_type_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2156 = { sizeof (SystemDiagnosticsSection_t2222033606), -1, sizeof(SystemDiagnosticsSection_t2222033606_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2156[7] = 
{
	SystemDiagnosticsSection_t2222033606_StaticFields::get_offset_of__properties_19(),
	SystemDiagnosticsSection_t2222033606_StaticFields::get_offset_of__propAssert_20(),
	SystemDiagnosticsSection_t2222033606_StaticFields::get_offset_of__propPerfCounters_21(),
	SystemDiagnosticsSection_t2222033606_StaticFields::get_offset_of__propSources_22(),
	SystemDiagnosticsSection_t2222033606_StaticFields::get_offset_of__propSharedListeners_23(),
	SystemDiagnosticsSection_t2222033606_StaticFields::get_offset_of__propSwitches_24(),
	SystemDiagnosticsSection_t2222033606_StaticFields::get_offset_of__propTrace_25(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2157 = { sizeof (TextWriterTraceListener_t3365973051), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2157[1] = 
{
	TextWriterTraceListener_t3365973051::get_offset_of_writer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2158 = { sizeof (TraceFilter_t87508953), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2158[1] = 
{
	TraceFilter_t87508953::get_offset_of_initializeData_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2159 = { sizeof (TraceInternal_t2818294232), -1, sizeof(TraceInternal_t2818294232_StaticFields), sizeof(TraceInternal_t2818294232_ThreadStaticFields) };
extern const int32_t g_FieldOffsetTable2159[9] = 
{
	TraceInternal_t2818294232_StaticFields::get_offset_of_appName_0(),
	TraceInternal_t2818294232_StaticFields::get_offset_of_listeners_1(),
	TraceInternal_t2818294232_StaticFields::get_offset_of_autoFlush_2(),
	TraceInternal_t2818294232_StaticFields::get_offset_of_useGlobalLock_3(),
	THREAD_STATIC_FIELD_OFFSET,
	TraceInternal_t2818294232_StaticFields::get_offset_of_indentSize_5(),
	TraceInternal_t2818294232_StaticFields::get_offset_of_settingsInitialized_6(),
	TraceInternal_t2818294232_StaticFields::get_offset_of_defaultInitialized_7(),
	TraceInternal_t2818294232_StaticFields::get_offset_of_critSec_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2160 = { sizeof (TraceListener_t3414949279), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2160[8] = 
{
	TraceListener_t3414949279::get_offset_of_indentLevel_1(),
	TraceListener_t3414949279::get_offset_of_indentSize_2(),
	TraceListener_t3414949279::get_offset_of_traceOptions_3(),
	TraceListener_t3414949279::get_offset_of_needIndent_4(),
	TraceListener_t3414949279::get_offset_of_listenerName_5(),
	TraceListener_t3414949279::get_offset_of_filter_6(),
	TraceListener_t3414949279::get_offset_of_attributes_7(),
	TraceListener_t3414949279::get_offset_of_initializeData_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2161 = { sizeof (TraceListenerCollection_t2289511703), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2161[1] = 
{
	TraceListenerCollection_t2289511703::get_offset_of_list_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2162 = { sizeof (TraceOptions_t4183547961)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2162[8] = 
{
	TraceOptions_t4183547961::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2163 = { sizeof (TraceSection_t1057220406), -1, sizeof(TraceSection_t1057220406_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2163[5] = 
{
	TraceSection_t1057220406_StaticFields::get_offset_of__properties_15(),
	TraceSection_t1057220406_StaticFields::get_offset_of__propListeners_16(),
	TraceSection_t1057220406_StaticFields::get_offset_of__propAutoFlush_17(),
	TraceSection_t1057220406_StaticFields::get_offset_of__propIndentSize_18(),
	TraceSection_t1057220406_StaticFields::get_offset_of__propUseGlobalLock_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2164 = { sizeof (TypedElement_t4034655484), -1, sizeof(TypedElement_t4034655484_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2164[5] = 
{
	TypedElement_t4034655484_StaticFields::get_offset_of__propTypeName_15(),
	TypedElement_t4034655484_StaticFields::get_offset_of__propInitData_16(),
	TypedElement_t4034655484::get_offset_of__properties_17(),
	TypedElement_t4034655484::get_offset_of__runtimeObject_18(),
	TypedElement_t4034655484::get_offset_of__baseType_19(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2165 = { sizeof (XmlWriterTraceListener_t1947709591), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2165[3] = 
{
	XmlWriterTraceListener_t1947709591::get_offset_of_strBldr_10(),
	XmlWriterTraceListener_t1947709591::get_offset_of_xmlBlobWriter_11(),
	XmlWriterTraceListener_t1947709591::get_offset_of_shouldRespectFilterOnTraceTransfer_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2166 = { sizeof (TraceUtils_t1563802540), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2167 = { sizeof (ConfigurationManagerInternalFactory_t3801022026), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2168 = { sizeof (Instance_t3259527665), -1, sizeof(Instance_t3259527665_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2168[1] = 
{
	Instance_t3259527665_StaticFields::get_offset_of_SetConfigurationSystemInProgress_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2169 = { sizeof (DefaultTraceListener_t1568159610), -1, sizeof(DefaultTraceListener_t1568159610_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2169[5] = 
{
	DefaultTraceListener_t1568159610_StaticFields::get_offset_of_OnWin32_9(),
	DefaultTraceListener_t1568159610_StaticFields::get_offset_of_MonoTracePrefix_10(),
	DefaultTraceListener_t1568159610_StaticFields::get_offset_of_MonoTraceFile_11(),
	DefaultTraceListener_t1568159610::get_offset_of_logFileName_12(),
	DefaultTraceListener_t1568159610::get_offset_of_assertUiEnabled_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2170 = { sizeof (DiagnosticsConfigurationHandler_t610492850), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2170[2] = 
{
	DiagnosticsConfigurationHandler_t610492850::get_offset_of_configValues_0(),
	DiagnosticsConfigurationHandler_t610492850::get_offset_of_elementHandlers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2171 = { sizeof (ElementHandler_t1009623312), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2172 = { sizeof (EventLog_t681067562), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2172[3] = 
{
	EventLog_t681067562::get_offset_of_source_4(),
	EventLog_t681067562::get_offset_of_doRaiseEvents_5(),
	EventLog_t681067562::get_offset_of_Impl_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2173 = { sizeof (EventLogImpl_t3456077238), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2174 = { sizeof (EventLogInstaller_t4025365612), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2175 = { sizeof (EventLogTraceListener_t2981657285), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2175[2] = 
{
	EventLogTraceListener_t2981657285::get_offset_of_event_log_9(),
	EventLogTraceListener_t2981657285::get_offset_of_name_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2176 = { sizeof (MonitoringDescriptionAttribute_t1660295144), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2177 = { sizeof (TraceImplSettings_t1186465586), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2177[3] = 
{
	TraceImplSettings_t1186465586::get_offset_of_AutoFlush_0(),
	TraceImplSettings_t1186465586::get_offset_of_IndentSize_1(),
	TraceImplSettings_t1186465586::get_offset_of_Listeners_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2178 = { sizeof (TraceSourceInfo_t8795084), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2178[3] = 
{
	TraceSourceInfo_t8795084::get_offset_of_name_0(),
	TraceSourceInfo_t8795084::get_offset_of_levels_1(),
	TraceSourceInfo_t8795084::get_offset_of_listeners_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2179 = { sizeof (ExcludeFromCodeCoverageAttribute_t1738743065), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2180 = { sizeof (ArrayConverter_t2804512129), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2181 = { sizeof (ArraySubsetEnumerator_t764103185), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2181[3] = 
{
	ArraySubsetEnumerator_t764103185::get_offset_of_array_0(),
	ArraySubsetEnumerator_t764103185::get_offset_of_total_1(),
	ArraySubsetEnumerator_t764103185::get_offset_of_current_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2182 = { sizeof (AttributeCollection_t1925812292), -1, sizeof(AttributeCollection_t1925812292_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2182[6] = 
{
	AttributeCollection_t1925812292_StaticFields::get_offset_of_Empty_0(),
	AttributeCollection_t1925812292_StaticFields::get_offset_of__defaultAttributes_1(),
	AttributeCollection_t1925812292::get_offset_of__attributes_2(),
	AttributeCollection_t1925812292_StaticFields::get_offset_of_internalSyncObject_3(),
	AttributeCollection_t1925812292::get_offset_of__foundAttributeTypes_4(),
	AttributeCollection_t1925812292::get_offset_of__index_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2183 = { sizeof (AttributeEntry_t168441916)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2183[2] = 
{
	AttributeEntry_t168441916::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	AttributeEntry_t168441916::get_offset_of_index_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2184 = { sizeof (BooleanConverter_t284715810), -1, sizeof(BooleanConverter_t284715810_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2184[1] = 
{
	BooleanConverter_t284715810_StaticFields::get_offset_of_values_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2185 = { sizeof (BrowsableAttribute_t2487167291), -1, sizeof(BrowsableAttribute_t2487167291_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2185[4] = 
{
	BrowsableAttribute_t2487167291_StaticFields::get_offset_of_Yes_0(),
	BrowsableAttribute_t2487167291_StaticFields::get_offset_of_No_1(),
	BrowsableAttribute_t2487167291_StaticFields::get_offset_of_Default_2(),
	BrowsableAttribute_t2487167291::get_offset_of_browsable_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2186 = { sizeof (ByteConverter_t1265255600), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2187 = { sizeof (CharConverter_t437233350), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2188 = { sizeof (CollectionConverter_t2459375096), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2189 = { sizeof (Component_t2826673791), -1, sizeof(Component_t2826673791_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2189[3] = 
{
	Component_t2826673791_StaticFields::get_offset_of_EventDisposed_1(),
	Component_t2826673791::get_offset_of_site_2(),
	Component_t2826673791::get_offset_of_events_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2190 = { sizeof (ComponentCollection_t737017907), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2191 = { sizeof (ComponentConverter_t3121608223), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2192 = { sizeof (CultureInfoConverter_t2239982248), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2192[1] = 
{
	CultureInfoConverter_t2239982248::get_offset_of_values_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2193 = { sizeof (CultureComparer_t1185978443), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2193[1] = 
{
	CultureComparer_t1185978443::get_offset_of_converter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2194 = { sizeof (CultureInfoMapper_t26447631), -1, sizeof(CultureInfoMapper_t26447631_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2194[1] = 
{
	CultureInfoMapper_t26447631_StaticFields::get_offset_of_cultureInfoNameMap_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2195 = { sizeof (CustomTypeDescriptor_t1720788626), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2195[1] = 
{
	CustomTypeDescriptor_t1720788626::get_offset_of__parent_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2196 = { sizeof (DateTimeConverter_t2436647419), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2197 = { sizeof (DateTimeOffsetConverter_t2176982818), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2198 = { sizeof (DecimalConverter_t1618403211), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2199 = { sizeof (DefaultEventAttribute_t1079704873), -1, sizeof(DefaultEventAttribute_t1079704873_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2199[2] = 
{
	DefaultEventAttribute_t1079704873::get_offset_of_name_0(),
	DefaultEventAttribute_t1079704873_StaticFields::get_offset_of_Default_1(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
