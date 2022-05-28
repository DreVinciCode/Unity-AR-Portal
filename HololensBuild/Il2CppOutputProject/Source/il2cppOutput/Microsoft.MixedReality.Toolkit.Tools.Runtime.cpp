#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection>
struct Action_1_tE6BF05944D44A68876BF0C7EC159A7D62C1CD0AD;
// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.IEnumerable`1<UnityEngine.XR.InputDevice>
struct IEnumerable_1_t37A11B97B7FA1B094D2A1ADAA8B3A5F4B2E3502A;
// System.Collections.Generic.IEqualityComparer`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct IEqualityComparer_1_t8F8FE4B8B32C4F9D0137948EF7ADB40453C220E5;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1A386BEF1855064FD5CC71F340A68881A52B4932;
// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F;
// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>
struct List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode>
struct List_1_t684A343B9476A91007ABC5903297CEF775AF6987;
// System.Collections.Generic.List`1<UnityEngine.TextMesh>
struct List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem>
struct List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4;
// System.Collections.Generic.HashSet`1/Slot<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>[]
struct SlotU5BU5D_t21801910B5DE8DA26CAE45D04FC97D8D63B142BB;
// System.Collections.Generic.HashSet`1/Slot<System.Object>[]
struct SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE;
// UnityEngine.XR.InputFeatureUsage[]
struct InputFeatureUsageU5BU5D_tD0C2F52A32C5B649AB7127926A9A852ACC2A08D1;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.TextMesh[]
struct TextMeshU5BU5D_tBC85515B64AEF3A0DDB6BCE7C3686F6FB86A1981;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult
struct DisplayInputResult_t5D17A34DFB921AB7CF633C418FCEF88FCE9A74D8;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityController
struct IMixedRealityController_t9DF42B7F8473A665550A9D9312A6447A84D45032;
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem
struct IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages
struct ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A;
// Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool
struct MixedRealityInteractionTool_t6E6BE5BDFE405B0580CA8F3DE9815036ACC0217A;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;

IL2CPP_EXTERN_C RuntimeClass* AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityController_t9DF42B7F8473A665550A9D9312A6447A84D45032_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityEventSource_t3250B9027B20553276A9D1B595BE781E866FF6A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0C2FD7F14008DC5A9704A71B5926F425273F6DFC;
IL2CPP_EXTERN_C String_t* _stringLiteral10F4DE454A7A7EDC63FFA330FCC744864D606F50;
IL2CPP_EXTERN_C String_t* _stringLiteral1653F9A5516D70F1640148CADCC97C572A62936F;
IL2CPP_EXTERN_C String_t* _stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral2FB1273DCF301695744F96DE3A31C5DBDDB6DBB0;
IL2CPP_EXTERN_C String_t* _stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B;
IL2CPP_EXTERN_C String_t* _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5;
IL2CPP_EXTERN_C String_t* _stringLiteral80E8E33CFC68B6519B4050770677835060BEB5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral87E261F2D88CAAEDCD99354542725097ED590502;
IL2CPP_EXTERN_C String_t* _stringLiteralB69CD88CA44BBA6464A30CAFD46811605F0109DF;
IL2CPP_EXTERN_C String_t* _stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C;
IL2CPP_EXTERN_C String_t* _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralCA604168AB048809605F0545853F2D2C30960F1F;
IL2CPP_EXTERN_C String_t* _stringLiteralCB6CE6B89F14D219960135E95D3D3A31031318C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD098894B7802A8D5E690D40161CCBD3A3B74AB08;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF3193468E3E53BE1E41883B70A00F57ABFA77BFA;
IL2CPP_EXTERN_C const RuntimeMethod* Enum_TryParse_TisKeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_mE9447AD6FFC174131093B1E729A78A0891B3B3A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mEB4311C4CA17AFD04A0422C729036CC177D411EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Union_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mA505D15244DE52B42806B481557FD68E4B336915_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m31B9432FECA7E89F7AFAC194FD9047E14F52391E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCD2C1136622529F7FA6ABA47BB92A436E1E896B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA882A1C259A1174649DF9F78391F8036732949C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mB2FFC8EB6CE8FB2BBEC4D0726795B7D55F22FA3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4C0BE8F4A9713388D992B88D757A8B49E0C507AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC62382A263C7901E5A2D8803FAA3FFCAE647167D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m3224EB1D4E32C005C8E8297F9073CF18D0AAA503_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_GetEnumerator_m710200AD633A6C20057231B427EE8E8BFE784ED6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_get_Count_m542D32EED9DC8F251671E283582DECA135D27A9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0057B1EB25983324532DE3CEEC15A00D70C1F84C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisInputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_m1EB45E5A16AC9589A67727C4F7142C74AC47F929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m45199BA5F7BABCBC2396E8F0965F6A6DA98B01DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m9A60AAC05667D8F72D2C42D7E92D36E8C7E4392B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAC9F189E795007FD143A00EF2127C577E989385C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m09A15C6CD210A2D644F198FBFB9C6FE7CDD556C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_As_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mA4A998135A26EC8B53C9032C86BA0E6636C4BF47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8EA5FE053103580F94C96B5BF0E4E2D6D5F2D0A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mFA4CE48B4A8D1A96EA78E971806AEB85765756BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mAF159C4AA007279753F8C92A49FFE87BD5FA4B64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mB0147DAC8F87F25B260B66D4E1DF950682CADC3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m03D5002EEF486752D611BDEC48797AD6CAD4C857_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mA585F51E47A6E1ED4001A1326709C0B22F538BE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m90D8F603736F875CF7DCC31B680DA5C63CA0CBA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var;

struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE;
struct MixedRealityInteractionMappingU5BU5D_t9715CAE845E6E41571A3A49DADF0942255BB01F9;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t45F2E817D4AC4639EB7AD385342F2B66B5245BD3 
{
public:

public:
};


// System.Object


// System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t21801910B5DE8DA26CAE45D04FC97D8D63B142BB* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525, ____slots_8)); }
	inline SlotU5BU5D_t21801910B5DE8DA26CAE45D04FC97D8D63B142BB* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t21801910B5DE8DA26CAE45D04FC97D8D63B142BB** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t21801910B5DE8DA26CAE45D04FC97D8D63B142BB* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____slots_8)); }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tA2C59549601B8D4FF421D3FE4AE207703AADA494* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>
struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____items_1)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__items_1() const { return ____items_1; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_StaticFields, ____emptyArray_5)); }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>
struct List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	InputFeatureUsageU5BU5D_tD0C2F52A32C5B649AB7127926A9A852ACC2A08D1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E, ____items_1)); }
	inline InputFeatureUsageU5BU5D_tD0C2F52A32C5B649AB7127926A9A852ACC2A08D1* get__items_1() const { return ____items_1; }
	inline InputFeatureUsageU5BU5D_tD0C2F52A32C5B649AB7127926A9A852ACC2A08D1** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(InputFeatureUsageU5BU5D_tD0C2F52A32C5B649AB7127926A9A852ACC2A08D1* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	InputFeatureUsageU5BU5D_tD0C2F52A32C5B649AB7127926A9A852ACC2A08D1* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E_StaticFields, ____emptyArray_5)); }
	inline InputFeatureUsageU5BU5D_tD0C2F52A32C5B649AB7127926A9A852ACC2A08D1* get__emptyArray_5() const { return ____emptyArray_5; }
	inline InputFeatureUsageU5BU5D_tD0C2F52A32C5B649AB7127926A9A852ACC2A08D1** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(InputFeatureUsageU5BU5D_tD0C2F52A32C5B649AB7127926A9A852ACC2A08D1* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.TextMesh>
struct List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TextMeshU5BU5D_tBC85515B64AEF3A0DDB6BCE7C3686F6FB86A1981* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B, ____items_1)); }
	inline TextMeshU5BU5D_tBC85515B64AEF3A0DDB6BCE7C3686F6FB86A1981* get__items_1() const { return ____items_1; }
	inline TextMeshU5BU5D_tBC85515B64AEF3A0DDB6BCE7C3686F6FB86A1981** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TextMeshU5BU5D_tBC85515B64AEF3A0DDB6BCE7C3686F6FB86A1981* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TextMeshU5BU5D_tBC85515B64AEF3A0DDB6BCE7C3686F6FB86A1981* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B_StaticFields, ____emptyArray_5)); }
	inline TextMeshU5BU5D_tBC85515B64AEF3A0DDB6BCE7C3686F6FB86A1981* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TextMeshU5BU5D_tBC85515B64AEF3A0DDB6BCE7C3686F6FB86A1981** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TextMeshU5BU5D_tBC85515B64AEF3A0DDB6BCE7C3686F6FB86A1981* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>
struct Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject* ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B, ____set_0)); }
	inline HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * get__set_0() const { return ____set_0; }
	inline HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B, ____current_3)); }
	inline RuntimeObject* get__current_3() const { return ____current_3; }
	inline RuntimeObject** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject* value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1/Enumerator<System.Object>
struct Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A 
{
public:
	// System.Collections.Generic.HashSet`1<T> System.Collections.Generic.HashSet`1/Enumerator::_set
	HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * ____set_0;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.HashSet`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.HashSet`1/Enumerator::_current
	RuntimeObject * ____current_3;

public:
	inline static int32_t get_offset_of__set_0() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____set_0)); }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * get__set_0() const { return ____set_0; }
	inline HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B ** get_address_of__set_0() { return &____set_0; }
	inline void set__set_0(HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * value)
	{
		____set_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____set_0), (void*)value);
	}

	inline static int32_t get_offset_of__index_1() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____index_1)); }
	inline int32_t get__index_1() const { return ____index_1; }
	inline int32_t* get_address_of__index_1() { return &____index_1; }
	inline void set__index_1(int32_t value)
	{
		____index_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A, ____current_3)); }
	inline RuntimeObject * get__current_3() const { return ____current_3; }
	inline RuntimeObject ** get_address_of__current_3() { return &____current_3; }
	inline void set__current_3(RuntimeObject * value)
	{
		____current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_3), (void*)value);
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>
struct InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>
struct InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.Single>
struct InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32>
struct InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<System.UInt32Enum>
struct InputFeatureUsage_1_t6914D487EFC663AE00B3D7725DD123A5814507D6 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t6914D487EFC663AE00B3D7725DD123A5814507D6, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>
struct InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>
struct InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
#define InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com_define
struct InputFeatureUsage_1_t0883EAB3AD99A1D218140E4C4D1FD0A2AC401FA1_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// System.Nullable`1<System.Int32>
struct Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
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

// UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E 
{
public:
	// System.UInt64 UnityEngine.XR.InputDevice::m_DeviceId
	uint64_t ___m_DeviceId_1;
	// System.Boolean UnityEngine.XR.InputDevice::m_Initialized
	bool ___m_Initialized_2;

public:
	inline static int32_t get_offset_of_m_DeviceId_1() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_DeviceId_1)); }
	inline uint64_t get_m_DeviceId_1() const { return ___m_DeviceId_1; }
	inline uint64_t* get_address_of_m_DeviceId_1() { return &___m_DeviceId_1; }
	inline void set_m_DeviceId_1(uint64_t value)
	{
		___m_DeviceId_1 = value;
	}

	inline static int32_t get_offset_of_m_Initialized_2() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E, ___m_Initialized_2)); }
	inline bool get_m_Initialized_2() const { return ___m_Initialized_2; }
	inline bool* get_address_of_m_Initialized_2() { return &___m_Initialized_2; }
	inline void set_m_Initialized_2(bool value)
	{
		___m_Initialized_2 = value;
	}
};

struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.InputDevice::s_InputSubsystemCache
	List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * ___s_InputSubsystemCache_0;

public:
	inline static int32_t get_offset_of_s_InputSubsystemCache_0() { return static_cast<int32_t>(offsetof(InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_StaticFields, ___s_InputSubsystemCache_0)); }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * get_s_InputSubsystemCache_0() const { return ___s_InputSubsystemCache_0; }
	inline List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 ** get_address_of_s_InputSubsystemCache_0() { return &___s_InputSubsystemCache_0; }
	inline void set_s_InputSubsystemCache_0(List_1_t39579540B4BF5D674E4CAA282D3CEA957BCB90D4 * value)
	{
		___s_InputSubsystemCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemCache_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_pinvoke
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};
// Native definition for COM marshalling of UnityEngine.XR.InputDevice
struct InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_marshaled_com
{
	uint64_t ___m_DeviceId_1;
	int32_t ___m_Initialized_2;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// UnityEngine.Quaternion
struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// Microsoft.MixedReality.Toolkit.Utilities.AxisType
struct AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.AxisType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder
struct CollationOrder_tEE9E1C5A224A4735D73C9698F3F16D8923C2EE8F 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.CollationOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollationOrder_tEE9E1C5A224A4735D73C9698F3F16D8923C2EE8F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Input.DeviceInputType
struct DeviceInputType_tECC7C72EE8CD55AA8D818A3FF7C8C90BAF66B398 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Input.DeviceInputType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeviceInputType_tECC7C72EE8CD55AA8D818A3FF7C8C90BAF66B398, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.Handedness
struct Handedness_t5EDD2AF69A2693CD60CD846C35B0729DF0AFF9BE 
{
public:
	// System.Byte Microsoft.MixedReality.Toolkit.Utilities.Handedness::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Handedness_t5EDD2AF69A2693CD60CD846C35B0729DF0AFF9BE, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputDeviceCharacteristics
struct InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64 
{
public:
	// System.UInt32 UnityEngine.XR.InputDeviceCharacteristics::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputDeviceCharacteristics_t0C34BAC0C6F661161E2DA1677CD590273F1C9C64, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputFeatureType
struct InputFeatureType_t3581EE01C178BF1CC9BAFE6443BEF6B0C0B2609C 
{
public:
	// System.UInt32 UnityEngine.XR.InputFeatureType::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputFeatureType_t3581EE01C178BF1CC9BAFE6443BEF6B0C0B2609C, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.InputTrackingState
struct InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9 
{
public:
	// System.UInt32 UnityEngine.XR.InputTrackingState::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};


// System.Int32Enum
struct Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor
struct LayoutAnchor_tE68D97C60BE6A82D5D2A6AEBBE1200DE9D0AA31C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutAnchor_tE68D97C60BE6A82D5D2A6AEBBE1200DE9D0AA31C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment
struct LayoutHorizontalAlignment_t843CDC2AC0E2F5524CBB6846BE557B65963DFD24 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutHorizontalAlignment_t843CDC2AC0E2F5524CBB6846BE557B65963DFD24, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder
struct LayoutOrder_tA100777D9B37EF2DD20C8BB050A38CE018DC9905 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutOrder_tA100777D9B37EF2DD20C8BB050A38CE018DC9905, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment
struct LayoutVerticalAlignment_t998D17C491357A088961ED1BD7D55F6E8D0A25D7 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LayoutVerticalAlignment_t998D17C491357A088961ED1BD7D55F6E8D0A25D7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose
struct MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 
{
public:
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_1;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_2;

public:
	inline static int32_t get_offset_of_position_1() { return static_cast<int32_t>(offsetof(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8, ___position_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_1() const { return ___position_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_1() { return &___position_1; }
	inline void set_position_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_1 = value;
	}

	inline static int32_t get_offset_of_rotation_2() { return static_cast<int32_t>(offsetof(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8, ___rotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_2() const { return ___rotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_2() { return &___rotation_2; }
	inline void set_rotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_2 = value;
	}
};

struct MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose::<ZeroIdentity>k__BackingField
	MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  ___U3CZeroIdentityU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CZeroIdentityU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8_StaticFields, ___U3CZeroIdentityU3Ek__BackingField_0)); }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  get_U3CZeroIdentityU3Ek__BackingField_0() const { return ___U3CZeroIdentityU3Ek__BackingField_0; }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * get_address_of_U3CZeroIdentityU3Ek__BackingField_0() { return &___U3CZeroIdentityU3Ek__BackingField_0; }
	inline void set_U3CZeroIdentityU3Ek__BackingField_0(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  value)
	{
		___U3CZeroIdentityU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType
struct ObjectOrientationSurfaceType_t9C845AA02184AC438B0CCA96E4CECD34BB13117E 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectOrientationSurfaceType_t9C845AA02184AC438B0CCA96E4CECD34BB13117E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.OrientationType
struct OrientationType_tB220E0DA65420F84803BC0E1B0338D2223086A82 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.OrientationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OrientationType_tB220E0DA65420F84803BC0E1B0338D2223086A82, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult/DisplayType
struct DisplayType_t8C8859D754147395B85ADF01A1B732F38046D05C 
{
public:
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult/DisplayType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DisplayType_t8C8859D754147395B85ADF01A1B732F38046D05C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.XR.InputFeatureType UnityEngine.XR.InputFeatureUsage::m_InternalType
	uint32_t ___m_InternalType_1;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalType_1() { return static_cast<int32_t>(offsetof(InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE, ___m_InternalType_1)); }
	inline uint32_t get_m_InternalType_1() const { return ___m_InternalType_1; }
	inline uint32_t* get_address_of_m_InternalType_1() { return &___m_InternalType_1; }
	inline void set_m_InternalType_1(uint32_t value)
	{
		___m_InternalType_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshaled_pinvoke
{
	char* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage
struct InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	uint32_t ___m_InternalType_1;
};

// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::id
	uint32_t ___id_1;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::description
	String_t* ___description_2;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::axisConstraint
	int32_t ___axisConstraint_3;

public:
	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___id_1)); }
	inline uint32_t get_id_1() const { return ___id_1; }
	inline uint32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(uint32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_description_2() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___description_2)); }
	inline String_t* get_description_2() const { return ___description_2; }
	inline String_t** get_address_of_description_2() { return &___description_2; }
	inline void set_description_2(String_t* value)
	{
		___description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_2), (void*)value);
	}

	inline static int32_t get_offset_of_axisConstraint_3() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58, ___axisConstraint_3)); }
	inline int32_t get_axisConstraint_3() const { return ___axisConstraint_3; }
	inline int32_t* get_address_of_axisConstraint_3() { return &___axisConstraint_3; }
	inline void set_axisConstraint_3(int32_t value)
	{
		___axisConstraint_3 = value;
	}
};

struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_StaticFields
{
public:
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::<None>k__BackingField
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___U3CNoneU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CNoneU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_StaticFields, ___U3CNoneU3Ek__BackingField_0)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_U3CNoneU3Ek__BackingField_0() const { return ___U3CNoneU3Ek__BackingField_0; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_U3CNoneU3Ek__BackingField_0() { return &___U3CNoneU3Ek__BackingField_0; }
	inline void set_U3CNoneU3Ek__BackingField_0(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___U3CNoneU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CNoneU3Ek__BackingField_0))->___description_2), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_marshaled_pinvoke
{
	uint32_t ___id_1;
	char* ___description_2;
	int32_t ___axisConstraint_3;
};
// Native definition for COM marshalling of Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction
struct MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58_marshaled_com
{
	uint32_t ___id_1;
	Il2CppChar* ___description_2;
	int32_t ___axisConstraint_3;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>
struct Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36, ___list_0)); }
	inline List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * get_list_0() const { return ___list_0; }
	inline List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36, ___current_3)); }
	inline InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  get_current_3() const { return ___current_3; }
	inline InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___m_Name_0), (void*)NULL);
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping
struct MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A  : public RuntimeObject
{
public:
	// System.UInt32 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::id
	uint32_t ___id_0;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::description
	String_t* ___description_1;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisType
	int32_t ___axisType_2;
	// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputType
	int32_t ___inputType_3;
	// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::inputAction
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  ___inputAction_4;
	// UnityEngine.KeyCode Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::keyCode
	int32_t ___keyCode_5;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeX
	String_t* ___axisCodeX_6;
	// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::axisCodeY
	String_t* ___axisCodeY_7;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertXAxis
	bool ___invertXAxis_8;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::invertYAxis
	bool ___invertYAxis_9;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::changed
	bool ___changed_10;
	// System.Object Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rawData
	RuntimeObject * ___rawData_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::boolData
	bool ___boolData_12;
	// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::floatData
	float ___floatData_13;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::vector2Data
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___vector2Data_14;
	// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::positionData
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positionData_15;
	// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::rotationData
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotationData_16;
	// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::poseData
	MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  ___poseData_17;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___id_0)); }
	inline uint32_t get_id_0() const { return ___id_0; }
	inline uint32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(uint32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_description_1() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___description_1)); }
	inline String_t* get_description_1() const { return ___description_1; }
	inline String_t** get_address_of_description_1() { return &___description_1; }
	inline void set_description_1(String_t* value)
	{
		___description_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_1), (void*)value);
	}

	inline static int32_t get_offset_of_axisType_2() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___axisType_2)); }
	inline int32_t get_axisType_2() const { return ___axisType_2; }
	inline int32_t* get_address_of_axisType_2() { return &___axisType_2; }
	inline void set_axisType_2(int32_t value)
	{
		___axisType_2 = value;
	}

	inline static int32_t get_offset_of_inputType_3() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___inputType_3)); }
	inline int32_t get_inputType_3() const { return ___inputType_3; }
	inline int32_t* get_address_of_inputType_3() { return &___inputType_3; }
	inline void set_inputType_3(int32_t value)
	{
		___inputType_3 = value;
	}

	inline static int32_t get_offset_of_inputAction_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___inputAction_4)); }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  get_inputAction_4() const { return ___inputAction_4; }
	inline MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * get_address_of_inputAction_4() { return &___inputAction_4; }
	inline void set_inputAction_4(MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  value)
	{
		___inputAction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___inputAction_4))->___description_2), (void*)NULL);
	}

	inline static int32_t get_offset_of_keyCode_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___keyCode_5)); }
	inline int32_t get_keyCode_5() const { return ___keyCode_5; }
	inline int32_t* get_address_of_keyCode_5() { return &___keyCode_5; }
	inline void set_keyCode_5(int32_t value)
	{
		___keyCode_5 = value;
	}

	inline static int32_t get_offset_of_axisCodeX_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___axisCodeX_6)); }
	inline String_t* get_axisCodeX_6() const { return ___axisCodeX_6; }
	inline String_t** get_address_of_axisCodeX_6() { return &___axisCodeX_6; }
	inline void set_axisCodeX_6(String_t* value)
	{
		___axisCodeX_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeX_6), (void*)value);
	}

	inline static int32_t get_offset_of_axisCodeY_7() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___axisCodeY_7)); }
	inline String_t* get_axisCodeY_7() const { return ___axisCodeY_7; }
	inline String_t** get_address_of_axisCodeY_7() { return &___axisCodeY_7; }
	inline void set_axisCodeY_7(String_t* value)
	{
		___axisCodeY_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisCodeY_7), (void*)value);
	}

	inline static int32_t get_offset_of_invertXAxis_8() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___invertXAxis_8)); }
	inline bool get_invertXAxis_8() const { return ___invertXAxis_8; }
	inline bool* get_address_of_invertXAxis_8() { return &___invertXAxis_8; }
	inline void set_invertXAxis_8(bool value)
	{
		___invertXAxis_8 = value;
	}

	inline static int32_t get_offset_of_invertYAxis_9() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___invertYAxis_9)); }
	inline bool get_invertYAxis_9() const { return ___invertYAxis_9; }
	inline bool* get_address_of_invertYAxis_9() { return &___invertYAxis_9; }
	inline void set_invertYAxis_9(bool value)
	{
		___invertYAxis_9 = value;
	}

	inline static int32_t get_offset_of_changed_10() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___changed_10)); }
	inline bool get_changed_10() const { return ___changed_10; }
	inline bool* get_address_of_changed_10() { return &___changed_10; }
	inline void set_changed_10(bool value)
	{
		___changed_10 = value;
	}

	inline static int32_t get_offset_of_rawData_11() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___rawData_11)); }
	inline RuntimeObject * get_rawData_11() const { return ___rawData_11; }
	inline RuntimeObject ** get_address_of_rawData_11() { return &___rawData_11; }
	inline void set_rawData_11(RuntimeObject * value)
	{
		___rawData_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rawData_11), (void*)value);
	}

	inline static int32_t get_offset_of_boolData_12() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___boolData_12)); }
	inline bool get_boolData_12() const { return ___boolData_12; }
	inline bool* get_address_of_boolData_12() { return &___boolData_12; }
	inline void set_boolData_12(bool value)
	{
		___boolData_12 = value;
	}

	inline static int32_t get_offset_of_floatData_13() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___floatData_13)); }
	inline float get_floatData_13() const { return ___floatData_13; }
	inline float* get_address_of_floatData_13() { return &___floatData_13; }
	inline void set_floatData_13(float value)
	{
		___floatData_13 = value;
	}

	inline static int32_t get_offset_of_vector2Data_14() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___vector2Data_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_vector2Data_14() const { return ___vector2Data_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_vector2Data_14() { return &___vector2Data_14; }
	inline void set_vector2Data_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___vector2Data_14 = value;
	}

	inline static int32_t get_offset_of_positionData_15() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___positionData_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positionData_15() const { return ___positionData_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positionData_15() { return &___positionData_15; }
	inline void set_positionData_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positionData_15 = value;
	}

	inline static int32_t get_offset_of_rotationData_16() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___rotationData_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotationData_16() const { return ___rotationData_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotationData_16() { return &___rotationData_16; }
	inline void set_rotationData_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotationData_16 = value;
	}

	inline static int32_t get_offset_of_poseData_17() { return static_cast<int32_t>(offsetof(MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A, ___poseData_17)); }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  get_poseData_17() const { return ___poseData_17; }
	inline MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8 * get_address_of_poseData_17() { return &___poseData_17; }
	inline void set_poseData_17(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  value)
	{
		___poseData_17 = value;
	}
};


// UnityEngine.TextMesh
struct TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection
struct BaseObjectCollection_tA162391FBDB35E6349C4DDC62ADB0AEAB97E0ACC  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Action`1<Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::<OnCollectionUpdated>k__BackingField
	Action_1_tE6BF05944D44A68876BF0C7EC159A7D62C1CD0AD * ___U3COnCollectionUpdatedU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<Microsoft.MixedReality.Toolkit.Utilities.ObjectCollectionNode> Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::nodeList
	List_1_t684A343B9476A91007ABC5903297CEF775AF6987 * ___nodeList_5;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::ignoreInactiveTransforms
	bool ___ignoreInactiveTransforms_6;
	// Microsoft.MixedReality.Toolkit.Utilities.CollationOrder Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::sortType
	int32_t ___sortType_7;

public:
	inline static int32_t get_offset_of_U3COnCollectionUpdatedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(BaseObjectCollection_tA162391FBDB35E6349C4DDC62ADB0AEAB97E0ACC, ___U3COnCollectionUpdatedU3Ek__BackingField_4)); }
	inline Action_1_tE6BF05944D44A68876BF0C7EC159A7D62C1CD0AD * get_U3COnCollectionUpdatedU3Ek__BackingField_4() const { return ___U3COnCollectionUpdatedU3Ek__BackingField_4; }
	inline Action_1_tE6BF05944D44A68876BF0C7EC159A7D62C1CD0AD ** get_address_of_U3COnCollectionUpdatedU3Ek__BackingField_4() { return &___U3COnCollectionUpdatedU3Ek__BackingField_4; }
	inline void set_U3COnCollectionUpdatedU3Ek__BackingField_4(Action_1_tE6BF05944D44A68876BF0C7EC159A7D62C1CD0AD * value)
	{
		___U3COnCollectionUpdatedU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COnCollectionUpdatedU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_nodeList_5() { return static_cast<int32_t>(offsetof(BaseObjectCollection_tA162391FBDB35E6349C4DDC62ADB0AEAB97E0ACC, ___nodeList_5)); }
	inline List_1_t684A343B9476A91007ABC5903297CEF775AF6987 * get_nodeList_5() const { return ___nodeList_5; }
	inline List_1_t684A343B9476A91007ABC5903297CEF775AF6987 ** get_address_of_nodeList_5() { return &___nodeList_5; }
	inline void set_nodeList_5(List_1_t684A343B9476A91007ABC5903297CEF775AF6987 * value)
	{
		___nodeList_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nodeList_5), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreInactiveTransforms_6() { return static_cast<int32_t>(offsetof(BaseObjectCollection_tA162391FBDB35E6349C4DDC62ADB0AEAB97E0ACC, ___ignoreInactiveTransforms_6)); }
	inline bool get_ignoreInactiveTransforms_6() const { return ___ignoreInactiveTransforms_6; }
	inline bool* get_address_of_ignoreInactiveTransforms_6() { return &___ignoreInactiveTransforms_6; }
	inline void set_ignoreInactiveTransforms_6(bool value)
	{
		___ignoreInactiveTransforms_6 = value;
	}

	inline static int32_t get_offset_of_sortType_7() { return static_cast<int32_t>(offsetof(BaseObjectCollection_tA162391FBDB35E6349C4DDC62ADB0AEAB97E0ACC, ___sortType_7)); }
	inline int32_t get_sortType_7() const { return ___sortType_7; }
	inline int32_t* get_address_of_sortType_7() { return &___sortType_7; }
	inline void set_sortType_7(int32_t value)
	{
		___sortType_7 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult
struct DisplayInputResult_t5D17A34DFB921AB7CF633C418FCEF88FCE9A74D8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::displayTextMesh
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___displayTextMesh_4;
	// Microsoft.MixedReality.Toolkit.Utilities.AxisType Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::inputType
	int32_t ___inputType_5;
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::axisNumber
	int32_t ___axisNumber_6;
	// System.Int32 Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::buttonNumber
	int32_t ___buttonNumber_7;
	// Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult/DisplayType Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::displayType
	int32_t ___displayType_8;

public:
	inline static int32_t get_offset_of_displayTextMesh_4() { return static_cast<int32_t>(offsetof(DisplayInputResult_t5D17A34DFB921AB7CF633C418FCEF88FCE9A74D8, ___displayTextMesh_4)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_displayTextMesh_4() const { return ___displayTextMesh_4; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_displayTextMesh_4() { return &___displayTextMesh_4; }
	inline void set_displayTextMesh_4(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___displayTextMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayTextMesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_inputType_5() { return static_cast<int32_t>(offsetof(DisplayInputResult_t5D17A34DFB921AB7CF633C418FCEF88FCE9A74D8, ___inputType_5)); }
	inline int32_t get_inputType_5() const { return ___inputType_5; }
	inline int32_t* get_address_of_inputType_5() { return &___inputType_5; }
	inline void set_inputType_5(int32_t value)
	{
		___inputType_5 = value;
	}

	inline static int32_t get_offset_of_axisNumber_6() { return static_cast<int32_t>(offsetof(DisplayInputResult_t5D17A34DFB921AB7CF633C418FCEF88FCE9A74D8, ___axisNumber_6)); }
	inline int32_t get_axisNumber_6() const { return ___axisNumber_6; }
	inline int32_t* get_address_of_axisNumber_6() { return &___axisNumber_6; }
	inline void set_axisNumber_6(int32_t value)
	{
		___axisNumber_6 = value;
	}

	inline static int32_t get_offset_of_buttonNumber_7() { return static_cast<int32_t>(offsetof(DisplayInputResult_t5D17A34DFB921AB7CF633C418FCEF88FCE9A74D8, ___buttonNumber_7)); }
	inline int32_t get_buttonNumber_7() const { return ___buttonNumber_7; }
	inline int32_t* get_address_of_buttonNumber_7() { return &___buttonNumber_7; }
	inline void set_buttonNumber_7(int32_t value)
	{
		___buttonNumber_7 = value;
	}

	inline static int32_t get_offset_of_displayType_8() { return static_cast<int32_t>(offsetof(DisplayInputResult_t5D17A34DFB921AB7CF633C418FCEF88FCE9A74D8, ___displayType_8)); }
	inline int32_t get_displayType_8() const { return ___displayType_8; }
	inline int32_t* get_address_of_displayType_8() { return &___displayType_8; }
	inline void set_displayType_8(int32_t value)
	{
		___displayType_8 = value;
	}
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages
struct ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::listInputDevicesTextMesh
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___listInputDevicesTextMesh_4;
	// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::gridObjectCollection
	GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB * ___gridObjectCollection_5;
	// UnityEngine.GameObject Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::displayFeatureUsagesPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___displayFeatureUsagesPrefab_6;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::leftInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___leftInputDevices_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputDevice> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::rightInputDevices
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___rightInputDevices_8;
	// System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::featureUsages
	List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * ___featureUsages_9;
	// System.Collections.Generic.List`1<UnityEngine.TextMesh> Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::displayFeatureUsagesTextMeshes
	List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * ___displayFeatureUsagesTextMeshes_10;

public:
	inline static int32_t get_offset_of_listInputDevicesTextMesh_4() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16, ___listInputDevicesTextMesh_4)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_listInputDevicesTextMesh_4() const { return ___listInputDevicesTextMesh_4; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_listInputDevicesTextMesh_4() { return &___listInputDevicesTextMesh_4; }
	inline void set_listInputDevicesTextMesh_4(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___listInputDevicesTextMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listInputDevicesTextMesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_gridObjectCollection_5() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16, ___gridObjectCollection_5)); }
	inline GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB * get_gridObjectCollection_5() const { return ___gridObjectCollection_5; }
	inline GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB ** get_address_of_gridObjectCollection_5() { return &___gridObjectCollection_5; }
	inline void set_gridObjectCollection_5(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB * value)
	{
		___gridObjectCollection_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gridObjectCollection_5), (void*)value);
	}

	inline static int32_t get_offset_of_displayFeatureUsagesPrefab_6() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16, ___displayFeatureUsagesPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_displayFeatureUsagesPrefab_6() const { return ___displayFeatureUsagesPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_displayFeatureUsagesPrefab_6() { return &___displayFeatureUsagesPrefab_6; }
	inline void set_displayFeatureUsagesPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___displayFeatureUsagesPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFeatureUsagesPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_leftInputDevices_7() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16, ___leftInputDevices_7)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_leftInputDevices_7() const { return ___leftInputDevices_7; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_leftInputDevices_7() { return &___leftInputDevices_7; }
	inline void set_leftInputDevices_7(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___leftInputDevices_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftInputDevices_7), (void*)value);
	}

	inline static int32_t get_offset_of_rightInputDevices_8() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16, ___rightInputDevices_8)); }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * get_rightInputDevices_8() const { return ___rightInputDevices_8; }
	inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F ** get_address_of_rightInputDevices_8() { return &___rightInputDevices_8; }
	inline void set_rightInputDevices_8(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * value)
	{
		___rightInputDevices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightInputDevices_8), (void*)value);
	}

	inline static int32_t get_offset_of_featureUsages_9() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16, ___featureUsages_9)); }
	inline List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * get_featureUsages_9() const { return ___featureUsages_9; }
	inline List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E ** get_address_of_featureUsages_9() { return &___featureUsages_9; }
	inline void set_featureUsages_9(List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * value)
	{
		___featureUsages_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___featureUsages_9), (void*)value);
	}

	inline static int32_t get_offset_of_displayFeatureUsagesTextMeshes_10() { return static_cast<int32_t>(offsetof(ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16, ___displayFeatureUsagesTextMeshes_10)); }
	inline List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * get_displayFeatureUsagesTextMeshes_10() const { return ___displayFeatureUsagesTextMeshes_10; }
	inline List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B ** get_address_of_displayFeatureUsagesTextMeshes_10() { return &___displayFeatureUsagesTextMeshes_10; }
	inline void set_displayFeatureUsagesTextMeshes_10(List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * value)
	{
		___displayFeatureUsagesTextMeshes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFeatureUsagesTextMeshes_10), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool
struct MixedRealityInteractionTool_t6E6BE5BDFE405B0580CA8F3DE9815036ACC0217A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::listControllersTextMesh
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___listControllersTextMesh_4;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::leftHandedControllerTextMesh
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___leftHandedControllerTextMesh_5;
	// UnityEngine.TextMesh Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::rightHandedControllerTextMesh
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___rightHandedControllerTextMesh_6;

public:
	inline static int32_t get_offset_of_listControllersTextMesh_4() { return static_cast<int32_t>(offsetof(MixedRealityInteractionTool_t6E6BE5BDFE405B0580CA8F3DE9815036ACC0217A, ___listControllersTextMesh_4)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_listControllersTextMesh_4() const { return ___listControllersTextMesh_4; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_listControllersTextMesh_4() { return &___listControllersTextMesh_4; }
	inline void set_listControllersTextMesh_4(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___listControllersTextMesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listControllersTextMesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_leftHandedControllerTextMesh_5() { return static_cast<int32_t>(offsetof(MixedRealityInteractionTool_t6E6BE5BDFE405B0580CA8F3DE9815036ACC0217A, ___leftHandedControllerTextMesh_5)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_leftHandedControllerTextMesh_5() const { return ___leftHandedControllerTextMesh_5; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_leftHandedControllerTextMesh_5() { return &___leftHandedControllerTextMesh_5; }
	inline void set_leftHandedControllerTextMesh_5(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___leftHandedControllerTextMesh_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leftHandedControllerTextMesh_5), (void*)value);
	}

	inline static int32_t get_offset_of_rightHandedControllerTextMesh_6() { return static_cast<int32_t>(offsetof(MixedRealityInteractionTool_t6E6BE5BDFE405B0580CA8F3DE9815036ACC0217A, ___rightHandedControllerTextMesh_6)); }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * get_rightHandedControllerTextMesh_6() const { return ___rightHandedControllerTextMesh_6; }
	inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 ** get_address_of_rightHandedControllerTextMesh_6() { return &___rightHandedControllerTextMesh_6; }
	inline void set_rightHandedControllerTextMesh_6(TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * value)
	{
		___rightHandedControllerTextMesh_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rightHandedControllerTextMesh_6), (void*)value);
	}
};


// Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection
struct GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB  : public BaseObjectCollection_tA162391FBDB35E6349C4DDC62ADB0AEAB97E0ACC
{
public:
	// Microsoft.MixedReality.Toolkit.Utilities.ObjectOrientationSurfaceType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::surfaceType
	int32_t ___surfaceType_8;
	// Microsoft.MixedReality.Toolkit.Utilities.OrientationType Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::orientType
	int32_t ___orientType_9;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutOrder Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::layout
	int32_t ___layout_10;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutAnchor Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchor
	int32_t ___anchor_11;
	// System.Boolean Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::anchorAlongAxis
	bool ___anchorAlongAxis_12;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutHorizontalAlignment Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columnAlignment
	int32_t ___columnAlignment_13;
	// Microsoft.MixedReality.Toolkit.Utilities.LayoutVerticalAlignment Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rowAlignment
	int32_t ___rowAlignment_14;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radius
	float ___radius_15;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::radialRange
	float ___radialRange_16;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::distance
	float ___distance_17;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::rows
	int32_t ___rows_19;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::columns
	int32_t ___columns_20;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellWidth
	float ___cellWidth_21;
	// System.Single Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::cellHeight
	float ___cellHeight_22;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<SphereMesh>k__BackingField
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CSphereMeshU3Ek__BackingField_23;
	// UnityEngine.Mesh Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::<CylinderMesh>k__BackingField
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___U3CCylinderMeshU3Ek__BackingField_24;
	// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::HalfCell
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___HalfCell_25;
	// System.Int32 Microsoft.MixedReality.Toolkit.Utilities.GridObjectCollection::assetVersion
	int32_t ___assetVersion_27;

public:
	inline static int32_t get_offset_of_surfaceType_8() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___surfaceType_8)); }
	inline int32_t get_surfaceType_8() const { return ___surfaceType_8; }
	inline int32_t* get_address_of_surfaceType_8() { return &___surfaceType_8; }
	inline void set_surfaceType_8(int32_t value)
	{
		___surfaceType_8 = value;
	}

	inline static int32_t get_offset_of_orientType_9() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___orientType_9)); }
	inline int32_t get_orientType_9() const { return ___orientType_9; }
	inline int32_t* get_address_of_orientType_9() { return &___orientType_9; }
	inline void set_orientType_9(int32_t value)
	{
		___orientType_9 = value;
	}

	inline static int32_t get_offset_of_layout_10() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___layout_10)); }
	inline int32_t get_layout_10() const { return ___layout_10; }
	inline int32_t* get_address_of_layout_10() { return &___layout_10; }
	inline void set_layout_10(int32_t value)
	{
		___layout_10 = value;
	}

	inline static int32_t get_offset_of_anchor_11() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___anchor_11)); }
	inline int32_t get_anchor_11() const { return ___anchor_11; }
	inline int32_t* get_address_of_anchor_11() { return &___anchor_11; }
	inline void set_anchor_11(int32_t value)
	{
		___anchor_11 = value;
	}

	inline static int32_t get_offset_of_anchorAlongAxis_12() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___anchorAlongAxis_12)); }
	inline bool get_anchorAlongAxis_12() const { return ___anchorAlongAxis_12; }
	inline bool* get_address_of_anchorAlongAxis_12() { return &___anchorAlongAxis_12; }
	inline void set_anchorAlongAxis_12(bool value)
	{
		___anchorAlongAxis_12 = value;
	}

	inline static int32_t get_offset_of_columnAlignment_13() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___columnAlignment_13)); }
	inline int32_t get_columnAlignment_13() const { return ___columnAlignment_13; }
	inline int32_t* get_address_of_columnAlignment_13() { return &___columnAlignment_13; }
	inline void set_columnAlignment_13(int32_t value)
	{
		___columnAlignment_13 = value;
	}

	inline static int32_t get_offset_of_rowAlignment_14() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___rowAlignment_14)); }
	inline int32_t get_rowAlignment_14() const { return ___rowAlignment_14; }
	inline int32_t* get_address_of_rowAlignment_14() { return &___rowAlignment_14; }
	inline void set_rowAlignment_14(int32_t value)
	{
		___rowAlignment_14 = value;
	}

	inline static int32_t get_offset_of_radius_15() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___radius_15)); }
	inline float get_radius_15() const { return ___radius_15; }
	inline float* get_address_of_radius_15() { return &___radius_15; }
	inline void set_radius_15(float value)
	{
		___radius_15 = value;
	}

	inline static int32_t get_offset_of_radialRange_16() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___radialRange_16)); }
	inline float get_radialRange_16() const { return ___radialRange_16; }
	inline float* get_address_of_radialRange_16() { return &___radialRange_16; }
	inline void set_radialRange_16(float value)
	{
		___radialRange_16 = value;
	}

	inline static int32_t get_offset_of_distance_17() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___distance_17)); }
	inline float get_distance_17() const { return ___distance_17; }
	inline float* get_address_of_distance_17() { return &___distance_17; }
	inline void set_distance_17(float value)
	{
		___distance_17 = value;
	}

	inline static int32_t get_offset_of_rows_19() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___rows_19)); }
	inline int32_t get_rows_19() const { return ___rows_19; }
	inline int32_t* get_address_of_rows_19() { return &___rows_19; }
	inline void set_rows_19(int32_t value)
	{
		___rows_19 = value;
	}

	inline static int32_t get_offset_of_columns_20() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___columns_20)); }
	inline int32_t get_columns_20() const { return ___columns_20; }
	inline int32_t* get_address_of_columns_20() { return &___columns_20; }
	inline void set_columns_20(int32_t value)
	{
		___columns_20 = value;
	}

	inline static int32_t get_offset_of_cellWidth_21() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___cellWidth_21)); }
	inline float get_cellWidth_21() const { return ___cellWidth_21; }
	inline float* get_address_of_cellWidth_21() { return &___cellWidth_21; }
	inline void set_cellWidth_21(float value)
	{
		___cellWidth_21 = value;
	}

	inline static int32_t get_offset_of_cellHeight_22() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___cellHeight_22)); }
	inline float get_cellHeight_22() const { return ___cellHeight_22; }
	inline float* get_address_of_cellHeight_22() { return &___cellHeight_22; }
	inline void set_cellHeight_22(float value)
	{
		___cellHeight_22 = value;
	}

	inline static int32_t get_offset_of_U3CSphereMeshU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___U3CSphereMeshU3Ek__BackingField_23)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3CSphereMeshU3Ek__BackingField_23() const { return ___U3CSphereMeshU3Ek__BackingField_23; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3CSphereMeshU3Ek__BackingField_23() { return &___U3CSphereMeshU3Ek__BackingField_23; }
	inline void set_U3CSphereMeshU3Ek__BackingField_23(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3CSphereMeshU3Ek__BackingField_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSphereMeshU3Ek__BackingField_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCylinderMeshU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___U3CCylinderMeshU3Ek__BackingField_24)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_U3CCylinderMeshU3Ek__BackingField_24() const { return ___U3CCylinderMeshU3Ek__BackingField_24; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_U3CCylinderMeshU3Ek__BackingField_24() { return &___U3CCylinderMeshU3Ek__BackingField_24; }
	inline void set_U3CCylinderMeshU3Ek__BackingField_24(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___U3CCylinderMeshU3Ek__BackingField_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCylinderMeshU3Ek__BackingField_24), (void*)value);
	}

	inline static int32_t get_offset_of_HalfCell_25() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___HalfCell_25)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_HalfCell_25() const { return ___HalfCell_25; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_HalfCell_25() { return &___HalfCell_25; }
	inline void set_HalfCell_25(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___HalfCell_25 = value;
	}

	inline static int32_t get_offset_of_assetVersion_27() { return static_cast<int32_t>(offsetof(GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB, ___assetVersion_27)); }
	inline int32_t get_assetVersion_27() const { return ___assetVersion_27; }
	inline int32_t* get_address_of_assetVersion_27() { return &___assetVersion_27; }
	inline void set_assetVersion_27(int32_t value)
	{
		___assetVersion_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[]
struct MixedRealityInteractionMappingU5BU5D_t9715CAE845E6E41571A3A49DADF0942255BB01F9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * m_Items[1];

public:
	inline MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.InputDevice[]
struct InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  m_Items[1];

public:
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  value)
	{
		m_Items[index] = value;
	}
};


// System.Boolean System.Enum::TryParse<System.Int32Enum>(System.String,!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enum_TryParse_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m41610E72E4BC8727099F8EF765A76BBE6841ADAC_gshared (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Union_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mA505D15244DE52B42806B481557FD68E4B336915_gshared (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * Enumerable_ToList_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mEB4311C4CA17AFD04A0422C729036CC177D411EB_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36  List_1_GetEnumerator_mFA4CE48B4A8D1A96EA78E971806AEB85765756BD_gshared (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  Enumerator_get_Current_mC62382A263C7901E5A2D8803FAA3FFCAE647167D_gshared_inline (Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA585F51E47A6E1ED4001A1326709C0B22F538BE4_gshared_inline (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Boolean>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  InputFeatureUsage_As_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0057B1EB25983324532DE3CEEC15A00D70C1F84C_gshared (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23  InputFeatureUsage_As_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAC9F189E795007FD143A00EF2127C577E989385C_gshared (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Single>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  InputFeatureUsage_As_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m9A60AAC05667D8F72D2C42D7E92D36E8C7E4392B_gshared (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  InputFeatureUsage_As_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m09A15C6CD210A2D644F198FBFB9C6FE7CDD556C4_gshared (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  InputFeatureUsage_As_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mA4A998135A26EC8B53C9032C86BA0E6636C4BF47_gshared (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Quaternion>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  InputFeatureUsage_As_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m45199BA5F7BABCBC2396E8F0965F6A6DA98B01DC_gshared (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.UInt32Enum>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputFeatureUsage_1_t6914D487EFC663AE00B3D7725DD123A5814507D6  InputFeatureUsage_As_TisUInt32Enum_t205AC9FF1DBA9F24788030B596D7BE3A2E808EF1_mA4647A0BBC9F77088F6E18C5AEE9C19F6CD2D2B0_gshared (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA882A1C259A1174649DF9F78391F8036732949C5_gshared (Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCD2C1136622529F7FA6ABA47BB92A436E1E896B1_gshared (Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB0147DAC8F87F25B260B66D4E1DF950682CADC3B_gshared (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A  HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.HashSet`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method);

// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.TextMesh::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04 (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Enum::TryParse<UnityEngine.KeyCode>(System.String,!!0&)
inline bool Enum_TryParse_TisKeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_mE9447AD6FFC174131093B1E729A78A0891B3B3A2 (String_t* ___value0, int32_t* ___result1, const RuntimeMethod* method)
{
	return ((  bool (*) (String_t*, int32_t*, const RuntimeMethod*))Enum_TryParse_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m41610E72E4BC8727099F8EF765A76BBE6841ADAC_gshared)(___value0, ___result1, method);
}
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.String UnityEngine.TextMesh::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B (TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.String[] UnityEngine.Input::GetJoystickNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Input_GetJoystickNames_mBD6976AEAFB4B2930FA2AB3215C0E8ED27A7938B (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputDevices::GetDevicesWithCharacteristics(UnityEngine.XR.InputDeviceCharacteristics,System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC (uint32_t ___desiredCharacteristics0, List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * ___inputDevices1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!0> System.Linq.Enumerable::Union<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>,System.Collections.Generic.IEnumerable`1<!!0>)
inline RuntimeObject* Enumerable_Union_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mA505D15244DE52B42806B481557FD68E4B336915 (RuntimeObject* ___first0, RuntimeObject* ___second1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Enumerable_Union_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mA505D15244DE52B42806B481557FD68E4B336915_gshared)(___first0, ___second1, method);
}
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<UnityEngine.XR.InputDevice>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * Enumerable_ToList_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mEB4311C4CA17AFD04A0422C729036CC177D411EB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mEB4311C4CA17AFD04A0422C729036CC177D411EB_gshared)(___source0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Count()
inline int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.TextMesh>::get_Count()
inline int32_t List_1_get_Count_m03D5002EEF486752D611BDEC48797AD6CAD4C857_inline (List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.TextMesh>()
inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * GameObject_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m3224EB1D4E32C005C8E8297F9073CF18D0AAA503 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TextMesh>::Add(!0)
inline void List_1_Add_m8EA5FE053103580F94C96B5BF0E4E2D6D5F2D0A2 (List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * __this, TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B *, TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.TextMesh>::get_Item(System.Int32)
inline TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * List_1_get_Item_m90D8F603736F875CF7DCC31B680DA5C63CA0CBA8_inline (List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * (*) (List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::get_Item(System.Int32)
inline InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, int32_t, const RuntimeMethod*))List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.XR.InputDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_name_m5FA211BC67629D36A37753E4D2E524586B66CA89 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputDevice::get_manufacturer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputDevice_get_manufacturer_m9DA87EC52EA101D8C3141B0356D8701A6AE59590 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureUsages(System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureUsages_mAFFD78196DA1E75A265B427D9C70212382A3A465 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * ___featureUsages0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::GetEnumerator()
inline Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36  List_1_GetEnumerator_mFA4CE48B4A8D1A96EA78E971806AEB85765756BD (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36  (*) (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E *, const RuntimeMethod*))List_1_GetEnumerator_mFA4CE48B4A8D1A96EA78E971806AEB85765756BD_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::get_Current()
inline InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  Enumerator_get_Current_mC62382A263C7901E5A2D8803FAA3FFCAE647167D_inline (Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  (*) (Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 *, const RuntimeMethod*))Enumerator_get_Current_mC62382A263C7901E5A2D8803FAA3FFCAE647167D_gshared_inline)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::get_Count()
inline int32_t List_1_get_Count_mA585F51E47A6E1ED4001A1326709C0B22F538BE4_inline (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E *, const RuntimeMethod*))List_1_get_Count_mA585F51E47A6E1ED4001A1326709C0B22F538BE4_gshared_inline)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.String UnityEngine.XR.InputFeatureUsage::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InputFeatureUsage_get_name_m08FB0101027B503D080EE38F4273BB61C59E3988 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// System.Type UnityEngine.XR.InputFeatureUsage::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * InputFeatureUsage_get_type_m5F338C5941174F8FCB6B9A494C0F109D2EB8D957 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Boolean>()
inline InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  InputFeatureUsage_As_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0057B1EB25983324532DE3CEEC15A00D70C1F84C (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  (*) (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *, const RuntimeMethod*))InputFeatureUsage_As_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0057B1EB25983324532DE3CEEC15A00D70C1F84C_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Boolean>,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  ___usage0, bool* ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.UInt32>()
inline InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23  InputFeatureUsage_As_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAC9F189E795007FD143A00EF2127C577E989385C (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23  (*) (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *, const RuntimeMethod*))InputFeatureUsage_As_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAC9F189E795007FD143A00EF2127C577E989385C_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.UInt32>,System.UInt32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mD813F6D528B7C8574AC1DF351C99A60FCCB89576 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23  ___usage0, uint32_t* ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<System.Single>()
inline InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  InputFeatureUsage_As_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m9A60AAC05667D8F72D2C42D7E92D36E8C7E4392B (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  (*) (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *, const RuntimeMethod*))InputFeatureUsage_As_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m9A60AAC05667D8F72D2C42D7E92D36E8C7E4392B_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<System.Single>,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m531D0670B4FBDA6CD5B8E899627B70F3DB840E69 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  ___usage0, float* ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector2>()
inline InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  InputFeatureUsage_As_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m09A15C6CD210A2D644F198FBFB9C6FE7CDD556C4 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  (*) (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *, const RuntimeMethod*))InputFeatureUsage_As_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m09A15C6CD210A2D644F198FBFB9C6FE7CDD556C4_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector2>,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  ___usage0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Vector3>()
inline InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  InputFeatureUsage_As_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mA4A998135A26EC8B53C9032C86BA0E6636C4BF47 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  (*) (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *, const RuntimeMethod*))InputFeatureUsage_As_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mA4A998135A26EC8B53C9032C86BA0E6636C4BF47_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Vector3>,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  ___usage0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.Quaternion>()
inline InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  InputFeatureUsage_As_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m45199BA5F7BABCBC2396E8F0965F6A6DA98B01DC (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  (*) (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *, const RuntimeMethod*))InputFeatureUsage_As_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m45199BA5F7BABCBC2396E8F0965F6A6DA98B01DC_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.Quaternion>,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  ___usage0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * ___value1, const RuntimeMethod* method);
// UnityEngine.XR.InputFeatureUsage`1<!!0> UnityEngine.XR.InputFeatureUsage::As<UnityEngine.XR.InputTrackingState>()
inline InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  InputFeatureUsage_As_TisInputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_m1EB45E5A16AC9589A67727C4F7142C74AC47F929 (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE * __this, const RuntimeMethod* method)
{
	return ((  InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  (*) (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *, const RuntimeMethod*))InputFeatureUsage_As_TisUInt32Enum_t205AC9FF1DBA9F24788030B596D7BE3A2E808EF1_mA4647A0BBC9F77088F6E18C5AEE9C19F6CD2D2B0_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.InputDevice::TryGetFeatureValue(UnityEngine.XR.InputFeatureUsage`1<UnityEngine.XR.InputTrackingState>,UnityEngine.XR.InputTrackingState&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputDevice_TryGetFeatureValue_m64CA9CE33B12A117D903F11373D5A4B3BC479497 (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E * __this, InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  ___usage0, uint32_t* ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::MoveNext()
inline bool Enumerator_MoveNext_mA882A1C259A1174649DF9F78391F8036732949C5 (Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 *, const RuntimeMethod*))Enumerator_MoveNext_mA882A1C259A1174649DF9F78391F8036732949C5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.InputFeatureUsage>::Dispose()
inline void Enumerator_Dispose_mCD2C1136622529F7FA6ABA47BB92A436E1E896B1 (Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 *, const RuntimeMethod*))Enumerator_Dispose_mCD2C1136622529F7FA6ABA47BB92A436E1E896B1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputDevice>::.ctor()
inline void List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1 (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *, const RuntimeMethod*))List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.InputFeatureUsage>::.ctor()
inline void List_1__ctor_mB0147DAC8F87F25B260B66D4E1DF950682CADC3B (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E *, const RuntimeMethod*))List_1__ctor_mB0147DAC8F87F25B260B66D4E1DF950682CADC3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.TextMesh>::.ctor()
inline void List_1__ctor_mAF159C4AA007279753F8C92A49FFE87BD5FA4B64 (List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem Microsoft.MixedReality.Toolkit.CoreServices::get_InputSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164 (const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Count()
inline int32_t HashSet_1_get_Count_m542D32EED9DC8F251671E283582DECA135D27A9E_inline (HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 *, const RuntimeMethod*))HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32>::.ctor(!0)
inline void Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184 (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_gshared)(__this, ___value0, method);
}
// System.Collections.Generic.HashSet`1/Enumerator<!0> System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::GetEnumerator()
inline Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B  HashSet_1_GetEnumerator_m710200AD633A6C20057231B427EE8E8BFE784ED6 (HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B  (*) (HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 *, const RuntimeMethod*))HashSet_1_GetEnumerator_m7B591DC586DE6ACF8918E1BC71FA731FB919603E_gshared)(__this, method);
}
// !0 System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m4C0BE8F4A9713388D992B88D757A8B49E0C507AB_inline (Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B *, const RuntimeMethod*))Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline)(__this, method);
}
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInteractionMapping_get_Description_m80CFE59BDAED5F951D6CCDE3BB87709DDA2DED9B_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_MixedRealityInputAction()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  MixedRealityInteractionMapping_get_MixedRealityInputAction_mAFB8C9133E0E0F711E56D59F7044A252C769B4CC_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method);
// System.String Microsoft.MixedReality.Toolkit.Input.MixedRealityInputAction::get_Description()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInputAction_get_Description_m243FDCDDB92BD198D9A23C9CD1802276D434A6C3_inline (MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Input.DeviceInputType Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_InputType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m9625D29052F1FF3445C11AAE049104AACC242405_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method);
// Microsoft.MixedReality.Toolkit.Utilities.MixedRealityPose Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PoseData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  MixedRealityInteractionMapping_get_PoseData_m1360D1110E604FC1BFAE7C662332C3A3E9203F44_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_PositionData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityInteractionMapping_get_PositionData_m97BA7B2F28D2B4FEBF57F29E4B2B20853DFB66F0_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_RotationData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityInteractionMapping_get_RotationData_mBBB506F45FAC614E8EE696D894C615127D14D8CA_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method);
// System.Boolean Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_BoolData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m5E0E6BE4F86AC7CA5840A09A754267603426DFE7_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method);
// System.Single Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_FloatData()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_mD599744D16B805FF7817431839A93AC5666A04AF_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping::get_Vector2Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_m071F56F8A2E08E877E9E9BC100787C2B7B6C2641_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::MoveNext()
inline bool Enumerator_MoveNext_mB2FFC8EB6CE8FB2BBEC4D0726795B7D55F22FA3A (Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B *, const RuntimeMethod*))Enumerator_MoveNext_mD87CDEF3F60C047F21B9E6A48590E59D9D6621C9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.HashSet`1/Enumerator<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController>::Dispose()
inline void Enumerator_Dispose_m31B9432FECA7E89F7AFAC194FD9047E14F52391E (Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B *, const RuntimeMethod*))Enumerator_Dispose_m8A225BA705CC2D5BA0A22FF58381EA1FDB37ED20_gshared)(__this, method);
}
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult_OnValidate_mB1DE4463BC53E869F91356952733601C375021A1 (DisplayInputResult_t5D17A34DFB921AB7CF633C418FCEF88FCE9A74D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1653F9A5516D70F1640148CADCC97C572A62936F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3193468E3E53BE1E41883B70A00F57ABFA77BFA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (displayType == DisplayType.InputAxes)
		int32_t L_0 = __this->get_displayType_8();
		if (L_0)
		{
			goto IL_0080;
		}
	}
	{
		// switch (inputType)
		int32_t L_1 = __this->get_inputType_5();
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0074;
			}
			case 1:
			{
				goto IL_0094;
			}
			case 2:
			{
				goto IL_004d;
			}
			case 3:
			{
				goto IL_0026;
			}
		}
	}
	{
		return;
	}

IL_0026:
	{
		// name = $"{inputType}{axisNumber}";
		int32_t L_3 = __this->get_inputType_5();
		int32_t L_4 = L_3;
		RuntimeObject * L_5 = Box(AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8_il2cpp_TypeInfo_var, &L_4);
		int32_t L_6 = __this->get_axisNumber_6();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_5, L_8, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(__this, L_9, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004d:
	{
		// name = $"{inputType}{buttonNumber}";
		int32_t L_10 = __this->get_inputType_5();
		int32_t L_11 = L_10;
		RuntimeObject * L_12 = Box(AxisType_t928CD1C842DAB47933B336290C91FEED7FB074E8_il2cpp_TypeInfo_var, &L_11);
		int32_t L_13 = __this->get_buttonNumber_7();
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE, L_12, L_15, /*hidden argument*/NULL);
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(__this, L_16, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0074:
	{
		// name = "AllActiveAxes";
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(__this, _stringLiteralF3193468E3E53BE1E41883B70A00F57ABFA77BFA, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0080:
	{
		// else if (displayType == DisplayType.JoystickNames)
		int32_t L_17 = __this->get_displayType_8();
		if ((!(((uint32_t)L_17) == ((uint32_t)1))))
		{
			goto IL_0094;
		}
	}
	{
		// name = "JoystickNames";
		Object_set_name_m87C4006618ADB325ABE5439DF159E10DD8DD0781(__this, _stringLiteral1653F9A5516D70F1640148CADCC97C572A62936F, /*hidden argument*/NULL);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult_Update_m8AB8C7B998F38F2AE114F194A6B51A4CCB7ADD9D (DisplayInputResult_t5D17A34DFB921AB7CF633C418FCEF88FCE9A74D8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_TryParse_TisKeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_mE9447AD6FFC174131093B1E729A78A0891B3B3A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C2FD7F14008DC5A9704A71B5926F425273F6DFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral10F4DE454A7A7EDC63FFA330FCC744864D606F50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2FB1273DCF301695744F96DE3A31C5DBDDB6DBB0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral80E8E33CFC68B6519B4050770677835060BEB5E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87E261F2D88CAAEDCD99354542725097ED590502);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB69CD88CA44BBA6464A30CAFD46811605F0109DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB6CE6B89F14D219960135E95D3D3A31031318C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD098894B7802A8D5E690D40161CCBD3A3B74AB08);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_7 = NULL;
	int32_t V_8 = 0;
	RuntimeObject * G_B22_0 = NULL;
	String_t* G_B22_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B22_2 = NULL;
	RuntimeObject * G_B21_0 = NULL;
	String_t* G_B21_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B21_2 = NULL;
	String_t* G_B23_0 = NULL;
	RuntimeObject * G_B23_1 = NULL;
	String_t* G_B23_2 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B23_3 = NULL;
	{
		// if (displayTextMesh == null)
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_0 = __this->get_displayTextMesh_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (displayType == DisplayType.InputAxes)
		int32_t L_2 = __this->get_displayType_8();
		if (L_2)
		{
			goto IL_0198;
		}
	}
	{
		// switch (inputType)
		int32_t L_3 = __this->get_inputType_5();
		V_1 = L_3;
		int32_t L_4 = V_1;
		switch (L_4)
		{
			case 0:
			{
				goto IL_00c5;
			}
			case 1:
			{
				goto IL_0203;
			}
			case 2:
			{
				goto IL_0078;
			}
			case 3:
			{
				goto IL_0038;
			}
		}
	}
	{
		return;
	}

IL_0038:
	{
		// displayTextMesh.text = $"Axis {axisNumber}: {UnityEngine.Input.GetAxis($"AXIS_{axisNumber}")}";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_5 = __this->get_displayTextMesh_4();
		int32_t L_6 = __this->get_axisNumber_6();
		int32_t L_7 = L_6;
		RuntimeObject * L_8 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_7);
		int32_t L_9 = __this->get_axisNumber_6();
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_10);
		String_t* L_12;
		L_12 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral10F4DE454A7A7EDC63FFA330FCC744864D606F50, L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_12, /*hidden argument*/NULL);
		float L_14 = L_13;
		RuntimeObject * L_15 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_14);
		String_t* L_16;
		L_16 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralD098894B7802A8D5E690D40161CCBD3A3B74AB08, L_8, L_15, /*hidden argument*/NULL);
		NullCheck(L_5);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_5, L_16, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0078:
	{
		// if (Enum.TryParse($"JoystickButton{buttonNumber}", out KeyCode keyCode))
		int32_t L_17 = __this->get_buttonNumber_7();
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_18);
		String_t* L_20;
		L_20 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralCB6CE6B89F14D219960135E95D3D3A31031318C1, L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Enum_TryParse_TisKeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_mE9447AD6FFC174131093B1E729A78A0891B3B3A2(L_20, (int32_t*)(&V_0), /*hidden argument*/Enum_TryParse_TisKeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_mE9447AD6FFC174131093B1E729A78A0891B3B3A2_RuntimeMethod_var);
		if (!L_21)
		{
			goto IL_0203;
		}
	}
	{
		// displayTextMesh.text = $"Button {buttonNumber}: {UnityEngine.Input.GetKey(keyCode)}";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_22 = __this->get_displayTextMesh_4();
		int32_t L_23 = __this->get_buttonNumber_7();
		int32_t L_24 = L_23;
		RuntimeObject * L_25 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_24);
		int32_t L_26 = V_0;
		bool L_27;
		L_27 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_26, /*hidden argument*/NULL);
		bool L_28 = L_27;
		RuntimeObject * L_29 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_28);
		String_t* L_30;
		L_30 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteralB69CD88CA44BBA6464A30CAFD46811605F0109DF, L_25, L_29, /*hidden argument*/NULL);
		NullCheck(L_22);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_22, L_30, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00c5:
	{
		// displayTextMesh.text = "All active:\n";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_31 = __this->get_displayTextMesh_4();
		NullCheck(L_31);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_31, _stringLiteral2FB1273DCF301695744F96DE3A31C5DBDDB6DBB0, /*hidden argument*/NULL);
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		V_2 = 1;
		goto IL_012c;
	}

IL_00d9:
	{
		// float reading = UnityEngine.Input.GetAxis($"AXIS_{i}");
		int32_t L_32 = V_2;
		int32_t L_33 = L_32;
		RuntimeObject * L_34 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral10F4DE454A7A7EDC63FFA330FCC744864D606F50, L_34, /*hidden argument*/NULL);
		float L_36;
		L_36 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(L_35, /*hidden argument*/NULL);
		V_3 = L_36;
		// if (reading != 0.0)
		float L_37 = V_3;
		if ((((double)((double)((double)L_37))) == ((double)(0.0))))
		{
			goto IL_0128;
		}
	}
	{
		// displayTextMesh.text += $"Axis {i}: {reading}\n";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_38 = __this->get_displayTextMesh_4();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_39 = L_38;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_39, /*hidden argument*/NULL);
		int32_t L_41 = V_2;
		int32_t L_42 = L_41;
		RuntimeObject * L_43 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_42);
		float L_44 = V_3;
		float L_45 = L_44;
		RuntimeObject * L_46 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_45);
		String_t* L_47;
		L_47 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral87E261F2D88CAAEDCD99354542725097ED590502, L_43, L_46, /*hidden argument*/NULL);
		String_t* L_48;
		L_48 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_40, L_47, /*hidden argument*/NULL);
		NullCheck(L_39);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_39, L_48, /*hidden argument*/NULL);
	}

IL_0128:
	{
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		int32_t L_49 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_012c:
	{
		// for (int i = 1; i <= UnityInputAxisCount; i++)
		int32_t L_50 = V_2;
		if ((((int32_t)L_50) <= ((int32_t)((int32_t)28))))
		{
			goto IL_00d9;
		}
	}
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		V_4 = 0;
		goto IL_0191;
	}

IL_0136:
	{
		// if (Enum.TryParse($"JoystickButton{i}", out KeyCode buttonCode))
		int32_t L_51 = V_4;
		int32_t L_52 = L_51;
		RuntimeObject * L_53 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_52);
		String_t* L_54;
		L_54 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralCB6CE6B89F14D219960135E95D3D3A31031318C1, L_53, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Enum_TryParse_TisKeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_mE9447AD6FFC174131093B1E729A78A0891B3B3A2(L_54, (int32_t*)(&V_5), /*hidden argument*/Enum_TryParse_TisKeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_mE9447AD6FFC174131093B1E729A78A0891B3B3A2_RuntimeMethod_var);
		if (!L_55)
		{
			goto IL_018b;
		}
	}
	{
		// bool isPressed = UnityEngine.Input.GetKey(buttonCode);
		int32_t L_56 = V_5;
		bool L_57;
		L_57 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_56, /*hidden argument*/NULL);
		V_6 = L_57;
		// if (isPressed)
		bool L_58 = V_6;
		if (!L_58)
		{
			goto IL_018b;
		}
	}
	{
		// displayTextMesh.text += $"Button {i}: {isPressed}\n";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_59 = __this->get_displayTextMesh_4();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_60 = L_59;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_60, /*hidden argument*/NULL);
		int32_t L_62 = V_4;
		int32_t L_63 = L_62;
		RuntimeObject * L_64 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_63);
		bool L_65 = V_6;
		bool L_66 = L_65;
		RuntimeObject * L_67 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_66);
		String_t* L_68;
		L_68 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral80E8E33CFC68B6519B4050770677835060BEB5E8, L_64, L_67, /*hidden argument*/NULL);
		String_t* L_69;
		L_69 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_61, L_68, /*hidden argument*/NULL);
		NullCheck(L_60);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_60, L_69, /*hidden argument*/NULL);
	}

IL_018b:
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		int32_t L_70 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_70, (int32_t)1));
	}

IL_0191:
	{
		// for (int i = 0; i < UnityInputButtonCount; i++)
		int32_t L_71 = V_4;
		if ((((int32_t)L_71) < ((int32_t)((int32_t)20))))
		{
			goto IL_0136;
		}
	}
	{
		// break;
		return;
	}

IL_0198:
	{
		// string[] joystickNames = UnityEngine.Input.GetJoystickNames();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72;
		L_72 = Input_GetJoystickNames_mBD6976AEAFB4B2930FA2AB3215C0E8ED27A7938B(/*hidden argument*/NULL);
		V_7 = L_72;
		// displayTextMesh.text = $"Detected {joystickNames.Length} controller{(joystickNames.Length != 1 ? "s" : "")}:\n";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_73 = __this->get_displayTextMesh_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_74 = V_7;
		NullCheck(L_74);
		int32_t L_75 = ((int32_t)((int32_t)(((RuntimeArray*)L_74)->max_length)));
		RuntimeObject * L_76 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_75);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_77 = V_7;
		NullCheck(L_77);
		G_B21_0 = L_76;
		G_B21_1 = _stringLiteral0C2FD7F14008DC5A9704A71B5926F425273F6DFC;
		G_B21_2 = L_73;
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_77)->max_length)))) == ((uint32_t)1))))
		{
			G_B22_0 = L_76;
			G_B22_1 = _stringLiteral0C2FD7F14008DC5A9704A71B5926F425273F6DFC;
			G_B22_2 = L_73;
			goto IL_01c1;
		}
	}
	{
		G_B23_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B23_1 = G_B21_0;
		G_B23_2 = G_B21_1;
		G_B23_3 = G_B21_2;
		goto IL_01c6;
	}

IL_01c1:
	{
		G_B23_0 = _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
		G_B23_1 = G_B22_0;
		G_B23_2 = G_B22_1;
		G_B23_3 = G_B22_2;
	}

IL_01c6:
	{
		String_t* L_78;
		L_78 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(G_B23_2, G_B23_1, G_B23_0, /*hidden argument*/NULL);
		NullCheck(G_B23_3);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(G_B23_3, L_78, /*hidden argument*/NULL);
		// for (int i = 0; i < joystickNames.Length; i++)
		V_8 = 0;
		goto IL_01fb;
	}

IL_01d5:
	{
		// displayTextMesh.text += $"{joystickNames[i]}\n";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_79 = __this->get_displayTextMesh_4();
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_80 = L_79;
		NullCheck(L_80);
		String_t* L_81;
		L_81 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_80, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_82 = V_7;
		int32_t L_83 = V_8;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		String_t* L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		String_t* L_86;
		L_86 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_81, L_85, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
		NullCheck(L_80);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_80, L_86, /*hidden argument*/NULL);
		// for (int i = 0; i < joystickNames.Length; i++)
		int32_t L_87 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_87, (int32_t)1));
	}

IL_01fb:
	{
		// for (int i = 0; i < joystickNames.Length; i++)
		int32_t L_88 = V_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_89 = V_7;
		NullCheck(L_89);
		if ((((int32_t)L_88) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_89)->max_length))))))
		{
			goto IL_01d5;
		}
	}

IL_0203:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.DisplayInputResult::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayInputResult__ctor_mB35B50B339E3B1D25C49572BEF305D986208C401 (DisplayInputResult_t5D17A34DFB921AB7CF633C418FCEF88FCE9A74D8 * __this, const RuntimeMethod* method)
{
	{
		// private int axisNumber = 1;
		__this->set_axisNumber_6(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListInputFeatureUsages_Update_m04FD126312B69B9340EDF6A54022A46A7779868C (ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mEB4311C4CA17AFD04A0422C729036CC177D411EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Union_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mA505D15244DE52B42806B481557FD68E4B336915_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCD2C1136622529F7FA6ABA47BB92A436E1E896B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA882A1C259A1174649DF9F78391F8036732949C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC62382A263C7901E5A2D8803FAA3FFCAE647167D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m3224EB1D4E32C005C8E8297F9073CF18D0AAA503_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0057B1EB25983324532DE3CEEC15A00D70C1F84C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisInputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_m1EB45E5A16AC9589A67727C4F7142C74AC47F929_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m45199BA5F7BABCBC2396E8F0965F6A6DA98B01DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m9A60AAC05667D8F72D2C42D7E92D36E8C7E4392B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAC9F189E795007FD143A00EF2127C577E989385C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m09A15C6CD210A2D644F198FBFB9C6FE7CDD556C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputFeatureUsage_As_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mA4A998135A26EC8B53C9032C86BA0E6636C4BF47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8EA5FE053103580F94C96B5BF0E4E2D6D5F2D0A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mFA4CE48B4A8D1A96EA78E971806AEB85765756BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m03D5002EEF486752D611BDEC48797AD6CAD4C857_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mA585F51E47A6E1ED4001A1326709C0B22F538BE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m90D8F603736F875CF7DCC31B680DA5C63CA0CBA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA604168AB048809605F0545853F2D2C30960F1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * V_5 = NULL;
	InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * V_8 = NULL;
	Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36  V_9;
	memset((&V_9), 0, sizeof(V_9));
	InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_11 = NULL;
	float V_12 = 0.0f;
	bool V_13 = false;
	uint32_t V_14 = 0;
	float V_15 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_16;
	memset((&V_16), 0, sizeof(V_16));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_17;
	memset((&V_17), 0, sizeof(V_17));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_18;
	memset((&V_18), 0, sizeof(V_18));
	uint32_t V_19 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject * G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B8_2 = NULL;
	RuntimeObject * G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B5_2 = NULL;
	RuntimeObject * G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B7_2 = NULL;
	RuntimeObject * G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B6_2 = NULL;
	String_t* G_B9_0 = NULL;
	RuntimeObject * G_B9_1 = NULL;
	String_t* G_B9_2 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B9_3 = NULL;
	{
		// if (listInputDevicesTextMesh == null || gridObjectCollection == null || displayFeatureUsagesPrefab == null)
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_0 = __this->get_listInputDevicesTextMesh_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB * L_2 = __this->get_gridObjectCollection_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_displayFeatureUsagesPrefab_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Left, leftInputDevices);
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_6 = __this->get_leftInputDevices_7();
		InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC(((int32_t)256), L_6, /*hidden argument*/NULL);
		// InputDevices.GetDevicesWithCharacteristics(InputDeviceCharacteristics.Right, rightInputDevices);
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_7 = __this->get_rightInputDevices_8();
		InputDevices_GetDevicesWithCharacteristics_m8AED20982C7D099E74435E41F8705FAE70ADBDEC(((int32_t)512), L_7, /*hidden argument*/NULL);
		// List<InputDevice> inputDevices = leftInputDevices.Union(rightInputDevices).ToList();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_8 = __this->get_leftInputDevices_7();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_9 = __this->get_rightInputDevices_8();
		RuntimeObject* L_10;
		L_10 = Enumerable_Union_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mA505D15244DE52B42806B481557FD68E4B336915(L_8, L_9, /*hidden argument*/Enumerable_Union_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mA505D15244DE52B42806B481557FD68E4B336915_RuntimeMethod_var);
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_11;
		L_11 = Enumerable_ToList_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mEB4311C4CA17AFD04A0422C729036CC177D411EB(L_10, /*hidden argument*/Enumerable_ToList_TisInputDevice_t69B790C68145C769BA3819DE33AA94155C77207E_mEB4311C4CA17AFD04A0422C729036CC177D411EB_RuntimeMethod_var);
		V_0 = L_11;
		// int sourceCount = inputDevices.Count;
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_inline(L_12, /*hidden argument*/List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_RuntimeMethod_var);
		V_1 = L_13;
		// listInputDevicesTextMesh.text = $"Detected {sourceCount} input source{(sourceCount > 1 ? "s:" : sourceCount != 0 ? ":" : "s")}\n";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_14 = __this->get_listInputDevicesTextMesh_4();
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		int32_t L_18 = V_1;
		G_B5_0 = L_17;
		G_B5_1 = _stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C;
		G_B5_2 = L_14;
		if ((((int32_t)L_18) > ((int32_t)1)))
		{
			G_B8_0 = L_17;
			G_B8_1 = _stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C;
			G_B8_2 = L_14;
			goto IL_008f;
		}
	}
	{
		int32_t L_19 = V_1;
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		if (L_19)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			goto IL_0088;
		}
	}
	{
		G_B9_0 = _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
		G_B9_1 = G_B6_0;
		G_B9_2 = G_B6_1;
		G_B9_3 = G_B6_2;
		goto IL_0094;
	}

IL_0088:
	{
		G_B9_0 = _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		G_B9_3 = G_B7_2;
		goto IL_0094;
	}

IL_008f:
	{
		G_B9_0 = _stringLiteralCA604168AB048809605F0545853F2D2C30960F1F;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		G_B9_3 = G_B8_2;
	}

IL_0094:
	{
		String_t* L_20;
		L_20 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(G_B9_2, G_B9_1, G_B9_0, /*hidden argument*/NULL);
		NullCheck(G_B9_3);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(G_B9_3, L_20, /*hidden argument*/NULL);
		// bool collectionNeedsUpdating = false;
		V_2 = (bool)0;
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * L_21 = __this->get_displayFeatureUsagesTextMeshes_10();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m03D5002EEF486752D611BDEC48797AD6CAD4C857_inline(L_21, /*hidden argument*/List_1_get_Count_m03D5002EEF486752D611BDEC48797AD6CAD4C857_RuntimeMethod_var);
		V_3 = L_22;
		goto IL_00da;
	}

IL_00ae:
	{
		// displayFeatureUsagesTextMeshes.Add(Instantiate(displayFeatureUsagesPrefab, gameObject.transform).GetComponentInChildren<TextMesh>());
		List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * L_23 = __this->get_displayFeatureUsagesTextMeshes_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_displayFeatureUsagesPrefab_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_24, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		NullCheck(L_27);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_28;
		L_28 = GameObject_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m3224EB1D4E32C005C8E8297F9073CF18D0AAA503(L_27, /*hidden argument*/GameObject_GetComponentInChildren_TisTextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273_m3224EB1D4E32C005C8E8297F9073CF18D0AAA503_RuntimeMethod_var);
		NullCheck(L_23);
		List_1_Add_m8EA5FE053103580F94C96B5BF0E4E2D6D5F2D0A2(L_23, L_28, /*hidden argument*/List_1_Add_m8EA5FE053103580F94C96B5BF0E4E2D6D5F2D0A2_RuntimeMethod_var);
		// collectionNeedsUpdating = true;
		V_2 = (bool)1;
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		int32_t L_29 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
	}

IL_00da:
	{
		// for (int i = displayFeatureUsagesTextMeshes.Count; i < sourceCount; i++)
		int32_t L_30 = V_3;
		int32_t L_31 = V_1;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_00ae;
		}
	}
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		V_4 = 0;
		goto IL_0521;
	}

IL_00e6:
	{
		// TextMesh textMesh = displayFeatureUsagesTextMeshes[i];
		List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * L_32 = __this->get_displayFeatureUsagesTextMeshes_10();
		int32_t L_33 = V_4;
		NullCheck(L_32);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_34;
		L_34 = List_1_get_Item_m90D8F603736F875CF7DCC31B680DA5C63CA0CBA8_inline(L_32, L_33, /*hidden argument*/List_1_get_Item_m90D8F603736F875CF7DCC31B680DA5C63CA0CBA8_RuntimeMethod_var);
		V_5 = L_34;
		// if (textMesh == null)
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_35 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_35, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_051b;
		}
	}
	{
		// if (i >= sourceCount)
		int32_t L_37 = V_4;
		int32_t L_38 = V_1;
		if ((((int32_t)L_37) < ((int32_t)L_38)))
		{
			goto IL_0140;
		}
	}
	{
		// if (textMesh.transform.parent.gameObject.activeSelf)
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_39 = V_5;
		NullCheck(L_39);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_40;
		L_40 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_40, /*hidden argument*/NULL);
		NullCheck(L_41);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		bool L_43;
		L_43 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_051b;
		}
	}
	{
		// textMesh.transform.parent.gameObject.SetActive(false);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_44 = V_5;
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_45, /*hidden argument*/NULL);
		NullCheck(L_46);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47;
		L_47 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_46, /*hidden argument*/NULL);
		NullCheck(L_47);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_47, (bool)0, /*hidden argument*/NULL);
		// collectionNeedsUpdating = true;
		V_2 = (bool)1;
		// continue;
		goto IL_051b;
	}

IL_0140:
	{
		// if (!textMesh.transform.parent.gameObject.activeSelf)
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_48 = V_5;
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_48, /*hidden argument*/NULL);
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51;
		L_51 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_50, /*hidden argument*/NULL);
		NullCheck(L_51);
		bool L_52;
		L_52 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_51, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_0171;
		}
	}
	{
		// textMesh.transform.parent.gameObject.SetActive(true);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_53 = V_5;
		NullCheck(L_53);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_53, /*hidden argument*/NULL);
		NullCheck(L_54);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_54, /*hidden argument*/NULL);
		NullCheck(L_55);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56;
		L_56 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_55, /*hidden argument*/NULL);
		NullCheck(L_56);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_56, (bool)1, /*hidden argument*/NULL);
		// collectionNeedsUpdating = true;
		V_2 = (bool)1;
	}

IL_0171:
	{
		// InputDevice inputDevice = inputDevices[i];
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_57 = V_0;
		int32_t L_58 = V_4;
		NullCheck(L_57);
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_59;
		L_59 = List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_inline(L_57, L_58, /*hidden argument*/List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_RuntimeMethod_var);
		V_6 = L_59;
		// bool displayNeedsResizing = !textMesh.text.StartsWith(inputDevice.name);
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_60 = V_5;
		NullCheck(L_60);
		String_t* L_61;
		L_61 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_60, /*hidden argument*/NULL);
		String_t* L_62;
		L_62 = InputDevice_get_name_m5FA211BC67629D36A37753E4D2E524586B66CA89((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_61);
		bool L_63;
		L_63 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_61, L_62, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_63) == ((int32_t)0))? 1 : 0);
		// listInputDevicesTextMesh.text += $"{inputDevice.name} | {inputDevice.manufacturer}\n";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_64 = __this->get_listInputDevicesTextMesh_4();
		V_8 = L_64;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_65 = V_8;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_66 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_66;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_68 = V_8;
		NullCheck(L_68);
		String_t* L_69;
		L_69 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_68, /*hidden argument*/NULL);
		NullCheck(L_67);
		ArrayElementTypeCheck (L_67, L_69);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_69);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_70 = L_67;
		String_t* L_71;
		L_71 = InputDevice_get_name_m5FA211BC67629D36A37753E4D2E524586B66CA89((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_70);
		ArrayElementTypeCheck (L_70, L_71);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_71);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72 = L_70;
		NullCheck(L_72);
		ArrayElementTypeCheck (L_72, _stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralBD2155E54D0A0EF69D6B035ACE4FB0D1E5C8A136);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_73 = L_72;
		String_t* L_74;
		L_74 = InputDevice_get_manufacturer_m9DA87EC52EA101D8C3141B0356D8701A6AE59590((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_73);
		ArrayElementTypeCheck (L_73, L_74);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_74);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_75 = L_73;
		NullCheck(L_75);
		ArrayElementTypeCheck (L_75, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		String_t* L_76;
		L_76 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_75, /*hidden argument*/NULL);
		NullCheck(L_65);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_65, L_76, /*hidden argument*/NULL);
		// textMesh.text = $"{inputDevice.name}\n\n";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_77 = V_5;
		String_t* L_78;
		L_78 = InputDevice_get_name_m5FA211BC67629D36A37753E4D2E524586B66CA89((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), /*hidden argument*/NULL);
		String_t* L_79;
		L_79 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_78, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, /*hidden argument*/NULL);
		NullCheck(L_77);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_77, L_79, /*hidden argument*/NULL);
		// if (inputDevice.TryGetFeatureUsages(featureUsages))
		List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * L_80 = __this->get_featureUsages_9();
		bool L_81;
		L_81 = InputDevice_TryGetFeatureUsages_mAFFD78196DA1E75A265B427D9C70212382A3A465((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), L_80, /*hidden argument*/NULL);
		if (!L_81)
		{
			goto IL_051b;
		}
	}
	{
		// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
		List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * L_82 = __this->get_featureUsages_9();
		NullCheck(L_82);
		Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36  L_83;
		L_83 = List_1_GetEnumerator_mFA4CE48B4A8D1A96EA78E971806AEB85765756BD(L_82, /*hidden argument*/List_1_GetEnumerator_mFA4CE48B4A8D1A96EA78E971806AEB85765756BD_RuntimeMethod_var);
		V_9 = L_83;
	}

IL_0212:
	try
	{ // begin try (depth: 1)
		{
			goto IL_04ff;
		}

IL_0217:
		{
			// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
			InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  L_84;
			L_84 = Enumerator_get_Current_mC62382A263C7901E5A2D8803FAA3FFCAE647167D_inline((Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 *)(&V_9), /*hidden argument*/Enumerator_get_Current_mC62382A263C7901E5A2D8803FAA3FFCAE647167D_RuntimeMethod_var);
			V_10 = L_84;
			// if (displayNeedsResizing)
			bool L_85 = V_7;
			if (!L_85)
			{
				goto IL_0285;
			}
		}

IL_0224:
		{
			// Transform backingPanel = textMesh.gameObject.transform.parent.GetChild(0);
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_86 = V_5;
			NullCheck(L_86);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87;
			L_87 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_86, /*hidden argument*/NULL);
			NullCheck(L_87);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_88;
			L_88 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_87, /*hidden argument*/NULL);
			NullCheck(L_88);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
			L_89 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_88, /*hidden argument*/NULL);
			NullCheck(L_89);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_90;
			L_90 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_89, 0, /*hidden argument*/NULL);
			V_11 = L_90;
			// float backingPanelHeight = BackingPanelMargin + (BackingPanelEntryHeight * (featureUsages.Count + 2)) + BackingPanelMargin;
			List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * L_91 = __this->get_featureUsages_9();
			NullCheck(L_91);
			int32_t L_92;
			L_92 = List_1_get_Count_mA585F51E47A6E1ED4001A1326709C0B22F538BE4_inline(L_91, /*hidden argument*/List_1_get_Count_mA585F51E47A6E1ED4001A1326709C0B22F538BE4_RuntimeMethod_var);
			V_12 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0500000007f), (float)((float)il2cpp_codegen_multiply((float)(0.0299999993f), (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_92, (int32_t)2)))))))), (float)(0.0500000007f)));
			// backingPanel.localScale = new Vector3(backingPanel.localScale.x, backingPanelHeight, backingPanel.localScale.z);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_93 = V_11;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_94 = V_11;
			NullCheck(L_94);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95;
			L_95 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_94, /*hidden argument*/NULL);
			float L_96 = L_95.get_x_2();
			float L_97 = V_12;
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_98 = V_11;
			NullCheck(L_98);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
			L_99 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_98, /*hidden argument*/NULL);
			float L_100 = L_99.get_z_4();
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_101;
			memset((&L_101), 0, sizeof(L_101));
			Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_101), L_96, L_97, L_100, /*hidden argument*/NULL);
			NullCheck(L_93);
			Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_93, L_101, /*hidden argument*/NULL);
		}

IL_0285:
		{
			// textMesh.text += $"{inputFeatureUsage.name}";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_102 = V_5;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_103 = L_102;
			NullCheck(L_103);
			String_t* L_104;
			L_104 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_103, /*hidden argument*/NULL);
			String_t* L_105;
			L_105 = InputFeatureUsage_get_name_m08FB0101027B503D080EE38F4273BB61C59E3988((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/NULL);
			String_t* L_106;
			L_106 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_104, L_105, /*hidden argument*/NULL);
			NullCheck(L_103);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_103, L_106, /*hidden argument*/NULL);
			// if (inputFeatureUsage.type.Equals(typeof(bool)))
			Type_t * L_107;
			L_107 = InputFeatureUsage_get_type_m5F338C5941174F8FCB6B9A494C0F109D2EB8D957((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_108 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_109;
			L_109 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_108, /*hidden argument*/NULL);
			NullCheck(L_107);
			bool L_110;
			L_110 = VirtFuncInvoker1< bool, Type_t * >::Invoke(115 /* System.Boolean System.Type::Equals(System.Type) */, L_107, L_109);
			if (!L_110)
			{
				goto IL_02f3;
			}
		}

IL_02b6:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<bool>(), out bool data))
			InputFeatureUsage_1_t28793BE3C4ACB9F1B34C0C392EAAFB16A5FA8E40  L_111;
			L_111 = InputFeatureUsage_As_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0057B1EB25983324532DE3CEEC15A00D70C1F84C((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m0057B1EB25983324532DE3CEEC15A00D70C1F84C_RuntimeMethod_var);
			bool L_112;
			L_112 = InputDevice_TryGetFeatureValue_mF70AB4F4BC703E9242A757D0A6D84A4DA48BBBBE((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), L_111, (bool*)(&V_13), /*hidden argument*/NULL);
			if (!L_112)
			{
				goto IL_04ff;
			}
		}

IL_02cb:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_113 = V_5;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_114 = L_113;
			NullCheck(L_114);
			String_t* L_115;
			L_115 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_114, /*hidden argument*/NULL);
			bool L_116 = V_13;
			bool L_117 = L_116;
			RuntimeObject * L_118 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_117);
			String_t* L_119;
			L_119 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_118, /*hidden argument*/NULL);
			String_t* L_120;
			L_120 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_115, L_119, /*hidden argument*/NULL);
			NullCheck(L_114);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_114, L_120, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_02f3:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(uint)))
			Type_t * L_121;
			L_121 = InputFeatureUsage_get_type_m5F338C5941174F8FCB6B9A494C0F109D2EB8D957((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_122 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_123;
			L_123 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_122, /*hidden argument*/NULL);
			NullCheck(L_121);
			bool L_124;
			L_124 = VirtFuncInvoker1< bool, Type_t * >::Invoke(115 /* System.Boolean System.Type::Equals(System.Type) */, L_121, L_123);
			if (!L_124)
			{
				goto IL_0348;
			}
		}

IL_030b:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<uint>(), out uint data))
			InputFeatureUsage_1_tD6146B581B25DEF11C50FB255ECE1F1F76067F23  L_125;
			L_125 = InputFeatureUsage_As_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAC9F189E795007FD143A00EF2127C577E989385C((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mAC9F189E795007FD143A00EF2127C577E989385C_RuntimeMethod_var);
			bool L_126;
			L_126 = InputDevice_TryGetFeatureValue_mD813F6D528B7C8574AC1DF351C99A60FCCB89576((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), L_125, (uint32_t*)(&V_14), /*hidden argument*/NULL);
			if (!L_126)
			{
				goto IL_04ff;
			}
		}

IL_0320:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_127 = V_5;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_128 = L_127;
			NullCheck(L_128);
			String_t* L_129;
			L_129 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_128, /*hidden argument*/NULL);
			uint32_t L_130 = V_14;
			uint32_t L_131 = L_130;
			RuntimeObject * L_132 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_131);
			String_t* L_133;
			L_133 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_132, /*hidden argument*/NULL);
			String_t* L_134;
			L_134 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_129, L_133, /*hidden argument*/NULL);
			NullCheck(L_128);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_128, L_134, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_0348:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(float)))
			Type_t * L_135;
			L_135 = InputFeatureUsage_get_type_m5F338C5941174F8FCB6B9A494C0F109D2EB8D957((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_136 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_137;
			L_137 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_136, /*hidden argument*/NULL);
			NullCheck(L_135);
			bool L_138;
			L_138 = VirtFuncInvoker1< bool, Type_t * >::Invoke(115 /* System.Boolean System.Type::Equals(System.Type) */, L_135, L_137);
			if (!L_138)
			{
				goto IL_039d;
			}
		}

IL_0360:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<float>(), out float data))
			InputFeatureUsage_1_t9525982C3C73085CB36503407750B9DE0E598BE1  L_139;
			L_139 = InputFeatureUsage_As_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m9A60AAC05667D8F72D2C42D7E92D36E8C7E4392B((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m9A60AAC05667D8F72D2C42D7E92D36E8C7E4392B_RuntimeMethod_var);
			bool L_140;
			L_140 = InputDevice_TryGetFeatureValue_m531D0670B4FBDA6CD5B8E899627B70F3DB840E69((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), L_139, (float*)(&V_15), /*hidden argument*/NULL);
			if (!L_140)
			{
				goto IL_04ff;
			}
		}

IL_0375:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_141 = V_5;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_142 = L_141;
			NullCheck(L_142);
			String_t* L_143;
			L_143 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_142, /*hidden argument*/NULL);
			float L_144 = V_15;
			float L_145 = L_144;
			RuntimeObject * L_146 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_145);
			String_t* L_147;
			L_147 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_146, /*hidden argument*/NULL);
			String_t* L_148;
			L_148 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_143, L_147, /*hidden argument*/NULL);
			NullCheck(L_142);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_142, L_148, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_039d:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(Vector2)))
			Type_t * L_149;
			L_149 = InputFeatureUsage_get_type_m5F338C5941174F8FCB6B9A494C0F109D2EB8D957((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_150 = { reinterpret_cast<intptr_t> (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_151;
			L_151 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_150, /*hidden argument*/NULL);
			NullCheck(L_149);
			bool L_152;
			L_152 = VirtFuncInvoker1< bool, Type_t * >::Invoke(115 /* System.Boolean System.Type::Equals(System.Type) */, L_149, L_151);
			if (!L_152)
			{
				goto IL_03f2;
			}
		}

IL_03b5:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Vector2>(), out Vector2 data))
			InputFeatureUsage_1_t8BAF53459FF79264F0E3F7F9716191756AFAC625  L_153;
			L_153 = InputFeatureUsage_As_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m09A15C6CD210A2D644F198FBFB9C6FE7CDD556C4((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m09A15C6CD210A2D644F198FBFB9C6FE7CDD556C4_RuntimeMethod_var);
			bool L_154;
			L_154 = InputDevice_TryGetFeatureValue_m18C3DB44FFE8E7ACFF29F2F83E54A2F057AFF1C5((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), L_153, (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_16), /*hidden argument*/NULL);
			if (!L_154)
			{
				goto IL_04ff;
			}
		}

IL_03ca:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_155 = V_5;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_156 = L_155;
			NullCheck(L_156);
			String_t* L_157;
			L_157 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_156, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_158 = V_16;
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_159 = L_158;
			RuntimeObject * L_160 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_159);
			String_t* L_161;
			L_161 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_160, /*hidden argument*/NULL);
			String_t* L_162;
			L_162 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_157, L_161, /*hidden argument*/NULL);
			NullCheck(L_156);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_156, L_162, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_03f2:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(Vector3)))
			Type_t * L_163;
			L_163 = InputFeatureUsage_get_type_m5F338C5941174F8FCB6B9A494C0F109D2EB8D957((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_164 = { reinterpret_cast<intptr_t> (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_165;
			L_165 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_164, /*hidden argument*/NULL);
			NullCheck(L_163);
			bool L_166;
			L_166 = VirtFuncInvoker1< bool, Type_t * >::Invoke(115 /* System.Boolean System.Type::Equals(System.Type) */, L_163, L_165);
			if (!L_166)
			{
				goto IL_0447;
			}
		}

IL_040a:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Vector3>(), out Vector3 data))
			InputFeatureUsage_1_t2E7E3FD2C721D53BE7A1B809921F9476185C8709  L_167;
			L_167 = InputFeatureUsage_As_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mA4A998135A26EC8B53C9032C86BA0E6636C4BF47((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mA4A998135A26EC8B53C9032C86BA0E6636C4BF47_RuntimeMethod_var);
			bool L_168;
			L_168 = InputDevice_TryGetFeatureValue_m9B40B8FAD5FED79E840DA7064A7A48FD9AA61C1A((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), L_167, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_17), /*hidden argument*/NULL);
			if (!L_168)
			{
				goto IL_04ff;
			}
		}

IL_041f:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_169 = V_5;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_170 = L_169;
			NullCheck(L_170);
			String_t* L_171;
			L_171 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_170, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_172 = V_17;
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_173 = L_172;
			RuntimeObject * L_174 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_173);
			String_t* L_175;
			L_175 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_174, /*hidden argument*/NULL);
			String_t* L_176;
			L_176 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_171, L_175, /*hidden argument*/NULL);
			NullCheck(L_170);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_170, L_176, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_0447:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(Quaternion)))
			Type_t * L_177;
			L_177 = InputFeatureUsage_get_type_m5F338C5941174F8FCB6B9A494C0F109D2EB8D957((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_178 = { reinterpret_cast<intptr_t> (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_179;
			L_179 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_178, /*hidden argument*/NULL);
			NullCheck(L_177);
			bool L_180;
			L_180 = VirtFuncInvoker1< bool, Type_t * >::Invoke(115 /* System.Boolean System.Type::Equals(System.Type) */, L_177, L_179);
			if (!L_180)
			{
				goto IL_0499;
			}
		}

IL_045f:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<Quaternion>(), out Quaternion data))
			InputFeatureUsage_1_t152DE78832E6E5157647309AA0BF7CFC75F44A49  L_181;
			L_181 = InputFeatureUsage_As_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m45199BA5F7BABCBC2396E8F0965F6A6DA98B01DC((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisQuaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_m45199BA5F7BABCBC2396E8F0965F6A6DA98B01DC_RuntimeMethod_var);
			bool L_182;
			L_182 = InputDevice_TryGetFeatureValue_mD5DCBE5046B0EAF63A26EB4DF5AE46030C18F7A0((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), L_181, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 *)(&V_18), /*hidden argument*/NULL);
			if (!L_182)
			{
				goto IL_04ff;
			}
		}

IL_0474:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_183 = V_5;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_184 = L_183;
			NullCheck(L_184);
			String_t* L_185;
			L_185 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_184, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_186 = V_18;
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_187 = L_186;
			RuntimeObject * L_188 = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &L_187);
			String_t* L_189;
			L_189 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_188, /*hidden argument*/NULL);
			String_t* L_190;
			L_190 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_185, L_189, /*hidden argument*/NULL);
			NullCheck(L_184);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_184, L_190, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_0499:
		{
			// else if (inputFeatureUsage.type.Equals(typeof(InputTrackingState)))
			Type_t * L_191;
			L_191 = InputFeatureUsage_get_type_m5F338C5941174F8FCB6B9A494C0F109D2EB8D957((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/NULL);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_192 = { reinterpret_cast<intptr_t> (InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_193;
			L_193 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_192, /*hidden argument*/NULL);
			NullCheck(L_191);
			bool L_194;
			L_194 = VirtFuncInvoker1< bool, Type_t * >::Invoke(115 /* System.Boolean System.Type::Equals(System.Type) */, L_191, L_193);
			if (!L_194)
			{
				goto IL_04e8;
			}
		}

IL_04b1:
		{
			// if (inputDevice.TryGetFeatureValue(inputFeatureUsage.As<InputTrackingState>(), out InputTrackingState data))
			InputFeatureUsage_1_t6C373EE0FA4FD8646D31410FB0FD222C5C1E9E65  L_195;
			L_195 = InputFeatureUsage_As_TisInputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_m1EB45E5A16AC9589A67727C4F7142C74AC47F929((InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE *)(&V_10), /*hidden argument*/InputFeatureUsage_As_TisInputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_m1EB45E5A16AC9589A67727C4F7142C74AC47F929_RuntimeMethod_var);
			bool L_196;
			L_196 = InputDevice_TryGetFeatureValue_m64CA9CE33B12A117D903F11373D5A4B3BC479497((InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E *)(&V_6), L_195, (uint32_t*)(&V_19), /*hidden argument*/NULL);
			if (!L_196)
			{
				goto IL_04ff;
			}
		}

IL_04c3:
		{
			// textMesh.text += $": {data}\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_197 = V_5;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_198 = L_197;
			NullCheck(L_198);
			String_t* L_199;
			L_199 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_198, /*hidden argument*/NULL);
			uint32_t L_200 = V_19;
			uint32_t L_201 = L_200;
			RuntimeObject * L_202 = Box(InputTrackingState_t787D19F40F78D57D589D01C27945FD614A426DA9_il2cpp_TypeInfo_var, &L_201);
			String_t* L_203;
			L_203 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral483E1DEC34B9D5362E7384C9F67FEBDC4970498B, L_202, /*hidden argument*/NULL);
			String_t* L_204;
			L_204 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_199, L_203, /*hidden argument*/NULL);
			NullCheck(L_198);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_198, L_204, /*hidden argument*/NULL);
			// }
			goto IL_04ff;
		}

IL_04e8:
		{
			// textMesh.text += $"\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_205 = V_5;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_206 = L_205;
			NullCheck(L_206);
			String_t* L_207;
			L_207 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_206, /*hidden argument*/NULL);
			String_t* L_208;
			L_208 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_207, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
			NullCheck(L_206);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_206, L_208, /*hidden argument*/NULL);
		}

IL_04ff:
		{
			// foreach (InputFeatureUsage inputFeatureUsage in featureUsages)
			bool L_209;
			L_209 = Enumerator_MoveNext_mA882A1C259A1174649DF9F78391F8036732949C5((Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 *)(&V_9), /*hidden argument*/Enumerator_MoveNext_mA882A1C259A1174649DF9F78391F8036732949C5_RuntimeMethod_var);
			if (L_209)
			{
				goto IL_0217;
			}
		}

IL_050b:
		{
			IL2CPP_LEAVE(0x51B, FINALLY_050d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_050d;
	}

FINALLY_050d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCD2C1136622529F7FA6ABA47BB92A436E1E896B1((Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 *)(&V_9), /*hidden argument*/Enumerator_Dispose_mCD2C1136622529F7FA6ABA47BB92A436E1E896B1_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1293)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1293)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x51B, IL_051b)
	}

IL_051b:
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		int32_t L_210 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_210, (int32_t)1));
	}

IL_0521:
	{
		// for (int i = 0; i < displayFeatureUsagesTextMeshes.Count; i++)
		int32_t L_211 = V_4;
		List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * L_212 = __this->get_displayFeatureUsagesTextMeshes_10();
		NullCheck(L_212);
		int32_t L_213;
		L_213 = List_1_get_Count_m03D5002EEF486752D611BDEC48797AD6CAD4C857_inline(L_212, /*hidden argument*/List_1_get_Count_m03D5002EEF486752D611BDEC48797AD6CAD4C857_RuntimeMethod_var);
		if ((((int32_t)L_211) < ((int32_t)L_213)))
		{
			goto IL_00e6;
		}
	}
	{
		// if (collectionNeedsUpdating)
		bool L_214 = V_2;
		if (!L_214)
		{
			goto IL_0541;
		}
	}
	{
		// gridObjectCollection.UpdateCollection();
		GridObjectCollection_tABCA17AA6E1071CA1BC40572C8B5C679EA7F11EB * L_215 = __this->get_gridObjectCollection_5();
		NullCheck(L_215);
		VirtActionInvoker0::Invoke(4 /* System.Void Microsoft.MixedReality.Toolkit.Utilities.BaseObjectCollection::UpdateCollection() */, L_215);
	}

IL_0541:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.ListInputFeatureUsages::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListInputFeatureUsages__ctor_mF8DB2DC534B8FA04BECFE418E7FDD25F440018F9 (ListInputFeatureUsages_t44918A7A7729D644E17A849D0E852AC38A5D7A16 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mAF159C4AA007279753F8C92A49FFE87BD5FA4B64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mB0147DAC8F87F25B260B66D4E1DF950682CADC3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<InputDevice> leftInputDevices = new List<InputDevice>();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_0 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_0, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		__this->set_leftInputDevices_7(L_0);
		// private readonly List<InputDevice> rightInputDevices = new List<InputDevice>();
		List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * L_1 = (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F *)il2cpp_codegen_object_new(List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F_il2cpp_TypeInfo_var);
		List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1(L_1, /*hidden argument*/List_1__ctor_m301E51804C88F4CDA1665B126A03BC15123C2BB1_RuntimeMethod_var);
		__this->set_rightInputDevices_8(L_1);
		// private readonly List<InputFeatureUsage> featureUsages = new List<InputFeatureUsage>();
		List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * L_2 = (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E *)il2cpp_codegen_object_new(List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E_il2cpp_TypeInfo_var);
		List_1__ctor_mB0147DAC8F87F25B260B66D4E1DF950682CADC3B(L_2, /*hidden argument*/List_1__ctor_mB0147DAC8F87F25B260B66D4E1DF950682CADC3B_RuntimeMethod_var);
		__this->set_featureUsages_9(L_2);
		// private readonly List<TextMesh> displayFeatureUsagesTextMeshes = new List<TextMesh>();
		List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B * L_3 = (List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B *)il2cpp_codegen_object_new(List_1_t77523477B9FD4933414D704A7DE9DDC1F26BCB5B_il2cpp_TypeInfo_var);
		List_1__ctor_mAF159C4AA007279753F8C92A49FFE87BD5FA4B64(L_3, /*hidden argument*/List_1__ctor_mAF159C4AA007279753F8C92A49FFE87BD5FA4B64_RuntimeMethod_var);
		__this->set_displayFeatureUsagesTextMeshes_10(L_3);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionTool_Update_mBFF6F6AFFCAF7F597A204E0A7FE99C3698BF7104 (MixedRealityInteractionTool_t6E6BE5BDFE405B0580CA8F3DE9815036ACC0217A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m31B9432FECA7E89F7AFAC194FD9047E14F52391E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mB2FFC8EB6CE8FB2BBEC4D0726795B7D55F22FA3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4C0BE8F4A9713388D992B88D757A8B49E0C507AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_GetEnumerator_m710200AD633A6C20057231B427EE8E8BFE784ED6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_get_Count_m542D32EED9DC8F251671E283582DECA135D27A9E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityController_t9DF42B7F8473A665550A9D9312A6447A84D45032_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityEventSource_t3250B9027B20553276A9D1B595BE781E866FF6A6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA604168AB048809605F0545853F2D2C30960F1F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * V_0 = NULL;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject* V_3 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * V_4 = NULL;
	MixedRealityInteractionMappingU5BU5D_t9715CAE845E6E41571A3A49DADF0942255BB01F9* V_5 = NULL;
	int32_t V_6 = 0;
	MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * V_7 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * V_8 = NULL;
	MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  V_9;
	memset((&V_9), 0, sizeof(V_9));
	int32_t V_10 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	RuntimeObject* G_B6_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B9_1 = NULL;
	String_t* G_B8_0 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B8_1 = NULL;
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	String_t* G_B10_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B10_2 = NULL;
	RuntimeObject * G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B12_2 = NULL;
	RuntimeObject * G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B11_2 = NULL;
	RuntimeObject * G_B18_0 = NULL;
	String_t* G_B18_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B18_2 = NULL;
	RuntimeObject * G_B14_0 = NULL;
	String_t* G_B14_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B14_2 = NULL;
	RuntimeObject * G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B13_2 = NULL;
	int32_t G_B15_0 = 0;
	RuntimeObject * G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B15_3 = NULL;
	RuntimeObject * G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B17_2 = NULL;
	RuntimeObject * G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B16_2 = NULL;
	String_t* G_B19_0 = NULL;
	RuntimeObject * G_B19_1 = NULL;
	String_t* G_B19_2 = NULL;
	TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * G_B19_3 = NULL;
	{
		// if (listControllersTextMesh == null || leftHandedControllerTextMesh == null || rightHandedControllerTextMesh == null)
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_0 = __this->get_listControllersTextMesh_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_2 = __this->get_leftHandedControllerTextMesh_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_4 = __this->get_rightHandedControllerTextMesh_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		// return;
		return;
	}

IL_002b:
	{
		// listControllersTextMesh.text = string.Empty;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_6 = __this->get_listControllersTextMesh_4();
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_6);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_6, L_7, /*hidden argument*/NULL);
		// leftHandedControllerTextMesh.text = string.Empty;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_8 = __this->get_leftHandedControllerTextMesh_5();
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_8);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_8, L_9, /*hidden argument*/NULL);
		// rightHandedControllerTextMesh.text = string.Empty;
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_10 = __this->get_rightHandedControllerTextMesh_6();
		String_t* L_11 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_10);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_10, L_11, /*hidden argument*/NULL);
		// HashSet<IMixedRealityController> controllers = CoreServices.InputSystem?.DetectedControllers;
		IL2CPP_RUNTIME_CLASS_INIT(CoreServices_t9EE794F39C54151DD16EC86D9F7B1FB2D5D2FF96_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = CoreServices_get_InputSystem_m12A0174735CF9D34E818B5B78075DFB277CDB164(/*hidden argument*/NULL);
		RuntimeObject* L_13 = L_12;
		G_B5_0 = L_13;
		if (L_13)
		{
			G_B6_0 = L_13;
			goto IL_0067;
		}
	}
	{
		G_B7_0 = ((HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 *)(NULL));
		goto IL_006c;
	}

IL_0067:
	{
		NullCheck(G_B6_0);
		HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * L_14;
		L_14 = InterfaceFuncInvoker0< HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * >::Invoke(5 /* System.Collections.Generic.HashSet`1<Microsoft.MixedReality.Toolkit.Input.IMixedRealityController> Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSystem::get_DetectedControllers() */, IMixedRealityInputSystem_t0F2E23FCBB07AD0BC4108E1F90D94B8EBB6C8892_il2cpp_TypeInfo_var, G_B6_0);
		G_B7_0 = L_14;
	}

IL_006c:
	{
		V_0 = G_B7_0;
		// listControllersTextMesh.text = $"Detected {controllers?.Count} input source{(controllers?.Count > 1 ? "s:" : controllers?.Count != 0 ? ":" : "s")}\n";
		TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_15 = __this->get_listControllersTextMesh_4();
		HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * L_16 = V_0;
		G_B8_0 = _stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C;
		G_B8_1 = L_15;
		if (L_16)
		{
			G_B9_0 = _stringLiteralBB47B58026352318D44CEC93932BDFB273FEAF1C;
			G_B9_1 = L_15;
			goto IL_0086;
		}
	}
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 ));
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_17 = V_1;
		G_B10_0 = L_17;
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		goto IL_0091;
	}

IL_0086:
	{
		HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * L_18 = V_0;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = HashSet_1_get_Count_m542D32EED9DC8F251671E283582DECA135D27A9E_inline(L_18, /*hidden argument*/HashSet_1_get_Count_m542D32EED9DC8F251671E283582DECA135D27A9E_RuntimeMethod_var);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184((&L_20), L_19, /*hidden argument*/Nullable_1__ctor_m9D7EBA0DE2F89A891507EC35157C70FC4DC81184_RuntimeMethod_var);
		G_B10_0 = L_20;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
	}

IL_0091:
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_21 = G_B10_0;
		RuntimeObject * L_22 = Box(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103_il2cpp_TypeInfo_var, &L_21);
		HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * L_23 = V_0;
		G_B11_0 = L_22;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		if (!L_23)
		{
			G_B12_0 = L_22;
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			goto IL_00a2;
		}
	}
	{
		HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = HashSet_1_get_Count_m542D32EED9DC8F251671E283582DECA135D27A9E_inline(L_24, /*hidden argument*/HashSet_1_get_Count_m542D32EED9DC8F251671E283582DECA135D27A9E_RuntimeMethod_var);
		G_B12_0 = G_B11_0;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		if ((((int32_t)L_25) > ((int32_t)1)))
		{
			G_B18_0 = G_B11_0;
			G_B18_1 = G_B11_1;
			G_B18_2 = G_B11_2;
			goto IL_00c1;
		}
	}

IL_00a2:
	{
		HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * L_26 = V_0;
		G_B13_0 = G_B12_0;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
		if (L_26)
		{
			G_B14_0 = G_B12_0;
			G_B14_1 = G_B12_1;
			G_B14_2 = G_B12_2;
			goto IL_00a8;
		}
	}
	{
		G_B15_0 = 1;
		G_B15_1 = G_B13_0;
		G_B15_2 = G_B13_1;
		G_B15_3 = G_B13_2;
		goto IL_00b1;
	}

IL_00a8:
	{
		HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = HashSet_1_get_Count_m542D32EED9DC8F251671E283582DECA135D27A9E_inline(L_27, /*hidden argument*/HashSet_1_get_Count_m542D32EED9DC8F251671E283582DECA135D27A9E_RuntimeMethod_var);
		G_B15_0 = ((!(((uint32_t)L_28) <= ((uint32_t)0)))? 1 : 0);
		G_B15_1 = G_B14_0;
		G_B15_2 = G_B14_1;
		G_B15_3 = G_B14_2;
	}

IL_00b1:
	{
		G_B16_0 = G_B15_1;
		G_B16_1 = G_B15_2;
		G_B16_2 = G_B15_3;
		if (G_B15_0)
		{
			G_B17_0 = G_B15_1;
			G_B17_1 = G_B15_2;
			G_B17_2 = G_B15_3;
			goto IL_00ba;
		}
	}
	{
		G_B19_0 = _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
		G_B19_1 = G_B16_0;
		G_B19_2 = G_B16_1;
		G_B19_3 = G_B16_2;
		goto IL_00c6;
	}

IL_00ba:
	{
		G_B19_0 = _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
		G_B19_1 = G_B17_0;
		G_B19_2 = G_B17_1;
		G_B19_3 = G_B17_2;
		goto IL_00c6;
	}

IL_00c1:
	{
		G_B19_0 = _stringLiteralCA604168AB048809605F0545853F2D2C30960F1F;
		G_B19_1 = G_B18_0;
		G_B19_2 = G_B18_1;
		G_B19_3 = G_B18_2;
	}

IL_00c6:
	{
		String_t* L_29;
		L_29 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(G_B19_2, G_B19_1, G_B19_0, /*hidden argument*/NULL);
		NullCheck(G_B19_3);
		TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(G_B19_3, L_29, /*hidden argument*/NULL);
		// if (controllers == null)
		HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * L_30 = V_0;
		if (L_30)
		{
			goto IL_00d4;
		}
	}
	{
		// return;
		return;
	}

IL_00d4:
	{
		// foreach (IMixedRealityController controller in controllers)
		HashSet_1_tFB3672FBE17476D9747AA9734DFFA7A2CA895525 * L_31 = V_0;
		NullCheck(L_31);
		Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B  L_32;
		L_32 = HashSet_1_GetEnumerator_m710200AD633A6C20057231B427EE8E8BFE784ED6(L_31, /*hidden argument*/HashSet_1_GetEnumerator_m710200AD633A6C20057231B427EE8E8BFE784ED6_RuntimeMethod_var);
		V_2 = L_32;
	}

IL_00db:
	try
	{ // begin try (depth: 1)
		{
			goto IL_03dc;
		}

IL_00e0:
		{
			// foreach (IMixedRealityController controller in controllers)
			RuntimeObject* L_33;
			L_33 = Enumerator_get_Current_m4C0BE8F4A9713388D992B88D757A8B49E0C507AB_inline((Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B *)(&V_2), /*hidden argument*/Enumerator_get_Current_m4C0BE8F4A9713388D992B88D757A8B49E0C507AB_RuntimeMethod_var);
			V_3 = L_33;
			// listControllersTextMesh.text += $"{controller.InputSource.SourceName}\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_34 = __this->get_listControllersTextMesh_4();
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_35 = L_34;
			NullCheck(L_35);
			String_t* L_36;
			L_36 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_35, /*hidden argument*/NULL);
			RuntimeObject* L_37 = V_3;
			NullCheck(L_37);
			RuntimeObject* L_38;
			L_38 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t9DF42B7F8473A665550A9D9312A6447A84D45032_il2cpp_TypeInfo_var, L_37);
			NullCheck(L_38);
			String_t* L_39;
			L_39 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_t3250B9027B20553276A9D1B595BE781E866FF6A6_il2cpp_TypeInfo_var, L_38);
			String_t* L_40;
			L_40 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_36, L_39, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
			NullCheck(L_35);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_35, L_40, /*hidden argument*/NULL);
			// if (controller.ControllerHandedness == Handedness.Left)
			RuntimeObject* L_41 = V_3;
			NullCheck(L_41);
			uint8_t L_42;
			L_42 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t9DF42B7F8473A665550A9D9312A6447A84D45032_il2cpp_TypeInfo_var, L_41);
			if ((!(((uint32_t)L_42) == ((uint32_t)1))))
			{
				goto IL_0121;
			}
		}

IL_0117:
		{
			// textMesh = leftHandedControllerTextMesh;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_43 = __this->get_leftHandedControllerTextMesh_5();
			V_4 = L_43;
			// }
			goto IL_0135;
		}

IL_0121:
		{
			// else if (controller.ControllerHandedness == Handedness.Right)
			RuntimeObject* L_44 = V_3;
			NullCheck(L_44);
			uint8_t L_45;
			L_45 = InterfaceFuncInvoker0< uint8_t >::Invoke(3 /* Microsoft.MixedReality.Toolkit.Utilities.Handedness Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_ControllerHandedness() */, IMixedRealityController_t9DF42B7F8473A665550A9D9312A6447A84D45032_il2cpp_TypeInfo_var, L_44);
			if ((!(((uint32_t)L_45) == ((uint32_t)2))))
			{
				goto IL_03dc;
			}
		}

IL_012d:
		{
			// textMesh = rightHandedControllerTextMesh;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_46 = __this->get_rightHandedControllerTextMesh_6();
			V_4 = L_46;
		}

IL_0135:
		{
			// textMesh.text = $"{controller.InputSource.SourceName}\n\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_47 = V_4;
			RuntimeObject* L_48 = V_3;
			NullCheck(L_48);
			RuntimeObject* L_49;
			L_49 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Microsoft.MixedReality.Toolkit.Input.IMixedRealityInputSource Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_InputSource() */, IMixedRealityController_t9DF42B7F8473A665550A9D9312A6447A84D45032_il2cpp_TypeInfo_var, L_48);
			NullCheck(L_49);
			String_t* L_50;
			L_50 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Microsoft.MixedReality.Toolkit.IMixedRealityEventSource::get_SourceName() */, IMixedRealityEventSource_t3250B9027B20553276A9D1B595BE781E866FF6A6_il2cpp_TypeInfo_var, L_49);
			String_t* L_51;
			L_51 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_50, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, /*hidden argument*/NULL);
			NullCheck(L_47);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_47, L_51, /*hidden argument*/NULL);
			// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
			RuntimeObject* L_52 = V_3;
			NullCheck(L_52);
			MixedRealityInteractionMappingU5BU5D_t9715CAE845E6E41571A3A49DADF0942255BB01F9* L_53;
			L_53 = InterfaceFuncInvoker0< MixedRealityInteractionMappingU5BU5D_t9715CAE845E6E41571A3A49DADF0942255BB01F9* >::Invoke(9 /* Microsoft.MixedReality.Toolkit.Input.MixedRealityInteractionMapping[] Microsoft.MixedReality.Toolkit.Input.IMixedRealityController::get_Interactions() */, IMixedRealityController_t9DF42B7F8473A665550A9D9312A6447A84D45032_il2cpp_TypeInfo_var, L_52);
			V_5 = L_53;
			V_6 = 0;
			goto IL_03d1;
		}

IL_0161:
		{
			// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
			MixedRealityInteractionMappingU5BU5D_t9715CAE845E6E41571A3A49DADF0942255BB01F9* L_54 = V_5;
			int32_t L_55 = V_6;
			NullCheck(L_54);
			int32_t L_56 = L_55;
			MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
			V_7 = L_57;
			// textMesh.text += $"{interaction.Description} [{interaction.MixedRealityInputAction.Description}]";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_58 = V_4;
			V_8 = L_58;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_59 = V_8;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_60 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_61 = L_60;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_62 = V_8;
			NullCheck(L_62);
			String_t* L_63;
			L_63 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_62, /*hidden argument*/NULL);
			NullCheck(L_61);
			ArrayElementTypeCheck (L_61, L_63);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_63);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = L_61;
			MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * L_65 = V_7;
			NullCheck(L_65);
			String_t* L_66;
			L_66 = MixedRealityInteractionMapping_get_Description_m80CFE59BDAED5F951D6CCDE3BB87709DDA2DED9B_inline(L_65, /*hidden argument*/NULL);
			NullCheck(L_64);
			ArrayElementTypeCheck (L_64, L_66);
			(L_64)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_66);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_64;
			NullCheck(L_67);
			ArrayElementTypeCheck (L_67, _stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
			(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5583A6C0598CF26694C21D7CA3666DD44488DFC5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_67;
			MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * L_69 = V_7;
			NullCheck(L_69);
			MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  L_70;
			L_70 = MixedRealityInteractionMapping_get_MixedRealityInputAction_mAFB8C9133E0E0F711E56D59F7044A252C769B4CC_inline(L_69, /*hidden argument*/NULL);
			V_9 = L_70;
			String_t* L_71;
			L_71 = MixedRealityInputAction_get_Description_m243FDCDDB92BD198D9A23C9CD1802276D434A6C3_inline((MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 *)(&V_9), /*hidden argument*/NULL);
			NullCheck(L_68);
			ArrayElementTypeCheck (L_68, L_71);
			(L_68)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_71);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72 = L_68;
			NullCheck(L_72);
			ArrayElementTypeCheck (L_72, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
			(L_72)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
			String_t* L_73;
			L_73 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_72, /*hidden argument*/NULL);
			NullCheck(L_59);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_59, L_73, /*hidden argument*/NULL);
			// switch (interaction.InputType)
			MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * L_74 = V_7;
			NullCheck(L_74);
			int32_t L_75;
			L_75 = MixedRealityInteractionMapping_get_InputType_m9625D29052F1FF3445C11AAE049104AACC242405_inline(L_74, /*hidden argument*/NULL);
			V_10 = L_75;
			int32_t L_76 = V_10;
			switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_76, (int32_t)3)))
			{
				case 0:
				{
					goto IL_02b4;
				}
				case 1:
				{
					goto IL_02e1;
				}
				case 2:
				{
					goto IL_030e;
				}
				case 3:
				{
					goto IL_0338;
				}
				case 4:
				{
					goto IL_0338;
				}
				case 5:
				{
					goto IL_0338;
				}
				case 6:
				{
					goto IL_0338;
				}
				case 7:
				{
					goto IL_0362;
				}
				case 8:
				{
					goto IL_0338;
				}
				case 9:
				{
					goto IL_0338;
				}
				case 10:
				{
					goto IL_0338;
				}
				case 11:
				{
					goto IL_02b4;
				}
				case 12:
				{
					goto IL_02e1;
				}
				case 13:
				{
					goto IL_030e;
				}
				case 14:
				{
					goto IL_038c;
				}
				case 15:
				{
					goto IL_0338;
				}
				case 16:
				{
					goto IL_0338;
				}
				case 17:
				{
					goto IL_0338;
				}
				case 18:
				{
					goto IL_038c;
				}
				case 19:
				{
					goto IL_0338;
				}
				case 20:
				{
					goto IL_0338;
				}
				case 21:
				{
					goto IL_0338;
				}
				case 22:
				{
					goto IL_0338;
				}
				case 23:
				{
					goto IL_0338;
				}
				case 24:
				{
					goto IL_0338;
				}
				case 25:
				{
					goto IL_03b4;
				}
				case 26:
				{
					goto IL_02b4;
				}
				case 27:
				{
					goto IL_03b4;
				}
				case 28:
				{
					goto IL_03b4;
				}
				case 29:
				{
					goto IL_03b4;
				}
				case 30:
				{
					goto IL_02b4;
				}
				case 31:
				{
					goto IL_03b4;
				}
				case 32:
				{
					goto IL_03b4;
				}
				case 33:
				{
					goto IL_03b4;
				}
				case 34:
				{
					goto IL_02b4;
				}
				case 35:
				{
					goto IL_03b4;
				}
				case 36:
				{
					goto IL_03b4;
				}
				case 37:
				{
					goto IL_03b4;
				}
				case 38:
				{
					goto IL_02b4;
				}
				case 39:
				{
					goto IL_03b4;
				}
				case 40:
				{
					goto IL_03b4;
				}
				case 41:
				{
					goto IL_03b4;
				}
				case 42:
				{
					goto IL_02b4;
				}
				case 43:
				{
					goto IL_03b4;
				}
				case 44:
				{
					goto IL_03b4;
				}
				case 45:
				{
					goto IL_03b4;
				}
				case 46:
				{
					goto IL_038c;
				}
				case 47:
				{
					goto IL_038c;
				}
				case 48:
				{
					goto IL_0338;
				}
				case 49:
				{
					goto IL_0338;
				}
				case 50:
				{
					goto IL_0338;
				}
				case 51:
				{
					goto IL_0338;
				}
				case 52:
				{
					goto IL_0338;
				}
				case 53:
				{
					goto IL_0338;
				}
				case 54:
				{
					goto IL_0362;
				}
				case 55:
				{
					goto IL_0338;
				}
				case 56:
				{
					goto IL_0338;
				}
				case 57:
				{
					goto IL_0338;
				}
			}
		}

IL_02af:
		{
			goto IL_03b4;
		}

IL_02b4:
		{
			// textMesh.text += $": {interaction.PoseData}";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_77 = V_4;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_78 = L_77;
			NullCheck(L_78);
			String_t* L_79;
			L_79 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_78, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * L_80 = V_7;
			NullCheck(L_80);
			MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  L_81;
			L_81 = MixedRealityInteractionMapping_get_PoseData_m1360D1110E604FC1BFAE7C662332C3A3E9203F44_inline(L_80, /*hidden argument*/NULL);
			MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  L_82 = L_81;
			RuntimeObject * L_83 = Box(MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8_il2cpp_TypeInfo_var, &L_82);
			String_t* L_84;
			L_84 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_83, /*hidden argument*/NULL);
			String_t* L_85;
			L_85 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_79, L_84, /*hidden argument*/NULL);
			NullCheck(L_78);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_78, L_85, /*hidden argument*/NULL);
			// break;
			goto IL_03b4;
		}

IL_02e1:
		{
			// textMesh.text += $": {interaction.PositionData}";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_86 = V_4;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_87 = L_86;
			NullCheck(L_87);
			String_t* L_88;
			L_88 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_87, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * L_89 = V_7;
			NullCheck(L_89);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
			L_90 = MixedRealityInteractionMapping_get_PositionData_m97BA7B2F28D2B4FEBF57F29E4B2B20853DFB66F0_inline(L_89, /*hidden argument*/NULL);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_91 = L_90;
			RuntimeObject * L_92 = Box(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var, &L_91);
			String_t* L_93;
			L_93 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_92, /*hidden argument*/NULL);
			String_t* L_94;
			L_94 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_88, L_93, /*hidden argument*/NULL);
			NullCheck(L_87);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_87, L_94, /*hidden argument*/NULL);
			// break;
			goto IL_03b4;
		}

IL_030e:
		{
			// textMesh.text += $": {interaction.RotationData}";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_95 = V_4;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_96 = L_95;
			NullCheck(L_96);
			String_t* L_97;
			L_97 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_96, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * L_98 = V_7;
			NullCheck(L_98);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_99;
			L_99 = MixedRealityInteractionMapping_get_RotationData_mBBB506F45FAC614E8EE696D894C615127D14D8CA_inline(L_98, /*hidden argument*/NULL);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_100 = L_99;
			RuntimeObject * L_101 = Box(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var, &L_100);
			String_t* L_102;
			L_102 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_101, /*hidden argument*/NULL);
			String_t* L_103;
			L_103 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_97, L_102, /*hidden argument*/NULL);
			NullCheck(L_96);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_96, L_103, /*hidden argument*/NULL);
			// break;
			goto IL_03b4;
		}

IL_0338:
		{
			// textMesh.text += $": {interaction.BoolData}";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_104 = V_4;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_105 = L_104;
			NullCheck(L_105);
			String_t* L_106;
			L_106 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_105, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * L_107 = V_7;
			NullCheck(L_107);
			bool L_108;
			L_108 = MixedRealityInteractionMapping_get_BoolData_m5E0E6BE4F86AC7CA5840A09A754267603426DFE7_inline(L_107, /*hidden argument*/NULL);
			bool L_109 = L_108;
			RuntimeObject * L_110 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_109);
			String_t* L_111;
			L_111 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_110, /*hidden argument*/NULL);
			String_t* L_112;
			L_112 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_106, L_111, /*hidden argument*/NULL);
			NullCheck(L_105);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_105, L_112, /*hidden argument*/NULL);
			// break;
			goto IL_03b4;
		}

IL_0362:
		{
			// textMesh.text += $": {interaction.FloatData}";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_113 = V_4;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_114 = L_113;
			NullCheck(L_114);
			String_t* L_115;
			L_115 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_114, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * L_116 = V_7;
			NullCheck(L_116);
			float L_117;
			L_117 = MixedRealityInteractionMapping_get_FloatData_mD599744D16B805FF7817431839A93AC5666A04AF_inline(L_116, /*hidden argument*/NULL);
			float L_118 = L_117;
			RuntimeObject * L_119 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_118);
			String_t* L_120;
			L_120 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_119, /*hidden argument*/NULL);
			String_t* L_121;
			L_121 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_115, L_120, /*hidden argument*/NULL);
			NullCheck(L_114);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_114, L_121, /*hidden argument*/NULL);
			// break;
			goto IL_03b4;
		}

IL_038c:
		{
			// textMesh.text += $": {interaction.Vector2Data}";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_122 = V_4;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_123 = L_122;
			NullCheck(L_123);
			String_t* L_124;
			L_124 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_123, /*hidden argument*/NULL);
			MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * L_125 = V_7;
			NullCheck(L_125);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_126;
			L_126 = MixedRealityInteractionMapping_get_Vector2Data_m071F56F8A2E08E877E9E9BC100787C2B7B6C2641_inline(L_125, /*hidden argument*/NULL);
			Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_127 = L_126;
			RuntimeObject * L_128 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_127);
			String_t* L_129;
			L_129 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1F613619221FE2A408DA1ED73F877E67BBD4C7A0, L_128, /*hidden argument*/NULL);
			String_t* L_130;
			L_130 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_124, L_129, /*hidden argument*/NULL);
			NullCheck(L_123);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_123, L_130, /*hidden argument*/NULL);
		}

IL_03b4:
		{
			// textMesh.text += "\n";
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_131 = V_4;
			TextMesh_t830C2452CE189A0D35CD9ED26B6B74D506B01273 * L_132 = L_131;
			NullCheck(L_132);
			String_t* L_133;
			L_133 = TextMesh_get_text_m5F0AFB132AB91B91B04386F5769F2A2F04C2A13B(L_132, /*hidden argument*/NULL);
			String_t* L_134;
			L_134 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_133, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, /*hidden argument*/NULL);
			NullCheck(L_132);
			TextMesh_set_text_m5879B13F5C9E4A1D05155839B89CCDB85BE28A04(L_132, L_134, /*hidden argument*/NULL);
			int32_t L_135 = V_6;
			V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_135, (int32_t)1));
		}

IL_03d1:
		{
			// foreach (MixedRealityInteractionMapping interaction in controller.Interactions)
			int32_t L_136 = V_6;
			MixedRealityInteractionMappingU5BU5D_t9715CAE845E6E41571A3A49DADF0942255BB01F9* L_137 = V_5;
			NullCheck(L_137);
			if ((((int32_t)L_136) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_137)->max_length))))))
			{
				goto IL_0161;
			}
		}

IL_03dc:
		{
			// foreach (IMixedRealityController controller in controllers)
			bool L_138;
			L_138 = Enumerator_MoveNext_mB2FFC8EB6CE8FB2BBEC4D0726795B7D55F22FA3A((Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mB2FFC8EB6CE8FB2BBEC4D0726795B7D55F22FA3A_RuntimeMethod_var);
			if (L_138)
			{
				goto IL_00e0;
			}
		}

IL_03e8:
		{
			IL2CPP_LEAVE(0x3F8, FINALLY_03ea);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_03ea;
	}

FINALLY_03ea:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m31B9432FECA7E89F7AFAC194FD9047E14F52391E((Enumerator_t055920E3F0CA83C7F113E0427F94F8A4D7F87A3B *)(&V_2), /*hidden argument*/Enumerator_Dispose_m31B9432FECA7E89F7AFAC194FD9047E14F52391E_RuntimeMethod_var);
		IL2CPP_END_FINALLY(1002)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1002)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3F8, IL_03f8)
	}

IL_03f8:
	{
		// }
		return;
	}
}
// System.Void Microsoft.MixedReality.Toolkit.Tools.Runtime.MixedRealityInteractionTool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MixedRealityInteractionTool__ctor_mEE016918825DA1875A2061B627C1967B740AD996 (MixedRealityInteractionTool_t6E6BE5BDFE405B0580CA8F3DE9815036ACC0217A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInteractionMapping_get_Description_m80CFE59BDAED5F951D6CCDE3BB87709DDA2DED9B_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method)
{
	{
		// public string Description => description;
		String_t* L_0 = __this->get_description_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  MixedRealityInteractionMapping_get_MixedRealityInputAction_mAFB8C9133E0E0F711E56D59F7044A252C769B4CC_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method)
{
	{
		// get { return inputAction; }
		MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58  L_0 = __this->get_inputAction_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* MixedRealityInputAction_get_Description_m243FDCDDB92BD198D9A23C9CD1802276D434A6C3_inline (MixedRealityInputAction_t0F8A0BEDD3EAB99A207D3BD83DF18AF5420F9A58 * __this, const RuntimeMethod* method)
{
	{
		// public string Description => description;
		String_t* L_0 = __this->get_description_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MixedRealityInteractionMapping_get_InputType_m9625D29052F1FF3445C11AAE049104AACC242405_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method)
{
	{
		// public DeviceInputType InputType => inputType;
		int32_t L_0 = __this->get_inputType_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  MixedRealityInteractionMapping_get_PoseData_m1360D1110E604FC1BFAE7C662332C3A3E9203F44_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method)
{
	{
		// return poseData;
		MixedRealityPose_t663547B53DB38465090DC092374B56892043B3E8  L_0 = __this->get_poseData_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  MixedRealityInteractionMapping_get_PositionData_m97BA7B2F28D2B4FEBF57F29E4B2B20853DFB66F0_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method)
{
	{
		// return positionData;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_positionData_15();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  MixedRealityInteractionMapping_get_RotationData_mBBB506F45FAC614E8EE696D894C615127D14D8CA_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method)
{
	{
		// return rotationData;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_0 = __this->get_rotationData_16();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MixedRealityInteractionMapping_get_BoolData_m5E0E6BE4F86AC7CA5840A09A754267603426DFE7_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method)
{
	{
		// return boolData;
		bool L_0 = __this->get_boolData_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MixedRealityInteractionMapping_get_FloatData_mD599744D16B805FF7817431839A93AC5666A04AF_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method)
{
	{
		// return floatData;
		float L_0 = __this->get_floatData_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  MixedRealityInteractionMapping_get_Vector2Data_m071F56F8A2E08E877E9E9BC100787C2B7B6C2641_inline (MixedRealityInteractionMapping_tA491DBA5DCA2F8CD830CD3FB4243C082CC13F57A * __this, const RuntimeMethod* method)
{
	{
		// return vector2Data;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_vector2Data_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m946FE168DA67B05C55F5B0D2654FE2B69BA3A242_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  List_1_get_Item_m69B586C86E7A415FDE5732E94E28549EAAE35DD7_gshared_inline (List_1_t476C8CC2E74FC5F7DE5B5CFE6830822665402F1F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE* L_2 = (InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((InputDeviceU5BU5D_t1D4B7FC58B0B757E4DFEC85259EF3FDE297ECACE*)L_2, (int32_t)L_3);
		return (InputDevice_t69B790C68145C769BA3819DE33AA94155C77207E )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  Enumerator_get_Current_mC62382A263C7901E5A2D8803FAA3FFCAE647167D_gshared_inline (Enumerator_tAA33D3F894D1F8A9565DC8DE9A34115723C2BD36 * __this, const RuntimeMethod* method)
{
	{
		InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE  L_0 = (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE )__this->get_current_3();
		return (InputFeatureUsage_tB971D811B38B1DA549F529BB15E60672940FB0EE )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mA585F51E47A6E1ED4001A1326709C0B22F538BE4_gshared_inline (List_1_tB4FF4F53752C11CCDC20B9E54FB3B807278F134E * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashSet_1_get_Count_m41C20B7D2DB4661F5C68E9BA25E4B83FC6914CD8_gshared_inline (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__count_9();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mC55AF9E2F45639649E40AF5919D6169FD9543E01_gshared_inline (Enumerator_t2430E2854B4328060EB6096AD1E4851E8DC45C3A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get__current_3();
		return (RuntimeObject *)L_0;
	}
}
