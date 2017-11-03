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

// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t2716208158;
// System.Collections.Hashtable
struct Hashtable_t909839986;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t4229094479;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t633582367;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.StringComparer
struct StringComparer_t1574862926;
// System.Collections.Specialized.ListDictionary
struct ListDictionary_t3458713452;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t2725637098;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t3053042509;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3166009492;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.Type[]
struct TypeU5BU5D_t1664964607;
// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2034248631;
// System.Collections.IComparer
struct IComparer_t3952557350;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1980576455;
// System.String
struct String_t;
// System.ComponentModel.ReferenceConverter
struct ReferenceConverter_t3131270729;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t594940201;
// System.ComponentModel.Design.ITypeDescriptorFilterService
struct ITypeDescriptorFilterService_t3228556567;
// System.Collections.ICollection
struct ICollection_t91669223;
// System.ComponentModel.WeakHashtable
struct WeakHashtable_t1679685894;
// System.Diagnostics.BooleanSwitch
struct BooleanSwitch_t1490001656;
// System.Guid[]
struct GuidU5BU5D_t3556289988;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t456069287;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t3729801536;
// System.ComponentModel.EventHandlerList/ListEntry
struct ListEntry_t385037026;
// System.ComponentModel.Component
struct Component_t2826673791;
// System.ComponentModel.EventDescriptor[]
struct EventDescriptorU5BU5D_t2599422448;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Delegate
struct Delegate_t3022476291;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t1975884510;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t2217612696;
// System.IntPtr[]
struct IntPtrU5BU5D_t169632028;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t2049367471;
// System.Void
struct Void_t1841601450;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2510243513;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t4250402154;
// System.ComponentModel.IExtenderProvider
struct IExtenderProvider_t791831889;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2438624375;
// System.ComponentModel.TypeDescriptor/TypeDescriptionNode
struct TypeDescriptionNode_t2784648617;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1572802995;
// System.Collections.Hashtable/bucket[]
struct bucketU5BU5D_t2149607518;
// System.Delegate[]
struct DelegateU5BU5D_t1606206610;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t191679357;
// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t2077477224;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

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
#ifndef DICTIONARYNODE_T2725637098_H
#define DICTIONARYNODE_T2725637098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/DictionaryNode
struct  DictionaryNode_t2725637098  : public RuntimeObject
{
public:
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::key
	RuntimeObject * ___key_0;
	// System.Object System.Collections.Specialized.ListDictionary/DictionaryNode::value
	RuntimeObject * ___value_1;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/DictionaryNode::next
	DictionaryNode_t2725637098 * ___next_2;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(DictionaryNode_t2725637098, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(DictionaryNode_t2725637098, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}

	inline static int32_t get_offset_of_next_2() { return static_cast<int32_t>(offsetof(DictionaryNode_t2725637098, ___next_2)); }
	inline DictionaryNode_t2725637098 * get_next_2() const { return ___next_2; }
	inline DictionaryNode_t2725637098 ** get_address_of_next_2() { return &___next_2; }
	inline void set_next_2(DictionaryNode_t2725637098 * value)
	{
		___next_2 = value;
		Il2CppCodeGenWriteBarrier((&___next_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DICTIONARYNODE_T2725637098_H
#ifndef NAMEOBJECTCOLLECTIONBASE_T2034248631_H
#define NAMEOBJECTCOLLECTIONBASE_T2034248631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase
struct  NameObjectCollectionBase_t2034248631  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t4252133567 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t909839986 * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t4229094479 * ____nullKeyEntry_4;
	// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::_keys
	KeysCollection_t633582367 * ____keys_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t228987430 * ____serializationInfo_6;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_7;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject * ____syncRoot_8;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ____entriesArray_1)); }
	inline ArrayList_t4252133567 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t4252133567 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t4252133567 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____entriesArray_1), value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((&____keyComparer_2), value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ____entriesTable_3)); }
	inline Hashtable_t909839986 * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t909839986 ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t909839986 * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((&____entriesTable_3), value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ____nullKeyEntry_4)); }
	inline NameObjectEntry_t4229094479 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_t4229094479 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_t4229094479 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((&____nullKeyEntry_4), value);
	}

	inline static int32_t get_offset_of__keys_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ____keys_5)); }
	inline KeysCollection_t633582367 * get__keys_5() const { return ____keys_5; }
	inline KeysCollection_t633582367 ** get_address_of__keys_5() { return &____keys_5; }
	inline void set__keys_5(KeysCollection_t633582367 * value)
	{
		____keys_5 = value;
		Il2CppCodeGenWriteBarrier((&____keys_5), value);
	}

	inline static int32_t get_offset_of__serializationInfo_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ____serializationInfo_6)); }
	inline SerializationInfo_t228987430 * get__serializationInfo_6() const { return ____serializationInfo_6; }
	inline SerializationInfo_t228987430 ** get_address_of__serializationInfo_6() { return &____serializationInfo_6; }
	inline void set__serializationInfo_6(SerializationInfo_t228987430 * value)
	{
		____serializationInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____serializationInfo_6), value);
	}

	inline static int32_t get_offset_of__version_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ____version_7)); }
	inline int32_t get__version_7() const { return ____version_7; }
	inline int32_t* get_address_of__version_7() { return &____version_7; }
	inline void set__version_7(int32_t value)
	{
		____version_7 = value;
	}

	inline static int32_t get_offset_of__syncRoot_8() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631, ____syncRoot_8)); }
	inline RuntimeObject * get__syncRoot_8() const { return ____syncRoot_8; }
	inline RuntimeObject ** get_address_of__syncRoot_8() { return &____syncRoot_8; }
	inline void set__syncRoot_8(RuntimeObject * value)
	{
		____syncRoot_8 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_8), value);
	}
};

struct NameObjectCollectionBase_t2034248631_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t1574862926 * ___defaultComparer_9;

public:
	inline static int32_t get_offset_of_defaultComparer_9() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t2034248631_StaticFields, ___defaultComparer_9)); }
	inline StringComparer_t1574862926 * get_defaultComparer_9() const { return ___defaultComparer_9; }
	inline StringComparer_t1574862926 ** get_address_of_defaultComparer_9() { return &___defaultComparer_9; }
	inline void set_defaultComparer_9(StringComparer_t1574862926 * value)
	{
		___defaultComparer_9 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTCOLLECTIONBASE_T2034248631_H
#ifndef NODEKEYVALUEENUMERATOR_T79932263_H
#define NODEKEYVALUEENUMERATOR_T79932263_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator
struct  NodeKeyValueEnumerator_t79932263  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::list
	ListDictionary_t3458713452 * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::current
	DictionaryNode_t2725637098 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::isKeys
	bool ___isKeys_3;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator::start
	bool ___start_4;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t79932263, ___list_0)); }
	inline ListDictionary_t3458713452 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t3458713452 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t3458713452 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t79932263, ___current_1)); }
	inline DictionaryNode_t2725637098 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t2725637098 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t2725637098 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t79932263, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_isKeys_3() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t79932263, ___isKeys_3)); }
	inline bool get_isKeys_3() const { return ___isKeys_3; }
	inline bool* get_address_of_isKeys_3() { return &___isKeys_3; }
	inline void set_isKeys_3(bool value)
	{
		___isKeys_3 = value;
	}

	inline static int32_t get_offset_of_start_4() { return static_cast<int32_t>(offsetof(NodeKeyValueEnumerator_t79932263, ___start_4)); }
	inline bool get_start_4() const { return ___start_4; }
	inline bool* get_address_of_start_4() { return &___start_4; }
	inline void set_start_4(bool value)
	{
		___start_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEKEYVALUEENUMERATOR_T79932263_H
#ifndef NODEENUMERATOR_T292699876_H
#define NODEENUMERATOR_T292699876_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeEnumerator
struct  NodeEnumerator_t292699876  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeEnumerator::list
	ListDictionary_t3458713452 * ___list_0;
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary/NodeEnumerator::current
	DictionaryNode_t2725637098 * ___current_1;
	// System.Int32 System.Collections.Specialized.ListDictionary/NodeEnumerator::version
	int32_t ___version_2;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeEnumerator::start
	bool ___start_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeEnumerator_t292699876, ___list_0)); }
	inline ListDictionary_t3458713452 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t3458713452 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t3458713452 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_current_1() { return static_cast<int32_t>(offsetof(NodeEnumerator_t292699876, ___current_1)); }
	inline DictionaryNode_t2725637098 * get_current_1() const { return ___current_1; }
	inline DictionaryNode_t2725637098 ** get_address_of_current_1() { return &___current_1; }
	inline void set_current_1(DictionaryNode_t2725637098 * value)
	{
		___current_1 = value;
		Il2CppCodeGenWriteBarrier((&___current_1), value);
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(NodeEnumerator_t292699876, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(NodeEnumerator_t292699876, ___start_3)); }
	inline bool get_start_3() const { return ___start_3; }
	inline bool* get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(bool value)
	{
		___start_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEENUMERATOR_T292699876_H
#ifndef NODEKEYVALUECOLLECTION_T2980500098_H
#define NODEKEYVALUECOLLECTION_T2980500098_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary/NodeKeyValueCollection
struct  NodeKeyValueCollection_t2980500098  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::list
	ListDictionary_t3458713452 * ___list_0;
	// System.Boolean System.Collections.Specialized.ListDictionary/NodeKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t2980500098, ___list_0)); }
	inline ListDictionary_t3458713452 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t3458713452 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t3458713452 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(NodeKeyValueCollection_t2980500098, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NODEKEYVALUECOLLECTION_T2980500098_H
#ifndef REFLECTEDTYPEDATA_T2908979506_H
#define REFLECTEDTYPEDATA_T2908979506_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData
struct  ReflectedTypeData_t2908979506  : public RuntimeObject
{
public:
	// System.Type System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_type
	Type_t * ____type_0;
	// System.ComponentModel.AttributeCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_attributes
	AttributeCollection_t1925812292 * ____attributes_1;
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_events
	EventDescriptorCollection_t3053042509 * ____events_2;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_properties
	PropertyDescriptorCollection_t3166009492 * ____properties_3;
	// System.ComponentModel.TypeConverter System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_converter
	TypeConverter_t745995970 * ____converter_4;
	// System.Object[] System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editors
	ObjectU5BU5D_t3614634134* ____editors_5;
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editorTypes
	TypeU5BU5D_t1664964607* ____editorTypes_6;
	// System.Int32 System.ComponentModel.ReflectTypeDescriptionProvider/ReflectedTypeData::_editorCount
	int32_t ____editorCount_7;

public:
	inline static int32_t get_offset_of__type_0() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t2908979506, ____type_0)); }
	inline Type_t * get__type_0() const { return ____type_0; }
	inline Type_t ** get_address_of__type_0() { return &____type_0; }
	inline void set__type_0(Type_t * value)
	{
		____type_0 = value;
		Il2CppCodeGenWriteBarrier((&____type_0), value);
	}

	inline static int32_t get_offset_of__attributes_1() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t2908979506, ____attributes_1)); }
	inline AttributeCollection_t1925812292 * get__attributes_1() const { return ____attributes_1; }
	inline AttributeCollection_t1925812292 ** get_address_of__attributes_1() { return &____attributes_1; }
	inline void set__attributes_1(AttributeCollection_t1925812292 * value)
	{
		____attributes_1 = value;
		Il2CppCodeGenWriteBarrier((&____attributes_1), value);
	}

	inline static int32_t get_offset_of__events_2() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t2908979506, ____events_2)); }
	inline EventDescriptorCollection_t3053042509 * get__events_2() const { return ____events_2; }
	inline EventDescriptorCollection_t3053042509 ** get_address_of__events_2() { return &____events_2; }
	inline void set__events_2(EventDescriptorCollection_t3053042509 * value)
	{
		____events_2 = value;
		Il2CppCodeGenWriteBarrier((&____events_2), value);
	}

	inline static int32_t get_offset_of__properties_3() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t2908979506, ____properties_3)); }
	inline PropertyDescriptorCollection_t3166009492 * get__properties_3() const { return ____properties_3; }
	inline PropertyDescriptorCollection_t3166009492 ** get_address_of__properties_3() { return &____properties_3; }
	inline void set__properties_3(PropertyDescriptorCollection_t3166009492 * value)
	{
		____properties_3 = value;
		Il2CppCodeGenWriteBarrier((&____properties_3), value);
	}

	inline static int32_t get_offset_of__converter_4() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t2908979506, ____converter_4)); }
	inline TypeConverter_t745995970 * get__converter_4() const { return ____converter_4; }
	inline TypeConverter_t745995970 ** get_address_of__converter_4() { return &____converter_4; }
	inline void set__converter_4(TypeConverter_t745995970 * value)
	{
		____converter_4 = value;
		Il2CppCodeGenWriteBarrier((&____converter_4), value);
	}

	inline static int32_t get_offset_of__editors_5() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t2908979506, ____editors_5)); }
	inline ObjectU5BU5D_t3614634134* get__editors_5() const { return ____editors_5; }
	inline ObjectU5BU5D_t3614634134** get_address_of__editors_5() { return &____editors_5; }
	inline void set__editors_5(ObjectU5BU5D_t3614634134* value)
	{
		____editors_5 = value;
		Il2CppCodeGenWriteBarrier((&____editors_5), value);
	}

	inline static int32_t get_offset_of__editorTypes_6() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t2908979506, ____editorTypes_6)); }
	inline TypeU5BU5D_t1664964607* get__editorTypes_6() const { return ____editorTypes_6; }
	inline TypeU5BU5D_t1664964607** get_address_of__editorTypes_6() { return &____editorTypes_6; }
	inline void set__editorTypes_6(TypeU5BU5D_t1664964607* value)
	{
		____editorTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&____editorTypes_6), value);
	}

	inline static int32_t get_offset_of__editorCount_7() { return static_cast<int32_t>(offsetof(ReflectedTypeData_t2908979506, ____editorCount_7)); }
	inline int32_t get__editorCount_7() const { return ____editorCount_7; }
	inline int32_t* get_address_of__editorCount_7() { return &____editorCount_7; }
	inline void set__editorCount_7(int32_t value)
	{
		____editorCount_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTEDTYPEDATA_T2908979506_H
#ifndef KEYSCOLLECTION_T633582367_H
#define KEYSCOLLECTION_T633582367_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct  KeysCollection_t633582367  : public RuntimeObject
{
public:
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/KeysCollection::_coll
	NameObjectCollectionBase_t2034248631 * ____coll_0;

public:
	inline static int32_t get_offset_of__coll_0() { return static_cast<int32_t>(offsetof(KeysCollection_t633582367, ____coll_0)); }
	inline NameObjectCollectionBase_t2034248631 * get__coll_0() const { return ____coll_0; }
	inline NameObjectCollectionBase_t2034248631 ** get_address_of__coll_0() { return &____coll_0; }
	inline void set__coll_0(NameObjectCollectionBase_t2034248631 * value)
	{
		____coll_0 = value;
		Il2CppCodeGenWriteBarrier((&____coll_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYSCOLLECTION_T633582367_H
#ifndef COMPATIBLECOMPARER_T452154975_H
#define COMPATIBLECOMPARER_T452154975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.CompatibleComparer
struct  CompatibleComparer_t452154975  : public RuntimeObject
{
public:
	// System.Collections.IComparer System.Collections.Specialized.CompatibleComparer::_comparer
	RuntimeObject* ____comparer_0;
	// System.Collections.IHashCodeProvider System.Collections.Specialized.CompatibleComparer::_hcp
	RuntimeObject* ____hcp_2;

public:
	inline static int32_t get_offset_of__comparer_0() { return static_cast<int32_t>(offsetof(CompatibleComparer_t452154975, ____comparer_0)); }
	inline RuntimeObject* get__comparer_0() const { return ____comparer_0; }
	inline RuntimeObject** get_address_of__comparer_0() { return &____comparer_0; }
	inline void set__comparer_0(RuntimeObject* value)
	{
		____comparer_0 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_0), value);
	}

	inline static int32_t get_offset_of__hcp_2() { return static_cast<int32_t>(offsetof(CompatibleComparer_t452154975, ____hcp_2)); }
	inline RuntimeObject* get__hcp_2() const { return ____hcp_2; }
	inline RuntimeObject** get_address_of__hcp_2() { return &____hcp_2; }
	inline void set__hcp_2(RuntimeObject* value)
	{
		____hcp_2 = value;
		Il2CppCodeGenWriteBarrier((&____hcp_2), value);
	}
};

struct CompatibleComparer_t452154975_StaticFields
{
public:
	// System.Collections.IComparer modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultComparer
	RuntimeObject* ___defaultComparer_1;
	// System.Collections.IHashCodeProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.CompatibleComparer::defaultHashProvider
	RuntimeObject* ___defaultHashProvider_3;

public:
	inline static int32_t get_offset_of_defaultComparer_1() { return static_cast<int32_t>(offsetof(CompatibleComparer_t452154975_StaticFields, ___defaultComparer_1)); }
	inline RuntimeObject* get_defaultComparer_1() const { return ___defaultComparer_1; }
	inline RuntimeObject** get_address_of_defaultComparer_1() { return &___defaultComparer_1; }
	inline void set_defaultComparer_1(RuntimeObject* value)
	{
		___defaultComparer_1 = value;
		Il2CppCodeGenWriteBarrier((&___defaultComparer_1), value);
	}

	inline static int32_t get_offset_of_defaultHashProvider_3() { return static_cast<int32_t>(offsetof(CompatibleComparer_t452154975_StaticFields, ___defaultHashProvider_3)); }
	inline RuntimeObject* get_defaultHashProvider_3() const { return ___defaultHashProvider_3; }
	inline RuntimeObject** get_address_of_defaultHashProvider_3() { return &___defaultHashProvider_3; }
	inline void set_defaultHashProvider_3(RuntimeObject* value)
	{
		___defaultHashProvider_3 = value;
		Il2CppCodeGenWriteBarrier((&___defaultHashProvider_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPATIBLECOMPARER_T452154975_H
#ifndef PROPERTYDESCRIPTORENUMERATOR_T1540050832_H
#define PROPERTYDESCRIPTORENUMERATOR_T1540050832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator
struct  PropertyDescriptorEnumerator_t1540050832  : public RuntimeObject
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::owner
	PropertyDescriptorCollection_t3166009492 * ___owner_0;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection/PropertyDescriptorEnumerator::index
	int32_t ___index_1;

public:
	inline static int32_t get_offset_of_owner_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorEnumerator_t1540050832, ___owner_0)); }
	inline PropertyDescriptorCollection_t3166009492 * get_owner_0() const { return ___owner_0; }
	inline PropertyDescriptorCollection_t3166009492 ** get_address_of_owner_0() { return &___owner_0; }
	inline void set_owner_0(PropertyDescriptorCollection_t3166009492 * value)
	{
		___owner_0 = value;
		Il2CppCodeGenWriteBarrier((&___owner_0), value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorEnumerator_t1540050832, ___index_1)); }
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
#endif // PROPERTYDESCRIPTORENUMERATOR_T1540050832_H
#ifndef NAMEOBJECTENTRY_T4229094479_H
#define NAMEOBJECTENTRY_T4229094479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct  NameObjectEntry_t4229094479  : public RuntimeObject
{
public:
	// System.String System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Key
	String_t* ___Key_0;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry::Value
	RuntimeObject * ___Value_1;

public:
	inline static int32_t get_offset_of_Key_0() { return static_cast<int32_t>(offsetof(NameObjectEntry_t4229094479, ___Key_0)); }
	inline String_t* get_Key_0() const { return ___Key_0; }
	inline String_t** get_address_of_Key_0() { return &___Key_0; }
	inline void set_Key_0(String_t* value)
	{
		___Key_0 = value;
		Il2CppCodeGenWriteBarrier((&___Key_0), value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(NameObjectEntry_t4229094479, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((&___Value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTENTRY_T4229094479_H
#ifndef REFERENCECOMPARER_T324026869_H
#define REFERENCECOMPARER_T324026869_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReferenceConverter/ReferenceComparer
struct  ReferenceComparer_t324026869  : public RuntimeObject
{
public:
	// System.ComponentModel.ReferenceConverter System.ComponentModel.ReferenceConverter/ReferenceComparer::converter
	ReferenceConverter_t3131270729 * ___converter_0;

public:
	inline static int32_t get_offset_of_converter_0() { return static_cast<int32_t>(offsetof(ReferenceComparer_t324026869, ___converter_0)); }
	inline ReferenceConverter_t3131270729 * get_converter_0() const { return ___converter_0; }
	inline ReferenceConverter_t3131270729 ** get_address_of_converter_0() { return &___converter_0; }
	inline void set_converter_0(ReferenceConverter_t3131270729 * value)
	{
		___converter_0 = value;
		Il2CppCodeGenWriteBarrier((&___converter_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFERENCECOMPARER_T324026869_H
#ifndef NAMEOBJECTKEYSENUMERATOR_T1857758119_H
#define NAMEOBJECTKEYSENUMERATOR_T1857758119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator
struct  NameObjectKeysEnumerator_t1857758119  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_pos
	int32_t ____pos_0;
	// System.Collections.Specialized.NameObjectCollectionBase System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_coll
	NameObjectCollectionBase_t2034248631 * ____coll_1;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase/NameObjectKeysEnumerator::_version
	int32_t ____version_2;

public:
	inline static int32_t get_offset_of__pos_0() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t1857758119, ____pos_0)); }
	inline int32_t get__pos_0() const { return ____pos_0; }
	inline int32_t* get_address_of__pos_0() { return &____pos_0; }
	inline void set__pos_0(int32_t value)
	{
		____pos_0 = value;
	}

	inline static int32_t get_offset_of__coll_1() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t1857758119, ____coll_1)); }
	inline NameObjectCollectionBase_t2034248631 * get__coll_1() const { return ____coll_1; }
	inline NameObjectCollectionBase_t2034248631 ** get_address_of__coll_1() { return &____coll_1; }
	inline void set__coll_1(NameObjectCollectionBase_t2034248631 * value)
	{
		____coll_1 = value;
		Il2CppCodeGenWriteBarrier((&____coll_1), value);
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(NameObjectKeysEnumerator_t1857758119, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEOBJECTKEYSENUMERATOR_T1857758119_H
#ifndef MERGEDTYPEDESCRIPTOR_T3445332928_H
#define MERGEDTYPEDESCRIPTOR_T3445332928_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/MergedTypeDescriptor
struct  MergedTypeDescriptor_t3445332928  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::_primary
	RuntimeObject* ____primary_0;
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptor/MergedTypeDescriptor::_secondary
	RuntimeObject* ____secondary_1;

public:
	inline static int32_t get_offset_of__primary_0() { return static_cast<int32_t>(offsetof(MergedTypeDescriptor_t3445332928, ____primary_0)); }
	inline RuntimeObject* get__primary_0() const { return ____primary_0; }
	inline RuntimeObject** get_address_of__primary_0() { return &____primary_0; }
	inline void set__primary_0(RuntimeObject* value)
	{
		____primary_0 = value;
		Il2CppCodeGenWriteBarrier((&____primary_0), value);
	}

	inline static int32_t get_offset_of__secondary_1() { return static_cast<int32_t>(offsetof(MergedTypeDescriptor_t3445332928, ____secondary_1)); }
	inline RuntimeObject* get__secondary_1() const { return ____secondary_1; }
	inline RuntimeObject** get_address_of__secondary_1() { return &____secondary_1; }
	inline void set__secondary_1(RuntimeObject* value)
	{
		____secondary_1 = value;
		Il2CppCodeGenWriteBarrier((&____secondary_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MERGEDTYPEDESCRIPTOR_T3445332928_H
#ifndef MEMBERDESCRIPTORCOMPARER_T3553360933_H
#define MEMBERDESCRIPTORCOMPARER_T3553360933_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer
struct  MemberDescriptorComparer_t3553360933  : public RuntimeObject
{
public:

public:
};

struct MemberDescriptorComparer_t3553360933_StaticFields
{
public:
	// System.ComponentModel.TypeDescriptor/MemberDescriptorComparer System.ComponentModel.TypeDescriptor/MemberDescriptorComparer::Instance
	MemberDescriptorComparer_t3553360933 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(MemberDescriptorComparer_t3553360933_StaticFields, ___Instance_0)); }
	inline MemberDescriptorComparer_t3553360933 * get_Instance_0() const { return ___Instance_0; }
	inline MemberDescriptorComparer_t3553360933 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(MemberDescriptorComparer_t3553360933 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier((&___Instance_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTORCOMPARER_T3553360933_H
#ifndef FILTERCACHEITEM_T42357068_H
#define FILTERCACHEITEM_T42357068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/FilterCacheItem
struct  FilterCacheItem_t42357068  : public RuntimeObject
{
public:
	// System.ComponentModel.Design.ITypeDescriptorFilterService System.ComponentModel.TypeDescriptor/FilterCacheItem::_filterService
	RuntimeObject* ____filterService_0;
	// System.Collections.ICollection System.ComponentModel.TypeDescriptor/FilterCacheItem::FilteredMembers
	RuntimeObject* ___FilteredMembers_1;

public:
	inline static int32_t get_offset_of__filterService_0() { return static_cast<int32_t>(offsetof(FilterCacheItem_t42357068, ____filterService_0)); }
	inline RuntimeObject* get__filterService_0() const { return ____filterService_0; }
	inline RuntimeObject** get_address_of__filterService_0() { return &____filterService_0; }
	inline void set__filterService_0(RuntimeObject* value)
	{
		____filterService_0 = value;
		Il2CppCodeGenWriteBarrier((&____filterService_0), value);
	}

	inline static int32_t get_offset_of_FilteredMembers_1() { return static_cast<int32_t>(offsetof(FilterCacheItem_t42357068, ___FilteredMembers_1)); }
	inline RuntimeObject* get_FilteredMembers_1() const { return ___FilteredMembers_1; }
	inline RuntimeObject** get_address_of_FilteredMembers_1() { return &___FilteredMembers_1; }
	inline void set_FilteredMembers_1(RuntimeObject* value)
	{
		___FilteredMembers_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilteredMembers_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILTERCACHEITEM_T42357068_H
#ifndef TYPEDESCRIPTORCOMOBJECT_T2250835238_H
#define TYPEDESCRIPTORCOMOBJECT_T2250835238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptorComObject
struct  TypeDescriptorComObject_t2250835238  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTORCOMOBJECT_T2250835238_H
#ifndef TYPEDESCRIPTORINTERFACE_T2613274749_H
#define TYPEDESCRIPTORINTERFACE_T2613274749_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptorInterface
struct  TypeDescriptorInterface_t2613274749  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTORINTERFACE_T2613274749_H
#ifndef WEAKKEYCOMPARER_T3958653828_H
#define WEAKKEYCOMPARER_T3958653828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakHashtable/WeakKeyComparer
struct  WeakKeyComparer_t3958653828  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKKEYCOMPARER_T3958653828_H
#ifndef STANDARDVALUESCOLLECTION_T191679357_H
#define STANDARDVALUESCOLLECTION_T191679357_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverter/StandardValuesCollection
struct  StandardValuesCollection_t191679357  : public RuntimeObject
{
public:
	// System.Collections.ICollection System.ComponentModel.TypeConverter/StandardValuesCollection::values
	RuntimeObject* ___values_0;
	// System.Array System.ComponentModel.TypeConverter/StandardValuesCollection::valueArray
	RuntimeArray * ___valueArray_1;

public:
	inline static int32_t get_offset_of_values_0() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t191679357, ___values_0)); }
	inline RuntimeObject* get_values_0() const { return ___values_0; }
	inline RuntimeObject** get_address_of_values_0() { return &___values_0; }
	inline void set_values_0(RuntimeObject* value)
	{
		___values_0 = value;
		Il2CppCodeGenWriteBarrier((&___values_0), value);
	}

	inline static int32_t get_offset_of_valueArray_1() { return static_cast<int32_t>(offsetof(StandardValuesCollection_t191679357, ___valueArray_1)); }
	inline RuntimeArray * get_valueArray_1() const { return ___valueArray_1; }
	inline RuntimeArray ** get_address_of_valueArray_1() { return &___valueArray_1; }
	inline void set_valueArray_1(RuntimeArray * value)
	{
		___valueArray_1 = value;
		Il2CppCodeGenWriteBarrier((&___valueArray_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STANDARDVALUESCOLLECTION_T191679357_H
#ifndef HYBRIDDICTIONARY_T290043810_H
#define HYBRIDDICTIONARY_T290043810_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.HybridDictionary
struct  HybridDictionary_t290043810  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary System.Collections.Specialized.HybridDictionary::list
	ListDictionary_t3458713452 * ___list_0;
	// System.Collections.Hashtable System.Collections.Specialized.HybridDictionary::hashtable
	Hashtable_t909839986 * ___hashtable_1;
	// System.Boolean System.Collections.Specialized.HybridDictionary::caseInsensitive
	bool ___caseInsensitive_2;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(HybridDictionary_t290043810, ___list_0)); }
	inline ListDictionary_t3458713452 * get_list_0() const { return ___list_0; }
	inline ListDictionary_t3458713452 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ListDictionary_t3458713452 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of_hashtable_1() { return static_cast<int32_t>(offsetof(HybridDictionary_t290043810, ___hashtable_1)); }
	inline Hashtable_t909839986 * get_hashtable_1() const { return ___hashtable_1; }
	inline Hashtable_t909839986 ** get_address_of_hashtable_1() { return &___hashtable_1; }
	inline void set_hashtable_1(Hashtable_t909839986 * value)
	{
		___hashtable_1 = value;
		Il2CppCodeGenWriteBarrier((&___hashtable_1), value);
	}

	inline static int32_t get_offset_of_caseInsensitive_2() { return static_cast<int32_t>(offsetof(HybridDictionary_t290043810, ___caseInsensitive_2)); }
	inline bool get_caseInsensitive_2() const { return ___caseInsensitive_2; }
	inline bool* get_address_of_caseInsensitive_2() { return &___caseInsensitive_2; }
	inline void set_caseInsensitive_2(bool value)
	{
		___caseInsensitive_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HYBRIDDICTIONARY_T290043810_H
#ifndef LISTDICTIONARY_T3458713452_H
#define LISTDICTIONARY_T3458713452_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.ListDictionary
struct  ListDictionary_t3458713452  : public RuntimeObject
{
public:
	// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::head
	DictionaryNode_t2725637098 * ___head_0;
	// System.Int32 System.Collections.Specialized.ListDictionary::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Specialized.ListDictionary::count
	int32_t ___count_2;
	// System.Collections.IComparer System.Collections.Specialized.ListDictionary::comparer
	RuntimeObject* ___comparer_3;
	// System.Object System.Collections.Specialized.ListDictionary::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(ListDictionary_t3458713452, ___head_0)); }
	inline DictionaryNode_t2725637098 * get_head_0() const { return ___head_0; }
	inline DictionaryNode_t2725637098 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(DictionaryNode_t2725637098 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(ListDictionary_t3458713452, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(ListDictionary_t3458713452, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_comparer_3() { return static_cast<int32_t>(offsetof(ListDictionary_t3458713452, ___comparer_3)); }
	inline RuntimeObject* get_comparer_3() const { return ___comparer_3; }
	inline RuntimeObject** get_address_of_comparer_3() { return &___comparer_3; }
	inline void set_comparer_3(RuntimeObject* value)
	{
		___comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_3), value);
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(ListDictionary_t3458713452, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTDICTIONARY_T3458713452_H
#ifndef TYPEDESCRIPTOR_T3595688691_H
#define TYPEDESCRIPTOR_T3595688691_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor
struct  TypeDescriptor_t3595688691  : public RuntimeObject
{
public:

public:
};

struct TypeDescriptor_t3595688691_StaticFields
{
public:
	// System.ComponentModel.WeakHashtable System.ComponentModel.TypeDescriptor::_providerTable
	WeakHashtable_t1679685894 * ____providerTable_0;
	// System.Collections.Hashtable System.ComponentModel.TypeDescriptor::_providerTypeTable
	Hashtable_t909839986 * ____providerTypeTable_1;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.TypeDescriptor::_defaultProviders
	Hashtable_t909839986 * ____defaultProviders_2;
	// System.Int32 System.ComponentModel.TypeDescriptor::_metadataVersion
	int32_t ____metadataVersion_3;
	// System.Int32 System.ComponentModel.TypeDescriptor::_collisionIndex
	int32_t ____collisionIndex_4;
	// System.Diagnostics.BooleanSwitch System.ComponentModel.TypeDescriptor::TraceDescriptor
	BooleanSwitch_t1490001656 * ___TraceDescriptor_5;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineInitializeKeys
	GuidU5BU5D_t3556289988* ____pipelineInitializeKeys_6;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineMergeKeys
	GuidU5BU5D_t3556289988* ____pipelineMergeKeys_7;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineFilterKeys
	GuidU5BU5D_t3556289988* ____pipelineFilterKeys_8;
	// System.Guid[] System.ComponentModel.TypeDescriptor::_pipelineAttributeFilterKeys
	GuidU5BU5D_t3556289988* ____pipelineAttributeFilterKeys_9;
	// System.Object System.ComponentModel.TypeDescriptor::_internalSyncObject
	RuntimeObject * ____internalSyncObject_10;
	// System.ComponentModel.RefreshEventHandler System.ComponentModel.TypeDescriptor::Refreshed
	RefreshEventHandler_t456069287 * ___Refreshed_11;

public:
	inline static int32_t get_offset_of__providerTable_0() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ____providerTable_0)); }
	inline WeakHashtable_t1679685894 * get__providerTable_0() const { return ____providerTable_0; }
	inline WeakHashtable_t1679685894 ** get_address_of__providerTable_0() { return &____providerTable_0; }
	inline void set__providerTable_0(WeakHashtable_t1679685894 * value)
	{
		____providerTable_0 = value;
		Il2CppCodeGenWriteBarrier((&____providerTable_0), value);
	}

	inline static int32_t get_offset_of__providerTypeTable_1() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ____providerTypeTable_1)); }
	inline Hashtable_t909839986 * get__providerTypeTable_1() const { return ____providerTypeTable_1; }
	inline Hashtable_t909839986 ** get_address_of__providerTypeTable_1() { return &____providerTypeTable_1; }
	inline void set__providerTypeTable_1(Hashtable_t909839986 * value)
	{
		____providerTypeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&____providerTypeTable_1), value);
	}

	inline static int32_t get_offset_of__defaultProviders_2() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ____defaultProviders_2)); }
	inline Hashtable_t909839986 * get__defaultProviders_2() const { return ____defaultProviders_2; }
	inline Hashtable_t909839986 ** get_address_of__defaultProviders_2() { return &____defaultProviders_2; }
	inline void set__defaultProviders_2(Hashtable_t909839986 * value)
	{
		____defaultProviders_2 = value;
		Il2CppCodeGenWriteBarrier((&____defaultProviders_2), value);
	}

	inline static int32_t get_offset_of__metadataVersion_3() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ____metadataVersion_3)); }
	inline int32_t get__metadataVersion_3() const { return ____metadataVersion_3; }
	inline int32_t* get_address_of__metadataVersion_3() { return &____metadataVersion_3; }
	inline void set__metadataVersion_3(int32_t value)
	{
		____metadataVersion_3 = value;
	}

	inline static int32_t get_offset_of__collisionIndex_4() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ____collisionIndex_4)); }
	inline int32_t get__collisionIndex_4() const { return ____collisionIndex_4; }
	inline int32_t* get_address_of__collisionIndex_4() { return &____collisionIndex_4; }
	inline void set__collisionIndex_4(int32_t value)
	{
		____collisionIndex_4 = value;
	}

	inline static int32_t get_offset_of_TraceDescriptor_5() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ___TraceDescriptor_5)); }
	inline BooleanSwitch_t1490001656 * get_TraceDescriptor_5() const { return ___TraceDescriptor_5; }
	inline BooleanSwitch_t1490001656 ** get_address_of_TraceDescriptor_5() { return &___TraceDescriptor_5; }
	inline void set_TraceDescriptor_5(BooleanSwitch_t1490001656 * value)
	{
		___TraceDescriptor_5 = value;
		Il2CppCodeGenWriteBarrier((&___TraceDescriptor_5), value);
	}

	inline static int32_t get_offset_of__pipelineInitializeKeys_6() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ____pipelineInitializeKeys_6)); }
	inline GuidU5BU5D_t3556289988* get__pipelineInitializeKeys_6() const { return ____pipelineInitializeKeys_6; }
	inline GuidU5BU5D_t3556289988** get_address_of__pipelineInitializeKeys_6() { return &____pipelineInitializeKeys_6; }
	inline void set__pipelineInitializeKeys_6(GuidU5BU5D_t3556289988* value)
	{
		____pipelineInitializeKeys_6 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineInitializeKeys_6), value);
	}

	inline static int32_t get_offset_of__pipelineMergeKeys_7() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ____pipelineMergeKeys_7)); }
	inline GuidU5BU5D_t3556289988* get__pipelineMergeKeys_7() const { return ____pipelineMergeKeys_7; }
	inline GuidU5BU5D_t3556289988** get_address_of__pipelineMergeKeys_7() { return &____pipelineMergeKeys_7; }
	inline void set__pipelineMergeKeys_7(GuidU5BU5D_t3556289988* value)
	{
		____pipelineMergeKeys_7 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineMergeKeys_7), value);
	}

	inline static int32_t get_offset_of__pipelineFilterKeys_8() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ____pipelineFilterKeys_8)); }
	inline GuidU5BU5D_t3556289988* get__pipelineFilterKeys_8() const { return ____pipelineFilterKeys_8; }
	inline GuidU5BU5D_t3556289988** get_address_of__pipelineFilterKeys_8() { return &____pipelineFilterKeys_8; }
	inline void set__pipelineFilterKeys_8(GuidU5BU5D_t3556289988* value)
	{
		____pipelineFilterKeys_8 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineFilterKeys_8), value);
	}

	inline static int32_t get_offset_of__pipelineAttributeFilterKeys_9() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ____pipelineAttributeFilterKeys_9)); }
	inline GuidU5BU5D_t3556289988* get__pipelineAttributeFilterKeys_9() const { return ____pipelineAttributeFilterKeys_9; }
	inline GuidU5BU5D_t3556289988** get_address_of__pipelineAttributeFilterKeys_9() { return &____pipelineAttributeFilterKeys_9; }
	inline void set__pipelineAttributeFilterKeys_9(GuidU5BU5D_t3556289988* value)
	{
		____pipelineAttributeFilterKeys_9 = value;
		Il2CppCodeGenWriteBarrier((&____pipelineAttributeFilterKeys_9), value);
	}

	inline static int32_t get_offset_of__internalSyncObject_10() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ____internalSyncObject_10)); }
	inline RuntimeObject * get__internalSyncObject_10() const { return ____internalSyncObject_10; }
	inline RuntimeObject ** get_address_of__internalSyncObject_10() { return &____internalSyncObject_10; }
	inline void set__internalSyncObject_10(RuntimeObject * value)
	{
		____internalSyncObject_10 = value;
		Il2CppCodeGenWriteBarrier((&____internalSyncObject_10), value);
	}

	inline static int32_t get_offset_of_Refreshed_11() { return static_cast<int32_t>(offsetof(TypeDescriptor_t3595688691_StaticFields, ___Refreshed_11)); }
	inline RefreshEventHandler_t456069287 * get_Refreshed_11() const { return ___Refreshed_11; }
	inline RefreshEventHandler_t456069287 ** get_address_of_Refreshed_11() { return &___Refreshed_11; }
	inline void set_Refreshed_11(RefreshEventHandler_t456069287 * value)
	{
		___Refreshed_11 = value;
		Il2CppCodeGenWriteBarrier((&___Refreshed_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTOR_T3595688691_H
#ifndef INSTANCEDESCRIPTOR_T1404033120_H
#define INSTANCEDESCRIPTOR_T1404033120_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct  InstanceDescriptor_t1404033120  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::member
	MemberInfo_t * ___member_0;
	// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::arguments
	RuntimeObject* ___arguments_1;
	// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::isComplete
	bool ___isComplete_2;

public:
	inline static int32_t get_offset_of_member_0() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t1404033120, ___member_0)); }
	inline MemberInfo_t * get_member_0() const { return ___member_0; }
	inline MemberInfo_t ** get_address_of_member_0() { return &___member_0; }
	inline void set_member_0(MemberInfo_t * value)
	{
		___member_0 = value;
		Il2CppCodeGenWriteBarrier((&___member_0), value);
	}

	inline static int32_t get_offset_of_arguments_1() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t1404033120, ___arguments_1)); }
	inline RuntimeObject* get_arguments_1() const { return ___arguments_1; }
	inline RuntimeObject** get_address_of_arguments_1() { return &___arguments_1; }
	inline void set_arguments_1(RuntimeObject* value)
	{
		___arguments_1 = value;
		Il2CppCodeGenWriteBarrier((&___arguments_1), value);
	}

	inline static int32_t get_offset_of_isComplete_2() { return static_cast<int32_t>(offsetof(InstanceDescriptor_t1404033120, ___isComplete_2)); }
	inline bool get_isComplete_2() const { return ___isComplete_2; }
	inline bool* get_address_of_isComplete_2() { return &___isComplete_2; }
	inline void set_isComplete_2(bool value)
	{
		___isComplete_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTANCEDESCRIPTOR_T1404033120_H
#ifndef TYPEDESCRIPTIONPROVIDER_T2438624375_H
#define TYPEDESCRIPTIONPROVIDER_T2438624375_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider
struct  TypeDescriptionProvider_t2438624375  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t2438624375 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t3729801536 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t2438624375, ____parent_0)); }
	inline TypeDescriptionProvider_t2438624375 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t2438624375 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t2438624375 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((&____parent_0), value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t2438624375, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t3729801536 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t3729801536 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t3729801536 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&____emptyDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDER_T2438624375_H
#ifndef EVENTHANDLERLIST_T1298116880_H
#define EVENTHANDLERLIST_T1298116880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList
struct  EventHandlerList_t1298116880  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList::head
	ListEntry_t385037026 * ___head_0;
	// System.ComponentModel.Component System.ComponentModel.EventHandlerList::parent
	Component_t2826673791 * ___parent_1;

public:
	inline static int32_t get_offset_of_head_0() { return static_cast<int32_t>(offsetof(EventHandlerList_t1298116880, ___head_0)); }
	inline ListEntry_t385037026 * get_head_0() const { return ___head_0; }
	inline ListEntry_t385037026 ** get_address_of_head_0() { return &___head_0; }
	inline void set_head_0(ListEntry_t385037026 * value)
	{
		___head_0 = value;
		Il2CppCodeGenWriteBarrier((&___head_0), value);
	}

	inline static int32_t get_offset_of_parent_1() { return static_cast<int32_t>(offsetof(EventHandlerList_t1298116880, ___parent_1)); }
	inline Component_t2826673791 * get_parent_1() const { return ___parent_1; }
	inline Component_t2826673791 ** get_address_of_parent_1() { return &___parent_1; }
	inline void set_parent_1(Component_t2826673791 * value)
	{
		___parent_1 = value;
		Il2CppCodeGenWriteBarrier((&___parent_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLERLIST_T1298116880_H
#ifndef EVENTDESCRIPTORCOLLECTION_T3053042509_H
#define EVENTDESCRIPTORCOLLECTION_T3053042509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptorCollection
struct  EventDescriptorCollection_t3053042509  : public RuntimeObject
{
public:
	// System.ComponentModel.EventDescriptor[] System.ComponentModel.EventDescriptorCollection::events
	EventDescriptorU5BU5D_t2599422448* ___events_0;
	// System.String[] System.ComponentModel.EventDescriptorCollection::namedSort
	StringU5BU5D_t1642385972* ___namedSort_1;
	// System.Collections.IComparer System.ComponentModel.EventDescriptorCollection::comparer
	RuntimeObject* ___comparer_2;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::eventsOwned
	bool ___eventsOwned_3;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::needSort
	bool ___needSort_4;
	// System.Int32 System.ComponentModel.EventDescriptorCollection::eventCount
	int32_t ___eventCount_5;
	// System.Boolean System.ComponentModel.EventDescriptorCollection::readOnly
	bool ___readOnly_6;

public:
	inline static int32_t get_offset_of_events_0() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509, ___events_0)); }
	inline EventDescriptorU5BU5D_t2599422448* get_events_0() const { return ___events_0; }
	inline EventDescriptorU5BU5D_t2599422448** get_address_of_events_0() { return &___events_0; }
	inline void set_events_0(EventDescriptorU5BU5D_t2599422448* value)
	{
		___events_0 = value;
		Il2CppCodeGenWriteBarrier((&___events_0), value);
	}

	inline static int32_t get_offset_of_namedSort_1() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509, ___namedSort_1)); }
	inline StringU5BU5D_t1642385972* get_namedSort_1() const { return ___namedSort_1; }
	inline StringU5BU5D_t1642385972** get_address_of_namedSort_1() { return &___namedSort_1; }
	inline void set_namedSort_1(StringU5BU5D_t1642385972* value)
	{
		___namedSort_1 = value;
		Il2CppCodeGenWriteBarrier((&___namedSort_1), value);
	}

	inline static int32_t get_offset_of_comparer_2() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509, ___comparer_2)); }
	inline RuntimeObject* get_comparer_2() const { return ___comparer_2; }
	inline RuntimeObject** get_address_of_comparer_2() { return &___comparer_2; }
	inline void set_comparer_2(RuntimeObject* value)
	{
		___comparer_2 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_2), value);
	}

	inline static int32_t get_offset_of_eventsOwned_3() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509, ___eventsOwned_3)); }
	inline bool get_eventsOwned_3() const { return ___eventsOwned_3; }
	inline bool* get_address_of_eventsOwned_3() { return &___eventsOwned_3; }
	inline void set_eventsOwned_3(bool value)
	{
		___eventsOwned_3 = value;
	}

	inline static int32_t get_offset_of_needSort_4() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509, ___needSort_4)); }
	inline bool get_needSort_4() const { return ___needSort_4; }
	inline bool* get_address_of_needSort_4() { return &___needSort_4; }
	inline void set_needSort_4(bool value)
	{
		___needSort_4 = value;
	}

	inline static int32_t get_offset_of_eventCount_5() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509, ___eventCount_5)); }
	inline int32_t get_eventCount_5() const { return ___eventCount_5; }
	inline int32_t* get_address_of_eventCount_5() { return &___eventCount_5; }
	inline void set_eventCount_5(int32_t value)
	{
		___eventCount_5 = value;
	}

	inline static int32_t get_offset_of_readOnly_6() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509, ___readOnly_6)); }
	inline bool get_readOnly_6() const { return ___readOnly_6; }
	inline bool* get_address_of_readOnly_6() { return &___readOnly_6; }
	inline void set_readOnly_6(bool value)
	{
		___readOnly_6 = value;
	}
};

struct EventDescriptorCollection_t3053042509_StaticFields
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.EventDescriptorCollection::Empty
	EventDescriptorCollection_t3053042509 * ___Empty_7;

public:
	inline static int32_t get_offset_of_Empty_7() { return static_cast<int32_t>(offsetof(EventDescriptorCollection_t3053042509_StaticFields, ___Empty_7)); }
	inline EventDescriptorCollection_t3053042509 * get_Empty_7() const { return ___Empty_7; }
	inline EventDescriptorCollection_t3053042509 ** get_address_of_Empty_7() { return &___Empty_7; }
	inline void set_Empty_7(EventDescriptorCollection_t3053042509 * value)
	{
		___Empty_7 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTORCOLLECTION_T3053042509_H
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
#ifndef LISTENTRY_T385037026_H
#define LISTENTRY_T385037026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventHandlerList/ListEntry
struct  ListEntry_t385037026  : public RuntimeObject
{
public:
	// System.ComponentModel.EventHandlerList/ListEntry System.ComponentModel.EventHandlerList/ListEntry::next
	ListEntry_t385037026 * ___next_0;
	// System.Object System.ComponentModel.EventHandlerList/ListEntry::key
	RuntimeObject * ___key_1;
	// System.Delegate System.ComponentModel.EventHandlerList/ListEntry::handler
	Delegate_t3022476291 * ___handler_2;

public:
	inline static int32_t get_offset_of_next_0() { return static_cast<int32_t>(offsetof(ListEntry_t385037026, ___next_0)); }
	inline ListEntry_t385037026 * get_next_0() const { return ___next_0; }
	inline ListEntry_t385037026 ** get_address_of_next_0() { return &___next_0; }
	inline void set_next_0(ListEntry_t385037026 * value)
	{
		___next_0 = value;
		Il2CppCodeGenWriteBarrier((&___next_0), value);
	}

	inline static int32_t get_offset_of_key_1() { return static_cast<int32_t>(offsetof(ListEntry_t385037026, ___key_1)); }
	inline RuntimeObject * get_key_1() const { return ___key_1; }
	inline RuntimeObject ** get_address_of_key_1() { return &___key_1; }
	inline void set_key_1(RuntimeObject * value)
	{
		___key_1 = value;
		Il2CppCodeGenWriteBarrier((&___key_1), value);
	}

	inline static int32_t get_offset_of_handler_2() { return static_cast<int32_t>(offsetof(ListEntry_t385037026, ___handler_2)); }
	inline Delegate_t3022476291 * get_handler_2() const { return ___handler_2; }
	inline Delegate_t3022476291 ** get_address_of_handler_2() { return &___handler_2; }
	inline void set_handler_2(Delegate_t3022476291 * value)
	{
		___handler_2 = value;
		Il2CppCodeGenWriteBarrier((&___handler_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LISTENTRY_T385037026_H
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
#ifndef EVENTARGS_T3289624707_H
#define EVENTARGS_T3289624707_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.EventArgs
struct  EventArgs_t3289624707  : public RuntimeObject
{
public:

public:
};

struct EventArgs_t3289624707_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t3289624707 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_t3289624707_StaticFields, ___Empty_0)); }
	inline EventArgs_t3289624707 * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_t3289624707 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_t3289624707 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTARGS_T3289624707_H
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
#ifndef MEMBERDESCRIPTOR_T3749827553_H
#define MEMBERDESCRIPTOR_T3749827553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t3749827553  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.Int32 System.ComponentModel.MemberDescriptor::nameHash
	int32_t ___nameHash_1;
	// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::attributeCollection
	AttributeCollection_t1925812292 * ___attributeCollection_2;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attributes
	AttributeU5BU5D_t4255796347* ___attributes_3;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::originalAttributes
	AttributeU5BU5D_t4255796347* ___originalAttributes_4;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFiltered
	bool ___attributesFiltered_5;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFilled
	bool ___attributesFilled_6;
	// System.Int32 System.ComponentModel.MemberDescriptor::metadataVersion
	int32_t ___metadataVersion_7;
	// System.String System.ComponentModel.MemberDescriptor::category
	String_t* ___category_8;
	// System.String System.ComponentModel.MemberDescriptor::description
	String_t* ___description_9;
	// System.Object System.ComponentModel.MemberDescriptor::lockCookie
	RuntimeObject * ___lockCookie_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_nameHash_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___nameHash_1)); }
	inline int32_t get_nameHash_1() const { return ___nameHash_1; }
	inline int32_t* get_address_of_nameHash_1() { return &___nameHash_1; }
	inline void set_nameHash_1(int32_t value)
	{
		___nameHash_1 = value;
	}

	inline static int32_t get_offset_of_attributeCollection_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___attributeCollection_2)); }
	inline AttributeCollection_t1925812292 * get_attributeCollection_2() const { return ___attributeCollection_2; }
	inline AttributeCollection_t1925812292 ** get_address_of_attributeCollection_2() { return &___attributeCollection_2; }
	inline void set_attributeCollection_2(AttributeCollection_t1925812292 * value)
	{
		___attributeCollection_2 = value;
		Il2CppCodeGenWriteBarrier((&___attributeCollection_2), value);
	}

	inline static int32_t get_offset_of_attributes_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___attributes_3)); }
	inline AttributeU5BU5D_t4255796347* get_attributes_3() const { return ___attributes_3; }
	inline AttributeU5BU5D_t4255796347** get_address_of_attributes_3() { return &___attributes_3; }
	inline void set_attributes_3(AttributeU5BU5D_t4255796347* value)
	{
		___attributes_3 = value;
		Il2CppCodeGenWriteBarrier((&___attributes_3), value);
	}

	inline static int32_t get_offset_of_originalAttributes_4() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___originalAttributes_4)); }
	inline AttributeU5BU5D_t4255796347* get_originalAttributes_4() const { return ___originalAttributes_4; }
	inline AttributeU5BU5D_t4255796347** get_address_of_originalAttributes_4() { return &___originalAttributes_4; }
	inline void set_originalAttributes_4(AttributeU5BU5D_t4255796347* value)
	{
		___originalAttributes_4 = value;
		Il2CppCodeGenWriteBarrier((&___originalAttributes_4), value);
	}

	inline static int32_t get_offset_of_attributesFiltered_5() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___attributesFiltered_5)); }
	inline bool get_attributesFiltered_5() const { return ___attributesFiltered_5; }
	inline bool* get_address_of_attributesFiltered_5() { return &___attributesFiltered_5; }
	inline void set_attributesFiltered_5(bool value)
	{
		___attributesFiltered_5 = value;
	}

	inline static int32_t get_offset_of_attributesFilled_6() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___attributesFilled_6)); }
	inline bool get_attributesFilled_6() const { return ___attributesFilled_6; }
	inline bool* get_address_of_attributesFilled_6() { return &___attributesFilled_6; }
	inline void set_attributesFilled_6(bool value)
	{
		___attributesFilled_6 = value;
	}

	inline static int32_t get_offset_of_metadataVersion_7() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___metadataVersion_7)); }
	inline int32_t get_metadataVersion_7() const { return ___metadataVersion_7; }
	inline int32_t* get_address_of_metadataVersion_7() { return &___metadataVersion_7; }
	inline void set_metadataVersion_7(int32_t value)
	{
		___metadataVersion_7 = value;
	}

	inline static int32_t get_offset_of_category_8() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___category_8)); }
	inline String_t* get_category_8() const { return ___category_8; }
	inline String_t** get_address_of_category_8() { return &___category_8; }
	inline void set_category_8(String_t* value)
	{
		___category_8 = value;
		Il2CppCodeGenWriteBarrier((&___category_8), value);
	}

	inline static int32_t get_offset_of_description_9() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___description_9)); }
	inline String_t* get_description_9() const { return ___description_9; }
	inline String_t** get_address_of_description_9() { return &___description_9; }
	inline void set_description_9(String_t* value)
	{
		___description_9 = value;
		Il2CppCodeGenWriteBarrier((&___description_9), value);
	}

	inline static int32_t get_offset_of_lockCookie_10() { return static_cast<int32_t>(offsetof(MemberDescriptor_t3749827553, ___lockCookie_10)); }
	inline RuntimeObject * get_lockCookie_10() const { return ___lockCookie_10; }
	inline RuntimeObject ** get_address_of_lockCookie_10() { return &___lockCookie_10; }
	inline void set_lockCookie_10(RuntimeObject * value)
	{
		___lockCookie_10 = value;
		Il2CppCodeGenWriteBarrier((&___lockCookie_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERDESCRIPTOR_T3749827553_H
#ifndef ORDEREDDICTIONARYENUMERATOR_T3156431966_H
#define ORDEREDDICTIONARYENUMERATOR_T3156431966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_t3156431966  : public RuntimeObject
{
public:
	// System.Int32 System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::_objectReturnType
	int32_t ____objectReturnType_0;
	// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary/OrderedDictionaryEnumerator::arrayEnumerator
	RuntimeObject* ___arrayEnumerator_1;

public:
	inline static int32_t get_offset_of__objectReturnType_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t3156431966, ____objectReturnType_0)); }
	inline int32_t get__objectReturnType_0() const { return ____objectReturnType_0; }
	inline int32_t* get_address_of__objectReturnType_0() { return &____objectReturnType_0; }
	inline void set__objectReturnType_0(int32_t value)
	{
		____objectReturnType_0 = value;
	}

	inline static int32_t get_offset_of_arrayEnumerator_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t3156431966, ___arrayEnumerator_1)); }
	inline RuntimeObject* get_arrayEnumerator_1() const { return ___arrayEnumerator_1; }
	inline RuntimeObject** get_address_of_arrayEnumerator_1() { return &___arrayEnumerator_1; }
	inline void set_arrayEnumerator_1(RuntimeObject* value)
	{
		___arrayEnumerator_1 = value;
		Il2CppCodeGenWriteBarrier((&___arrayEnumerator_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYENUMERATOR_T3156431966_H
#ifndef ORDEREDDICTIONARY_T14805809_H
#define ORDEREDDICTIONARY_T14805809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary
struct  OrderedDictionary_t14805809  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary::_objectsArray
	ArrayList_t4252133567 * ____objectsArray_0;
	// System.Collections.Hashtable System.Collections.Specialized.OrderedDictionary::_objectsTable
	Hashtable_t909839986 * ____objectsTable_1;
	// System.Int32 System.Collections.Specialized.OrderedDictionary::_initialCapacity
	int32_t ____initialCapacity_2;
	// System.Collections.IEqualityComparer System.Collections.Specialized.OrderedDictionary::_comparer
	RuntimeObject* ____comparer_3;
	// System.Boolean System.Collections.Specialized.OrderedDictionary::_readOnly
	bool ____readOnly_4;
	// System.Object System.Collections.Specialized.OrderedDictionary::_syncRoot
	RuntimeObject * ____syncRoot_5;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.OrderedDictionary::_siInfo
	SerializationInfo_t228987430 * ____siInfo_6;

public:
	inline static int32_t get_offset_of__objectsArray_0() { return static_cast<int32_t>(offsetof(OrderedDictionary_t14805809, ____objectsArray_0)); }
	inline ArrayList_t4252133567 * get__objectsArray_0() const { return ____objectsArray_0; }
	inline ArrayList_t4252133567 ** get_address_of__objectsArray_0() { return &____objectsArray_0; }
	inline void set__objectsArray_0(ArrayList_t4252133567 * value)
	{
		____objectsArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectsArray_0), value);
	}

	inline static int32_t get_offset_of__objectsTable_1() { return static_cast<int32_t>(offsetof(OrderedDictionary_t14805809, ____objectsTable_1)); }
	inline Hashtable_t909839986 * get__objectsTable_1() const { return ____objectsTable_1; }
	inline Hashtable_t909839986 ** get_address_of__objectsTable_1() { return &____objectsTable_1; }
	inline void set__objectsTable_1(Hashtable_t909839986 * value)
	{
		____objectsTable_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectsTable_1), value);
	}

	inline static int32_t get_offset_of__initialCapacity_2() { return static_cast<int32_t>(offsetof(OrderedDictionary_t14805809, ____initialCapacity_2)); }
	inline int32_t get__initialCapacity_2() const { return ____initialCapacity_2; }
	inline int32_t* get_address_of__initialCapacity_2() { return &____initialCapacity_2; }
	inline void set__initialCapacity_2(int32_t value)
	{
		____initialCapacity_2 = value;
	}

	inline static int32_t get_offset_of__comparer_3() { return static_cast<int32_t>(offsetof(OrderedDictionary_t14805809, ____comparer_3)); }
	inline RuntimeObject* get__comparer_3() const { return ____comparer_3; }
	inline RuntimeObject** get_address_of__comparer_3() { return &____comparer_3; }
	inline void set__comparer_3(RuntimeObject* value)
	{
		____comparer_3 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_3), value);
	}

	inline static int32_t get_offset_of__readOnly_4() { return static_cast<int32_t>(offsetof(OrderedDictionary_t14805809, ____readOnly_4)); }
	inline bool get__readOnly_4() const { return ____readOnly_4; }
	inline bool* get_address_of__readOnly_4() { return &____readOnly_4; }
	inline void set__readOnly_4(bool value)
	{
		____readOnly_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(OrderedDictionary_t14805809, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_5), value);
	}

	inline static int32_t get_offset_of__siInfo_6() { return static_cast<int32_t>(offsetof(OrderedDictionary_t14805809, ____siInfo_6)); }
	inline SerializationInfo_t228987430 * get__siInfo_6() const { return ____siInfo_6; }
	inline SerializationInfo_t228987430 ** get_address_of__siInfo_6() { return &____siInfo_6; }
	inline void set__siInfo_6(SerializationInfo_t228987430 * value)
	{
		____siInfo_6 = value;
		Il2CppCodeGenWriteBarrier((&____siInfo_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARY_T14805809_H
#ifndef PROPERTYDESCRIPTORCOLLECTION_T3166009492_H
#define PROPERTYDESCRIPTORCOLLECTION_T3166009492_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t3166009492  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.ComponentModel.PropertyDescriptorCollection::cachedFoundProperties
	RuntimeObject* ___cachedFoundProperties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::cachedIgnoreCase
	bool ___cachedIgnoreCase_2;
	// System.ComponentModel.PropertyDescriptor[] System.ComponentModel.PropertyDescriptorCollection::properties
	PropertyDescriptorU5BU5D_t2049367471* ___properties_3;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection::propCount
	int32_t ___propCount_4;
	// System.String[] System.ComponentModel.PropertyDescriptorCollection::namedSort
	StringU5BU5D_t1642385972* ___namedSort_5;
	// System.Collections.IComparer System.ComponentModel.PropertyDescriptorCollection::comparer
	RuntimeObject* ___comparer_6;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::propsOwned
	bool ___propsOwned_7;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::needSort
	bool ___needSort_8;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_9;

public:
	inline static int32_t get_offset_of_cachedFoundProperties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3166009492, ___cachedFoundProperties_1)); }
	inline RuntimeObject* get_cachedFoundProperties_1() const { return ___cachedFoundProperties_1; }
	inline RuntimeObject** get_address_of_cachedFoundProperties_1() { return &___cachedFoundProperties_1; }
	inline void set_cachedFoundProperties_1(RuntimeObject* value)
	{
		___cachedFoundProperties_1 = value;
		Il2CppCodeGenWriteBarrier((&___cachedFoundProperties_1), value);
	}

	inline static int32_t get_offset_of_cachedIgnoreCase_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3166009492, ___cachedIgnoreCase_2)); }
	inline bool get_cachedIgnoreCase_2() const { return ___cachedIgnoreCase_2; }
	inline bool* get_address_of_cachedIgnoreCase_2() { return &___cachedIgnoreCase_2; }
	inline void set_cachedIgnoreCase_2(bool value)
	{
		___cachedIgnoreCase_2 = value;
	}

	inline static int32_t get_offset_of_properties_3() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3166009492, ___properties_3)); }
	inline PropertyDescriptorU5BU5D_t2049367471* get_properties_3() const { return ___properties_3; }
	inline PropertyDescriptorU5BU5D_t2049367471** get_address_of_properties_3() { return &___properties_3; }
	inline void set_properties_3(PropertyDescriptorU5BU5D_t2049367471* value)
	{
		___properties_3 = value;
		Il2CppCodeGenWriteBarrier((&___properties_3), value);
	}

	inline static int32_t get_offset_of_propCount_4() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3166009492, ___propCount_4)); }
	inline int32_t get_propCount_4() const { return ___propCount_4; }
	inline int32_t* get_address_of_propCount_4() { return &___propCount_4; }
	inline void set_propCount_4(int32_t value)
	{
		___propCount_4 = value;
	}

	inline static int32_t get_offset_of_namedSort_5() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3166009492, ___namedSort_5)); }
	inline StringU5BU5D_t1642385972* get_namedSort_5() const { return ___namedSort_5; }
	inline StringU5BU5D_t1642385972** get_address_of_namedSort_5() { return &___namedSort_5; }
	inline void set_namedSort_5(StringU5BU5D_t1642385972* value)
	{
		___namedSort_5 = value;
		Il2CppCodeGenWriteBarrier((&___namedSort_5), value);
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3166009492, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((&___comparer_6), value);
	}

	inline static int32_t get_offset_of_propsOwned_7() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3166009492, ___propsOwned_7)); }
	inline bool get_propsOwned_7() const { return ___propsOwned_7; }
	inline bool* get_address_of_propsOwned_7() { return &___propsOwned_7; }
	inline void set_propsOwned_7(bool value)
	{
		___propsOwned_7 = value;
	}

	inline static int32_t get_offset_of_needSort_8() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3166009492, ___needSort_8)); }
	inline bool get_needSort_8() const { return ___needSort_8; }
	inline bool* get_address_of_needSort_8() { return &___needSort_8; }
	inline void set_needSort_8(bool value)
	{
		___needSort_8 = value;
	}

	inline static int32_t get_offset_of_readOnly_9() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3166009492, ___readOnly_9)); }
	inline bool get_readOnly_9() const { return ___readOnly_9; }
	inline bool* get_address_of_readOnly_9() { return &___readOnly_9; }
	inline void set_readOnly_9(bool value)
	{
		___readOnly_9 = value;
	}
};

struct PropertyDescriptorCollection_t3166009492_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t3166009492 * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t3166009492_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t3166009492 * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t3166009492 ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t3166009492 * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTORCOLLECTION_T3166009492_H
#ifndef STRINGCOLLECTION_T352985975_H
#define STRINGCOLLECTION_T352985975_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringCollection
struct  StringCollection_t352985975  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.StringCollection::data
	ArrayList_t4252133567 * ___data_0;

public:
	inline static int32_t get_offset_of_data_0() { return static_cast<int32_t>(offsetof(StringCollection_t352985975, ___data_0)); }
	inline ArrayList_t4252133567 * get_data_0() const { return ___data_0; }
	inline ArrayList_t4252133567 ** get_address_of_data_0() { return &___data_0; }
	inline void set_data_0(ArrayList_t4252133567 * value)
	{
		___data_0 = value;
		Il2CppCodeGenWriteBarrier((&___data_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCOLLECTION_T352985975_H
#ifndef STRINGDICTIONARY_T1070889667_H
#define STRINGDICTIONARY_T1070889667_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.StringDictionary
struct  StringDictionary_t1070889667  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Collections.Specialized.StringDictionary::contents
	Hashtable_t909839986 * ___contents_0;

public:
	inline static int32_t get_offset_of_contents_0() { return static_cast<int32_t>(offsetof(StringDictionary_t1070889667, ___contents_0)); }
	inline Hashtable_t909839986 * get_contents_0() const { return ___contents_0; }
	inline Hashtable_t909839986 ** get_address_of_contents_0() { return &___contents_0; }
	inline void set_contents_0(Hashtable_t909839986 * value)
	{
		___contents_0 = value;
		Il2CppCodeGenWriteBarrier((&___contents_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGDICTIONARY_T1070889667_H
#ifndef ORDEREDDICTIONARYKEYVALUECOLLECTION_T3490502636_H
#define ORDEREDDICTIONARYKEYVALUECOLLECTION_T3490502636_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection
struct  OrderedDictionaryKeyValueCollection_t3490502636  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::_objects
	ArrayList_t4252133567 * ____objects_0;
	// System.Boolean System.Collections.Specialized.OrderedDictionary/OrderedDictionaryKeyValueCollection::isKeys
	bool ___isKeys_1;

public:
	inline static int32_t get_offset_of__objects_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t3490502636, ____objects_0)); }
	inline ArrayList_t4252133567 * get__objects_0() const { return ____objects_0; }
	inline ArrayList_t4252133567 ** get_address_of__objects_0() { return &____objects_0; }
	inline void set__objects_0(ArrayList_t4252133567 * value)
	{
		____objects_0 = value;
		Il2CppCodeGenWriteBarrier((&____objects_0), value);
	}

	inline static int32_t get_offset_of_isKeys_1() { return static_cast<int32_t>(offsetof(OrderedDictionaryKeyValueCollection_t3490502636, ___isKeys_1)); }
	inline bool get_isKeys_1() const { return ___isKeys_1; }
	inline bool* get_address_of_isKeys_1() { return &___isKeys_1; }
	inline void set_isKeys_1(bool value)
	{
		___isKeys_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ORDEREDDICTIONARYKEYVALUECOLLECTION_T3490502636_H
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
#ifndef DEFAULTVALUEATTRIBUTE_T1302720498_H
#define DEFAULTVALUEATTRIBUTE_T1302720498_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DefaultValueAttribute
struct  DefaultValueAttribute_t1302720498  : public Attribute_t542643598
{
public:
	// System.Object System.ComponentModel.DefaultValueAttribute::value
	RuntimeObject * ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(DefaultValueAttribute_t1302720498, ___value_0)); }
	inline RuntimeObject * get_value_0() const { return ___value_0; }
	inline RuntimeObject ** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(RuntimeObject * value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((&___value_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTVALUEATTRIBUTE_T1302720498_H
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
#ifndef NAMEVALUECOLLECTION_T3047564564_H
#define NAMEVALUECOLLECTION_T3047564564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Specialized.NameValueCollection
struct  NameValueCollection_t3047564564  : public NameObjectCollectionBase_t2034248631
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t1642385972* ____all_10;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t1642385972* ____allKeys_11;

public:
	inline static int32_t get_offset_of__all_10() { return static_cast<int32_t>(offsetof(NameValueCollection_t3047564564, ____all_10)); }
	inline StringU5BU5D_t1642385972* get__all_10() const { return ____all_10; }
	inline StringU5BU5D_t1642385972** get_address_of__all_10() { return &____all_10; }
	inline void set__all_10(StringU5BU5D_t1642385972* value)
	{
		____all_10 = value;
		Il2CppCodeGenWriteBarrier((&____all_10), value);
	}

	inline static int32_t get_offset_of__allKeys_11() { return static_cast<int32_t>(offsetof(NameValueCollection_t3047564564, ____allKeys_11)); }
	inline StringU5BU5D_t1642385972* get__allKeys_11() const { return ____allKeys_11; }
	inline StringU5BU5D_t1642385972** get_address_of__allKeys_11() { return &____allKeys_11; }
	inline void set__allKeys_11(StringU5BU5D_t1642385972* value)
	{
		____allKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&____allKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NAMEVALUECOLLECTION_T3047564564_H
#ifndef ROOTDESIGNERSERIALIZERATTRIBUTE_T1162957127_H
#define ROOTDESIGNERSERIALIZERATTRIBUTE_T1162957127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute
struct  RootDesignerSerializerAttribute_t1162957127  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::reloadable
	bool ___reloadable_0;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializerTypeName
	String_t* ___serializerTypeName_1;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::serializerBaseTypeName
	String_t* ___serializerBaseTypeName_2;
	// System.String System.ComponentModel.Design.Serialization.RootDesignerSerializerAttribute::typeId
	String_t* ___typeId_3;

public:
	inline static int32_t get_offset_of_reloadable_0() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t1162957127, ___reloadable_0)); }
	inline bool get_reloadable_0() const { return ___reloadable_0; }
	inline bool* get_address_of_reloadable_0() { return &___reloadable_0; }
	inline void set_reloadable_0(bool value)
	{
		___reloadable_0 = value;
	}

	inline static int32_t get_offset_of_serializerTypeName_1() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t1162957127, ___serializerTypeName_1)); }
	inline String_t* get_serializerTypeName_1() const { return ___serializerTypeName_1; }
	inline String_t** get_address_of_serializerTypeName_1() { return &___serializerTypeName_1; }
	inline void set_serializerTypeName_1(String_t* value)
	{
		___serializerTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___serializerTypeName_1), value);
	}

	inline static int32_t get_offset_of_serializerBaseTypeName_2() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t1162957127, ___serializerBaseTypeName_2)); }
	inline String_t* get_serializerBaseTypeName_2() const { return ___serializerBaseTypeName_2; }
	inline String_t** get_address_of_serializerBaseTypeName_2() { return &___serializerBaseTypeName_2; }
	inline void set_serializerBaseTypeName_2(String_t* value)
	{
		___serializerBaseTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___serializerBaseTypeName_2), value);
	}

	inline static int32_t get_offset_of_typeId_3() { return static_cast<int32_t>(offsetof(RootDesignerSerializerAttribute_t1162957127, ___typeId_3)); }
	inline String_t* get_typeId_3() const { return ___typeId_3; }
	inline String_t** get_address_of_typeId_3() { return &___typeId_3; }
	inline void set_typeId_3(String_t* value)
	{
		___typeId_3 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ROOTDESIGNERSERIALIZERATTRIBUTE_T1162957127_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_4;
	// System.Int16 System.Guid::_b
	int16_t ____b_5;
	// System.Int16 System.Guid::_c
	int16_t ____c_6;
	// System.Byte System.Guid::_d
	uint8_t ____d_7;
	// System.Byte System.Guid::_e
	uint8_t ____e_8;
	// System.Byte System.Guid::_f
	uint8_t ____f_9;
	// System.Byte System.Guid::_g
	uint8_t ____g_10;
	// System.Byte System.Guid::_h
	uint8_t ____h_11;
	// System.Byte System.Guid::_i
	uint8_t ____i_12;
	// System.Byte System.Guid::_j
	uint8_t ____j_13;
	// System.Byte System.Guid::_k
	uint8_t ____k_14;

public:
	inline static int32_t get_offset_of__a_4() { return static_cast<int32_t>(offsetof(Guid_t, ____a_4)); }
	inline int32_t get__a_4() const { return ____a_4; }
	inline int32_t* get_address_of__a_4() { return &____a_4; }
	inline void set__a_4(int32_t value)
	{
		____a_4 = value;
	}

	inline static int32_t get_offset_of__b_5() { return static_cast<int32_t>(offsetof(Guid_t, ____b_5)); }
	inline int16_t get__b_5() const { return ____b_5; }
	inline int16_t* get_address_of__b_5() { return &____b_5; }
	inline void set__b_5(int16_t value)
	{
		____b_5 = value;
	}

	inline static int32_t get_offset_of__c_6() { return static_cast<int32_t>(offsetof(Guid_t, ____c_6)); }
	inline int16_t get__c_6() const { return ____c_6; }
	inline int16_t* get_address_of__c_6() { return &____c_6; }
	inline void set__c_6(int16_t value)
	{
		____c_6 = value;
	}

	inline static int32_t get_offset_of__d_7() { return static_cast<int32_t>(offsetof(Guid_t, ____d_7)); }
	inline uint8_t get__d_7() const { return ____d_7; }
	inline uint8_t* get_address_of__d_7() { return &____d_7; }
	inline void set__d_7(uint8_t value)
	{
		____d_7 = value;
	}

	inline static int32_t get_offset_of__e_8() { return static_cast<int32_t>(offsetof(Guid_t, ____e_8)); }
	inline uint8_t get__e_8() const { return ____e_8; }
	inline uint8_t* get_address_of__e_8() { return &____e_8; }
	inline void set__e_8(uint8_t value)
	{
		____e_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Guid_t, ____f_9)); }
	inline uint8_t get__f_9() const { return ____f_9; }
	inline uint8_t* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(uint8_t value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of__g_10() { return static_cast<int32_t>(offsetof(Guid_t, ____g_10)); }
	inline uint8_t get__g_10() const { return ____g_10; }
	inline uint8_t* get_address_of__g_10() { return &____g_10; }
	inline void set__g_10(uint8_t value)
	{
		____g_10 = value;
	}

	inline static int32_t get_offset_of__h_11() { return static_cast<int32_t>(offsetof(Guid_t, ____h_11)); }
	inline uint8_t get__h_11() const { return ____h_11; }
	inline uint8_t* get_address_of__h_11() { return &____h_11; }
	inline void set__h_11(uint8_t value)
	{
		____h_11 = value;
	}

	inline static int32_t get_offset_of__i_12() { return static_cast<int32_t>(offsetof(Guid_t, ____i_12)); }
	inline uint8_t get__i_12() const { return ____i_12; }
	inline uint8_t* get_address_of__i_12() { return &____i_12; }
	inline void set__i_12(uint8_t value)
	{
		____i_12 = value;
	}

	inline static int32_t get_offset_of__j_13() { return static_cast<int32_t>(offsetof(Guid_t, ____j_13)); }
	inline uint8_t get__j_13() const { return ____j_13; }
	inline uint8_t* get_address_of__j_13() { return &____j_13; }
	inline void set__j_13(uint8_t value)
	{
		____j_13 = value;
	}

	inline static int32_t get_offset_of__k_14() { return static_cast<int32_t>(offsetof(Guid_t, ____k_14)); }
	inline uint8_t get__k_14() const { return ____k_14; }
	inline uint8_t* get_address_of__k_14() { return &____k_14; }
	inline void set__k_14(uint8_t value)
	{
		____k_14 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2510243513 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2510243513 * ____fastRng_2;
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_3;

public:
	inline static int32_t get_offset_of__rngAccess_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_0)); }
	inline RuntimeObject * get__rngAccess_0() const { return ____rngAccess_0; }
	inline RuntimeObject ** get_address_of__rngAccess_0() { return &____rngAccess_0; }
	inline void set__rngAccess_0(RuntimeObject * value)
	{
		____rngAccess_0 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_0), value);
	}

	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_1)); }
	inline RandomNumberGenerator_t2510243513 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t2510243513 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t2510243513 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t2510243513 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t2510243513 * value)
	{
		____fastRng_2 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_2), value);
	}

	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_3)); }
	inline Guid_t  get_Empty_3() const { return ___Empty_3; }
	inline Guid_t * get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(Guid_t  value)
	{
		___Empty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
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
#ifndef DESIGNERSERIALIZERATTRIBUTE_T2188593799_H
#define DESIGNERSERIALIZERATTRIBUTE_T2188593799_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Design.Serialization.DesignerSerializerAttribute
struct  DesignerSerializerAttribute_t2188593799  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::serializerTypeName
	String_t* ___serializerTypeName_0;
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::serializerBaseTypeName
	String_t* ___serializerBaseTypeName_1;
	// System.String System.ComponentModel.Design.Serialization.DesignerSerializerAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_serializerTypeName_0() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t2188593799, ___serializerTypeName_0)); }
	inline String_t* get_serializerTypeName_0() const { return ___serializerTypeName_0; }
	inline String_t** get_address_of_serializerTypeName_0() { return &___serializerTypeName_0; }
	inline void set_serializerTypeName_0(String_t* value)
	{
		___serializerTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___serializerTypeName_0), value);
	}

	inline static int32_t get_offset_of_serializerBaseTypeName_1() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t2188593799, ___serializerBaseTypeName_1)); }
	inline String_t* get_serializerBaseTypeName_1() const { return ___serializerBaseTypeName_1; }
	inline String_t** get_address_of_serializerBaseTypeName_1() { return &___serializerBaseTypeName_1; }
	inline void set_serializerBaseTypeName_1(String_t* value)
	{
		___serializerBaseTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___serializerBaseTypeName_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(DesignerSerializerAttribute_t2188593799, ___typeId_2)); }
	inline String_t* get_typeId_2() const { return ___typeId_2; }
	inline String_t** get_address_of_typeId_2() { return &___typeId_2; }
	inline void set_typeId_2(String_t* value)
	{
		___typeId_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZERATTRIBUTE_T2188593799_H
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
#ifndef PROPERTYDESCRIPTOR_T4250402154_H
#define PROPERTYDESCRIPTOR_T4250402154_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t4250402154  : public MemberDescriptor_t3749827553
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t745995970 * ___converter_11;
	// System.Object[] System.ComponentModel.PropertyDescriptor::editors
	ObjectU5BU5D_t3614634134* ___editors_12;
	// System.Type[] System.ComponentModel.PropertyDescriptor::editorTypes
	TypeU5BU5D_t1664964607* ___editorTypes_13;
	// System.Int32 System.ComponentModel.PropertyDescriptor::editorCount
	int32_t ___editorCount_14;

public:
	inline static int32_t get_offset_of_converter_11() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4250402154, ___converter_11)); }
	inline TypeConverter_t745995970 * get_converter_11() const { return ___converter_11; }
	inline TypeConverter_t745995970 ** get_address_of_converter_11() { return &___converter_11; }
	inline void set_converter_11(TypeConverter_t745995970 * value)
	{
		___converter_11 = value;
		Il2CppCodeGenWriteBarrier((&___converter_11), value);
	}

	inline static int32_t get_offset_of_editors_12() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4250402154, ___editors_12)); }
	inline ObjectU5BU5D_t3614634134* get_editors_12() const { return ___editors_12; }
	inline ObjectU5BU5D_t3614634134** get_address_of_editors_12() { return &___editors_12; }
	inline void set_editors_12(ObjectU5BU5D_t3614634134* value)
	{
		___editors_12 = value;
		Il2CppCodeGenWriteBarrier((&___editors_12), value);
	}

	inline static int32_t get_offset_of_editorTypes_13() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4250402154, ___editorTypes_13)); }
	inline TypeU5BU5D_t1664964607* get_editorTypes_13() const { return ___editorTypes_13; }
	inline TypeU5BU5D_t1664964607** get_address_of_editorTypes_13() { return &___editorTypes_13; }
	inline void set_editorTypes_13(TypeU5BU5D_t1664964607* value)
	{
		___editorTypes_13 = value;
		Il2CppCodeGenWriteBarrier((&___editorTypes_13), value);
	}

	inline static int32_t get_offset_of_editorCount_14() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t4250402154, ___editorCount_14)); }
	inline int32_t get_editorCount_14() const { return ___editorCount_14; }
	inline int32_t* get_address_of_editorCount_14() { return &___editorCount_14; }
	inline void set_editorCount_14(int32_t value)
	{
		___editorCount_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYDESCRIPTOR_T4250402154_H
#ifndef INSTALLERTYPEATTRIBUTE_T2978264484_H
#define INSTALLERTYPEATTRIBUTE_T2978264484_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.InstallerTypeAttribute
struct  InstallerTypeAttribute_t2978264484  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.InstallerTypeAttribute::_typeName
	String_t* ____typeName_0;

public:
	inline static int32_t get_offset_of__typeName_0() { return static_cast<int32_t>(offsetof(InstallerTypeAttribute_t2978264484, ____typeName_0)); }
	inline String_t* get__typeName_0() const { return ____typeName_0; }
	inline String_t** get_address_of__typeName_0() { return &____typeName_0; }
	inline void set__typeName_0(String_t* value)
	{
		____typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INSTALLERTYPEATTRIBUTE_T2978264484_H
#ifndef READONLYATTRIBUTE_T4102148880_H
#define READONLYATTRIBUTE_T4102148880_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReadOnlyAttribute
struct  ReadOnlyAttribute_t4102148880  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.ReadOnlyAttribute::isReadOnly
	bool ___isReadOnly_0;

public:
	inline static int32_t get_offset_of_isReadOnly_0() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t4102148880, ___isReadOnly_0)); }
	inline bool get_isReadOnly_0() const { return ___isReadOnly_0; }
	inline bool* get_address_of_isReadOnly_0() { return &___isReadOnly_0; }
	inline void set_isReadOnly_0(bool value)
	{
		___isReadOnly_0 = value;
	}
};

struct ReadOnlyAttribute_t4102148880_StaticFields
{
public:
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Yes
	ReadOnlyAttribute_t4102148880 * ___Yes_1;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::No
	ReadOnlyAttribute_t4102148880 * ___No_2;
	// System.ComponentModel.ReadOnlyAttribute System.ComponentModel.ReadOnlyAttribute::Default
	ReadOnlyAttribute_t4102148880 * ___Default_3;

public:
	inline static int32_t get_offset_of_Yes_1() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t4102148880_StaticFields, ___Yes_1)); }
	inline ReadOnlyAttribute_t4102148880 * get_Yes_1() const { return ___Yes_1; }
	inline ReadOnlyAttribute_t4102148880 ** get_address_of_Yes_1() { return &___Yes_1; }
	inline void set_Yes_1(ReadOnlyAttribute_t4102148880 * value)
	{
		___Yes_1 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_1), value);
	}

	inline static int32_t get_offset_of_No_2() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t4102148880_StaticFields, ___No_2)); }
	inline ReadOnlyAttribute_t4102148880 * get_No_2() const { return ___No_2; }
	inline ReadOnlyAttribute_t4102148880 ** get_address_of_No_2() { return &___No_2; }
	inline void set_No_2(ReadOnlyAttribute_t4102148880 * value)
	{
		___No_2 = value;
		Il2CppCodeGenWriteBarrier((&___No_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(ReadOnlyAttribute_t4102148880_StaticFields, ___Default_3)); }
	inline ReadOnlyAttribute_t4102148880 * get_Default_3() const { return ___Default_3; }
	inline ReadOnlyAttribute_t4102148880 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(ReadOnlyAttribute_t4102148880 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T4102148880_H
#ifndef REFRESHEVENTARGS_T2077477224_H
#define REFRESHEVENTARGS_T2077477224_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventArgs
struct  RefreshEventArgs_t2077477224  : public EventArgs_t3289624707
{
public:
	// System.Type System.ComponentModel.RefreshEventArgs::typeChanged
	Type_t * ___typeChanged_1;

public:
	inline static int32_t get_offset_of_typeChanged_1() { return static_cast<int32_t>(offsetof(RefreshEventArgs_t2077477224, ___typeChanged_1)); }
	inline Type_t * get_typeChanged_1() const { return ___typeChanged_1; }
	inline Type_t ** get_address_of_typeChanged_1() { return &___typeChanged_1; }
	inline void set_typeChanged_1(Type_t * value)
	{
		___typeChanged_1 = value;
		Il2CppCodeGenWriteBarrier((&___typeChanged_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTARGS_T2077477224_H
#ifndef RECOMMENDEDASCONFIGURABLEATTRIBUTE_T420947846_H
#define RECOMMENDEDASCONFIGURABLEATTRIBUTE_T420947846_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RecommendedAsConfigurableAttribute
struct  RecommendedAsConfigurableAttribute_t420947846  : public Attribute_t542643598
{
public:
	// System.Boolean System.ComponentModel.RecommendedAsConfigurableAttribute::recommendedAsConfigurable
	bool ___recommendedAsConfigurable_0;

public:
	inline static int32_t get_offset_of_recommendedAsConfigurable_0() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t420947846, ___recommendedAsConfigurable_0)); }
	inline bool get_recommendedAsConfigurable_0() const { return ___recommendedAsConfigurable_0; }
	inline bool* get_address_of_recommendedAsConfigurable_0() { return &___recommendedAsConfigurable_0; }
	inline void set_recommendedAsConfigurable_0(bool value)
	{
		___recommendedAsConfigurable_0 = value;
	}
};

struct RecommendedAsConfigurableAttribute_t420947846_StaticFields
{
public:
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::No
	RecommendedAsConfigurableAttribute_t420947846 * ___No_1;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Yes
	RecommendedAsConfigurableAttribute_t420947846 * ___Yes_2;
	// System.ComponentModel.RecommendedAsConfigurableAttribute System.ComponentModel.RecommendedAsConfigurableAttribute::Default
	RecommendedAsConfigurableAttribute_t420947846 * ___Default_3;

public:
	inline static int32_t get_offset_of_No_1() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t420947846_StaticFields, ___No_1)); }
	inline RecommendedAsConfigurableAttribute_t420947846 * get_No_1() const { return ___No_1; }
	inline RecommendedAsConfigurableAttribute_t420947846 ** get_address_of_No_1() { return &___No_1; }
	inline void set_No_1(RecommendedAsConfigurableAttribute_t420947846 * value)
	{
		___No_1 = value;
		Il2CppCodeGenWriteBarrier((&___No_1), value);
	}

	inline static int32_t get_offset_of_Yes_2() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t420947846_StaticFields, ___Yes_2)); }
	inline RecommendedAsConfigurableAttribute_t420947846 * get_Yes_2() const { return ___Yes_2; }
	inline RecommendedAsConfigurableAttribute_t420947846 ** get_address_of_Yes_2() { return &___Yes_2; }
	inline void set_Yes_2(RecommendedAsConfigurableAttribute_t420947846 * value)
	{
		___Yes_2 = value;
		Il2CppCodeGenWriteBarrier((&___Yes_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(RecommendedAsConfigurableAttribute_t420947846_StaticFields, ___Default_3)); }
	inline RecommendedAsConfigurableAttribute_t420947846 * get_Default_3() const { return ___Default_3; }
	inline RecommendedAsConfigurableAttribute_t420947846 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(RecommendedAsConfigurableAttribute_t420947846 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECOMMENDEDASCONFIGURABLEATTRIBUTE_T420947846_H
#ifndef EXTENDERPROVIDEDPROPERTYATTRIBUTE_T3223729015_H
#define EXTENDERPROVIDEDPROPERTYATTRIBUTE_T3223729015_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ExtenderProvidedPropertyAttribute
struct  ExtenderProvidedPropertyAttribute_t3223729015  : public Attribute_t542643598
{
public:
	// System.ComponentModel.PropertyDescriptor System.ComponentModel.ExtenderProvidedPropertyAttribute::extenderProperty
	PropertyDescriptor_t4250402154 * ___extenderProperty_0;
	// System.ComponentModel.IExtenderProvider System.ComponentModel.ExtenderProvidedPropertyAttribute::provider
	RuntimeObject* ___provider_1;
	// System.Type System.ComponentModel.ExtenderProvidedPropertyAttribute::receiverType
	Type_t * ___receiverType_2;

public:
	inline static int32_t get_offset_of_extenderProperty_0() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3223729015, ___extenderProperty_0)); }
	inline PropertyDescriptor_t4250402154 * get_extenderProperty_0() const { return ___extenderProperty_0; }
	inline PropertyDescriptor_t4250402154 ** get_address_of_extenderProperty_0() { return &___extenderProperty_0; }
	inline void set_extenderProperty_0(PropertyDescriptor_t4250402154 * value)
	{
		___extenderProperty_0 = value;
		Il2CppCodeGenWriteBarrier((&___extenderProperty_0), value);
	}

	inline static int32_t get_offset_of_provider_1() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3223729015, ___provider_1)); }
	inline RuntimeObject* get_provider_1() const { return ___provider_1; }
	inline RuntimeObject** get_address_of_provider_1() { return &___provider_1; }
	inline void set_provider_1(RuntimeObject* value)
	{
		___provider_1 = value;
		Il2CppCodeGenWriteBarrier((&___provider_1), value);
	}

	inline static int32_t get_offset_of_receiverType_2() { return static_cast<int32_t>(offsetof(ExtenderProvidedPropertyAttribute_t3223729015, ___receiverType_2)); }
	inline Type_t * get_receiverType_2() const { return ___receiverType_2; }
	inline Type_t ** get_address_of_receiverType_2() { return &___receiverType_2; }
	inline void set_receiverType_2(Type_t * value)
	{
		___receiverType_2 = value;
		Il2CppCodeGenWriteBarrier((&___receiverType_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTENDERPROVIDEDPROPERTYATTRIBUTE_T3223729015_H
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
#ifndef DELEGATINGTYPEDESCRIPTIONPROVIDER_T1537564179_H
#define DELEGATINGTYPEDESCRIPTIONPROVIDER_T1537564179_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DelegatingTypeDescriptionProvider
struct  DelegatingTypeDescriptionProvider_t1537564179  : public TypeDescriptionProvider_t2438624375
{
public:
	// System.Type System.ComponentModel.DelegatingTypeDescriptionProvider::_type
	Type_t * ____type_2;

public:
	inline static int32_t get_offset_of__type_2() { return static_cast<int32_t>(offsetof(DelegatingTypeDescriptionProvider_t1537564179, ____type_2)); }
	inline Type_t * get__type_2() const { return ____type_2; }
	inline Type_t ** get_address_of__type_2() { return &____type_2; }
	inline void set__type_2(Type_t * value)
	{
		____type_2 = value;
		Il2CppCodeGenWriteBarrier((&____type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATINGTYPEDESCRIPTIONPROVIDER_T1537564179_H
#ifndef DESIGNERATTRIBUTE_T2778719479_H
#define DESIGNERATTRIBUTE_T2778719479_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerAttribute
struct  DesignerAttribute_t2778719479  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DesignerAttribute::designerTypeName
	String_t* ___designerTypeName_0;
	// System.String System.ComponentModel.DesignerAttribute::designerBaseTypeName
	String_t* ___designerBaseTypeName_1;
	// System.String System.ComponentModel.DesignerAttribute::typeId
	String_t* ___typeId_2;

public:
	inline static int32_t get_offset_of_designerTypeName_0() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2778719479, ___designerTypeName_0)); }
	inline String_t* get_designerTypeName_0() const { return ___designerTypeName_0; }
	inline String_t** get_address_of_designerTypeName_0() { return &___designerTypeName_0; }
	inline void set_designerTypeName_0(String_t* value)
	{
		___designerTypeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___designerTypeName_0), value);
	}

	inline static int32_t get_offset_of_designerBaseTypeName_1() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2778719479, ___designerBaseTypeName_1)); }
	inline String_t* get_designerBaseTypeName_1() const { return ___designerBaseTypeName_1; }
	inline String_t** get_address_of_designerBaseTypeName_1() { return &___designerBaseTypeName_1; }
	inline void set_designerBaseTypeName_1(String_t* value)
	{
		___designerBaseTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___designerBaseTypeName_1), value);
	}

	inline static int32_t get_offset_of_typeId_2() { return static_cast<int32_t>(offsetof(DesignerAttribute_t2778719479, ___typeId_2)); }
	inline String_t* get_typeId_2() const { return ___typeId_2; }
	inline String_t** get_address_of_typeId_2() { return &___typeId_2; }
	inline void set_typeId_2(String_t* value)
	{
		___typeId_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERATTRIBUTE_T2778719479_H
#ifndef EVENTDESCRIPTOR_T962731901_H
#define EVENTDESCRIPTOR_T962731901_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EventDescriptor
struct  EventDescriptor_t962731901  : public MemberDescriptor_t3749827553
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTDESCRIPTOR_T962731901_H
#ifndef DESIGNERCATEGORYATTRIBUTE_T1270090451_H
#define DESIGNERCATEGORYATTRIBUTE_T1270090451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerCategoryAttribute
struct  DesignerCategoryAttribute_t1270090451  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.DesignerCategoryAttribute::category
	String_t* ___category_0;
	// System.String System.ComponentModel.DesignerCategoryAttribute::typeId
	String_t* ___typeId_1;

public:
	inline static int32_t get_offset_of_category_0() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451, ___category_0)); }
	inline String_t* get_category_0() const { return ___category_0; }
	inline String_t** get_address_of_category_0() { return &___category_0; }
	inline void set_category_0(String_t* value)
	{
		___category_0 = value;
		Il2CppCodeGenWriteBarrier((&___category_0), value);
	}

	inline static int32_t get_offset_of_typeId_1() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451, ___typeId_1)); }
	inline String_t* get_typeId_1() const { return ___typeId_1; }
	inline String_t** get_address_of_typeId_1() { return &___typeId_1; }
	inline void set_typeId_1(String_t* value)
	{
		___typeId_1 = value;
		Il2CppCodeGenWriteBarrier((&___typeId_1), value);
	}
};

struct DesignerCategoryAttribute_t1270090451_StaticFields
{
public:
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Component
	DesignerCategoryAttribute_t1270090451 * ___Component_2;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Default
	DesignerCategoryAttribute_t1270090451 * ___Default_3;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Form
	DesignerCategoryAttribute_t1270090451 * ___Form_4;
	// System.ComponentModel.DesignerCategoryAttribute System.ComponentModel.DesignerCategoryAttribute::Generic
	DesignerCategoryAttribute_t1270090451 * ___Generic_5;

public:
	inline static int32_t get_offset_of_Component_2() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451_StaticFields, ___Component_2)); }
	inline DesignerCategoryAttribute_t1270090451 * get_Component_2() const { return ___Component_2; }
	inline DesignerCategoryAttribute_t1270090451 ** get_address_of_Component_2() { return &___Component_2; }
	inline void set_Component_2(DesignerCategoryAttribute_t1270090451 * value)
	{
		___Component_2 = value;
		Il2CppCodeGenWriteBarrier((&___Component_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451_StaticFields, ___Default_3)); }
	inline DesignerCategoryAttribute_t1270090451 * get_Default_3() const { return ___Default_3; }
	inline DesignerCategoryAttribute_t1270090451 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignerCategoryAttribute_t1270090451 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}

	inline static int32_t get_offset_of_Form_4() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451_StaticFields, ___Form_4)); }
	inline DesignerCategoryAttribute_t1270090451 * get_Form_4() const { return ___Form_4; }
	inline DesignerCategoryAttribute_t1270090451 ** get_address_of_Form_4() { return &___Form_4; }
	inline void set_Form_4(DesignerCategoryAttribute_t1270090451 * value)
	{
		___Form_4 = value;
		Il2CppCodeGenWriteBarrier((&___Form_4), value);
	}

	inline static int32_t get_offset_of_Generic_5() { return static_cast<int32_t>(offsetof(DesignerCategoryAttribute_t1270090451_StaticFields, ___Generic_5)); }
	inline DesignerCategoryAttribute_t1270090451 * get_Generic_5() const { return ___Generic_5; }
	inline DesignerCategoryAttribute_t1270090451 ** get_address_of_Generic_5() { return &___Generic_5; }
	inline void set_Generic_5(DesignerCategoryAttribute_t1270090451 * value)
	{
		___Generic_5 = value;
		Il2CppCodeGenWriteBarrier((&___Generic_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERCATEGORYATTRIBUTE_T1270090451_H
#ifndef TYPECONVERTERATTRIBUTE_T252469870_H
#define TYPECONVERTERATTRIBUTE_T252469870_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeConverterAttribute
struct  TypeConverterAttribute_t252469870  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.TypeConverterAttribute::typeName
	String_t* ___typeName_0;

public:
	inline static int32_t get_offset_of_typeName_0() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t252469870, ___typeName_0)); }
	inline String_t* get_typeName_0() const { return ___typeName_0; }
	inline String_t** get_address_of_typeName_0() { return &___typeName_0; }
	inline void set_typeName_0(String_t* value)
	{
		___typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeName_0), value);
	}
};

struct TypeConverterAttribute_t252469870_StaticFields
{
public:
	// System.ComponentModel.TypeConverterAttribute System.ComponentModel.TypeConverterAttribute::Default
	TypeConverterAttribute_t252469870 * ___Default_1;

public:
	inline static int32_t get_offset_of_Default_1() { return static_cast<int32_t>(offsetof(TypeConverterAttribute_t252469870_StaticFields, ___Default_1)); }
	inline TypeConverterAttribute_t252469870 * get_Default_1() const { return ___Default_1; }
	inline TypeConverterAttribute_t252469870 ** get_address_of_Default_1() { return &___Default_1; }
	inline void set_Default_1(TypeConverterAttribute_t252469870 * value)
	{
		___Default_1 = value;
		Il2CppCodeGenWriteBarrier((&___Default_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPECONVERTERATTRIBUTE_T252469870_H
#ifndef TYPEDESCRIPTIONNODE_T2784648617_H
#define TYPEDESCRIPTIONNODE_T2784648617_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode
struct  TypeDescriptionNode_t2784648617  : public TypeDescriptionProvider_t2438624375
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode::Next
	TypeDescriptionNode_t2784648617 * ___Next_2;
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor/TypeDescriptionNode::Provider
	TypeDescriptionProvider_t2438624375 * ___Provider_3;

public:
	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(TypeDescriptionNode_t2784648617, ___Next_2)); }
	inline TypeDescriptionNode_t2784648617 * get_Next_2() const { return ___Next_2; }
	inline TypeDescriptionNode_t2784648617 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(TypeDescriptionNode_t2784648617 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((&___Next_2), value);
	}

	inline static int32_t get_offset_of_Provider_3() { return static_cast<int32_t>(offsetof(TypeDescriptionNode_t2784648617, ___Provider_3)); }
	inline TypeDescriptionProvider_t2438624375 * get_Provider_3() const { return ___Provider_3; }
	inline TypeDescriptionProvider_t2438624375 ** get_address_of_Provider_3() { return &___Provider_3; }
	inline void set_Provider_3(TypeDescriptionProvider_t2438624375 * value)
	{
		___Provider_3 = value;
		Il2CppCodeGenWriteBarrier((&___Provider_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONNODE_T2784648617_H
#ifndef EMPTYCUSTOMTYPEDESCRIPTOR_T3729801536_H
#define EMPTYCUSTOMTYPEDESCRIPTOR_T3729801536_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct  EmptyCustomTypeDescriptor_t3729801536  : public CustomTypeDescriptor_t1720788626
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EMPTYCUSTOMTYPEDESCRIPTOR_T3729801536_H
#ifndef TYPEDESCRIPTIONPROVIDERATTRIBUTE_T226398963_H
#define TYPEDESCRIPTIONPROVIDERATTRIBUTE_T226398963_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptionProviderAttribute
struct  TypeDescriptionProviderAttribute_t226398963  : public Attribute_t542643598
{
public:
	// System.String System.ComponentModel.TypeDescriptionProviderAttribute::_typeName
	String_t* ____typeName_0;

public:
	inline static int32_t get_offset_of__typeName_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProviderAttribute_t226398963, ____typeName_0)); }
	inline String_t* get__typeName_0() const { return ____typeName_0; }
	inline String_t** get_address_of__typeName_0() { return &____typeName_0; }
	inline void set__typeName_0(String_t* value)
	{
		____typeName_0 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEDESCRIPTIONPROVIDERATTRIBUTE_T226398963_H
#ifndef DEFAULTTYPEDESCRIPTOR_T3334440910_H
#define DEFAULTTYPEDESCRIPTOR_T3334440910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct  DefaultTypeDescriptor_t3334440910 
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_node
	TypeDescriptionNode_t2784648617 * ____node_0;
	// System.Type System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_objectType
	Type_t * ____objectType_1;
	// System.Object System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor::_instance
	RuntimeObject * ____instance_2;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t3334440910, ____node_0)); }
	inline TypeDescriptionNode_t2784648617 * get__node_0() const { return ____node_0; }
	inline TypeDescriptionNode_t2784648617 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(TypeDescriptionNode_t2784648617 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((&____node_0), value);
	}

	inline static int32_t get_offset_of__objectType_1() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t3334440910, ____objectType_1)); }
	inline Type_t * get__objectType_1() const { return ____objectType_1; }
	inline Type_t ** get_address_of__objectType_1() { return &____objectType_1; }
	inline void set__objectType_1(Type_t * value)
	{
		____objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_1), value);
	}

	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(DefaultTypeDescriptor_t3334440910, ____instance_2)); }
	inline RuntimeObject * get__instance_2() const { return ____instance_2; }
	inline RuntimeObject ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(RuntimeObject * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier((&____instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t3334440910_marshaled_pinvoke
{
	TypeDescriptionNode_t2784648617 * ____node_0;
	Type_t * ____objectType_1;
	Il2CppIUnknown* ____instance_2;
};
// Native definition for COM marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t3334440910_marshaled_com
{
	TypeDescriptionNode_t2784648617 * ____node_0;
	Type_t * ____objectType_1;
	Il2CppIUnknown* ____instance_2;
};
#endif // DEFAULTTYPEDESCRIPTOR_T3334440910_H
#ifndef DEFAULTEXTENDEDTYPEDESCRIPTOR_T3612110989_H
#define DEFAULTEXTENDEDTYPEDESCRIPTOR_T3612110989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct  DefaultExtendedTypeDescriptor_t3612110989 
{
public:
	// System.ComponentModel.TypeDescriptor/TypeDescriptionNode System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::_node
	TypeDescriptionNode_t2784648617 * ____node_0;
	// System.Object System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor::_instance
	RuntimeObject * ____instance_1;

public:
	inline static int32_t get_offset_of__node_0() { return static_cast<int32_t>(offsetof(DefaultExtendedTypeDescriptor_t3612110989, ____node_0)); }
	inline TypeDescriptionNode_t2784648617 * get__node_0() const { return ____node_0; }
	inline TypeDescriptionNode_t2784648617 ** get_address_of__node_0() { return &____node_0; }
	inline void set__node_0(TypeDescriptionNode_t2784648617 * value)
	{
		____node_0 = value;
		Il2CppCodeGenWriteBarrier((&____node_0), value);
	}

	inline static int32_t get_offset_of__instance_1() { return static_cast<int32_t>(offsetof(DefaultExtendedTypeDescriptor_t3612110989, ____instance_1)); }
	inline RuntimeObject * get__instance_1() const { return ____instance_1; }
	inline RuntimeObject ** get_address_of__instance_1() { return &____instance_1; }
	inline void set__instance_1(RuntimeObject * value)
	{
		____instance_1 = value;
		Il2CppCodeGenWriteBarrier((&____instance_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_t3612110989_marshaled_pinvoke
{
	TypeDescriptionNode_t2784648617 * ____node_0;
	Il2CppIUnknown* ____instance_1;
};
// Native definition for COM marshalling of System.ComponentModel.TypeDescriptor/TypeDescriptionNode/DefaultExtendedTypeDescriptor
struct DefaultExtendedTypeDescriptor_t3612110989_marshaled_com
{
	TypeDescriptionNode_t2784648617 * ____node_0;
	Il2CppIUnknown* ____instance_1;
};
#endif // DEFAULTEXTENDEDTYPEDESCRIPTOR_T3612110989_H
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
#ifndef DESIGNERSERIALIZATIONVISIBILITY_T3751360903_H
#define DESIGNERSERIALIZATIONVISIBILITY_T3751360903_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibility
struct  DesignerSerializationVisibility_t3751360903 
{
public:
	// System.Int32 System.ComponentModel.DesignerSerializationVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibility_t3751360903, ___value___2)); }
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
#endif // DESIGNERSERIALIZATIONVISIBILITY_T3751360903_H
#ifndef EDITORBROWSABLESTATE_T373498655_H
#define EDITORBROWSABLESTATE_T373498655_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableState
struct  EditorBrowsableState_t373498655 
{
public:
	// System.Int32 System.ComponentModel.EditorBrowsableState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EditorBrowsableState_t373498655, ___value___2)); }
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
#endif // EDITORBROWSABLESTATE_T373498655_H
#ifndef EXTERNALEXCEPTION_T1252662682_H
#define EXTERNALEXCEPTION_T1252662682_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.ExternalException
struct  ExternalException_t1252662682  : public SystemException_t3877406272
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXTERNALEXCEPTION_T1252662682_H
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
#ifndef HASHTABLE_T909839986_H
#define HASHTABLE_T909839986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Hashtable
struct  Hashtable_t909839986  : public RuntimeObject
{
public:
	// System.Collections.Hashtable/bucket[] System.Collections.Hashtable::buckets
	bucketU5BU5D_t2149607518* ___buckets_0;
	// System.Int32 System.Collections.Hashtable::count
	int32_t ___count_1;
	// System.Int32 System.Collections.Hashtable::occupancy
	int32_t ___occupancy_2;
	// System.Int32 System.Collections.Hashtable::loadsize
	int32_t ___loadsize_3;
	// System.Single System.Collections.Hashtable::loadFactor
	float ___loadFactor_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::version
	int32_t ___version_5;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Hashtable::isWriterInProgress
	bool ___isWriterInProgress_6;
	// System.Collections.ICollection System.Collections.Hashtable::keys
	RuntimeObject* ___keys_7;
	// System.Collections.ICollection System.Collections.Hashtable::values
	RuntimeObject* ___values_8;
	// System.Collections.IEqualityComparer System.Collections.Hashtable::_keycomparer
	RuntimeObject* ____keycomparer_9;
	// System.Object System.Collections.Hashtable::_syncRoot
	RuntimeObject * ____syncRoot_10;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___buckets_0)); }
	inline bucketU5BU5D_t2149607518* get_buckets_0() const { return ___buckets_0; }
	inline bucketU5BU5D_t2149607518** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(bucketU5BU5D_t2149607518* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((&___buckets_0), value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_occupancy_2() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___occupancy_2)); }
	inline int32_t get_occupancy_2() const { return ___occupancy_2; }
	inline int32_t* get_address_of_occupancy_2() { return &___occupancy_2; }
	inline void set_occupancy_2(int32_t value)
	{
		___occupancy_2 = value;
	}

	inline static int32_t get_offset_of_loadsize_3() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___loadsize_3)); }
	inline int32_t get_loadsize_3() const { return ___loadsize_3; }
	inline int32_t* get_address_of_loadsize_3() { return &___loadsize_3; }
	inline void set_loadsize_3(int32_t value)
	{
		___loadsize_3 = value;
	}

	inline static int32_t get_offset_of_loadFactor_4() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___loadFactor_4)); }
	inline float get_loadFactor_4() const { return ___loadFactor_4; }
	inline float* get_address_of_loadFactor_4() { return &___loadFactor_4; }
	inline void set_loadFactor_4(float value)
	{
		___loadFactor_4 = value;
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___version_5)); }
	inline int32_t get_version_5() const { return ___version_5; }
	inline int32_t* get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(int32_t value)
	{
		___version_5 = value;
	}

	inline static int32_t get_offset_of_isWriterInProgress_6() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___isWriterInProgress_6)); }
	inline bool get_isWriterInProgress_6() const { return ___isWriterInProgress_6; }
	inline bool* get_address_of_isWriterInProgress_6() { return &___isWriterInProgress_6; }
	inline void set_isWriterInProgress_6(bool value)
	{
		___isWriterInProgress_6 = value;
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___keys_7)); }
	inline RuntimeObject* get_keys_7() const { return ___keys_7; }
	inline RuntimeObject** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(RuntimeObject* value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((&___keys_7), value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ___values_8)); }
	inline RuntimeObject* get_values_8() const { return ___values_8; }
	inline RuntimeObject** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(RuntimeObject* value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((&___values_8), value);
	}

	inline static int32_t get_offset_of__keycomparer_9() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ____keycomparer_9)); }
	inline RuntimeObject* get__keycomparer_9() const { return ____keycomparer_9; }
	inline RuntimeObject** get_address_of__keycomparer_9() { return &____keycomparer_9; }
	inline void set__keycomparer_9(RuntimeObject* value)
	{
		____keycomparer_9 = value;
		Il2CppCodeGenWriteBarrier((&____keycomparer_9), value);
	}

	inline static int32_t get_offset_of__syncRoot_10() { return static_cast<int32_t>(offsetof(Hashtable_t909839986, ____syncRoot_10)); }
	inline RuntimeObject * get__syncRoot_10() const { return ____syncRoot_10; }
	inline RuntimeObject ** get_address_of__syncRoot_10() { return &____syncRoot_10; }
	inline void set__syncRoot_10(RuntimeObject * value)
	{
		____syncRoot_10 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HASHTABLE_T909839986_H
#ifndef REFLECTTYPEDESCRIPTIONPROVIDER_T1753777466_H
#define REFLECTTYPEDESCRIPTIONPROVIDER_T1753777466_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ReflectTypeDescriptionProvider
struct  ReflectTypeDescriptionProvider_t1753777466  : public TypeDescriptionProvider_t2438624375
{
public:
	// System.Collections.Hashtable System.ComponentModel.ReflectTypeDescriptionProvider::_typeData
	Hashtable_t909839986 * ____typeData_2;

public:
	inline static int32_t get_offset_of__typeData_2() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466, ____typeData_2)); }
	inline Hashtable_t909839986 * get__typeData_2() const { return ____typeData_2; }
	inline Hashtable_t909839986 ** get_address_of__typeData_2() { return &____typeData_2; }
	inline void set__typeData_2(Hashtable_t909839986 * value)
	{
		____typeData_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeData_2), value);
	}
};

struct ReflectTypeDescriptionProvider_t1753777466_StaticFields
{
public:
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider::_typeConstructor
	TypeU5BU5D_t1664964607* ____typeConstructor_3;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicTypeConverters
	Hashtable_t909839986 * ____intrinsicTypeConverters_4;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicReferenceKey
	RuntimeObject * ____intrinsicReferenceKey_5;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_intrinsicNullableKey
	RuntimeObject * ____intrinsicNullableKey_6;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_dictionaryKey
	RuntimeObject * ____dictionaryKey_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.ComponentModel.ReflectTypeDescriptionProvider::_attributeCache
	Hashtable_t909839986 * ____attributeCache_8;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderProviderKey
	Guid_t  ____extenderProviderKey_9;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderPropertiesKey
	Guid_t  ____extenderPropertiesKey_10;
	// System.Guid System.ComponentModel.ReflectTypeDescriptionProvider::_extenderProviderPropertiesKey
	Guid_t  ____extenderProviderPropertiesKey_11;
	// System.Type[] System.ComponentModel.ReflectTypeDescriptionProvider::_skipInterfaceAttributeList
	TypeU5BU5D_t1664964607* ____skipInterfaceAttributeList_12;
	// System.Object System.ComponentModel.ReflectTypeDescriptionProvider::_internalSyncObject
	RuntimeObject * ____internalSyncObject_13;

public:
	inline static int32_t get_offset_of__typeConstructor_3() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____typeConstructor_3)); }
	inline TypeU5BU5D_t1664964607* get__typeConstructor_3() const { return ____typeConstructor_3; }
	inline TypeU5BU5D_t1664964607** get_address_of__typeConstructor_3() { return &____typeConstructor_3; }
	inline void set__typeConstructor_3(TypeU5BU5D_t1664964607* value)
	{
		____typeConstructor_3 = value;
		Il2CppCodeGenWriteBarrier((&____typeConstructor_3), value);
	}

	inline static int32_t get_offset_of__intrinsicTypeConverters_4() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____intrinsicTypeConverters_4)); }
	inline Hashtable_t909839986 * get__intrinsicTypeConverters_4() const { return ____intrinsicTypeConverters_4; }
	inline Hashtable_t909839986 ** get_address_of__intrinsicTypeConverters_4() { return &____intrinsicTypeConverters_4; }
	inline void set__intrinsicTypeConverters_4(Hashtable_t909839986 * value)
	{
		____intrinsicTypeConverters_4 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicTypeConverters_4), value);
	}

	inline static int32_t get_offset_of__intrinsicReferenceKey_5() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____intrinsicReferenceKey_5)); }
	inline RuntimeObject * get__intrinsicReferenceKey_5() const { return ____intrinsicReferenceKey_5; }
	inline RuntimeObject ** get_address_of__intrinsicReferenceKey_5() { return &____intrinsicReferenceKey_5; }
	inline void set__intrinsicReferenceKey_5(RuntimeObject * value)
	{
		____intrinsicReferenceKey_5 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicReferenceKey_5), value);
	}

	inline static int32_t get_offset_of__intrinsicNullableKey_6() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____intrinsicNullableKey_6)); }
	inline RuntimeObject * get__intrinsicNullableKey_6() const { return ____intrinsicNullableKey_6; }
	inline RuntimeObject ** get_address_of__intrinsicNullableKey_6() { return &____intrinsicNullableKey_6; }
	inline void set__intrinsicNullableKey_6(RuntimeObject * value)
	{
		____intrinsicNullableKey_6 = value;
		Il2CppCodeGenWriteBarrier((&____intrinsicNullableKey_6), value);
	}

	inline static int32_t get_offset_of__dictionaryKey_7() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____dictionaryKey_7)); }
	inline RuntimeObject * get__dictionaryKey_7() const { return ____dictionaryKey_7; }
	inline RuntimeObject ** get_address_of__dictionaryKey_7() { return &____dictionaryKey_7; }
	inline void set__dictionaryKey_7(RuntimeObject * value)
	{
		____dictionaryKey_7 = value;
		Il2CppCodeGenWriteBarrier((&____dictionaryKey_7), value);
	}

	inline static int32_t get_offset_of__attributeCache_8() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____attributeCache_8)); }
	inline Hashtable_t909839986 * get__attributeCache_8() const { return ____attributeCache_8; }
	inline Hashtable_t909839986 ** get_address_of__attributeCache_8() { return &____attributeCache_8; }
	inline void set__attributeCache_8(Hashtable_t909839986 * value)
	{
		____attributeCache_8 = value;
		Il2CppCodeGenWriteBarrier((&____attributeCache_8), value);
	}

	inline static int32_t get_offset_of__extenderProviderKey_9() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____extenderProviderKey_9)); }
	inline Guid_t  get__extenderProviderKey_9() const { return ____extenderProviderKey_9; }
	inline Guid_t * get_address_of__extenderProviderKey_9() { return &____extenderProviderKey_9; }
	inline void set__extenderProviderKey_9(Guid_t  value)
	{
		____extenderProviderKey_9 = value;
	}

	inline static int32_t get_offset_of__extenderPropertiesKey_10() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____extenderPropertiesKey_10)); }
	inline Guid_t  get__extenderPropertiesKey_10() const { return ____extenderPropertiesKey_10; }
	inline Guid_t * get_address_of__extenderPropertiesKey_10() { return &____extenderPropertiesKey_10; }
	inline void set__extenderPropertiesKey_10(Guid_t  value)
	{
		____extenderPropertiesKey_10 = value;
	}

	inline static int32_t get_offset_of__extenderProviderPropertiesKey_11() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____extenderProviderPropertiesKey_11)); }
	inline Guid_t  get__extenderProviderPropertiesKey_11() const { return ____extenderProviderPropertiesKey_11; }
	inline Guid_t * get_address_of__extenderProviderPropertiesKey_11() { return &____extenderProviderPropertiesKey_11; }
	inline void set__extenderProviderPropertiesKey_11(Guid_t  value)
	{
		____extenderProviderPropertiesKey_11 = value;
	}

	inline static int32_t get_offset_of__skipInterfaceAttributeList_12() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____skipInterfaceAttributeList_12)); }
	inline TypeU5BU5D_t1664964607* get__skipInterfaceAttributeList_12() const { return ____skipInterfaceAttributeList_12; }
	inline TypeU5BU5D_t1664964607** get_address_of__skipInterfaceAttributeList_12() { return &____skipInterfaceAttributeList_12; }
	inline void set__skipInterfaceAttributeList_12(TypeU5BU5D_t1664964607* value)
	{
		____skipInterfaceAttributeList_12 = value;
		Il2CppCodeGenWriteBarrier((&____skipInterfaceAttributeList_12), value);
	}

	inline static int32_t get_offset_of__internalSyncObject_13() { return static_cast<int32_t>(offsetof(ReflectTypeDescriptionProvider_t1753777466_StaticFields, ____internalSyncObject_13)); }
	inline RuntimeObject * get__internalSyncObject_13() const { return ____internalSyncObject_13; }
	inline RuntimeObject ** get_address_of__internalSyncObject_13() { return &____internalSyncObject_13; }
	inline void set__internalSyncObject_13(RuntimeObject * value)
	{
		____internalSyncObject_13 = value;
		Il2CppCodeGenWriteBarrier((&____internalSyncObject_13), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFLECTTYPEDESCRIPTIONPROVIDER_T1753777466_H
#ifndef EDITORBROWSABLEATTRIBUTE_T1050682502_H
#define EDITORBROWSABLEATTRIBUTE_T1050682502_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EditorBrowsableAttribute
struct  EditorBrowsableAttribute_t1050682502  : public Attribute_t542643598
{
public:
	// System.ComponentModel.EditorBrowsableState System.ComponentModel.EditorBrowsableAttribute::browsableState
	int32_t ___browsableState_0;

public:
	inline static int32_t get_offset_of_browsableState_0() { return static_cast<int32_t>(offsetof(EditorBrowsableAttribute_t1050682502, ___browsableState_0)); }
	inline int32_t get_browsableState_0() const { return ___browsableState_0; }
	inline int32_t* get_address_of_browsableState_0() { return &___browsableState_0; }
	inline void set_browsableState_0(int32_t value)
	{
		___browsableState_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORBROWSABLEATTRIBUTE_T1050682502_H
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
#ifndef ENUMCONVERTER_T2538808523_H
#define ENUMCONVERTER_T2538808523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.EnumConverter
struct  EnumConverter_t2538808523  : public TypeConverter_t745995970
{
public:
	// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.EnumConverter::values
	StandardValuesCollection_t191679357 * ___values_2;
	// System.Type System.ComponentModel.EnumConverter::type
	Type_t * ___type_3;

public:
	inline static int32_t get_offset_of_values_2() { return static_cast<int32_t>(offsetof(EnumConverter_t2538808523, ___values_2)); }
	inline StandardValuesCollection_t191679357 * get_values_2() const { return ___values_2; }
	inline StandardValuesCollection_t191679357 ** get_address_of_values_2() { return &___values_2; }
	inline void set_values_2(StandardValuesCollection_t191679357 * value)
	{
		___values_2 = value;
		Il2CppCodeGenWriteBarrier((&___values_2), value);
	}

	inline static int32_t get_offset_of_type_3() { return static_cast<int32_t>(offsetof(EnumConverter_t2538808523, ___type_3)); }
	inline Type_t * get_type_3() const { return ___type_3; }
	inline Type_t ** get_address_of_type_3() { return &___type_3; }
	inline void set_type_3(Type_t * value)
	{
		___type_3 = value;
		Il2CppCodeGenWriteBarrier((&___type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMCONVERTER_T2538808523_H
#ifndef TIMESPANCONVERTER_T2149358279_H
#define TIMESPANCONVERTER_T2149358279_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.TimeSpanConverter
struct  TimeSpanConverter_t2149358279  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPANCONVERTER_T2149358279_H
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
#ifndef DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2980019899_H
#define DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2980019899_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DesignerSerializationVisibilityAttribute
struct  DesignerSerializationVisibilityAttribute_t2980019899  : public Attribute_t542643598
{
public:
	// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.DesignerSerializationVisibilityAttribute::visibility
	int32_t ___visibility_4;

public:
	inline static int32_t get_offset_of_visibility_4() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2980019899, ___visibility_4)); }
	inline int32_t get_visibility_4() const { return ___visibility_4; }
	inline int32_t* get_address_of_visibility_4() { return &___visibility_4; }
	inline void set_visibility_4(int32_t value)
	{
		___visibility_4 = value;
	}
};

struct DesignerSerializationVisibilityAttribute_t2980019899_StaticFields
{
public:
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Content
	DesignerSerializationVisibilityAttribute_t2980019899 * ___Content_0;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Hidden
	DesignerSerializationVisibilityAttribute_t2980019899 * ___Hidden_1;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Visible
	DesignerSerializationVisibilityAttribute_t2980019899 * ___Visible_2;
	// System.ComponentModel.DesignerSerializationVisibilityAttribute System.ComponentModel.DesignerSerializationVisibilityAttribute::Default
	DesignerSerializationVisibilityAttribute_t2980019899 * ___Default_3;

public:
	inline static int32_t get_offset_of_Content_0() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2980019899_StaticFields, ___Content_0)); }
	inline DesignerSerializationVisibilityAttribute_t2980019899 * get_Content_0() const { return ___Content_0; }
	inline DesignerSerializationVisibilityAttribute_t2980019899 ** get_address_of_Content_0() { return &___Content_0; }
	inline void set_Content_0(DesignerSerializationVisibilityAttribute_t2980019899 * value)
	{
		___Content_0 = value;
		Il2CppCodeGenWriteBarrier((&___Content_0), value);
	}

	inline static int32_t get_offset_of_Hidden_1() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2980019899_StaticFields, ___Hidden_1)); }
	inline DesignerSerializationVisibilityAttribute_t2980019899 * get_Hidden_1() const { return ___Hidden_1; }
	inline DesignerSerializationVisibilityAttribute_t2980019899 ** get_address_of_Hidden_1() { return &___Hidden_1; }
	inline void set_Hidden_1(DesignerSerializationVisibilityAttribute_t2980019899 * value)
	{
		___Hidden_1 = value;
		Il2CppCodeGenWriteBarrier((&___Hidden_1), value);
	}

	inline static int32_t get_offset_of_Visible_2() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2980019899_StaticFields, ___Visible_2)); }
	inline DesignerSerializationVisibilityAttribute_t2980019899 * get_Visible_2() const { return ___Visible_2; }
	inline DesignerSerializationVisibilityAttribute_t2980019899 ** get_address_of_Visible_2() { return &___Visible_2; }
	inline void set_Visible_2(DesignerSerializationVisibilityAttribute_t2980019899 * value)
	{
		___Visible_2 = value;
		Il2CppCodeGenWriteBarrier((&___Visible_2), value);
	}

	inline static int32_t get_offset_of_Default_3() { return static_cast<int32_t>(offsetof(DesignerSerializationVisibilityAttribute_t2980019899_StaticFields, ___Default_3)); }
	inline DesignerSerializationVisibilityAttribute_t2980019899 * get_Default_3() const { return ___Default_3; }
	inline DesignerSerializationVisibilityAttribute_t2980019899 ** get_address_of_Default_3() { return &___Default_3; }
	inline void set_Default_3(DesignerSerializationVisibilityAttribute_t2980019899 * value)
	{
		___Default_3 = value;
		Il2CppCodeGenWriteBarrier((&___Default_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESIGNERSERIALIZATIONVISIBILITYATTRIBUTE_T2980019899_H
#ifndef STRINGCONVERTER_T3749524419_H
#define STRINGCONVERTER_T3749524419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.StringConverter
struct  StringConverter_t3749524419  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRINGCONVERTER_T3749524419_H
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
#ifndef NULLABLECONVERTER_T1941973167_H
#define NULLABLECONVERTER_T1941973167_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.NullableConverter
struct  NullableConverter_t1941973167  : public TypeConverter_t745995970
{
public:
	// System.Type System.ComponentModel.NullableConverter::nullableType
	Type_t * ___nullableType_2;
	// System.Type System.ComponentModel.NullableConverter::simpleType
	Type_t * ___simpleType_3;
	// System.ComponentModel.TypeConverter System.ComponentModel.NullableConverter::simpleTypeConverter
	TypeConverter_t745995970 * ___simpleTypeConverter_4;

public:
	inline static int32_t get_offset_of_nullableType_2() { return static_cast<int32_t>(offsetof(NullableConverter_t1941973167, ___nullableType_2)); }
	inline Type_t * get_nullableType_2() const { return ___nullableType_2; }
	inline Type_t ** get_address_of_nullableType_2() { return &___nullableType_2; }
	inline void set_nullableType_2(Type_t * value)
	{
		___nullableType_2 = value;
		Il2CppCodeGenWriteBarrier((&___nullableType_2), value);
	}

	inline static int32_t get_offset_of_simpleType_3() { return static_cast<int32_t>(offsetof(NullableConverter_t1941973167, ___simpleType_3)); }
	inline Type_t * get_simpleType_3() const { return ___simpleType_3; }
	inline Type_t ** get_address_of_simpleType_3() { return &___simpleType_3; }
	inline void set_simpleType_3(Type_t * value)
	{
		___simpleType_3 = value;
		Il2CppCodeGenWriteBarrier((&___simpleType_3), value);
	}

	inline static int32_t get_offset_of_simpleTypeConverter_4() { return static_cast<int32_t>(offsetof(NullableConverter_t1941973167, ___simpleTypeConverter_4)); }
	inline TypeConverter_t745995970 * get_simpleTypeConverter_4() const { return ___simpleTypeConverter_4; }
	inline TypeConverter_t745995970 ** get_address_of_simpleTypeConverter_4() { return &___simpleTypeConverter_4; }
	inline void set_simpleTypeConverter_4(TypeConverter_t745995970 * value)
	{
		___simpleTypeConverter_4 = value;
		Il2CppCodeGenWriteBarrier((&___simpleTypeConverter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NULLABLECONVERTER_T1941973167_H
#ifndef GUIDCONVERTER_T1547586607_H
#define GUIDCONVERTER_T1547586607_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.GuidConverter
struct  GuidConverter_t1547586607  : public TypeConverter_t745995970
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUIDCONVERTER_T1547586607_H
#ifndef WEAKHASHTABLE_T1679685894_H
#define WEAKHASHTABLE_T1679685894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.WeakHashtable
struct  WeakHashtable_t1679685894  : public Hashtable_t909839986
{
public:

public:
};

struct WeakHashtable_t1679685894_StaticFields
{
public:
	// System.Collections.IEqualityComparer System.ComponentModel.WeakHashtable::_comparer
	RuntimeObject* ____comparer_11;

public:
	inline static int32_t get_offset_of__comparer_11() { return static_cast<int32_t>(offsetof(WeakHashtable_t1679685894_StaticFields, ____comparer_11)); }
	inline RuntimeObject* get__comparer_11() const { return ____comparer_11; }
	inline RuntimeObject** get_address_of__comparer_11() { return &____comparer_11; }
	inline void set__comparer_11(RuntimeObject* value)
	{
		____comparer_11 = value;
		Il2CppCodeGenWriteBarrier((&____comparer_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WEAKHASHTABLE_T1679685894_H
#ifndef WIN32EXCEPTION_T1708275760_H
#define WIN32EXCEPTION_T1708275760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Win32Exception
struct  Win32Exception_t1708275760  : public ExternalException_t1252662682
{
public:
	// System.Int32 System.ComponentModel.Win32Exception::nativeErrorCode
	int32_t ___nativeErrorCode_16;

public:
	inline static int32_t get_offset_of_nativeErrorCode_16() { return static_cast<int32_t>(offsetof(Win32Exception_t1708275760, ___nativeErrorCode_16)); }
	inline int32_t get_nativeErrorCode_16() const { return ___nativeErrorCode_16; }
	inline int32_t* get_address_of_nativeErrorCode_16() { return &___nativeErrorCode_16; }
	inline void set_nativeErrorCode_16(int32_t value)
	{
		___nativeErrorCode_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WIN32EXCEPTION_T1708275760_H
#ifndef UINT32CONVERTER_T1748821239_H
#define UINT32CONVERTER_T1748821239_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt32Converter
struct  UInt32Converter_t1748821239  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32CONVERTER_T1748821239_H
#ifndef INT64CONVERTER_T3186343659_H
#define INT64CONVERTER_T3186343659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int64Converter
struct  Int64Converter_t3186343659  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64CONVERTER_T3186343659_H
#ifndef UINT64CONVERTER_T977523578_H
#define UINT64CONVERTER_T977523578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt64Converter
struct  UInt64Converter_t977523578  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64CONVERTER_T977523578_H
#ifndef UINT16CONVERTER_T1747783369_H
#define UINT16CONVERTER_T1747783369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.UInt16Converter
struct  UInt16Converter_t1747783369  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16CONVERTER_T1747783369_H
#ifndef SINGLECONVERTER_T3693313828_H
#define SINGLECONVERTER_T3693313828_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SingleConverter
struct  SingleConverter_t3693313828  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECONVERTER_T3693313828_H
#ifndef DOUBLECONVERTER_T864652623_H
#define DOUBLECONVERTER_T864652623_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.DoubleConverter
struct  DoubleConverter_t864652623  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLECONVERTER_T864652623_H
#ifndef INT16CONVERTER_T903627590_H
#define INT16CONVERTER_T903627590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int16Converter
struct  Int16Converter_t903627590  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16CONVERTER_T903627590_H
#ifndef INT32CONVERTER_T957938388_H
#define INT32CONVERTER_T957938388_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.Int32Converter
struct  Int32Converter_t957938388  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32CONVERTER_T957938388_H
#ifndef SBYTECONVERTER_T4003686519_H
#define SBYTECONVERTER_T4003686519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.SByteConverter
struct  SByteConverter_t4003686519  : public BaseNumberConverter_t1130358776
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SBYTECONVERTER_T4003686519_H
#ifndef REFRESHEVENTHANDLER_T456069287_H
#define REFRESHEVENTHANDLER_T456069287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.RefreshEventHandler
struct  RefreshEventHandler_t456069287  : public MulticastDelegate_t3201952435
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REFRESHEVENTHANDLER_T456069287_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2200 = { sizeof (DefaultValueAttribute_t1302720498), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2200[1] = 
{
	DefaultValueAttribute_t1302720498::get_offset_of_value_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2201 = { sizeof (DelegatingTypeDescriptionProvider_t1537564179), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2201[1] = 
{
	DelegatingTypeDescriptionProvider_t1537564179::get_offset_of__type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2202 = { sizeof (DescriptionAttribute_t3207779672), -1, sizeof(DescriptionAttribute_t3207779672_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2202[2] = 
{
	DescriptionAttribute_t3207779672_StaticFields::get_offset_of_Default_0(),
	DescriptionAttribute_t3207779672::get_offset_of_description_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2203 = { sizeof (DesignerAttribute_t2778719479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2203[3] = 
{
	DesignerAttribute_t2778719479::get_offset_of_designerTypeName_0(),
	DesignerAttribute_t2778719479::get_offset_of_designerBaseTypeName_1(),
	DesignerAttribute_t2778719479::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2204 = { sizeof (DesignerCategoryAttribute_t1270090451), -1, sizeof(DesignerCategoryAttribute_t1270090451_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2204[6] = 
{
	DesignerCategoryAttribute_t1270090451::get_offset_of_category_0(),
	DesignerCategoryAttribute_t1270090451::get_offset_of_typeId_1(),
	DesignerCategoryAttribute_t1270090451_StaticFields::get_offset_of_Component_2(),
	DesignerCategoryAttribute_t1270090451_StaticFields::get_offset_of_Default_3(),
	DesignerCategoryAttribute_t1270090451_StaticFields::get_offset_of_Form_4(),
	DesignerCategoryAttribute_t1270090451_StaticFields::get_offset_of_Generic_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2205 = { sizeof (DesignerSerializationVisibility_t3751360903)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2205[4] = 
{
	DesignerSerializationVisibility_t3751360903::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2206 = { sizeof (DesignerSerializationVisibilityAttribute_t2980019899), -1, sizeof(DesignerSerializationVisibilityAttribute_t2980019899_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2206[5] = 
{
	DesignerSerializationVisibilityAttribute_t2980019899_StaticFields::get_offset_of_Content_0(),
	DesignerSerializationVisibilityAttribute_t2980019899_StaticFields::get_offset_of_Hidden_1(),
	DesignerSerializationVisibilityAttribute_t2980019899_StaticFields::get_offset_of_Visible_2(),
	DesignerSerializationVisibilityAttribute_t2980019899_StaticFields::get_offset_of_Default_3(),
	DesignerSerializationVisibilityAttribute_t2980019899::get_offset_of_visibility_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2207 = { sizeof (DoubleConverter_t864652623), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2208 = { sizeof (EditorBrowsableAttribute_t1050682502), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2208[1] = 
{
	EditorBrowsableAttribute_t1050682502::get_offset_of_browsableState_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2209 = { sizeof (EditorBrowsableState_t373498655)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2209[4] = 
{
	EditorBrowsableState_t373498655::get_offset_of_value___2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2210 = { sizeof (EnumConverter_t2538808523), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2210[2] = 
{
	EnumConverter_t2538808523::get_offset_of_values_2(),
	EnumConverter_t2538808523::get_offset_of_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2211 = { sizeof (EventDescriptor_t962731901), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2212 = { sizeof (EventDescriptorCollection_t3053042509), -1, sizeof(EventDescriptorCollection_t3053042509_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2212[8] = 
{
	EventDescriptorCollection_t3053042509::get_offset_of_events_0(),
	EventDescriptorCollection_t3053042509::get_offset_of_namedSort_1(),
	EventDescriptorCollection_t3053042509::get_offset_of_comparer_2(),
	EventDescriptorCollection_t3053042509::get_offset_of_eventsOwned_3(),
	EventDescriptorCollection_t3053042509::get_offset_of_needSort_4(),
	EventDescriptorCollection_t3053042509::get_offset_of_eventCount_5(),
	EventDescriptorCollection_t3053042509::get_offset_of_readOnly_6(),
	EventDescriptorCollection_t3053042509_StaticFields::get_offset_of_Empty_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2213 = { sizeof (EventHandlerList_t1298116880), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2213[2] = 
{
	EventHandlerList_t1298116880::get_offset_of_head_0(),
	EventHandlerList_t1298116880::get_offset_of_parent_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2214 = { sizeof (ListEntry_t385037026), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2214[3] = 
{
	ListEntry_t385037026::get_offset_of_next_0(),
	ListEntry_t385037026::get_offset_of_key_1(),
	ListEntry_t385037026::get_offset_of_handler_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2215 = { sizeof (ExtenderProvidedPropertyAttribute_t3223729015), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2215[3] = 
{
	ExtenderProvidedPropertyAttribute_t3223729015::get_offset_of_extenderProperty_0(),
	ExtenderProvidedPropertyAttribute_t3223729015::get_offset_of_provider_1(),
	ExtenderProvidedPropertyAttribute_t3223729015::get_offset_of_receiverType_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2216 = { sizeof (GuidConverter_t1547586607), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2217 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2218 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2219 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2220 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2221 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2222 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2223 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2224 = { sizeof (InstallerTypeAttribute_t2978264484), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2224[1] = 
{
	InstallerTypeAttribute_t2978264484::get_offset_of__typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2225 = { sizeof (Int16Converter_t903627590), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2226 = { sizeof (Int32Converter_t957938388), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2227 = { sizeof (Int64Converter_t3186343659), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2228 = { sizeof (MemberDescriptor_t3749827553), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2228[11] = 
{
	MemberDescriptor_t3749827553::get_offset_of_name_0(),
	MemberDescriptor_t3749827553::get_offset_of_nameHash_1(),
	MemberDescriptor_t3749827553::get_offset_of_attributeCollection_2(),
	MemberDescriptor_t3749827553::get_offset_of_attributes_3(),
	MemberDescriptor_t3749827553::get_offset_of_originalAttributes_4(),
	MemberDescriptor_t3749827553::get_offset_of_attributesFiltered_5(),
	MemberDescriptor_t3749827553::get_offset_of_attributesFilled_6(),
	MemberDescriptor_t3749827553::get_offset_of_metadataVersion_7(),
	MemberDescriptor_t3749827553::get_offset_of_category_8(),
	MemberDescriptor_t3749827553::get_offset_of_description_9(),
	MemberDescriptor_t3749827553::get_offset_of_lockCookie_10(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2229 = { sizeof (NullableConverter_t1941973167), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2229[3] = 
{
	NullableConverter_t1941973167::get_offset_of_nullableType_2(),
	NullableConverter_t1941973167::get_offset_of_simpleType_3(),
	NullableConverter_t1941973167::get_offset_of_simpleTypeConverter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2230 = { sizeof (PropertyDescriptor_t4250402154), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2230[4] = 
{
	PropertyDescriptor_t4250402154::get_offset_of_converter_11(),
	PropertyDescriptor_t4250402154::get_offset_of_editors_12(),
	PropertyDescriptor_t4250402154::get_offset_of_editorTypes_13(),
	PropertyDescriptor_t4250402154::get_offset_of_editorCount_14(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2231 = { sizeof (PropertyDescriptorCollection_t3166009492), -1, sizeof(PropertyDescriptorCollection_t3166009492_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2231[10] = 
{
	PropertyDescriptorCollection_t3166009492_StaticFields::get_offset_of_Empty_0(),
	PropertyDescriptorCollection_t3166009492::get_offset_of_cachedFoundProperties_1(),
	PropertyDescriptorCollection_t3166009492::get_offset_of_cachedIgnoreCase_2(),
	PropertyDescriptorCollection_t3166009492::get_offset_of_properties_3(),
	PropertyDescriptorCollection_t3166009492::get_offset_of_propCount_4(),
	PropertyDescriptorCollection_t3166009492::get_offset_of_namedSort_5(),
	PropertyDescriptorCollection_t3166009492::get_offset_of_comparer_6(),
	PropertyDescriptorCollection_t3166009492::get_offset_of_propsOwned_7(),
	PropertyDescriptorCollection_t3166009492::get_offset_of_needSort_8(),
	PropertyDescriptorCollection_t3166009492::get_offset_of_readOnly_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2232 = { sizeof (PropertyDescriptorEnumerator_t1540050832), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2232[2] = 
{
	PropertyDescriptorEnumerator_t1540050832::get_offset_of_owner_0(),
	PropertyDescriptorEnumerator_t1540050832::get_offset_of_index_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2233 = { sizeof (ReadOnlyAttribute_t4102148880), -1, sizeof(ReadOnlyAttribute_t4102148880_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2233[4] = 
{
	ReadOnlyAttribute_t4102148880::get_offset_of_isReadOnly_0(),
	ReadOnlyAttribute_t4102148880_StaticFields::get_offset_of_Yes_1(),
	ReadOnlyAttribute_t4102148880_StaticFields::get_offset_of_No_2(),
	ReadOnlyAttribute_t4102148880_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2234 = { sizeof (RecommendedAsConfigurableAttribute_t420947846), -1, sizeof(RecommendedAsConfigurableAttribute_t420947846_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2234[4] = 
{
	RecommendedAsConfigurableAttribute_t420947846::get_offset_of_recommendedAsConfigurable_0(),
	RecommendedAsConfigurableAttribute_t420947846_StaticFields::get_offset_of_No_1(),
	RecommendedAsConfigurableAttribute_t420947846_StaticFields::get_offset_of_Yes_2(),
	RecommendedAsConfigurableAttribute_t420947846_StaticFields::get_offset_of_Default_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2235 = { sizeof (ReferenceConverter_t3131270729), -1, sizeof(ReferenceConverter_t3131270729_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2235[2] = 
{
	ReferenceConverter_t3131270729_StaticFields::get_offset_of_none_2(),
	ReferenceConverter_t3131270729::get_offset_of_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2236 = { sizeof (ReferenceComparer_t324026869), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2236[1] = 
{
	ReferenceComparer_t324026869::get_offset_of_converter_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2237 = { sizeof (ReflectTypeDescriptionProvider_t1753777466), -1, sizeof(ReflectTypeDescriptionProvider_t1753777466_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2237[12] = 
{
	ReflectTypeDescriptionProvider_t1753777466::get_offset_of__typeData_2(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__typeConstructor_3(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__intrinsicTypeConverters_4(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__intrinsicReferenceKey_5(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__intrinsicNullableKey_6(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__dictionaryKey_7(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__attributeCache_8(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__extenderProviderKey_9(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__extenderPropertiesKey_10(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__extenderProviderPropertiesKey_11(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__skipInterfaceAttributeList_12(),
	ReflectTypeDescriptionProvider_t1753777466_StaticFields::get_offset_of__internalSyncObject_13(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2238 = { sizeof (ReflectedTypeData_t2908979506), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2238[8] = 
{
	ReflectedTypeData_t2908979506::get_offset_of__type_0(),
	ReflectedTypeData_t2908979506::get_offset_of__attributes_1(),
	ReflectedTypeData_t2908979506::get_offset_of__events_2(),
	ReflectedTypeData_t2908979506::get_offset_of__properties_3(),
	ReflectedTypeData_t2908979506::get_offset_of__converter_4(),
	ReflectedTypeData_t2908979506::get_offset_of__editors_5(),
	ReflectedTypeData_t2908979506::get_offset_of__editorTypes_6(),
	ReflectedTypeData_t2908979506::get_offset_of__editorCount_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2239 = { sizeof (RefreshEventArgs_t2077477224), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2239[1] = 
{
	RefreshEventArgs_t2077477224::get_offset_of_typeChanged_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2240 = { sizeof (RefreshEventHandler_t456069287), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2241 = { sizeof (SByteConverter_t4003686519), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2242 = { sizeof (SingleConverter_t3693313828), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2243 = { sizeof (StringConverter_t3749524419), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2244 = { sizeof (TimeSpanConverter_t2149358279), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2245 = { sizeof (TypeConverter_t745995970), -1, sizeof(TypeConverter_t745995970_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2245[2] = 
{
	0,
	TypeConverter_t745995970_StaticFields::get_offset_of_useCompatibleTypeConversion_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2246 = { sizeof (StandardValuesCollection_t191679357), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2246[2] = 
{
	StandardValuesCollection_t191679357::get_offset_of_values_0(),
	StandardValuesCollection_t191679357::get_offset_of_valueArray_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2247 = { sizeof (TypeConverterAttribute_t252469870), -1, sizeof(TypeConverterAttribute_t252469870_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2247[2] = 
{
	TypeConverterAttribute_t252469870::get_offset_of_typeName_0(),
	TypeConverterAttribute_t252469870_StaticFields::get_offset_of_Default_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2248 = { sizeof (TypeDescriptionProvider_t2438624375), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2248[2] = 
{
	TypeDescriptionProvider_t2438624375::get_offset_of__parent_0(),
	TypeDescriptionProvider_t2438624375::get_offset_of__emptyDescriptor_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2249 = { sizeof (EmptyCustomTypeDescriptor_t3729801536), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2250 = { sizeof (TypeDescriptionProviderAttribute_t226398963), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2250[1] = 
{
	TypeDescriptionProviderAttribute_t226398963::get_offset_of__typeName_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2251 = { sizeof (TypeDescriptor_t3595688691), -1, sizeof(TypeDescriptor_t3595688691_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2251[12] = 
{
	TypeDescriptor_t3595688691_StaticFields::get_offset_of__providerTable_0(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of__providerTypeTable_1(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of__defaultProviders_2(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of__metadataVersion_3(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of__collisionIndex_4(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of_TraceDescriptor_5(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of__pipelineInitializeKeys_6(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of__pipelineMergeKeys_7(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of__pipelineFilterKeys_8(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of__pipelineAttributeFilterKeys_9(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of__internalSyncObject_10(),
	TypeDescriptor_t3595688691_StaticFields::get_offset_of_Refreshed_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2252 = { sizeof (FilterCacheItem_t42357068), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2252[2] = 
{
	FilterCacheItem_t42357068::get_offset_of__filterService_0(),
	FilterCacheItem_t42357068::get_offset_of_FilteredMembers_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2253 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2254 = { sizeof (MemberDescriptorComparer_t3553360933), -1, sizeof(MemberDescriptorComparer_t3553360933_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2254[1] = 
{
	MemberDescriptorComparer_t3553360933_StaticFields::get_offset_of_Instance_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2255 = { sizeof (MergedTypeDescriptor_t3445332928), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2255[2] = 
{
	MergedTypeDescriptor_t3445332928::get_offset_of__primary_0(),
	MergedTypeDescriptor_t3445332928::get_offset_of__secondary_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2256 = { sizeof (TypeDescriptionNode_t2784648617), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2256[2] = 
{
	TypeDescriptionNode_t2784648617::get_offset_of_Next_2(),
	TypeDescriptionNode_t2784648617::get_offset_of_Provider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2257 = { sizeof (DefaultExtendedTypeDescriptor_t3612110989)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2257[2] = 
{
	DefaultExtendedTypeDescriptor_t3612110989::get_offset_of__node_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultExtendedTypeDescriptor_t3612110989::get_offset_of__instance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2258 = { sizeof (DefaultTypeDescriptor_t3334440910)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2258[3] = 
{
	DefaultTypeDescriptor_t3334440910::get_offset_of__node_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultTypeDescriptor_t3334440910::get_offset_of__objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	DefaultTypeDescriptor_t3334440910::get_offset_of__instance_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2259 = { sizeof (TypeDescriptorComObject_t2250835238), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2260 = { sizeof (TypeDescriptorInterface_t2613274749), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2261 = { sizeof (UInt16Converter_t1747783369), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2262 = { sizeof (UInt32Converter_t1748821239), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2263 = { sizeof (UInt64Converter_t977523578), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2264 = { sizeof (Win32Exception_t1708275760), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2264[1] = 
{
	Win32Exception_t1708275760::get_offset_of_nativeErrorCode_16(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2265 = { sizeof (BaseNumberConverter_t1130358776), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2266 = { sizeof (WeakHashtable_t1679685894), -1, sizeof(WeakHashtable_t1679685894_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2266[1] = 
{
	WeakHashtable_t1679685894_StaticFields::get_offset_of__comparer_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2267 = { sizeof (WeakKeyComparer_t3958653828), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2268 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2269 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2270 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2271 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2272 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2273 = { sizeof (DesignerSerializerAttribute_t2188593799), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2273[3] = 
{
	DesignerSerializerAttribute_t2188593799::get_offset_of_serializerTypeName_0(),
	DesignerSerializerAttribute_t2188593799::get_offset_of_serializerBaseTypeName_1(),
	DesignerSerializerAttribute_t2188593799::get_offset_of_typeId_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2274 = { sizeof (InstanceDescriptor_t1404033120), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2274[3] = 
{
	InstanceDescriptor_t1404033120::get_offset_of_member_0(),
	InstanceDescriptor_t1404033120::get_offset_of_arguments_1(),
	InstanceDescriptor_t1404033120::get_offset_of_isComplete_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2275 = { sizeof (RootDesignerSerializerAttribute_t1162957127), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2275[4] = 
{
	RootDesignerSerializerAttribute_t1162957127::get_offset_of_reloadable_0(),
	RootDesignerSerializerAttribute_t1162957127::get_offset_of_serializerTypeName_1(),
	RootDesignerSerializerAttribute_t1162957127::get_offset_of_serializerBaseTypeName_2(),
	RootDesignerSerializerAttribute_t1162957127::get_offset_of_typeId_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2276 = { sizeof (HybridDictionary_t290043810), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2276[3] = 
{
	HybridDictionary_t290043810::get_offset_of_list_0(),
	HybridDictionary_t290043810::get_offset_of_hashtable_1(),
	HybridDictionary_t290043810::get_offset_of_caseInsensitive_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2277 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2278 = { sizeof (ListDictionary_t3458713452), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2278[5] = 
{
	ListDictionary_t3458713452::get_offset_of_head_0(),
	ListDictionary_t3458713452::get_offset_of_version_1(),
	ListDictionary_t3458713452::get_offset_of_count_2(),
	ListDictionary_t3458713452::get_offset_of_comparer_3(),
	ListDictionary_t3458713452::get_offset_of__syncRoot_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2279 = { sizeof (NodeEnumerator_t292699876), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2279[4] = 
{
	NodeEnumerator_t292699876::get_offset_of_list_0(),
	NodeEnumerator_t292699876::get_offset_of_current_1(),
	NodeEnumerator_t292699876::get_offset_of_version_2(),
	NodeEnumerator_t292699876::get_offset_of_start_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2280 = { sizeof (NodeKeyValueCollection_t2980500098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2280[2] = 
{
	NodeKeyValueCollection_t2980500098::get_offset_of_list_0(),
	NodeKeyValueCollection_t2980500098::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2281 = { sizeof (NodeKeyValueEnumerator_t79932263), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2281[5] = 
{
	NodeKeyValueEnumerator_t79932263::get_offset_of_list_0(),
	NodeKeyValueEnumerator_t79932263::get_offset_of_current_1(),
	NodeKeyValueEnumerator_t79932263::get_offset_of_version_2(),
	NodeKeyValueEnumerator_t79932263::get_offset_of_isKeys_3(),
	NodeKeyValueEnumerator_t79932263::get_offset_of_start_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2282 = { sizeof (DictionaryNode_t2725637098), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2282[3] = 
{
	DictionaryNode_t2725637098::get_offset_of_key_0(),
	DictionaryNode_t2725637098::get_offset_of_value_1(),
	DictionaryNode_t2725637098::get_offset_of_next_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2283 = { sizeof (NameObjectCollectionBase_t2034248631), -1, sizeof(NameObjectCollectionBase_t2034248631_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2283[10] = 
{
	NameObjectCollectionBase_t2034248631::get_offset_of__readOnly_0(),
	NameObjectCollectionBase_t2034248631::get_offset_of__entriesArray_1(),
	NameObjectCollectionBase_t2034248631::get_offset_of__keyComparer_2(),
	NameObjectCollectionBase_t2034248631::get_offset_of__entriesTable_3(),
	NameObjectCollectionBase_t2034248631::get_offset_of__nullKeyEntry_4(),
	NameObjectCollectionBase_t2034248631::get_offset_of__keys_5(),
	NameObjectCollectionBase_t2034248631::get_offset_of__serializationInfo_6(),
	NameObjectCollectionBase_t2034248631::get_offset_of__version_7(),
	NameObjectCollectionBase_t2034248631::get_offset_of__syncRoot_8(),
	NameObjectCollectionBase_t2034248631_StaticFields::get_offset_of_defaultComparer_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2284 = { sizeof (NameObjectEntry_t4229094479), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2284[2] = 
{
	NameObjectEntry_t4229094479::get_offset_of_Key_0(),
	NameObjectEntry_t4229094479::get_offset_of_Value_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2285 = { sizeof (NameObjectKeysEnumerator_t1857758119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2285[3] = 
{
	NameObjectKeysEnumerator_t1857758119::get_offset_of__pos_0(),
	NameObjectKeysEnumerator_t1857758119::get_offset_of__coll_1(),
	NameObjectKeysEnumerator_t1857758119::get_offset_of__version_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2286 = { sizeof (KeysCollection_t633582367), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2286[1] = 
{
	KeysCollection_t633582367::get_offset_of__coll_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2287 = { sizeof (CompatibleComparer_t452154975), -1, sizeof(CompatibleComparer_t452154975_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable2287[4] = 
{
	CompatibleComparer_t452154975::get_offset_of__comparer_0(),
	CompatibleComparer_t452154975_StaticFields::get_offset_of_defaultComparer_1(),
	CompatibleComparer_t452154975::get_offset_of__hcp_2(),
	CompatibleComparer_t452154975_StaticFields::get_offset_of_defaultHashProvider_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2288 = { sizeof (NameValueCollection_t3047564564), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2288[2] = 
{
	NameValueCollection_t3047564564::get_offset_of__all_10(),
	NameValueCollection_t3047564564::get_offset_of__allKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2289 = { sizeof (OrderedDictionary_t14805809), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2289[7] = 
{
	OrderedDictionary_t14805809::get_offset_of__objectsArray_0(),
	OrderedDictionary_t14805809::get_offset_of__objectsTable_1(),
	OrderedDictionary_t14805809::get_offset_of__initialCapacity_2(),
	OrderedDictionary_t14805809::get_offset_of__comparer_3(),
	OrderedDictionary_t14805809::get_offset_of__readOnly_4(),
	OrderedDictionary_t14805809::get_offset_of__syncRoot_5(),
	OrderedDictionary_t14805809::get_offset_of__siInfo_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2290 = { sizeof (OrderedDictionaryEnumerator_t3156431966), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2290[2] = 
{
	OrderedDictionaryEnumerator_t3156431966::get_offset_of__objectReturnType_0(),
	OrderedDictionaryEnumerator_t3156431966::get_offset_of_arrayEnumerator_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2291 = { sizeof (OrderedDictionaryKeyValueCollection_t3490502636), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2291[2] = 
{
	OrderedDictionaryKeyValueCollection_t3490502636::get_offset_of__objects_0(),
	OrderedDictionaryKeyValueCollection_t3490502636::get_offset_of_isKeys_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2292 = { sizeof (StringCollection_t352985975), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2292[1] = 
{
	StringCollection_t352985975::get_offset_of_data_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2293 = { sizeof (StringDictionary_t1070889667), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2293[1] = 
{
	StringDictionary_t1070889667::get_offset_of_contents_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2294 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2295 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2296 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2297 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2297[5] = 
{
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2298 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2298[6] = 
{
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2299 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable2299[4] = 
{
	0,
	0,
	0,
	0,
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
