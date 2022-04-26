#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>



// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF;
// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C;
// UnityEngine.CreateAssetMenuAttribute
struct CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C;
// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B;
// UnityEngine.HideInInspector
struct HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80;
// System.String
struct String_t;
// XNode.Node/InputAttribute
struct InputAttribute_tCE409E3D7140204886F20327F4DE485B09D1F3CD;
// XNode.Node/OutputAttribute
struct OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
struct CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 System.Runtime.CompilerServices.CompilationRelaxationsAttribute::m_relaxations
	int32_t ___m_relaxations_0;

public:
	inline static int32_t get_offset_of_m_relaxations_0() { return static_cast<int32_t>(offsetof(CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF, ___m_relaxations_0)); }
	inline int32_t get_m_relaxations_0() const { return ___m_relaxations_0; }
	inline int32_t* get_address_of_m_relaxations_0() { return &___m_relaxations_0; }
	inline void set_m_relaxations_0(int32_t value)
	{
		___m_relaxations_0 = value;
	}
};


// System.Runtime.CompilerServices.CompilerGeneratedAttribute
struct CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// UnityEngine.CreateAssetMenuAttribute
struct CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String UnityEngine.CreateAssetMenuAttribute::<menuName>k__BackingField
	String_t* ___U3CmenuNameU3Ek__BackingField_0;
	// System.String UnityEngine.CreateAssetMenuAttribute::<fileName>k__BackingField
	String_t* ___U3CfileNameU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CmenuNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C, ___U3CmenuNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CmenuNameU3Ek__BackingField_0() const { return ___U3CmenuNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CmenuNameU3Ek__BackingField_0() { return &___U3CmenuNameU3Ek__BackingField_0; }
	inline void set_U3CmenuNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CmenuNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CmenuNameU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfileNameU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C, ___U3CfileNameU3Ek__BackingField_1)); }
	inline String_t* get_U3CfileNameU3Ek__BackingField_1() const { return ___U3CfileNameU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CfileNameU3Ek__BackingField_1() { return &___U3CfileNameU3Ek__BackingField_1; }
	inline void set_U3CfileNameU3Ek__BackingField_1(String_t* value)
	{
		___U3CfileNameU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfileNameU3Ek__BackingField_1), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// UnityEngine.HideInInspector
struct HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
struct RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::m_wrapNonExceptionThrows
	bool ___m_wrapNonExceptionThrows_0;

public:
	inline static int32_t get_offset_of_m_wrapNonExceptionThrows_0() { return static_cast<int32_t>(offsetof(RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80, ___m_wrapNonExceptionThrows_0)); }
	inline bool get_m_wrapNonExceptionThrows_0() const { return ___m_wrapNonExceptionThrows_0; }
	inline bool* get_address_of_m_wrapNonExceptionThrows_0() { return &___m_wrapNonExceptionThrows_0; }
	inline void set_m_wrapNonExceptionThrows_0(bool value)
	{
		___m_wrapNonExceptionThrows_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Diagnostics.DebuggableAttribute/DebuggingModes
struct DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8 
{
public:
	// System.Int32 System.Diagnostics.DebuggableAttribute/DebuggingModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DebuggingModes_t279D5B9C012ABA935887CB73C5A63A1F46AF08A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// XNode.Node/ConnectionType
struct ConnectionType_t358038D75191873A2DBDBD5C7C4BC6D3D2FC9B41 
{
public:
	// System.Int32 XNode.Node/ConnectionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionType_t358038D75191873A2DBDBD5C7C4BC6D3D2FC9B41, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// XNode.Node/ShowBackingValue
struct ShowBackingValue_t39EB6A46698E21FA7FEAC466A96A0C633CEDF296 
{
public:
	// System.Int32 XNode.Node/ShowBackingValue::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShowBackingValue_t39EB6A46698E21FA7FEAC466A96A0C633CEDF296, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// XNode.Node/TypeConstraint
struct TypeConstraint_t131F0C4500E3FBE3F6BDC2191BD581C471782ACF 
{
public:
	// System.Int32 XNode.Node/TypeConstraint::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeConstraint_t131F0C4500E3FBE3F6BDC2191BD581C471782ACF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.DebuggableAttribute
struct DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Diagnostics.DebuggableAttribute/DebuggingModes System.Diagnostics.DebuggableAttribute::m_debuggingModes
	int32_t ___m_debuggingModes_0;

public:
	inline static int32_t get_offset_of_m_debuggingModes_0() { return static_cast<int32_t>(offsetof(DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B, ___m_debuggingModes_0)); }
	inline int32_t get_m_debuggingModes_0() const { return ___m_debuggingModes_0; }
	inline int32_t* get_address_of_m_debuggingModes_0() { return &___m_debuggingModes_0; }
	inline void set_m_debuggingModes_0(int32_t value)
	{
		___m_debuggingModes_0 = value;
	}
};


// XNode.Node/InputAttribute
struct InputAttribute_tCE409E3D7140204886F20327F4DE485B09D1F3CD  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// XNode.Node/ShowBackingValue XNode.Node/InputAttribute::backingValue
	int32_t ___backingValue_0;
	// XNode.Node/ConnectionType XNode.Node/InputAttribute::connectionType
	int32_t ___connectionType_1;
	// System.Boolean XNode.Node/InputAttribute::dynamicPortList
	bool ___dynamicPortList_2;
	// XNode.Node/TypeConstraint XNode.Node/InputAttribute::typeConstraint
	int32_t ___typeConstraint_3;

public:
	inline static int32_t get_offset_of_backingValue_0() { return static_cast<int32_t>(offsetof(InputAttribute_tCE409E3D7140204886F20327F4DE485B09D1F3CD, ___backingValue_0)); }
	inline int32_t get_backingValue_0() const { return ___backingValue_0; }
	inline int32_t* get_address_of_backingValue_0() { return &___backingValue_0; }
	inline void set_backingValue_0(int32_t value)
	{
		___backingValue_0 = value;
	}

	inline static int32_t get_offset_of_connectionType_1() { return static_cast<int32_t>(offsetof(InputAttribute_tCE409E3D7140204886F20327F4DE485B09D1F3CD, ___connectionType_1)); }
	inline int32_t get_connectionType_1() const { return ___connectionType_1; }
	inline int32_t* get_address_of_connectionType_1() { return &___connectionType_1; }
	inline void set_connectionType_1(int32_t value)
	{
		___connectionType_1 = value;
	}

	inline static int32_t get_offset_of_dynamicPortList_2() { return static_cast<int32_t>(offsetof(InputAttribute_tCE409E3D7140204886F20327F4DE485B09D1F3CD, ___dynamicPortList_2)); }
	inline bool get_dynamicPortList_2() const { return ___dynamicPortList_2; }
	inline bool* get_address_of_dynamicPortList_2() { return &___dynamicPortList_2; }
	inline void set_dynamicPortList_2(bool value)
	{
		___dynamicPortList_2 = value;
	}

	inline static int32_t get_offset_of_typeConstraint_3() { return static_cast<int32_t>(offsetof(InputAttribute_tCE409E3D7140204886F20327F4DE485B09D1F3CD, ___typeConstraint_3)); }
	inline int32_t get_typeConstraint_3() const { return ___typeConstraint_3; }
	inline int32_t* get_address_of_typeConstraint_3() { return &___typeConstraint_3; }
	inline void set_typeConstraint_3(int32_t value)
	{
		___typeConstraint_3 = value;
	}
};


// XNode.Node/OutputAttribute
struct OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// XNode.Node/ShowBackingValue XNode.Node/OutputAttribute::backingValue
	int32_t ___backingValue_0;
	// XNode.Node/ConnectionType XNode.Node/OutputAttribute::connectionType
	int32_t ___connectionType_1;
	// System.Boolean XNode.Node/OutputAttribute::dynamicPortList
	bool ___dynamicPortList_2;
	// XNode.Node/TypeConstraint XNode.Node/OutputAttribute::typeConstraint
	int32_t ___typeConstraint_3;

public:
	inline static int32_t get_offset_of_backingValue_0() { return static_cast<int32_t>(offsetof(OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585, ___backingValue_0)); }
	inline int32_t get_backingValue_0() const { return ___backingValue_0; }
	inline int32_t* get_address_of_backingValue_0() { return &___backingValue_0; }
	inline void set_backingValue_0(int32_t value)
	{
		___backingValue_0 = value;
	}

	inline static int32_t get_offset_of_connectionType_1() { return static_cast<int32_t>(offsetof(OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585, ___connectionType_1)); }
	inline int32_t get_connectionType_1() const { return ___connectionType_1; }
	inline int32_t* get_address_of_connectionType_1() { return &___connectionType_1; }
	inline void set_connectionType_1(int32_t value)
	{
		___connectionType_1 = value;
	}

	inline static int32_t get_offset_of_dynamicPortList_2() { return static_cast<int32_t>(offsetof(OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585, ___dynamicPortList_2)); }
	inline bool get_dynamicPortList_2() const { return ___dynamicPortList_2; }
	inline bool* get_address_of_dynamicPortList_2() { return &___dynamicPortList_2; }
	inline void set_dynamicPortList_2(bool value)
	{
		___dynamicPortList_2 = value;
	}

	inline static int32_t get_offset_of_typeConstraint_3() { return static_cast<int32_t>(offsetof(OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585, ___typeConstraint_3)); }
	inline int32_t get_typeConstraint_3() const { return ___typeConstraint_3; }
	inline int32_t* get_address_of_typeConstraint_3() { return &___typeConstraint_3; }
	inline void set_typeConstraint_3(int32_t value)
	{
		___typeConstraint_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void System.Diagnostics.DebuggableAttribute::.ctor(System.Diagnostics.DebuggableAttribute/DebuggingModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550 (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * __this, int32_t ___modes0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilationRelaxationsAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * __this, int32_t ___relaxations0, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeCompatibilityAttribute::set_WrapNonExceptionThrows(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CreateAssetMenuAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65 (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CreateAssetMenuAttribute::set_fileName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute_set_fileName_m14EBC66F19AEC15751EC9822478CDDBA9DE8D2F6_inline (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CreateAssetMenuAttribute::set_menuName(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute_set_menuName_m27C32BCE71E6A5ED185212F083DFB23201B514F1_inline (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void XNode.Node/InputAttribute::.ctor(XNode.Node/ShowBackingValue,XNode.Node/ConnectionType,XNode.Node/TypeConstraint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAttribute__ctor_m2EFB8BECAB99883FB2F131CC23428A4CF4215E15 (InputAttribute_tCE409E3D7140204886F20327F4DE485B09D1F3CD * __this, int32_t ___backingValue0, int32_t ___connectionType1, int32_t ___typeConstraint2, bool ___dynamicPortList3, const RuntimeMethod* method);
// System.Void XNode.Node/OutputAttribute::.ctor(XNode.Node/ShowBackingValue,XNode.Node/ConnectionType,XNode.Node/TypeConstraint,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputAttribute__ctor_m7E09A669AF62162B96A8E820241E9B22A90FDE70 (OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585 * __this, int32_t ___backingValue0, int32_t ___connectionType1, int32_t ___typeConstraint2, bool ___dynamicPortList3, const RuntimeMethod* method);
// System.Void UnityEngine.HideInInspector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9 (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * __this, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.CompilerGeneratedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35 (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * __this, const RuntimeMethod* method);
static void AssemblyU2DCSharp_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B * tmp = (DebuggableAttribute_tA8054EBD0FC7511695D494B690B5771658E3191B *)cache->attributes[0];
		DebuggableAttribute__ctor_m7FF445C8435494A4847123A668D889E692E55550(tmp, 2LL, NULL);
	}
	{
		CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF * tmp = (CompilationRelaxationsAttribute_t661FDDC06629BDA607A42BD660944F039FE03AFF *)cache->attributes[1];
		CompilationRelaxationsAttribute__ctor_mAC3079EBC4EEAB474EED8208EF95DB39C922333B(tmp, 8LL, NULL);
	}
	{
		RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * tmp = (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 *)cache->attributes[2];
		RuntimeCompatibilityAttribute__ctor_m551DDF1438CE97A984571949723F30F44CF7317C(tmp, NULL);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline(tmp, true, NULL);
	}
}
static void DialogGraph_tD6E9E05A23211D2D535F90DA76B73A24885E95AA_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * tmp = (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C *)cache->attributes[0];
		CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65(tmp, NULL);
		CreateAssetMenuAttribute_set_fileName_m14EBC66F19AEC15751EC9822478CDDBA9DE8D2F6_inline(tmp, il2cpp_codegen_string_new_wrapper("\x44\x69\x61\x6C\x6F\x67"), NULL);
		CreateAssetMenuAttribute_set_menuName_m27C32BCE71E6A5ED185212F083DFB23201B514F1_inline(tmp, il2cpp_codegen_string_new_wrapper("\x44\x69\x61\x6C\x6F\x67"), NULL);
	}
}
static void QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8_CustomAttributesCacheGenerator_prev(CustomAttributesCache* cache)
{
	{
		InputAttribute_tCE409E3D7140204886F20327F4DE485B09D1F3CD * tmp = (InputAttribute_tCE409E3D7140204886F20327F4DE485B09D1F3CD *)cache->attributes[0];
		InputAttribute__ctor_m2EFB8BECAB99883FB2F131CC23428A4CF4215E15(tmp, 1LL, 0LL, 0LL, false, NULL);
	}
}
static void QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8_CustomAttributesCacheGenerator_next1(CustomAttributesCache* cache)
{
	{
		OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585 * tmp = (OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585 *)cache->attributes[0];
		OutputAttribute__ctor_m7E09A669AF62162B96A8E820241E9B22A90FDE70(tmp, 0LL, 0LL, 0LL, false, NULL);
	}
}
static void QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8_CustomAttributesCacheGenerator_next2(CustomAttributesCache* cache)
{
	{
		OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585 * tmp = (OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585 *)cache->attributes[0];
		OutputAttribute__ctor_m7E09A669AF62162B96A8E820241E9B22A90FDE70(tmp, 0LL, 0LL, 0LL, false, NULL);
	}
}
static void QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8_CustomAttributesCacheGenerator_next3(CustomAttributesCache* cache)
{
	{
		OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585 * tmp = (OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585 *)cache->attributes[0];
		OutputAttribute__ctor_m7E09A669AF62162B96A8E820241E9B22A90FDE70(tmp, 0LL, 0LL, 0LL, false, NULL);
	}
}
static void QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8_CustomAttributesCacheGenerator_next4(CustomAttributesCache* cache)
{
	{
		OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585 * tmp = (OutputAttribute_tC7C182284F49419854EA33B72026DA7C8EE2F585 *)cache->attributes[0];
		OutputAttribute__ctor_m7E09A669AF62162B96A8E820241E9B22A90FDE70(tmp, 0LL, 0LL, 0LL, false, NULL);
	}
}
static void Language_t7035EAC6AA3C9B8F2D5A4EF01BB9504851ED915D_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * tmp = (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C *)cache->attributes[0];
		CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65(tmp, NULL);
		CreateAssetMenuAttribute_set_fileName_m14EBC66F19AEC15751EC9822478CDDBA9DE8D2F6_inline(tmp, il2cpp_codegen_string_new_wrapper("\x4E\x65\x77\x20\x4C\x61\x6E\x67\x75\x61\x67\x65"), NULL);
	}
}
static void Language_t7035EAC6AA3C9B8F2D5A4EF01BB9504851ED915D_CustomAttributesCacheGenerator_languageName(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Language_t7035EAC6AA3C9B8F2D5A4EF01BB9504851ED915D_CustomAttributesCacheGenerator_dict(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * tmp = (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C *)cache->attributes[0];
		CreateAssetMenuAttribute__ctor_mF4754D0F74BACF7BB7DAC67F46690A69256D2D65(tmp, NULL);
		CreateAssetMenuAttribute_set_fileName_m14EBC66F19AEC15751EC9822478CDDBA9DE8D2F6_inline(tmp, il2cpp_codegen_string_new_wrapper("\x4C\x6F\x63\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E"), NULL);
	}
}
static void Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_newLanguage(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_newKey(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_languageNames(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_keys(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_languages(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_index(CustomAttributesCache* cache)
{
	{
		HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA * tmp = (HideInInspector_tDD5B9D3AD8D48C93E23FE6CA3ECDA5589D60CCDA *)cache->attributes[0];
		HideInInspector__ctor_mE2B7FB1D206A74BA583C7812CDB4EBDD83EB66F9(tmp, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_U3CUpdateU3Eb__16_0_m3A5D4176F6760A8B24C278DC4C282F9F2528B314(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_U3CUpdateU3Eb__16_1_m15847C40BBE7D0C9E56910E3E7C9121A40746F7C(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_U3CUpdateU3Eb__16_2_m9F2DD6CA7C1A3A5DB75EEAE0C5BB2B94F8C572B9(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_U3CUpdateU3Eb__16_3_m75027AB589219CF12F8586B8C93C60BC7CA27A22(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_U3CUpdateU3Eb__16_4_mA7A5EC101F4E5133BC7FFDD51B66DF83EE61A2A8(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
static void U3CU3Ec_t7FD3330B32AA2137148A56E49328CFE23CD240AE_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	{
		CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C * tmp = (CompilerGeneratedAttribute_t39106AB982658D7A94C27DEF3C48DB2F5F7CD75C *)cache->attributes[0];
		CompilerGeneratedAttribute__ctor_m9DC3E4E2DA76FE93948D44199213E2E924DCBE35(tmp, NULL);
	}
}
IL2CPP_EXTERN_C const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[];
const CustomAttributesCacheGenerator g_AssemblyU2DCSharp_AttributeGenerators[23] = 
{
	DialogGraph_tD6E9E05A23211D2D535F90DA76B73A24885E95AA_CustomAttributesCacheGenerator,
	Language_t7035EAC6AA3C9B8F2D5A4EF01BB9504851ED915D_CustomAttributesCacheGenerator,
	Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator,
	U3CU3Ec_t7FD3330B32AA2137148A56E49328CFE23CD240AE_CustomAttributesCacheGenerator,
	QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8_CustomAttributesCacheGenerator_prev,
	QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8_CustomAttributesCacheGenerator_next1,
	QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8_CustomAttributesCacheGenerator_next2,
	QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8_CustomAttributesCacheGenerator_next3,
	QuestionAndAnswer_t3D97D9CE08F0FABC79D2F66E20F86DD1D9C23FC8_CustomAttributesCacheGenerator_next4,
	Language_t7035EAC6AA3C9B8F2D5A4EF01BB9504851ED915D_CustomAttributesCacheGenerator_languageName,
	Language_t7035EAC6AA3C9B8F2D5A4EF01BB9504851ED915D_CustomAttributesCacheGenerator_dict,
	Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_newLanguage,
	Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_newKey,
	Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_languageNames,
	Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_keys,
	Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_languages,
	Localization_t4F699CEB9771726568E97B997DDDB49F1F7DFAA6_CustomAttributesCacheGenerator_index,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_U3CUpdateU3Eb__16_0_m3A5D4176F6760A8B24C278DC4C282F9F2528B314,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_U3CUpdateU3Eb__16_1_m15847C40BBE7D0C9E56910E3E7C9121A40746F7C,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_U3CUpdateU3Eb__16_2_m9F2DD6CA7C1A3A5DB75EEAE0C5BB2B94F8C572B9,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_U3CUpdateU3Eb__16_3_m75027AB589219CF12F8586B8C93C60BC7CA27A22,
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_CustomAttributesCacheGenerator_GameManager_U3CUpdateU3Eb__16_4_mA7A5EC101F4E5133BC7FFDD51B66DF83EE61A2A8,
	AssemblyU2DCSharp_CustomAttributesCacheGenerator,
};
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m8562196F90F3EBCEC23B5708EE0332842883C490_inline (RuntimeCompatibilityAttribute_tFF99AB2963098F9CBCD47A20D9FD3D51C17C1C80 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_m_wrapNonExceptionThrows_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute_set_fileName_m14EBC66F19AEC15751EC9822478CDDBA9DE8D2F6_inline (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CfileNameU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CreateAssetMenuAttribute_set_menuName_m27C32BCE71E6A5ED185212F083DFB23201B514F1_inline (CreateAssetMenuAttribute_t79F6BDD595B569A2D16681BDD571D1AE6E782D0C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CmenuNameU3Ek__BackingField_0(L_0);
		return;
	}
}
