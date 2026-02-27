#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<GameManager/enemieslist>
struct List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// GameManager/enemieslist[]
struct enemieslistU5BU5D_tEE3C0BFFFD4F4894173543EC033DA5EE74A61479;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// BigKnight_ActionManager
struct BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36;
// BigKnight_AnimationEvents
struct BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052;
// BigKnight_AttackChecker
struct BigKnight_AttackChecker_t15F8DD234CCDF5CD957AD276209E835F42ED8FDD;
// BigKnight_Damage
struct BigKnight_Damage_t95D0F669BD9162032FB8600934F00D6E885E84A4;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Demon_ActionManager
struct Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A;
// Demon_AnimationEvents
struct Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7;
// Demon_AttackChecker
struct Demon_AttackChecker_tC82E227DF9207DBCADC1B1BC2AF394FA2D06645F;
// Demon_Damage
struct Demon_Damage_tDE239B55C4FCFECC857EC49C6B254A103883FA45;
// Enemy_AttackPower
struct Enemy_AttackPower_t85A346BFA6601EB802070F7E543AB32A30ADB33C;
// FireWizard_ActionManager
struct FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4;
// FireWizard_AnimationEvents
struct FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE;
// FireWizard_AttackChecker
struct FireWizard_AttackChecker_t0E367196FF474950A069D1C825CD53A04E5F533D;
// FireWizard_Damage
struct FireWizard_Damage_tD52DDE66EF3594FE0C79BFBDC131F5B246E8AD60;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GolemKing_ActionManager
struct GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29;
// GolemKing_AnimationEvents
struct GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79;
// GolemKing_AttackChecker
struct GolemKing_AttackChecker_tE0F5D98D1FC88290913100A5CD7D0B717F3B1C54;
// GolemKing_Damage
struct GolemKing_Damage_tE4425C2DEB82569459B27954BA0567BF78E83CE6;
// Golem_ActionManager
struct Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D;
// Golem_AnimationEvents
struct Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD;
// Golem_AttackChecker
struct Golem_AttackChecker_tAA8D556A8DCB8E437965CE1DD478B9B2ABDC9FC2;
// Golem_Damage
struct Golem_Damage_t0438D81D8BC7FEB989A76C10AF77767FD0D8F4FA;
// HeavyLizard_ActionManager
struct HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5;
// HeavyLizard_AnimationEvents
struct HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76;
// HeavyLizard_AttackChecker
struct HeavyLizard_AttackChecker_t20DF6C063552C0C600C0D91B361C2C806B998217;
// HeavyLizard_Damage
struct HeavyLizard_Damage_tD0A416A1F4EF565EEDECBC7536190ACDFF55F3FD;
// IDamageable
struct IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Knight_ActionManager
struct Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C;
// Knight_AnimationEvents
struct Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F;
// Knight_AttackChecker
struct Knight_AttackChecker_t8B138B09F811F7803A9BD8A05F2E9E5CA4EC8896;
// Knight_Damage
struct Knight_Damage_t15562B693DA98E98F99805692CC739C6AD3B0DE7;
// LoadOfBeasts_ActionManager
struct LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E;
// LoadOfBeasts_AnimationEvents
struct LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8;
// LoadOfBeasts_AttackChecker
struct LoadOfBeasts_AttackChecker_t2EFC1E99D1DE7816166CC6DE784B455A83F27219;
// LoadOfBeasts_Damage
struct LoadOfBeasts_Damage_tD9A019105F6D68B49B18BABFE7B5B278320F87A2;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.InputSystem.PlayerInput
struct PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;

IL2CPP_EXTERN_C RuntimeClass* ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral063F97059CD88D145EDB292C811A17C276E520A2;
IL2CPP_EXTERN_C String_t* _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18;
IL2CPP_EXTERN_C String_t* _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54;
IL2CPP_EXTERN_C String_t* _stringLiteral24BC57D4CEE81637B13B847FBE954406998A0004;
IL2CPP_EXTERN_C String_t* _stringLiteral3CC9CCF8696A5BA9C3C1B3C366D8317EA2E580F1;
IL2CPP_EXTERN_C String_t* _stringLiteral3E1FCD1DBB942FC3AFC42B5065D15C21381D53E2;
IL2CPP_EXTERN_C String_t* _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E;
IL2CPP_EXTERN_C String_t* _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673;
IL2CPP_EXTERN_C String_t* _stringLiteral673F14A92E41F4ADA5CF02E2E7F6FE08540C0C64;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6D5C2699060B9B494426CA72D3976C40161000;
IL2CPP_EXTERN_C String_t* _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0;
IL2CPP_EXTERN_C String_t* _stringLiteral93CD35E03C1A424B1F418957BABE8F734B1AD3D4;
IL2CPP_EXTERN_C String_t* _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539;
IL2CPP_EXTERN_C String_t* _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1;
IL2CPP_EXTERN_C String_t* _stringLiteralB52A5BCA0B1FE16E6C25AFA226866B06A94BFBBF;
IL2CPP_EXTERN_C String_t* _stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E;
IL2CPP_EXTERN_C String_t* _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77;
IL2CPP_EXTERN_C String_t* _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2;
IL2CPP_EXTERN_C String_t* _stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982;
IL2CPP_EXTERN_C String_t* _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<GameManager/enemieslist>
struct List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	enemieslistU5BU5D_tEE3C0BFFFD4F4894173543EC033DA5EE74A61479* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	enemieslistU5BU5D_tEE3C0BFFFD4F4894173543EC033DA5EE74A61479* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// ACTIONManager
struct ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Image ACTIONManager::fadeimage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___fadeimage_5;
	// UnityEngine.AudioSource ACTIONManager::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_6;
	// UnityEngine.AudioSource ACTIONManager::bgmsource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgmsource_7;
	// UnityEngine.AudioClip ACTIONManager::click
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___click_8;
	// UnityEngine.AudioClip ACTIONManager::gameover
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___gameover_9;
	// UnityEngine.AudioClip ACTIONManager::clear
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clear_10;
	// UnityEngine.AudioClip ACTIONManager::stagebgm
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___stagebgm_11;
	// UnityEngine.AudioClip ACTIONManager::bossbgm
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___bossbgm_12;
	// UnityEngine.GameObject ACTIONManager::returngamebutton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___returngamebutton_13;
	// UnityEngine.GameObject ACTIONManager::restartbutton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___restartbutton_14;
	// UnityEngine.GameObject ACTIONManager::clearmessage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___clearmessage_15;
	// UnityEngine.GameObject ACTIONManager::playerdatagroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___playerdatagroup_16;
	// UnityEngine.GameObject ACTIONManager::gameovergroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameovergroup_17;
	// UnityEngine.GameObject ACTIONManager::pausegroup
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pausegroup_18;
	// UnityEngine.GameObject ACTIONManager::player
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___player_19;
	// UnityEngine.Vector3 ACTIONManager::playerspornpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___playerspornpos_20;
	// UnityEngine.Animator ACTIONManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_21;
	// UnityEngine.InputSystem.PlayerInput ACTIONManager::playerinput
	PlayerInput_t5155B6508FE1937D9B2380CBA545FABE36A6F81F* ___playerinput_22;
	// UnityEngine.Rigidbody2D ACTIONManager::rb2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2d_23;
	// UnityEngine.Vector2 ACTIONManager::movederection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movederection_24;
	// System.Single ACTIONManager::xspeed
	float ___xspeed_25;
	// System.Single ACTIONManager::yspeed
	float ___yspeed_26;
	// System.Single ACTIONManager::walkspeed
	float ___walkspeed_27;
	// System.Single ACTIONManager::spornspeed
	float ___spornspeed_28;
	// System.Boolean ACTIONManager::canpause
	bool ___canpause_29;
	// System.Boolean ACTIONManager::ispause
	bool ___ispause_30;
	// System.Boolean ACTIONManager::iscoroutine
	bool ___iscoroutine_31;
	// System.Boolean ACTIONManager::isclear
	bool ___isclear_32;
	// UnityEngine.UI.Slider ACTIONManager::hpbar
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___hpbar_33;
	// TMPro.TMP_Text ACTIONManager::zankitext
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___zankitext_34;
	// System.Int32 ACTIONManager::maxhp
	int32_t ___maxhp_35;
	// System.Int32 ACTIONManager::hp
	int32_t ___hp_36;
	// System.Int32 ACTIONManager::zanki
	int32_t ___zanki_37;
	// System.Int32 ACTIONManager::enemynum
	int32_t ___enemynum_38;
	// System.Int32 ACTIONManager::wavenum
	int32_t ___wavenum_39;
};

struct ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields
{
	// ACTIONManager ACTIONManager::instance
	ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* ___instance_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BigKnight_ActionManager
struct BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BigKnight_ActionManager::maxcooltime
	float ___maxcooltime_4;
	// System.Single BigKnight_ActionManager::cooltime
	float ___cooltime_5;
	// System.Int32[] BigKnight_ActionManager::attackarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___attackarray_6;
	// System.Single BigKnight_ActionManager::maxwalkchangetime
	float ___maxwalkchangetime_7;
	// System.Single BigKnight_ActionManager::walkchangetime
	float ___walkchangetime_8;
	// System.Int32[] BigKnight_ActionManager::walkarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___walkarray_9;
	// UnityEngine.Rigidbody2D BigKnight_ActionManager::rb2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2d_10;
	// System.Single BigKnight_ActionManager::walkspeed
	float ___walkspeed_11;
	// System.Single BigKnight_ActionManager::attack2prespeed
	float ___attack2prespeed_12;
	// System.Single BigKnight_ActionManager::attack3prespeed
	float ___attack3prespeed_13;
	// UnityEngine.Vector2 BigKnight_ActionManager::movederection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movederection_14;
	// UnityEngine.Animator BigKnight_ActionManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_15;
	// UnityEngine.GameObject BigKnight_ActionManager::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_16;
};

// BigKnight_AnimationEvents
struct BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.BoxCollider2D BigKnight_AnimationEvents::attack2bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack2bc2d_4;
	// UnityEngine.BoxCollider2D BigKnight_AnimationEvents::attack3bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack3bc2d_5;
	// UnityEngine.BoxCollider2D BigKnight_AnimationEvents::attack4bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack4bc2d_6;
	// UnityEngine.SpriteRenderer BigKnight_AnimationEvents::attack1rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1rangesprend_7;
	// UnityEngine.SpriteRenderer BigKnight_AnimationEvents::attack2rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2rangesprend_8;
	// UnityEngine.SpriteRenderer BigKnight_AnimationEvents::attack3rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack3rangesprend_9;
	// UnityEngine.SpriteRenderer BigKnight_AnimationEvents::attack4rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack4rangesprend_10;
	// UnityEngine.SpriteRenderer BigKnight_AnimationEvents::attack2sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2sprend_11;
	// UnityEngine.SpriteRenderer BigKnight_AnimationEvents::attack3sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack3sprend_12;
	// UnityEngine.SpriteRenderer BigKnight_AnimationEvents::attack4sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack4sprend_13;
	// UnityEngine.GameObject BigKnight_AnimationEvents::attack1posobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack1posobject_14;
	// UnityEngine.GameObject BigKnight_AnimationEvents::attack1object
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack1object_15;
	// UnityEngine.AudioClip BigKnight_AnimationEvents::sporn
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sporn_16;
	// UnityEngine.AudioClip BigKnight_AnimationEvents::dead
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___dead_17;
	// UnityEngine.AudioClip BigKnight_AnimationEvents::attack1
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack1_18;
	// UnityEngine.AudioClip BigKnight_AnimationEvents::attack2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack2_19;
	// UnityEngine.AudioClip BigKnight_AnimationEvents::attack3
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack3_20;
	// UnityEngine.AudioClip BigKnight_AnimationEvents::attack4
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack4_21;
	// UnityEngine.AudioSource BigKnight_AnimationEvents::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_22;
};

// BigKnight_AttackChecker
struct BigKnight_AttackChecker_t15F8DD234CCDF5CD957AD276209E835F42ED8FDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// BigKnight_ActionManager BigKnight_AttackChecker::actionmanager
	BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* ___actionmanager_4;
	// System.Int32 BigKnight_AttackChecker::attacknum
	int32_t ___attacknum_5;
	// System.Int32 BigKnight_AttackChecker::attackweight
	int32_t ___attackweight_6;
};

// BigKnight_Damage
struct BigKnight_Damage_t95D0F669BD9162032FB8600934F00D6E885E84A4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 BigKnight_Damage::maxhp
	int32_t ___maxhp_4;
	// System.Int32 BigKnight_Damage::hp
	int32_t ___hp_5;
	// System.Int32 BigKnight_Damage::downpoint
	int32_t ___downpoint_6;
	// UnityEngine.Animator BigKnight_Damage::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// UnityEngine.GameObject BigKnight_Damage::damageeffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___damageeffect_8;
	// UnityEngine.GameObject BigKnight_Damage::baseposobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseposobject_9;
	// UnityEngine.Vector3 BigKnight_Damage::damageeffectpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___damageeffectpos_10;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// Demon_ActionManager
struct Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Demon_ActionManager::maxcooltime
	float ___maxcooltime_4;
	// System.Single Demon_ActionManager::cooltime
	float ___cooltime_5;
	// System.Int32[] Demon_ActionManager::attackarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___attackarray_6;
	// System.Single Demon_ActionManager::maxwalkchangetime
	float ___maxwalkchangetime_7;
	// System.Single Demon_ActionManager::walkchangetime
	float ___walkchangetime_8;
	// System.Int32[] Demon_ActionManager::walkarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___walkarray_9;
	// UnityEngine.Rigidbody2D Demon_ActionManager::rb2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2d_10;
	// System.Single Demon_ActionManager::walkspeed
	float ___walkspeed_11;
	// System.Single Demon_ActionManager::attack1speed
	float ___attack1speed_12;
	// System.Single Demon_ActionManager::attack4speed
	float ___attack4speed_13;
	// UnityEngine.Vector2 Demon_ActionManager::movederection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movederection_14;
	// UnityEngine.Animator Demon_ActionManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_15;
	// UnityEngine.GameObject Demon_ActionManager::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_16;
};

// Demon_AnimationEvents
struct Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.BoxCollider2D Demon_AnimationEvents::attack1bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack1bc2d_4;
	// UnityEngine.BoxCollider2D Demon_AnimationEvents::attack3bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack3bc2d_5;
	// UnityEngine.SpriteRenderer Demon_AnimationEvents::attack1rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1rangesprend_6;
	// UnityEngine.SpriteRenderer Demon_AnimationEvents::attack2rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2rangesprend_7;
	// UnityEngine.SpriteRenderer Demon_AnimationEvents::attack3rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack3rangesprend_8;
	// UnityEngine.SpriteRenderer Demon_AnimationEvents::attack4rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack4rangesprend_9;
	// UnityEngine.SpriteRenderer Demon_AnimationEvents::attack1sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1sprend_10;
	// UnityEngine.SpriteRenderer Demon_AnimationEvents::attack3sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack3sprend_11;
	// UnityEngine.GameObject Demon_AnimationEvents::attack2posobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack2posobject_12;
	// UnityEngine.GameObject Demon_AnimationEvents::attack4posobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack4posobject_13;
	// UnityEngine.GameObject Demon_AnimationEvents::attack2object
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack2object_14;
	// UnityEngine.GameObject Demon_AnimationEvents::attack4object
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack4object_15;
	// UnityEngine.AudioClip Demon_AnimationEvents::sporn
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sporn_16;
	// UnityEngine.AudioClip Demon_AnimationEvents::dead
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___dead_17;
	// UnityEngine.AudioClip Demon_AnimationEvents::attack1
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack1_18;
	// UnityEngine.AudioClip Demon_AnimationEvents::attack2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack2_19;
	// UnityEngine.AudioClip Demon_AnimationEvents::attack3
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack3_20;
	// UnityEngine.AudioClip Demon_AnimationEvents::attack4
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack4_21;
	// UnityEngine.AudioSource Demon_AnimationEvents::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_22;
};

// Demon_AttackChecker
struct Demon_AttackChecker_tC82E227DF9207DBCADC1B1BC2AF394FA2D06645F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Demon_ActionManager Demon_AttackChecker::actionmanager
	Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* ___actionmanager_4;
	// System.Int32 Demon_AttackChecker::attacknum
	int32_t ___attacknum_5;
	// System.Int32 Demon_AttackChecker::attackweight
	int32_t ___attackweight_6;
};

// Demon_Damage
struct Demon_Damage_tDE239B55C4FCFECC857EC49C6B254A103883FA45  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Demon_Damage::maxhp
	int32_t ___maxhp_4;
	// System.Int32 Demon_Damage::hp
	int32_t ___hp_5;
	// System.Int32 Demon_Damage::downpoint
	int32_t ___downpoint_6;
	// UnityEngine.Animator Demon_Damage::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// UnityEngine.GameObject Demon_Damage::damageeffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___damageeffect_8;
	// UnityEngine.GameObject Demon_Damage::baseposobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseposobject_9;
	// UnityEngine.Vector3 Demon_Damage::damageeffectpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___damageeffectpos_10;
};

// Enemy_AttackPower
struct Enemy_AttackPower_t85A346BFA6601EB802070F7E543AB32A30ADB33C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Enemy_AttackPower::power
	int32_t ___power_4;
	// UnityEngine.AudioClip Enemy_AttackPower::hit
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___hit_5;
	// UnityEngine.AudioSource Enemy_AttackPower::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_6;
	// System.Boolean Enemy_AttackPower::ishit
	bool ___ishit_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Enemy_AttackPower::hitlist
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hitlist_8;
	// UnityEngine.BoxCollider2D Enemy_AttackPower::bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___bc2d_9;
};

// FireWizard_ActionManager
struct FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single FireWizard_ActionManager::maxcooltime
	float ___maxcooltime_4;
	// System.Single FireWizard_ActionManager::cooltime
	float ___cooltime_5;
	// System.Int32[] FireWizard_ActionManager::attackarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___attackarray_6;
	// System.Single FireWizard_ActionManager::maxwalkchangetime
	float ___maxwalkchangetime_7;
	// System.Single FireWizard_ActionManager::walkchangetime
	float ___walkchangetime_8;
	// System.Int32[] FireWizard_ActionManager::walkarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___walkarray_9;
	// UnityEngine.Rigidbody2D FireWizard_ActionManager::rb2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2d_10;
	// System.Single FireWizard_ActionManager::walkspeed
	float ___walkspeed_11;
	// UnityEngine.Vector2 FireWizard_ActionManager::movederection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movederection_12;
	// UnityEngine.Animator FireWizard_ActionManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_13;
	// UnityEngine.GameObject FireWizard_ActionManager::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_14;
};

// FireWizard_AnimationEvents
struct FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.BoxCollider2D FireWizard_AnimationEvents::attack1bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack1bc2d_4;
	// UnityEngine.SpriteRenderer FireWizard_AnimationEvents::attack1rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1rangesprend_5;
	// UnityEngine.SpriteRenderer FireWizard_AnimationEvents::attack2_1rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2_1rangesprend_6;
	// UnityEngine.SpriteRenderer FireWizard_AnimationEvents::attack2_2rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2_2rangesprend_7;
	// UnityEngine.SpriteRenderer FireWizard_AnimationEvents::attack2_3rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2_3rangesprend_8;
	// UnityEngine.SpriteRenderer FireWizard_AnimationEvents::attack1sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1sprend_9;
	// UnityEngine.GameObject FireWizard_AnimationEvents::attack2_1posobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack2_1posobject_10;
	// UnityEngine.GameObject FireWizard_AnimationEvents::attack2_2posobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack2_2posobject_11;
	// UnityEngine.GameObject FireWizard_AnimationEvents::attack2_3posobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack2_3posobject_12;
	// UnityEngine.GameObject FireWizard_AnimationEvents::attack2object
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack2object_13;
	// UnityEngine.AudioClip FireWizard_AnimationEvents::sporn
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sporn_14;
	// UnityEngine.AudioClip FireWizard_AnimationEvents::dead
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___dead_15;
	// UnityEngine.AudioClip FireWizard_AnimationEvents::attack1
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack1_16;
	// UnityEngine.AudioClip FireWizard_AnimationEvents::attack2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack2_17;
	// UnityEngine.AudioSource FireWizard_AnimationEvents::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_18;
};

// FireWizard_AttackChecker
struct FireWizard_AttackChecker_t0E367196FF474950A069D1C825CD53A04E5F533D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// FireWizard_ActionManager FireWizard_AttackChecker::actionmanager
	FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* ___actionmanager_4;
	// System.Int32 FireWizard_AttackChecker::attacknum
	int32_t ___attacknum_5;
	// System.Int32 FireWizard_AttackChecker::attackweight
	int32_t ___attackweight_6;
};

// FireWizard_Damage
struct FireWizard_Damage_tD52DDE66EF3594FE0C79BFBDC131F5B246E8AD60  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 FireWizard_Damage::maxhp
	int32_t ___maxhp_4;
	// System.Int32 FireWizard_Damage::hp
	int32_t ___hp_5;
	// System.Int32 FireWizard_Damage::downpoint
	int32_t ___downpoint_6;
	// UnityEngine.Animator FireWizard_Damage::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// UnityEngine.GameObject FireWizard_Damage::damageeffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___damageeffect_8;
	// UnityEngine.GameObject FireWizard_Damage::baseposobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseposobject_9;
	// UnityEngine.Vector3 FireWizard_Damage::damageeffectpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___damageeffectpos_10;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource GameManager::bgmsource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___bgmsource_5;
	// UnityEngine.AudioSource GameManager::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_6;
	// UnityEngine.Sprite GameManager::groundsprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___groundsprite_7;
	// UnityEngine.Sprite GameManager::skysprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___skysprite_8;
	// System.Collections.Generic.List`1<GameManager/enemieslist> GameManager::enemieslists
	List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD* ___enemieslists_9;
};

struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
};

// GolemKing_ActionManager
struct GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GolemKing_ActionManager::maxcooltime
	float ___maxcooltime_4;
	// System.Single GolemKing_ActionManager::cooltime
	float ___cooltime_5;
	// System.Int32[] GolemKing_ActionManager::attackarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___attackarray_6;
	// System.Single GolemKing_ActionManager::maxwalkchangetime
	float ___maxwalkchangetime_7;
	// System.Single GolemKing_ActionManager::walkchangetime
	float ___walkchangetime_8;
	// System.Int32[] GolemKing_ActionManager::walkarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___walkarray_9;
	// UnityEngine.Rigidbody2D GolemKing_ActionManager::rb2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2d_10;
	// System.Single GolemKing_ActionManager::walkspeed
	float ___walkspeed_11;
	// System.Single GolemKing_ActionManager::attack2speed
	float ___attack2speed_12;
	// System.Single GolemKing_ActionManager::attack3speed
	float ___attack3speed_13;
	// UnityEngine.Vector2 GolemKing_ActionManager::movederection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movederection_14;
	// UnityEngine.Animator GolemKing_ActionManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_15;
	// UnityEngine.GameObject GolemKing_ActionManager::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_16;
};

// GolemKing_AnimationEvents
struct GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GolemKing_ActionManager GolemKing_AnimationEvents::actionmanager
	GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* ___actionmanager_4;
	// UnityEngine.BoxCollider2D GolemKing_AnimationEvents::attack1bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack1bc2d_5;
	// UnityEngine.SpriteRenderer GolemKing_AnimationEvents::attack1rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1rangesprend_6;
	// UnityEngine.SpriteRenderer GolemKing_AnimationEvents::attack2rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2rangesprend_7;
	// UnityEngine.SpriteRenderer GolemKing_AnimationEvents::attack3rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack3rangesprend_8;
	// UnityEngine.SpriteRenderer GolemKing_AnimationEvents::attack4rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack4rangesprend_9;
	// UnityEngine.SpriteRenderer GolemKing_AnimationEvents::attack1sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1sprend_10;
	// UnityEngine.GameObject GolemKing_AnimationEvents::attack2posobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack2posobject_11;
	// UnityEngine.GameObject GolemKing_AnimationEvents::attack3posobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack3posobject_12;
	// UnityEngine.GameObject GolemKing_AnimationEvents::attack4posobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack4posobject_13;
	// UnityEngine.GameObject GolemKing_AnimationEvents::attack2object
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack2object_14;
	// UnityEngine.GameObject GolemKing_AnimationEvents::attack3object
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack3object_15;
	// UnityEngine.GameObject GolemKing_AnimationEvents::attack4object
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack4object_16;
	// UnityEngine.AudioClip GolemKing_AnimationEvents::sporn
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sporn_17;
	// UnityEngine.AudioClip GolemKing_AnimationEvents::dead
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___dead_18;
	// UnityEngine.AudioClip GolemKing_AnimationEvents::attack1
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack1_19;
	// UnityEngine.AudioClip GolemKing_AnimationEvents::attack2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack2_20;
	// UnityEngine.AudioClip GolemKing_AnimationEvents::attack3
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack3_21;
	// UnityEngine.AudioClip GolemKing_AnimationEvents::attack4
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack4_22;
	// UnityEngine.AudioSource GolemKing_AnimationEvents::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_23;
};

// GolemKing_AttackChecker
struct GolemKing_AttackChecker_tE0F5D98D1FC88290913100A5CD7D0B717F3B1C54  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GolemKing_ActionManager GolemKing_AttackChecker::actionmanager
	GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* ___actionmanager_4;
	// System.Int32 GolemKing_AttackChecker::attacknum
	int32_t ___attacknum_5;
	// System.Int32 GolemKing_AttackChecker::attackweight
	int32_t ___attackweight_6;
};

// GolemKing_Damage
struct GolemKing_Damage_tE4425C2DEB82569459B27954BA0567BF78E83CE6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 GolemKing_Damage::maxhp
	int32_t ___maxhp_4;
	// System.Int32 GolemKing_Damage::hp
	int32_t ___hp_5;
	// System.Int32 GolemKing_Damage::downpoint
	int32_t ___downpoint_6;
	// UnityEngine.Animator GolemKing_Damage::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// UnityEngine.GameObject GolemKing_Damage::damageeffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___damageeffect_8;
	// UnityEngine.GameObject GolemKing_Damage::baseposobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseposobject_9;
	// UnityEngine.Vector3 GolemKing_Damage::damageeffectpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___damageeffectpos_10;
};

// Golem_ActionManager
struct Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Golem_ActionManager::maxcooltime
	float ___maxcooltime_4;
	// System.Single Golem_ActionManager::cooltime
	float ___cooltime_5;
	// System.Int32[] Golem_ActionManager::attackarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___attackarray_6;
	// System.Single Golem_ActionManager::maxwalkchangetime
	float ___maxwalkchangetime_7;
	// System.Single Golem_ActionManager::walkchangetime
	float ___walkchangetime_8;
	// System.Int32[] Golem_ActionManager::walkarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___walkarray_9;
	// UnityEngine.Rigidbody2D Golem_ActionManager::rb2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2d_10;
	// System.Single Golem_ActionManager::walkspeed
	float ___walkspeed_11;
	// System.Single Golem_ActionManager::attack2prespeed
	float ___attack2prespeed_12;
	// UnityEngine.Vector2 Golem_ActionManager::movederection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movederection_13;
	// UnityEngine.Animator Golem_ActionManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_14;
	// UnityEngine.GameObject Golem_ActionManager::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_15;
};

// Golem_AnimationEvents
struct Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.BoxCollider2D Golem_AnimationEvents::attack1_1bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack1_1bc2d_4;
	// UnityEngine.BoxCollider2D Golem_AnimationEvents::attack1_2bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack1_2bc2d_5;
	// UnityEngine.BoxCollider2D Golem_AnimationEvents::attack2bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack2bc2d_6;
	// UnityEngine.SpriteRenderer Golem_AnimationEvents::attack1_1rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1_1rangesprend_7;
	// UnityEngine.SpriteRenderer Golem_AnimationEvents::attack1_2rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1_2rangesprend_8;
	// UnityEngine.SpriteRenderer Golem_AnimationEvents::attack2rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2rangesprend_9;
	// UnityEngine.SpriteRenderer Golem_AnimationEvents::attack1_1sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1_1sprend_10;
	// UnityEngine.SpriteRenderer Golem_AnimationEvents::attack1_2sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1_2sprend_11;
	// UnityEngine.SpriteRenderer Golem_AnimationEvents::attack2sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2sprend_12;
	// UnityEngine.AudioClip Golem_AnimationEvents::sporn
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sporn_13;
	// UnityEngine.AudioClip Golem_AnimationEvents::dead
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___dead_14;
	// UnityEngine.AudioClip Golem_AnimationEvents::attack1
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack1_15;
	// UnityEngine.AudioClip Golem_AnimationEvents::attack2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack2_16;
	// UnityEngine.AudioSource Golem_AnimationEvents::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_17;
};

// Golem_AttackChecker
struct Golem_AttackChecker_tAA8D556A8DCB8E437965CE1DD478B9B2ABDC9FC2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Golem_ActionManager Golem_AttackChecker::actionmanager
	Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* ___actionmanager_4;
	// System.Int32 Golem_AttackChecker::attacknum
	int32_t ___attacknum_5;
	// System.Int32 Golem_AttackChecker::attackweight
	int32_t ___attackweight_6;
};

// Golem_Damage
struct Golem_Damage_t0438D81D8BC7FEB989A76C10AF77767FD0D8F4FA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Golem_Damage::maxhp
	int32_t ___maxhp_4;
	// System.Int32 Golem_Damage::hp
	int32_t ___hp_5;
	// System.Int32 Golem_Damage::downpoint
	int32_t ___downpoint_6;
	// UnityEngine.Animator Golem_Damage::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// UnityEngine.GameObject Golem_Damage::damageeffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___damageeffect_8;
	// UnityEngine.GameObject Golem_Damage::baseposobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseposobject_9;
	// UnityEngine.Vector3 Golem_Damage::damageeffectpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___damageeffectpos_10;
};

// HeavyLizard_ActionManager
struct HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single HeavyLizard_ActionManager::maxcooltime
	float ___maxcooltime_4;
	// System.Single HeavyLizard_ActionManager::cooltime
	float ___cooltime_5;
	// System.Int32[] HeavyLizard_ActionManager::attackarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___attackarray_6;
	// System.Single HeavyLizard_ActionManager::maxwalkchangetime
	float ___maxwalkchangetime_7;
	// System.Single HeavyLizard_ActionManager::walkchangetime
	float ___walkchangetime_8;
	// System.Int32[] HeavyLizard_ActionManager::walkarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___walkarray_9;
	// UnityEngine.Rigidbody2D HeavyLizard_ActionManager::rb2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2d_10;
	// System.Single HeavyLizard_ActionManager::walkspeed
	float ___walkspeed_11;
	// UnityEngine.Vector2 HeavyLizard_ActionManager::movederection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movederection_12;
	// UnityEngine.Animator HeavyLizard_ActionManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_13;
	// UnityEngine.GameObject HeavyLizard_ActionManager::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_14;
};

// HeavyLizard_AnimationEvents
struct HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.BoxCollider2D HeavyLizard_AnimationEvents::attack1bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack1bc2d_4;
	// UnityEngine.BoxCollider2D HeavyLizard_AnimationEvents::attack2bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack2bc2d_5;
	// UnityEngine.SpriteRenderer HeavyLizard_AnimationEvents::attack1rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1rangesprend_6;
	// UnityEngine.SpriteRenderer HeavyLizard_AnimationEvents::attack2rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2rangesprend_7;
	// UnityEngine.SpriteRenderer HeavyLizard_AnimationEvents::attack1sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1sprend_8;
	// UnityEngine.SpriteRenderer HeavyLizard_AnimationEvents::attack2sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2sprend_9;
	// UnityEngine.AudioClip HeavyLizard_AnimationEvents::sporn
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sporn_10;
	// UnityEngine.AudioClip HeavyLizard_AnimationEvents::dead
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___dead_11;
	// UnityEngine.AudioClip HeavyLizard_AnimationEvents::attack1
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack1_12;
	// UnityEngine.AudioClip HeavyLizard_AnimationEvents::attack2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack2_13;
	// UnityEngine.AudioSource HeavyLizard_AnimationEvents::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_14;
};

// HeavyLizard_AttackChecker
struct HeavyLizard_AttackChecker_t20DF6C063552C0C600C0D91B361C2C806B998217  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// HeavyLizard_ActionManager HeavyLizard_AttackChecker::actionmanager
	HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* ___actionmanager_4;
	// System.Int32 HeavyLizard_AttackChecker::attacknum
	int32_t ___attacknum_5;
	// System.Int32 HeavyLizard_AttackChecker::attackweight
	int32_t ___attackweight_6;
};

// HeavyLizard_Damage
struct HeavyLizard_Damage_tD0A416A1F4EF565EEDECBC7536190ACDFF55F3FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 HeavyLizard_Damage::maxhp
	int32_t ___maxhp_4;
	// System.Int32 HeavyLizard_Damage::hp
	int32_t ___hp_5;
	// System.Int32 HeavyLizard_Damage::downpoint
	int32_t ___downpoint_6;
	// UnityEngine.Animator HeavyLizard_Damage::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// UnityEngine.GameObject HeavyLizard_Damage::damageeffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___damageeffect_8;
	// UnityEngine.GameObject HeavyLizard_Damage::baseposobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseposobject_9;
	// UnityEngine.Vector3 HeavyLizard_Damage::damageeffectpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___damageeffectpos_10;
};

// Knight_ActionManager
struct Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Knight_ActionManager::maxcooltime
	float ___maxcooltime_4;
	// System.Single Knight_ActionManager::cooltime
	float ___cooltime_5;
	// System.Int32[] Knight_ActionManager::attackarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___attackarray_6;
	// System.Single Knight_ActionManager::maxwalkchangetime
	float ___maxwalkchangetime_7;
	// System.Single Knight_ActionManager::walkchangetime
	float ___walkchangetime_8;
	// System.Int32[] Knight_ActionManager::walkarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___walkarray_9;
	// UnityEngine.Rigidbody2D Knight_ActionManager::rb2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2d_10;
	// System.Single Knight_ActionManager::walkspeed
	float ___walkspeed_11;
	// System.Single Knight_ActionManager::attack1speed
	float ___attack1speed_12;
	// UnityEngine.Vector2 Knight_ActionManager::movederection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movederection_13;
	// UnityEngine.Animator Knight_ActionManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_14;
	// UnityEngine.GameObject Knight_ActionManager::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_15;
};

// Knight_AnimationEvents
struct Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.BoxCollider2D Knight_AnimationEvents::attack1bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack1bc2d_4;
	// UnityEngine.BoxCollider2D Knight_AnimationEvents::attack2bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack2bc2d_5;
	// UnityEngine.SpriteRenderer Knight_AnimationEvents::attack1rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1rangesprend_6;
	// UnityEngine.SpriteRenderer Knight_AnimationEvents::attack2rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2rangesprend_7;
	// UnityEngine.SpriteRenderer Knight_AnimationEvents::attack1sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1sprend_8;
	// UnityEngine.SpriteRenderer Knight_AnimationEvents::attack2sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2sprend_9;
	// UnityEngine.AudioClip Knight_AnimationEvents::sporn
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sporn_10;
	// UnityEngine.AudioClip Knight_AnimationEvents::dead
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___dead_11;
	// UnityEngine.AudioClip Knight_AnimationEvents::attack1
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack1_12;
	// UnityEngine.AudioClip Knight_AnimationEvents::attack2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack2_13;
	// UnityEngine.AudioSource Knight_AnimationEvents::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_14;
};

// Knight_AttackChecker
struct Knight_AttackChecker_t8B138B09F811F7803A9BD8A05F2E9E5CA4EC8896  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Knight_ActionManager Knight_AttackChecker::actionmanager
	Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* ___actionmanager_4;
	// System.Int32 Knight_AttackChecker::attacknum
	int32_t ___attacknum_5;
	// System.Int32 Knight_AttackChecker::attackweight
	int32_t ___attackweight_6;
};

// Knight_Damage
struct Knight_Damage_t15562B693DA98E98F99805692CC739C6AD3B0DE7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 Knight_Damage::maxhp
	int32_t ___maxhp_4;
	// System.Int32 Knight_Damage::hp
	int32_t ___hp_5;
	// System.Int32 Knight_Damage::downpoint
	int32_t ___downpoint_6;
	// UnityEngine.Animator Knight_Damage::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// UnityEngine.GameObject Knight_Damage::damageeffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___damageeffect_8;
	// UnityEngine.GameObject Knight_Damage::baseposobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseposobject_9;
	// UnityEngine.Vector3 Knight_Damage::damageeffectpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___damageeffectpos_10;
};

// LoadOfBeasts_ActionManager
struct LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single LoadOfBeasts_ActionManager::maxcooltime
	float ___maxcooltime_4;
	// System.Single LoadOfBeasts_ActionManager::cooltime
	float ___cooltime_5;
	// System.Int32[] LoadOfBeasts_ActionManager::attackarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___attackarray_6;
	// System.Single LoadOfBeasts_ActionManager::maxwalkchangetime
	float ___maxwalkchangetime_7;
	// System.Single LoadOfBeasts_ActionManager::walkchangetime
	float ___walkchangetime_8;
	// System.Int32[] LoadOfBeasts_ActionManager::walkarray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___walkarray_9;
	// UnityEngine.Rigidbody2D LoadOfBeasts_ActionManager::rb2d
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb2d_10;
	// System.Single LoadOfBeasts_ActionManager::walkspeed
	float ___walkspeed_11;
	// System.Single LoadOfBeasts_ActionManager::attack2speed
	float ___attack2speed_12;
	// System.Single LoadOfBeasts_ActionManager::attack3prespeed
	float ___attack3prespeed_13;
	// UnityEngine.Vector2 LoadOfBeasts_ActionManager::movederection
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___movederection_14;
	// UnityEngine.Animator LoadOfBeasts_ActionManager::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_15;
	// UnityEngine.GameObject LoadOfBeasts_ActionManager::target
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___target_16;
};

// LoadOfBeasts_AnimationEvents
struct LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LoadOfBeasts_ActionManager LoadOfBeasts_AnimationEvents::actionmanager
	LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* ___actionmanager_4;
	// UnityEngine.BoxCollider2D LoadOfBeasts_AnimationEvents::attack1bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack1bc2d_5;
	// UnityEngine.BoxCollider2D LoadOfBeasts_AnimationEvents::attack2bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack2bc2d_6;
	// UnityEngine.BoxCollider2D LoadOfBeasts_AnimationEvents::attack3bc2d
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* ___attack3bc2d_7;
	// UnityEngine.SpriteRenderer LoadOfBeasts_AnimationEvents::attack1rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1rangesprend_8;
	// UnityEngine.SpriteRenderer LoadOfBeasts_AnimationEvents::attack2rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2rangesprend_9;
	// UnityEngine.SpriteRenderer LoadOfBeasts_AnimationEvents::attack3rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack3rangesprend_10;
	// UnityEngine.SpriteRenderer LoadOfBeasts_AnimationEvents::attack4rangesprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack4rangesprend_11;
	// UnityEngine.SpriteRenderer LoadOfBeasts_AnimationEvents::attack1sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack1sprend_12;
	// UnityEngine.SpriteRenderer LoadOfBeasts_AnimationEvents::attack2sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack2sprend_13;
	// UnityEngine.SpriteRenderer LoadOfBeasts_AnimationEvents::attack3sprend
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___attack3sprend_14;
	// UnityEngine.GameObject LoadOfBeasts_AnimationEvents::attack4posobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack4posobject_15;
	// UnityEngine.GameObject LoadOfBeasts_AnimationEvents::attack4object
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___attack4object_16;
	// UnityEngine.AudioClip LoadOfBeasts_AnimationEvents::sporn
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___sporn_17;
	// UnityEngine.AudioClip LoadOfBeasts_AnimationEvents::dead
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___dead_18;
	// UnityEngine.AudioClip LoadOfBeasts_AnimationEvents::attack1
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack1_19;
	// UnityEngine.AudioClip LoadOfBeasts_AnimationEvents::attack2
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack2_20;
	// UnityEngine.AudioClip LoadOfBeasts_AnimationEvents::attack3
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack3_21;
	// UnityEngine.AudioClip LoadOfBeasts_AnimationEvents::attack4
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___attack4_22;
	// UnityEngine.AudioSource LoadOfBeasts_AnimationEvents::sesource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___sesource_23;
};

// LoadOfBeasts_AttackChecker
struct LoadOfBeasts_AttackChecker_t2EFC1E99D1DE7816166CC6DE784B455A83F27219  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// LoadOfBeasts_ActionManager LoadOfBeasts_AttackChecker::actionmanager
	LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* ___actionmanager_4;
	// System.Int32 LoadOfBeasts_AttackChecker::attacknum
	int32_t ___attacknum_5;
	// System.Int32 LoadOfBeasts_AttackChecker::attackweight
	int32_t ___attackweight_6;
};

// LoadOfBeasts_Damage
struct LoadOfBeasts_Damage_tD9A019105F6D68B49B18BABFE7B5B278320F87A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 LoadOfBeasts_Damage::maxhp
	int32_t ___maxhp_4;
	// System.Int32 LoadOfBeasts_Damage::hp
	int32_t ___hp_5;
	// System.Int32 LoadOfBeasts_Damage::downpoint
	int32_t ___downpoint_6;
	// UnityEngine.Animator LoadOfBeasts_Damage::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_7;
	// UnityEngine.GameObject LoadOfBeasts_Damage::damageeffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___damageeffect_8;
	// UnityEngine.GameObject LoadOfBeasts_Damage::baseposobject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___baseposobject_9;
	// UnityEngine.Vector3 LoadOfBeasts_Damage::damageeffectpos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___damageeffectpos_10;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Clear()
inline void List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<UnityEngine.GameObject>::Contains(T)
inline bool List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// T UnityEngine.Component::GetComponent<IDamageable>()
inline RuntimeObject* Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject BigKnight_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BigKnight_ActionManager_SearchedObject_mD5E87AF2F7EE07E90A0373A5585CC08A2BEB7B0D (BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* __this, String_t* ___targettag0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// System.Int32 BigKnight_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigKnight_ActionManager_SelectActionNumber_m9680A3C40985EE8AA9974FEAC3D07551117BFE12 (BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 BigKnight_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BigKnight_ActionManager_DerectionControl_m96E9B68CC8E9E00AFB06AF1D77D6FE65CB972B6C (BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_UnaryNegation(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43 (const RuntimeMethod* method) ;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E (String_t* ___tag0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void BigKnight_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_AllFalse_mA0718835364098994586C0FD6FECE7BC85132A38 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<GameManager/enemieslist>::get_Count()
inline int32_t List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_inline (List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::NameToLayer(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B (String_t* ___layerName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void BigKnight_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_Damage_Death_m226C1911A47F0FD4B2E6D9A595AD38EECC4AB6A4 (BigKnight_Damage_t95D0F669BD9162032FB8600934F00D6E885E84A4* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Demon_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Demon_ActionManager_SearchedObject_m58290FD1CD411714B169396B30E728EE0FA95D08 (Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* __this, String_t* ___targettag0, const RuntimeMethod* method) ;
// System.Int32 Demon_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Demon_ActionManager_SelectActionNumber_m7995D4F06ADF28C0207244C80987307D8DCCC93A (Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Demon_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Demon_ActionManager_DerectionControl_m7394A11874EA87E54B0905DC3D1F796226D7DD43 (Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) ;
// System.Void Demon_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_AllFalse_m2865BBE37DD5008DE50526E221294ACBA65F2AD3 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) ;
// System.Void Demon_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_Damage_Death_m0F5C0392CD08B29101687CD3454C1F320C7C9B38 (Demon_Damage_tDE239B55C4FCFECC857EC49C6B254A103883FA45* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject FireWizard_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* FireWizard_ActionManager_SearchedObject_m43C5BFB2D4B2D5A408ED83C8861E0D72A8EAE68E (FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* __this, String_t* ___targettag0, const RuntimeMethod* method) ;
// System.Int32 FireWizard_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FireWizard_ActionManager_SelectActionNumber_m78FC2D5497D7D4E39EC1B4193D65A9BB755BAB32 (FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 FireWizard_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FireWizard_ActionManager_DerectionControl_m18ED17F8646567BA5C4ABEF6F7E1E47B1CA82763 (FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) ;
// System.Void FireWizard_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_AllFalse_m8ED260C1D7CFC3BAA1978C5A366749973105F5DF (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) ;
// System.Void FireWizard_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_Damage_Death_m8785C10C88CA1FB6A0314323A45B72CD9787D341 (FireWizard_Damage_tD52DDE66EF3594FE0C79BFBDC131F5B246E8AD60* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Golem_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Golem_ActionManager_SearchedObject_mAD7BE1365A4CE9C51F43DE293C1FE2F7F636A360 (Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* __this, String_t* ___targettag0, const RuntimeMethod* method) ;
// System.Int32 Golem_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Golem_ActionManager_SelectActionNumber_mEC1DE2EA54B2103AD0045A17610D4C021A994C18 (Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Golem_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Golem_ActionManager_DerectionControl_m1A2459D83C4A68E622347CD5DE297910CB498BDC (Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) ;
// System.Void Golem_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_AllFalse_mC1796C8D555DDE44B41B1BC8A5676C47BF244355 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) ;
// System.Void Golem_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_Damage_Death_mD1DC76BEE33FB85073144F26E323711B042D2601 (Golem_Damage_t0438D81D8BC7FEB989A76C10AF77767FD0D8F4FA* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject GolemKing_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GolemKing_ActionManager_SearchedObject_m795D33392DA2060A0606E41F33AF43A64FCB94C9 (GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* __this, String_t* ___targettag0, const RuntimeMethod* method) ;
// System.Int32 GolemKing_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GolemKing_ActionManager_SelectActionNumber_m6138EBC2C90BEC67CF1224E0096D96EE62600920 (GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 GolemKing_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GolemKing_ActionManager_DerectionControl_mA911FF78430B6A9E60D4F7C0DCAADB4024A0FECF (GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) ;
// System.Void GolemKing_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_AllFalse_m6AFD7DC10E5B3ECB3E3AC51F7E0B379DB1F3E76E (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void GolemKing_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_Damage_Death_m0A5DCD897ACF774CF076A31DABA2B892BAA84738 (GolemKing_Damage_tE4425C2DEB82569459B27954BA0567BF78E83CE6* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject HeavyLizard_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HeavyLizard_ActionManager_SearchedObject_m4B0A87247290BF1CCE03B051575F1A5DF26794D1 (HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* __this, String_t* ___targettag0, const RuntimeMethod* method) ;
// System.Int32 HeavyLizard_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HeavyLizard_ActionManager_SelectActionNumber_mB7E874266C3A26B34B42CEF9E1D13B8227984C33 (HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 HeavyLizard_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 HeavyLizard_ActionManager_DerectionControl_mADD60551CC9BD03985F15F95A42C0CCF16736E14 (HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) ;
// System.Void HeavyLizard_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_AllFalse_m8043DC2843491A85C3F131209079133B10FD4C0B (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) ;
// System.Void HeavyLizard_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_Damage_Death_m9F8E34CCF67D817D7B39C97645FE8AFD77B69ED1 (HeavyLizard_Damage_tD0A416A1F4EF565EEDECBC7536190ACDFF55F3FD* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject Knight_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Knight_ActionManager_SearchedObject_mFC38D2C447C2E616323542BFBB7A3AFCDAAC72B9 (Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* __this, String_t* ___targettag0, const RuntimeMethod* method) ;
// System.Int32 Knight_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Knight_ActionManager_SelectActionNumber_m528BF27B6BE726455A9D2C696F235E20F6C37242 (Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Knight_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Knight_ActionManager_DerectionControl_mEB9B97A8929505EDA9894119A797E4F9D130DC79 (Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) ;
// System.Void Knight_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_AllFalse_m83C7BB7C453476A01FE9072AFA63F653B63B8ED3 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) ;
// System.Void Knight_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_Damage_Death_m0BD6AC4B11B15A5BA565019D245E7E9AAD9615C4 (Knight_Damage_t15562B693DA98E98F99805692CC739C6AD3B0DE7* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject LoadOfBeasts_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LoadOfBeasts_ActionManager_SearchedObject_m3A27BA0C385D43C6EA7224207C018FA22AEB7AEF (LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* __this, String_t* ___targettag0, const RuntimeMethod* method) ;
// System.Int32 LoadOfBeasts_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadOfBeasts_ActionManager_SelectActionNumber_m572545E8889094C318B6F9B5C44E35C0527ECD1F (LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 LoadOfBeasts_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LoadOfBeasts_ActionManager_DerectionControl_mC2FD0818DEB836ACD25B970A7922E8C4AE60DE20 (LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) ;
// System.Void LoadOfBeasts_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_AllFalse_m680F9886F4AD778F5B76FCDD0C9217EC8CF037E2 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) ;
// System.Void LoadOfBeasts_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_Damage_Death_mA4D80C66A2F86CD89B3073045DC2099A72C6870B (LoadOfBeasts_Damage_tD9A019105F6D68B49B18BABFE7B5B278320F87A2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void Enemy_AttackPower::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_AttackPower_Start_m750ED4BD36BC765C3DEDBF116BFDCDEB2386B7D1 (Enemy_AttackPower_t85A346BFA6601EB802070F7E543AB32A30ADB33C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___sesource_6;
		__this->___sesource_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_6), (void*)L_1);
		// ishit = false;
		__this->___ishit_7 = (bool)0;
		// }
		return;
	}
}
// System.Void Enemy_AttackPower::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_AttackPower_FixedUpdate_mBB6CA6E319EEDCCD14282B61FEBDBBF51FC70436 (Enemy_AttackPower_t85A346BFA6601EB802070F7E543AB32A30ADB33C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!bc2d.enabled)
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___bc2d_9;
		bool L_1;
		L_1 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_0, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// hitlist.Clear();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = __this->___hitlist_8;
		List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_inline(L_2, List_1_Clear_m32D399BDD753B5BD6CE27560249096418F3F0867_RuntimeMethod_var);
		// ishit = false;
		__this->___ishit_7 = (bool)0;
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Enemy_AttackPower::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_AttackPower_OnTriggerEnter2D_m9A4C831471CBCDA5A477B515B78FD75D12D21ECA (Enemy_AttackPower_t85A346BFA6601EB802070F7E543AB32A30ADB33C* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// if (other.gameObject.tag == "Player" && !hitlist.Contains(other.gameObject))
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_0071;
		}
	}
	{
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4 = __this->___hitlist_8;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_5 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		bool L_7;
		L_7 = List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384(L_4, L_6, List_1_Contains_m8D2C9B0C7844486763AE6C2CA3C04FA4BBA9B384_RuntimeMethod_var);
		if (L_7)
		{
			goto IL_0071;
		}
	}
	{
		// hitlist.Add(other.gameObject);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___hitlist_8;
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_9 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_8, L_10, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// IDamageable damageable = other.GetComponent<IDamageable>();
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_11 = ___other0;
		RuntimeObject* L_12;
		L_12 = Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4(L_11, Component_GetComponent_TisIDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_m881A5EDCF28C8C75D22ADA1D1944038AC3C588D4_RuntimeMethod_var);
		V_0 = L_12;
		// if (damageable != null)
		RuntimeObject* L_13 = V_0;
		if (!L_13)
		{
			goto IL_0071;
		}
	}
	{
		// damageable.Damage(power);
		RuntimeObject* L_14 = V_0;
		int32_t L_15 = __this->___power_4;
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void IDamageable::Damage(System.Int32) */, IDamageable_t93F108D696AEDF58E00298EBA58036ABF58EB535_il2cpp_TypeInfo_var, L_14, L_15);
		// if (!ishit)
		bool L_16 = __this->___ishit_7;
		if (L_16)
		{
			goto IL_0071;
		}
	}
	{
		// ishit = true;
		__this->___ishit_7 = (bool)1;
		// sesource.PlayOneShot(hit);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = __this->___sesource_6;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_18 = __this->___hit_5;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_17, L_18, NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Enemy_AttackPower::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_AttackPower__ctor_mD20010B4A48219BF421D86A064DA5F5A5432EEDB (Enemy_AttackPower_t85A346BFA6601EB802070F7E543AB32A30ADB33C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private List<GameObject> hitlist = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___hitlist_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hitlist_8), (void*)L_0);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BigKnight_ActionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_ActionManager_Start_m9B622333FBDBA347EA5985E2E480BBF448702AA5 (BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// cooltime = maxcooltime;
		float L_0 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_0;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// for (int i = 0; i < attackarray.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		// attackarray[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___attackarray_6;
		int32_t L_2 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (int32_t)0);
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___attackarray_6;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = BigKnight_ActionManager_SearchedObject_mD5E87AF2F7EE07E90A0373A5585CC08A2BEB7B0D(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_16), (void*)L_6);
		// }
		return;
	}
}
// System.Void BigKnight_ActionManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_ActionManager_FixedUpdate_m025282BB4657A5E23B81D01683FEF10246DDEDE2 (BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BC57D4CEE81637B13B847FBE954406998A0004);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB52A5BCA0B1FE16E6C25AFA226866B06A94BFBBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// cooltime = maxcooltime;
		float L_2 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_2;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// animator.SetBool("walk",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_5, NULL);
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = BigKnight_ActionManager_SearchedObject_mD5E87AF2F7EE07E90A0373A5585CC08A2BEB7B0D(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_16), (void*)L_6);
		return;
	}

IL_0062:
	{
		// if ((animator.GetCurrentAnimatorStateInfo(0).IsName("Stand")) ||
		//      animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		V_0 = L_8;
		bool L_9;
		L_9 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_9)
		{
			goto IL_0098;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_11;
		L_11 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_10, 0, NULL);
		V_0 = L_11;
		bool L_12;
		L_12 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_12)
		{
			goto IL_00bc;
		}
	}

IL_0098:
	{
		// cooltime -= Time.deltaTime;
		float L_13 = __this->___cooltime_5;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___cooltime_5 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// walkchangetime -= Time.deltaTime;
		float L_15 = __this->___walkchangetime_8;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___walkchangetime_8 = ((float)il2cpp_codegen_subtract(L_15, L_16));
	}

IL_00bc:
	{
		// if (cooltime <= 0)
		float L_17 = __this->___cooltime_5;
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		// switch (SelectActionNumber(attackarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___attackarray_6;
		int32_t L_19;
		L_19 = BigKnight_ActionManager_SelectActionNumber_m9680A3C40985EE8AA9974FEAC3D07551117BFE12(__this, L_18, NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, (-1))))
		{
			case 0:
			{
				goto IL_0172;
			}
			case 1:
			{
				goto IL_00fa;
			}
			case 2:
			{
				goto IL_0118;
			}
			case 3:
			{
				goto IL_0136;
			}
			case 4:
			{
				goto IL_0154;
			}
		}
	}
	{
		goto IL_017d;
	}

IL_00fa:
	{
		// animator.SetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_21, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// cooltime = maxcooltime;
		float L_22 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_22;
		// break;
		goto IL_017d;
	}

IL_0118:
	{
		// animator.SetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_23, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// cooltime = maxcooltime;
		float L_24 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_24;
		// break;
		goto IL_017d;
	}

IL_0136:
	{
		// animator.SetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_25, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// cooltime = maxcooltime;
		float L_26 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_26;
		// break;
		goto IL_017d;
	}

IL_0154:
	{
		// animator.SetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_27, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// cooltime = maxcooltime;
		float L_28 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_28;
		// break;
		goto IL_017d;
	}

IL_0172:
	{
		// cooltime = 0;
		__this->___cooltime_5 = (0.0f);
	}

IL_017d:
	{
		// if (walkchangetime <= 0)
		float L_29 = __this->___walkchangetime_8;
		if ((!(((float)L_29) <= ((float)(0.0f)))))
		{
			goto IL_04bc;
		}
	}
	{
		// switch (SelectActionNumber(walkarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___walkarray_9;
		int32_t L_31;
		L_31 = BigKnight_ActionManager_SelectActionNumber_m9680A3C40985EE8AA9974FEAC3D07551117BFE12(__this, L_30, NULL);
		V_1 = L_31;
		int32_t L_32 = V_1;
		switch (L_32)
		{
			case 0:
			{
				goto IL_01bd;
			}
			case 1:
			{
				goto IL_01de;
			}
			case 2:
			{
				goto IL_0286;
			}
			case 3:
			{
				goto IL_032e;
			}
			case 4:
			{
				goto IL_0354;
			}
			case 5:
			{
				goto IL_03fc;
			}
		}
	}
	{
		goto IL_049b;
	}

IL_01bd:
	{
		// movederection = DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = BigKnight_ActionManager_DerectionControl_m96E9B68CC8E9E00AFB06AF1D77D6FE65CB972B6C(__this, L_35, NULL);
		__this->___movederection_14 = L_36;
		// break;
		goto IL_04b0;
	}

IL_01de:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		float L_40 = L_39.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		float L_43 = L_42.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_40, L_43))) > ((float)(0.100000001f)))))
		{
			goto IL_0225;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_44;
		goto IL_04b0;
	}

IL_0225:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = L_47.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		float L_51 = L_50.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_48, L_51))) < ((float)(-0.100000001f)))))
		{
			goto IL_026c;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_52;
		goto IL_04b0;
	}

IL_026c:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_53), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_53;
		// break;
		goto IL_04b0;
	}

IL_0286:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		float L_57 = L_56.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		float L_60 = L_59.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_57, L_60))) > ((float)(0.100000001f)))))
		{
			goto IL_02cd;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_61;
		goto IL_04b0;
	}

IL_02cd:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_63, NULL);
		float L_65 = L_64.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		float L_68 = L_67.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_65, L_68))) < ((float)(-0.100000001f)))))
		{
			goto IL_0314;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_69), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_69;
		goto IL_04b0;
	}

IL_0314:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_70), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_70;
		// break;
		goto IL_04b0;
	}

IL_032e:
	{
		// movederection = -DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_72, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		L_74 = BigKnight_ActionManager_DerectionControl_m96E9B68CC8E9E00AFB06AF1D77D6FE65CB972B6C(__this, L_73, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75;
		L_75 = Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline(L_74, NULL);
		__this->___movederection_14 = L_75;
		// break;
		goto IL_04b0;
	}

IL_0354:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_77, NULL);
		float L_79 = L_78.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
		float L_82 = L_81.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_79, L_82))) > ((float)(0.100000001f)))))
		{
			goto IL_039b;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_83), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_83;
		goto IL_04b0;
	}

IL_039b:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_85, NULL);
		float L_87 = L_86.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_88, NULL);
		float L_90 = L_89.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_87, L_90))) < ((float)(-0.100000001f)))))
		{
			goto IL_03e2;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_91), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_91;
		goto IL_04b0;
	}

IL_03e2:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_92), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_92;
		// break;
		goto IL_04b0;
	}

IL_03fc:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_94, NULL);
		float L_96 = L_95.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_97, NULL);
		float L_99 = L_98.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_96, L_99))) > ((float)(0.100000001f)))))
		{
			goto IL_0440;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_100), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_100;
		goto IL_04b0;
	}

IL_0440:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_102, NULL);
		float L_104 = L_103.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_105, NULL);
		float L_107 = L_106.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_104, L_107))) < ((float)(-0.100000001f)))))
		{
			goto IL_0484;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_108), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_108;
		goto IL_04b0;
	}

IL_0484:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_109), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_109;
		// break;
		goto IL_04b0;
	}

IL_049b:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110;
		memset((&L_110), 0, sizeof(L_110));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_110), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_110;
	}

IL_04b0:
	{
		// walkchangetime = maxwalkchangetime;
		float L_111 = __this->___maxwalkchangetime_7;
		__this->___walkchangetime_8 = L_111;
	}

IL_04bc:
	{
		// if(movederection == new Vector2(0, 0))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112 = __this->___movederection_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_113), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_114;
		L_114 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_112, L_113, NULL);
		if (!L_114)
		{
			goto IL_04eb;
		}
	}
	{
		// animator.SetBool("walk", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_115 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_115, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		goto IL_04fc;
	}

IL_04eb:
	{
		// animator.SetBool("walk", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_116 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_116, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)1, NULL);
	}

IL_04fc:
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Stand") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack1Pre") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_117 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_118;
		L_118 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_117, 0, NULL);
		V_0 = L_118;
		bool L_119;
		L_119 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_119)
		{
			goto IL_0568;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_120 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_121;
		L_121 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_120, 0, NULL);
		V_0 = L_121;
		bool L_122;
		L_122 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_122)
		{
			goto IL_0568;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_123 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_124;
		L_124 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_123, 0, NULL);
		V_0 = L_124;
		bool L_125;
		L_125 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral24BC57D4CEE81637B13B847FBE954406998A0004, NULL);
		if (L_125)
		{
			goto IL_0568;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_126 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_127;
		L_127 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_126, 0, NULL);
		V_0 = L_127;
		bool L_128;
		L_128 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_128)
		{
			goto IL_05cf;
		}
	}

IL_0568:
	{
		// if(target.transform.position.x > this.transform.position.x)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_129 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_129, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_130, NULL);
		float L_132 = L_131.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133;
		L_133 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_133, NULL);
		float L_135 = L_134.___x_2;
		if ((!(((float)L_132) > ((float)L_135))))
		{
			goto IL_05b0;
		}
	}
	{
		// this.transform.rotation = Quaternion.Euler(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_136;
		L_136 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_137;
		L_137 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_136, L_137, NULL);
		goto IL_05cf;
	}

IL_05b0:
	{
		// this.transform.rotation = Quaternion.Euler(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_138;
		L_138 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_139;
		L_139 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_138, L_139, NULL);
	}

IL_05cf:
	{
		// if(animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_140 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_141;
		L_141 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_140, 0, NULL);
		V_0 = L_141;
		bool L_142;
		L_142 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_142)
		{
			goto IL_0607;
		}
	}
	{
		// rb2d.velocity = movederection * walkspeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_143 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_144 = __this->___movederection_14;
		float L_145 = __this->___walkspeed_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_146;
		L_146 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_144, L_145, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_143, L_146, NULL);
		return;
	}

IL_0607:
	{
		// else if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack2Pre"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_147 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_148;
		L_148 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_147, 0, NULL);
		V_0 = L_148;
		bool L_149;
		L_149 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB52A5BCA0B1FE16E6C25AFA226866B06A94BFBBF, NULL);
		if (!L_149)
		{
			goto IL_0649;
		}
	}
	{
		// rb2d.velocity = transform.right * attack2prespeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_150 = __this->___rb2d_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_151;
		L_151 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_152;
		L_152 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_151, NULL);
		float L_153 = __this->___attack2prespeed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154;
		L_154 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_152, L_153, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_155;
		L_155 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_154, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_150, L_155, NULL);
		return;
	}

IL_0649:
	{
		// else if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack3Pre"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_156 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_157;
		L_157 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_156, 0, NULL);
		V_0 = L_157;
		bool L_158;
		L_158 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982, NULL);
		if (!L_158)
		{
			goto IL_0691;
		}
	}
	{
		// rb2d.velocity = DerectionControl(target.transform.position) * attack3prespeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_159 = __this->___rb2d_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_160 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_161;
		L_161 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_160, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_161, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_163;
		L_163 = BigKnight_ActionManager_DerectionControl_m96E9B68CC8E9E00AFB06AF1D77D6FE65CB972B6C(__this, L_162, NULL);
		float L_164 = __this->___attack3prespeed_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_165;
		L_165 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_163, L_164, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_159, L_165, NULL);
		return;
	}

IL_0691:
	{
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_166 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_167;
		memset((&L_167), 0, sizeof(L_167));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_167), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_166, L_167, NULL);
		// }
		return;
	}
}
// System.Int32 BigKnight_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BigKnight_ActionManager_SelectActionNumber_m9680A3C40985EE8AA9974FEAC3D07551117BFE12 (BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int Total = 0;//?D??x???v
		V_0 = 0;
		// int Number = 0;//???^?[?????
		V_1 = 0;
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___ActionWeight0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0018;
	}

IL_000a:
	{
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// Total += Elem;
		int32_t L_5 = V_0;
		int32_t L_6 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		// foreach (int Elem in ActionWeight)
		int32_t L_8 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// if (Total <= 0)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0024:
	{
		// float RandomPoint = Random.value * Total;
		float L_11;
		L_11 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		int32_t L_12 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply(L_11, ((float)L_12)));
		goto IL_0045;
	}

IL_0030:
	{
		// if (RandomPoint < ActionWeight[Number])
		float L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___ActionWeight0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((((float)L_13) < ((float)((float)L_17))))
		{
			goto IL_004b;
		}
	}
	{
		// RandomPoint -= ActionWeight[Number];
		float L_18 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___ActionWeight0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = ((float)il2cpp_codegen_subtract(L_18, ((float)L_22)));
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0045:
	{
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_24 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___ActionWeight0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_004b:
	{
		// return Number;
		int32_t L_26 = V_1;
		return L_26;
	}
}
// UnityEngine.GameObject BigKnight_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BigKnight_ActionManager_SearchedObject_mD5E87AF2F7EE07E90A0373A5585CC08A2BEB7B0D (BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* __this, String_t* ___targettag0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// float tmpDis = 0;           //?????p?????
		V_0 = (0.0f);
		// float nearDis = 0;          //???????I?u?W?F?N?g?????
		V_1 = (0.0f);
		// GameObject target = null; //?I?u?W?F?N?g
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		String_t* L_0 = ___targettag0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(L_0, NULL);
		V_3 = L_1;
		V_4 = 0;
		goto IL_0054;
	}

IL_001a:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_3;
		int32_t L_3 = V_4;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_5 = L_5;
		// tmpDis = Vector3.Distance(candidate.transform.position, this.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// if (nearDis == 0 || nearDis > tmpDis)
		float L_12 = V_1;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}
	{
		float L_13 = V_1;
		float L_14 = V_0;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_004e;
		}
	}

IL_0049:
	{
		// nearDis = tmpDis;
		float L_15 = V_0;
		V_1 = L_15;
		// target = candidate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_5;
		V_2 = L_16;
	}

IL_004e:
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0054:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		int32_t L_18 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// return target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		return L_20;
	}
}
// UnityEngine.Vector2 BigKnight_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BigKnight_ActionManager_DerectionControl_m96E9B68CC8E9E00AFB06AF1D77D6FE65CB972B6C (BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// XDefference = targetpos.x - this.transform.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetpos0;
		float L_1 = L_0.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_4));
		// YDefference = targetpos.y - this.transform.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetpos0;
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_9));
		// if (Mathf.Abs(XDefference) > 0.1f)
		float L_10 = V_0;
		float L_11;
		L_11 = fabsf(L_10);
		if ((!(((float)L_11) > ((float)(0.100000001f)))))
		{
			goto IL_004e;
		}
	}
	{
		// Cos = XDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16 = V_1;
		float L_17;
		L_17 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)))));
		V_2 = ((float)(L_12/L_17));
		goto IL_0054;
	}

IL_004e:
	{
		// Cos = 0.0f;
		V_2 = (0.0f);
	}

IL_0054:
	{
		// if (Mathf.Abs(YDefference) > 0.1f)
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) > ((float)(0.100000001f)))))
		{
			goto IL_0072;
		}
	}
	{
		// Sin = YDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_20 = V_1;
		float L_21 = V_0;
		float L_22 = V_0;
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25;
		L_25 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24)))));
		V_3 = ((float)(L_20/L_25));
		goto IL_0078;
	}

IL_0072:
	{
		// Sin = 0.0f;
		V_3 = (0.0f);
	}

IL_0078:
	{
		// return new Vector2(Cos, Sin);
		float L_26 = V_2;
		float L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void BigKnight_ActionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_ActionManager__ctor_mC4D65A56BB4344C05BB0D2FC40FFF51E25F019A4 (BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] attackarray = new int[4];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___attackarray_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackarray_6), (void*)L_0);
		// [SerializeField] private int[] walkarray = new int[6];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___walkarray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walkarray_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BigKnight_AnimationEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Start_m7DC6E800394981A73CAA7779F4C9CEF9BC95954D (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		BigKnight_AnimationEvents_AllFalse_mA0718835364098994586C0FD6FECE7BC85132A38(__this, NULL);
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___sesource_6;
		__this->___sesource_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_22), (void*)L_1);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Sporn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Sporn_mE9D842F481868986E3B7EAD8E5533D8E6B58CCD3 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		BigKnight_AnimationEvents_AllFalse_mA0718835364098994586C0FD6FECE7BC85132A38(__this, NULL);
		// if(sesource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = L_2->___sesource_6;
		__this->___sesource_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_22), (void*)L_3);
	}

IL_0024:
	{
		// sesource.PlayOneShot(sporn);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___sporn_16;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Down_mA45997917D7E792E6EB760D7C5C42D5D38ADB42C (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		BigKnight_AnimationEvents_AllFalse_mA0718835364098994586C0FD6FECE7BC85132A38(__this, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Dead_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Dead_1_m79CE49DDE5820430BFB23ADD6389074FC6FB6319 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		BigKnight_AnimationEvents_AllFalse_mA0718835364098994586C0FD6FECE7BC85132A38(__this, NULL);
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_17;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Dead_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Dead_2_m481F5A9E0AF96BFA412B945DFF4A80F7FD80A1C7 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_17;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Dead_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Dead_3_m44E77721397277F701470512FDF5CF4050EC8AC0 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ACTIONManager.instance.enemynum -= 1;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_0 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_1 = L_0;
		int32_t L_2 = L_1->___enemynum_38;
		L_1->___enemynum_38 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// if (ACTIONManager.instance.enemynum <= 0)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_3 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_4 = L_3->___enemynum_38;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// if (ACTIONManager.instance.wavenum == GameManager.instance.enemieslists.Count)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_5 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_6 = L_5->___wavenum_39;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD* L_8 = L_7->___enemieslists_9;
		int32_t L_9;
		L_9 = List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_inline(L_8, List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		// ACTIONManager.instance.StartCoroutine("Clear");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_10 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_10, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		goto IL_005c;
	}

IL_004c:
	{
		// ACTIONManager.instance.StartCoroutine("WaveStart");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_12 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_12, _stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E, NULL);
	}

IL_005c:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack1_1_m4562E5BC44EC69446E8780D754376BEC9A0DBDD0 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack1_2_m67B27102731BC7C791916FE23DB530A605B31A50 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// Instantiate(attack1object, attack1posobject.transform.position, this.transform.rotation);//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___attack1object_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___attack1posobject_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// sesource.PlayOneShot(attack1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___attack1_18;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack2_1_m41A93CA0DCAB072081465C8D11B6E346B6C9CCA8 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack2_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack2_2_mDF434B9BE54FCF0ECE7FCB7E013BC39D0240DDD0 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack2sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack2sprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack2bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack2bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack2_19;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack2_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack2_3_m3CCF0CE40EA9F808F57EBEBEDF5B2DDCE3B7EC52 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2sprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack2bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack3_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack3_1_m5C3B93823B3EAB02F8E80FDBA48DEF17281F4C2D (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack3rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack3_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack3_2_m6041EEC36403E2AAACE508B6766004830578E611 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack3rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack3sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack3sprend_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack3bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack3bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack3_20;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack3_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack3_3_m410B66C65DE877AACC66EFC5BB632DE5310510C5 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack3sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3sprend_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack3bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack3bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack4_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack4_1_mBDB8C2E1C8D9437F779E029C84470C4E102EFAA2 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack4rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack4rangesprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack4_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack4_2_m10168636727D04756D289888E49F0FDE7DC24F19 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack4rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack4rangesprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack4sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack4sprend_13;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack4bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack4bc2d_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack4_21;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::Attack4_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_Attack4_3_m6CB6511891993F3759E8A2336B1416CA41C2FD79 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack4sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack4sprend_13;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack4bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack4bc2d_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents_AllFalse_mA0718835364098994586C0FD6FECE7BC85132A38 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		// attack2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___attack2bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// attack3bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack3bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// attack4bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack4bc2d_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___attack1rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___attack2rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// attack3rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___attack3rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// attack4rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___attack4rangesprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)0, NULL);
		// attack2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___attack2sprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)0, NULL);
		// attack3sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___attack3sprend_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_8, (bool)0, NULL);
		// attack4sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___attack4sprend_13;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_AnimationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AnimationEvents__ctor_m93BBA12EACA10D613DF36DDF1A59B5AD15C52DF0 (BigKnight_AnimationEvents_tC813CD3D8EFC10F0BB9BC0AF0306BFB0D1165052* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BigKnight_AttackChecker::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AttackChecker_OnTriggerEnter2D_mE728C408B45C255E5F5B97632582D8B28EDADBC3 (BigKnight_AttackChecker_t15F8DD234CCDF5CD957AD276209E835F42ED8FDD* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = attackweight;
		BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		int32_t L_7 = __this->___attackweight_6;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void BigKnight_AttackChecker::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AttackChecker_OnTriggerExit2D_mB30311C718992412063257B8C150F7A8729F94F7 (BigKnight_AttackChecker_t15F8DD234CCDF5CD957AD276209E835F42ED8FDD* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = 0;
		BigKnight_ActionManager_t83361F7B852610B1A6B16626D18CE71012D17A36* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)0);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void BigKnight_AttackChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_AttackChecker__ctor_m64B7910DC2BCC7ADD2FA693C1C006A7C4CDBC2C5 (BigKnight_AttackChecker_t15F8DD234CCDF5CD957AD276209E835F42ED8FDD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void BigKnight_Damage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_Damage_Start_m657645728E6B065B95DCB8C62C0E6A5D5987329A (BigKnight_Damage_t95D0F669BD9162032FB8600934F00D6E885E84A4* __this, const RuntimeMethod* method) 
{
	{
		// hp = maxhp;
		int32_t L_0 = __this->___maxhp_4;
		__this->___hp_5 = L_0;
		// downpoint = maxhp / 2;
		int32_t L_1 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_1/2));
		// }
		return;
	}
}
// System.Void BigKnight_Damage::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_Damage_FixedUpdate_m3DDFC3FD07F486576529FDA27FE2613DC8F0BDDC (BigKnight_Damage_t95D0F669BD9162032FB8600934F00D6E885E84A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B6D5C2699060B9B494426CA72D3976C40161000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack2") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack3Pre") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Dead"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_2)
		{
			goto IL_006c;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral7B6D5C2699060B9B494426CA72D3976C40161000, NULL);
		if (L_5)
		{
			goto IL_006c;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_7;
		L_7 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_6, 0, NULL);
		V_0 = L_7;
		bool L_8;
		L_8 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982, NULL);
		if (L_8)
		{
			goto IL_006c;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_9 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_10;
		L_10 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_9, 0, NULL);
		V_0 = L_10;
		bool L_11;
		L_11 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		if (!L_11)
		{
			goto IL_0082;
		}
	}

IL_006c:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Muteki");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_13;
		L_13 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_12, L_13, NULL);
		return;
	}

IL_0082:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Charactor");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_15;
		L_15 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_Damage::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_Damage_Damage_m4C97B8A89F67F3F961CBE8A91E00C0AD4B734AA2 (BigKnight_Damage_t95D0F669BD9162032FB8600934F00D6E885E84A4* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hp -= value;
		int32_t L_0 = __this->___hp_5;
		int32_t L_1 = ___value0;
		__this->___hp_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// downpoint -= value;
		int32_t L_2 = __this->___downpoint_6;
		int32_t L_3 = ___value0;
		__this->___downpoint_6 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// damageeffectpos = new Vector3
		//                     (
		//                         baseposobject.transform.position.x + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.y + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.z
		//                     );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_add(L_7, L_8)), ((float)il2cpp_codegen_add(L_12, L_13)), L_17, /*hidden argument*/NULL);
		__this->___damageeffectpos_10 = L_18;
		// Instantiate(damageeffect, damageeffectpos, Quaternion.identity);//?G?t?F?N?g????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___damageeffect_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___damageeffectpos_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_19, L_20, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// if (downpoint <= 0)
		int32_t L_23 = __this->___downpoint_6;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_24, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_25, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// animator.ResetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_26, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// animator.ResetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_27, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// downpoint = maxhp / 2;
		int32_t L_28 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_28/2));
		// animator.Play("Down");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_29, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, NULL);
	}

IL_0104:
	{
		// if(hp <= 0)
		int32_t L_30 = __this->___hp_5;
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_0153;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_31, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_32, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// animator.ResetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_33, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// animator.ResetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_34, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// Death();
		BigKnight_Damage_Death_m226C1911A47F0FD4B2E6D9A595AD38EECC4AB6A4(__this, NULL);
	}

IL_0153:
	{
		// }
		return;
	}
}
// System.Void BigKnight_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_Damage_Death_m226C1911A47F0FD4B2E6D9A595AD38EECC4AB6A4 (BigKnight_Damage_t95D0F669BD9162032FB8600934F00D6E885E84A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.Play("Dead");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		// }
		return;
	}
}
// System.Void BigKnight_Damage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BigKnight_Damage__ctor_mD829528BF44CC2444FCBCA18619C4497A22B44B3 (BigKnight_Damage_t95D0F669BD9162032FB8600934F00D6E885E84A4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Demon_ActionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_ActionManager_Start_mD61CEEA7AA94D7150AD03F23978045AB1B516110 (Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// cooltime = maxcooltime;
		float L_0 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_0;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// for (int i = 0; i < attackarray.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		// attackarray[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___attackarray_6;
		int32_t L_2 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (int32_t)0);
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___attackarray_6;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Demon_ActionManager_SearchedObject_m58290FD1CD411714B169396B30E728EE0FA95D08(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_16), (void*)L_6);
		// }
		return;
	}
}
// System.Void Demon_ActionManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_ActionManager_FixedUpdate_m605FD7053D085A15012C417EF283454047F15442 (Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24BC57D4CEE81637B13B847FBE954406998A0004);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC9CCF8696A5BA9C3C1B3C366D8317EA2E580F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral673F14A92E41F4ADA5CF02E2E7F6FE08540C0C64);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93CD35E03C1A424B1F418957BABE8F734B1AD3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB52A5BCA0B1FE16E6C25AFA226866B06A94BFBBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// cooltime = maxcooltime;
		float L_2 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_2;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// animator.SetBool("walk",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_5, NULL);
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Demon_ActionManager_SearchedObject_m58290FD1CD411714B169396B30E728EE0FA95D08(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_16), (void*)L_6);
		return;
	}

IL_0062:
	{
		// if ((animator.GetCurrentAnimatorStateInfo(0).IsName("Stand")) ||
		//      animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		V_0 = L_8;
		bool L_9;
		L_9 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_9)
		{
			goto IL_0098;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_11;
		L_11 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_10, 0, NULL);
		V_0 = L_11;
		bool L_12;
		L_12 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_12)
		{
			goto IL_00bc;
		}
	}

IL_0098:
	{
		// cooltime -= Time.deltaTime;
		float L_13 = __this->___cooltime_5;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___cooltime_5 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// walkchangetime -= Time.deltaTime;
		float L_15 = __this->___walkchangetime_8;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___walkchangetime_8 = ((float)il2cpp_codegen_subtract(L_15, L_16));
	}

IL_00bc:
	{
		// if (cooltime <= 0)
		float L_17 = __this->___cooltime_5;
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		// switch (SelectActionNumber(attackarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___attackarray_6;
		int32_t L_19;
		L_19 = Demon_ActionManager_SelectActionNumber_m7995D4F06ADF28C0207244C80987307D8DCCC93A(__this, L_18, NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, (-1))))
		{
			case 0:
			{
				goto IL_0172;
			}
			case 1:
			{
				goto IL_00fa;
			}
			case 2:
			{
				goto IL_0118;
			}
			case 3:
			{
				goto IL_0136;
			}
			case 4:
			{
				goto IL_0154;
			}
		}
	}
	{
		goto IL_017d;
	}

IL_00fa:
	{
		// animator.SetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_21, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// cooltime = maxcooltime;
		float L_22 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_22;
		// break;
		goto IL_017d;
	}

IL_0118:
	{
		// animator.SetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_23, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// cooltime = maxcooltime;
		float L_24 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_24;
		// break;
		goto IL_017d;
	}

IL_0136:
	{
		// animator.SetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_25, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// cooltime = maxcooltime;
		float L_26 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_26;
		// break;
		goto IL_017d;
	}

IL_0154:
	{
		// animator.SetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_27, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// cooltime = maxcooltime;
		float L_28 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_28;
		// break;
		goto IL_017d;
	}

IL_0172:
	{
		// cooltime = 0;
		__this->___cooltime_5 = (0.0f);
	}

IL_017d:
	{
		// if (walkchangetime <= 0)
		float L_29 = __this->___walkchangetime_8;
		if ((!(((float)L_29) <= ((float)(0.0f)))))
		{
			goto IL_04bc;
		}
	}
	{
		// switch (SelectActionNumber(walkarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___walkarray_9;
		int32_t L_31;
		L_31 = Demon_ActionManager_SelectActionNumber_m7995D4F06ADF28C0207244C80987307D8DCCC93A(__this, L_30, NULL);
		V_1 = L_31;
		int32_t L_32 = V_1;
		switch (L_32)
		{
			case 0:
			{
				goto IL_01bd;
			}
			case 1:
			{
				goto IL_01de;
			}
			case 2:
			{
				goto IL_0286;
			}
			case 3:
			{
				goto IL_032e;
			}
			case 4:
			{
				goto IL_0354;
			}
			case 5:
			{
				goto IL_03fc;
			}
		}
	}
	{
		goto IL_049b;
	}

IL_01bd:
	{
		// movederection = DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = Demon_ActionManager_DerectionControl_m7394A11874EA87E54B0905DC3D1F796226D7DD43(__this, L_35, NULL);
		__this->___movederection_14 = L_36;
		// break;
		goto IL_04b0;
	}

IL_01de:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		float L_40 = L_39.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		float L_43 = L_42.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_40, L_43))) > ((float)(0.100000001f)))))
		{
			goto IL_0225;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_44;
		goto IL_04b0;
	}

IL_0225:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = L_47.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		float L_51 = L_50.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_48, L_51))) < ((float)(-0.100000001f)))))
		{
			goto IL_026c;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_52;
		goto IL_04b0;
	}

IL_026c:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_53), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_53;
		// break;
		goto IL_04b0;
	}

IL_0286:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		float L_57 = L_56.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		float L_60 = L_59.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_57, L_60))) > ((float)(0.100000001f)))))
		{
			goto IL_02cd;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_61;
		goto IL_04b0;
	}

IL_02cd:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_63, NULL);
		float L_65 = L_64.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		float L_68 = L_67.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_65, L_68))) < ((float)(-0.100000001f)))))
		{
			goto IL_0314;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_69), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_69;
		goto IL_04b0;
	}

IL_0314:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_70), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_70;
		// break;
		goto IL_04b0;
	}

IL_032e:
	{
		// movederection = -DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_72, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		L_74 = Demon_ActionManager_DerectionControl_m7394A11874EA87E54B0905DC3D1F796226D7DD43(__this, L_73, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75;
		L_75 = Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline(L_74, NULL);
		__this->___movederection_14 = L_75;
		// break;
		goto IL_04b0;
	}

IL_0354:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_77, NULL);
		float L_79 = L_78.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
		float L_82 = L_81.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_79, L_82))) > ((float)(0.100000001f)))))
		{
			goto IL_039b;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_83), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_83;
		goto IL_04b0;
	}

IL_039b:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_85, NULL);
		float L_87 = L_86.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_88, NULL);
		float L_90 = L_89.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_87, L_90))) < ((float)(-0.100000001f)))))
		{
			goto IL_03e2;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_91), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_91;
		goto IL_04b0;
	}

IL_03e2:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_92), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_92;
		// break;
		goto IL_04b0;
	}

IL_03fc:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_94, NULL);
		float L_96 = L_95.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_97, NULL);
		float L_99 = L_98.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_96, L_99))) > ((float)(0.100000001f)))))
		{
			goto IL_0440;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_100), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_100;
		goto IL_04b0;
	}

IL_0440:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_102, NULL);
		float L_104 = L_103.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_105, NULL);
		float L_107 = L_106.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_104, L_107))) < ((float)(-0.100000001f)))))
		{
			goto IL_0484;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_108), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_108;
		goto IL_04b0;
	}

IL_0484:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_109), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_109;
		// break;
		goto IL_04b0;
	}

IL_049b:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110;
		memset((&L_110), 0, sizeof(L_110));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_110), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_110;
	}

IL_04b0:
	{
		// walkchangetime = maxwalkchangetime;
		float L_111 = __this->___maxwalkchangetime_7;
		__this->___walkchangetime_8 = L_111;
	}

IL_04bc:
	{
		// if(movederection == new Vector2(0, 0))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112 = __this->___movederection_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_113), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_114;
		L_114 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_112, L_113, NULL);
		if (!L_114)
		{
			goto IL_04eb;
		}
	}
	{
		// animator.SetBool("walk", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_115 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_115, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		goto IL_04fc;
	}

IL_04eb:
	{
		// animator.SetBool("walk", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_116 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_116, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)1, NULL);
	}

IL_04fc:
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Stand") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack1Pre") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack2Pre") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack3Pre") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack4Pre") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack4") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_117 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_118;
		L_118 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_117, 0, NULL);
		V_0 = L_118;
		bool L_119;
		L_119 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_119)
		{
			goto IL_05dd;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_120 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_121;
		L_121 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_120, 0, NULL);
		V_0 = L_121;
		bool L_122;
		L_122 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_122)
		{
			goto IL_05dd;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_123 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_124;
		L_124 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_123, 0, NULL);
		V_0 = L_124;
		bool L_125;
		L_125 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral24BC57D4CEE81637B13B847FBE954406998A0004, NULL);
		if (L_125)
		{
			goto IL_05dd;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_126 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_127;
		L_127 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_126, 0, NULL);
		V_0 = L_127;
		bool L_128;
		L_128 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB52A5BCA0B1FE16E6C25AFA226866B06A94BFBBF, NULL);
		if (L_128)
		{
			goto IL_05dd;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_129 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_130;
		L_130 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_129, 0, NULL);
		V_0 = L_130;
		bool L_131;
		L_131 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982, NULL);
		if (L_131)
		{
			goto IL_05dd;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_132 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_133;
		L_133 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_132, 0, NULL);
		V_0 = L_133;
		bool L_134;
		L_134 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral673F14A92E41F4ADA5CF02E2E7F6FE08540C0C64, NULL);
		if (L_134)
		{
			goto IL_05dd;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_135 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_136;
		L_136 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_135, 0, NULL);
		V_0 = L_136;
		bool L_137;
		L_137 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral3CC9CCF8696A5BA9C3C1B3C366D8317EA2E580F1, NULL);
		if (L_137)
		{
			goto IL_05dd;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_138 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_139;
		L_139 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_138, 0, NULL);
		V_0 = L_139;
		bool L_140;
		L_140 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_140)
		{
			goto IL_0644;
		}
	}

IL_05dd:
	{
		// if(target.transform.position.x > this.transform.position.x)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_142;
		L_142 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_141, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143;
		L_143 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_142, NULL);
		float L_144 = L_143.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145;
		L_145 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_145, NULL);
		float L_147 = L_146.___x_2;
		if ((!(((float)L_144) > ((float)L_147))))
		{
			goto IL_0625;
		}
	}
	{
		// this.transform.rotation = Quaternion.Euler(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_148;
		L_148 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_149;
		L_149 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_148, L_149, NULL);
		goto IL_0644;
	}

IL_0625:
	{
		// this.transform.rotation = Quaternion.Euler(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_150;
		L_150 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_151;
		L_151 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_150, L_151, NULL);
	}

IL_0644:
	{
		// if(animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_152 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_153;
		L_153 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_152, 0, NULL);
		V_0 = L_153;
		bool L_154;
		L_154 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_154)
		{
			goto IL_067c;
		}
	}
	{
		// rb2d.velocity = movederection * walkspeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_155 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_156 = __this->___movederection_14;
		float L_157 = __this->___walkspeed_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_158;
		L_158 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_156, L_157, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_155, L_158, NULL);
		return;
	}

IL_067c:
	{
		// else if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack1"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_159 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_160;
		L_160 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_159, 0, NULL);
		V_0 = L_160;
		bool L_161;
		L_161 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral93CD35E03C1A424B1F418957BABE8F734B1AD3D4, NULL);
		if (!L_161)
		{
			goto IL_06be;
		}
	}
	{
		// rb2d.velocity = transform.right * attack1speed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_162 = __this->___rb2d_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_163;
		L_163 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_164;
		L_164 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_163, NULL);
		float L_165 = __this->___attack1speed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166;
		L_166 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_164, L_165, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_167;
		L_167 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_166, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_162, L_167, NULL);
		return;
	}

IL_06be:
	{
		// else if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack4"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_168 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_169;
		L_169 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_168, 0, NULL);
		V_0 = L_169;
		bool L_170;
		L_170 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral3CC9CCF8696A5BA9C3C1B3C366D8317EA2E580F1, NULL);
		if (!L_170)
		{
			goto IL_0706;
		}
	}
	{
		// rb2d.velocity = DerectionControl(target.transform.position) * attack4speed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_171 = __this->___rb2d_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_172 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_173;
		L_173 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_172, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_174;
		L_174 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_173, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_175;
		L_175 = Demon_ActionManager_DerectionControl_m7394A11874EA87E54B0905DC3D1F796226D7DD43(__this, L_174, NULL);
		float L_176 = __this->___attack4speed_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_177;
		L_177 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_175, L_176, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_171, L_177, NULL);
		return;
	}

IL_0706:
	{
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_178 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_179;
		memset((&L_179), 0, sizeof(L_179));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_179), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_178, L_179, NULL);
		// }
		return;
	}
}
// System.Int32 Demon_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Demon_ActionManager_SelectActionNumber_m7995D4F06ADF28C0207244C80987307D8DCCC93A (Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int Total = 0;//?D??x???v
		V_0 = 0;
		// int Number = 0;//???^?[?????
		V_1 = 0;
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___ActionWeight0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0018;
	}

IL_000a:
	{
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// Total += Elem;
		int32_t L_5 = V_0;
		int32_t L_6 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		// foreach (int Elem in ActionWeight)
		int32_t L_8 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// if (Total <= 0)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0024:
	{
		// float RandomPoint = Random.value * Total;
		float L_11;
		L_11 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		int32_t L_12 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply(L_11, ((float)L_12)));
		goto IL_0045;
	}

IL_0030:
	{
		// if (RandomPoint < ActionWeight[Number])
		float L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___ActionWeight0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((((float)L_13) < ((float)((float)L_17))))
		{
			goto IL_004b;
		}
	}
	{
		// RandomPoint -= ActionWeight[Number];
		float L_18 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___ActionWeight0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = ((float)il2cpp_codegen_subtract(L_18, ((float)L_22)));
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0045:
	{
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_24 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___ActionWeight0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_004b:
	{
		// return Number;
		int32_t L_26 = V_1;
		return L_26;
	}
}
// UnityEngine.GameObject Demon_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Demon_ActionManager_SearchedObject_m58290FD1CD411714B169396B30E728EE0FA95D08 (Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* __this, String_t* ___targettag0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// float tmpDis = 0;           //?????p?????
		V_0 = (0.0f);
		// float nearDis = 0;          //???????I?u?W?F?N?g?????
		V_1 = (0.0f);
		// GameObject target = null; //?I?u?W?F?N?g
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		String_t* L_0 = ___targettag0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(L_0, NULL);
		V_3 = L_1;
		V_4 = 0;
		goto IL_0054;
	}

IL_001a:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_3;
		int32_t L_3 = V_4;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_5 = L_5;
		// tmpDis = Vector3.Distance(candidate.transform.position, this.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// if (nearDis == 0 || nearDis > tmpDis)
		float L_12 = V_1;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}
	{
		float L_13 = V_1;
		float L_14 = V_0;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_004e;
		}
	}

IL_0049:
	{
		// nearDis = tmpDis;
		float L_15 = V_0;
		V_1 = L_15;
		// target = candidate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_5;
		V_2 = L_16;
	}

IL_004e:
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0054:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		int32_t L_18 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// return target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		return L_20;
	}
}
// UnityEngine.Vector2 Demon_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Demon_ActionManager_DerectionControl_m7394A11874EA87E54B0905DC3D1F796226D7DD43 (Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// XDefference = targetpos.x - this.transform.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetpos0;
		float L_1 = L_0.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_4));
		// YDefference = targetpos.y - this.transform.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetpos0;
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_9));
		// if (Mathf.Abs(XDefference) > 0.1f)
		float L_10 = V_0;
		float L_11;
		L_11 = fabsf(L_10);
		if ((!(((float)L_11) > ((float)(0.100000001f)))))
		{
			goto IL_004e;
		}
	}
	{
		// Cos = XDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16 = V_1;
		float L_17;
		L_17 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)))));
		V_2 = ((float)(L_12/L_17));
		goto IL_0054;
	}

IL_004e:
	{
		// Cos = 0.0f;
		V_2 = (0.0f);
	}

IL_0054:
	{
		// if (Mathf.Abs(YDefference) > 0.1f)
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) > ((float)(0.100000001f)))))
		{
			goto IL_0072;
		}
	}
	{
		// Sin = YDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_20 = V_1;
		float L_21 = V_0;
		float L_22 = V_0;
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25;
		L_25 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24)))));
		V_3 = ((float)(L_20/L_25));
		goto IL_0078;
	}

IL_0072:
	{
		// Sin = 0.0f;
		V_3 = (0.0f);
	}

IL_0078:
	{
		// return new Vector2(Cos, Sin);
		float L_26 = V_2;
		float L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void Demon_ActionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_ActionManager__ctor_m40489727F89E4472B47FB60408F87A4D550CAFF5 (Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] attackarray = new int[4];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___attackarray_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackarray_6), (void*)L_0);
		// [SerializeField] private int[] walkarray = new int[6];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___walkarray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walkarray_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Demon_AnimationEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Start_mA2F9EC16CA8E0D9C9A060ABB714E5A30533E2F28 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		Demon_AnimationEvents_AllFalse_m2865BBE37DD5008DE50526E221294ACBA65F2AD3(__this, NULL);
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___sesource_6;
		__this->___sesource_22 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_22), (void*)L_1);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Sporn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Sporn_m1BDD4931025922DF70C6BB042EFB744C7EE8F357 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		Demon_AnimationEvents_AllFalse_m2865BBE37DD5008DE50526E221294ACBA65F2AD3(__this, NULL);
		// if(sesource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = L_2->___sesource_6;
		__this->___sesource_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_22), (void*)L_3);
	}

IL_0024:
	{
		// sesource.PlayOneShot(sporn);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___sporn_16;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Down_m4C46BE8AED3F2623632C31CA29902C9AFE65B3C1 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		Demon_AnimationEvents_AllFalse_m2865BBE37DD5008DE50526E221294ACBA65F2AD3(__this, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Dead_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Dead_1_mAAF02384D37060210D8CFD8D1B666CEE735C167A (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		Demon_AnimationEvents_AllFalse_m2865BBE37DD5008DE50526E221294ACBA65F2AD3(__this, NULL);
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_17;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Dead_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Dead_2_mE6E1E1F30D4FBB0C50EC893BCD4F2B7D35BB1786 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_17;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Dead_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Dead_3_m89E452A499EBE39C5F9B1060502BDF0A160EB0F5 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ACTIONManager.instance.enemynum -= 1;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_0 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_1 = L_0;
		int32_t L_2 = L_1->___enemynum_38;
		L_1->___enemynum_38 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// if (ACTIONManager.instance.enemynum <= 0)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_3 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_4 = L_3->___enemynum_38;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// if (ACTIONManager.instance.wavenum == GameManager.instance.enemieslists.Count)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_5 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_6 = L_5->___wavenum_39;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD* L_8 = L_7->___enemieslists_9;
		int32_t L_9;
		L_9 = List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_inline(L_8, List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		// ACTIONManager.instance.StartCoroutine("Clear");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_10 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_10, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		goto IL_005c;
	}

IL_004c:
	{
		// ACTIONManager.instance.StartCoroutine("WaveStart");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_12 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_12, _stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E, NULL);
	}

IL_005c:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack1_1_mA1B02598A7E705EA837A563E0A65F2250FDF1096 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack1_2_mE1082C3371B1DF4C597B24E18E5ED67EF8920012 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack1sprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack1bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack1_18;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack1_3_m07CB2EB586456582CABA289A67A10D33453051F1 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1sprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack2_1_mA7227E16BFE732C3CD4F375396CBDEF7D71DCD58 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack2_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack2_2_mC10FC791B4D962DC07FF364CC569B4F89F3D6FA8 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(attack2object, attack2posobject.transform.position, this.transform.rotation);//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___attack2object_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___attack2posobject_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_3, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = __this->___attack2_19;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack2_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack2_3_m78D57F443F6C30F2AEF8F9625321BD0ECE9085F2 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// Instantiate(attack2object, attack2posobject.transform.position, this.transform.rotation);//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___attack2object_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___attack2posobject_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___attack2_19;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack3_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack3_1_m375331413612E4DC0EC4FAB4AA6D315F7B92F179 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// attack3rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack3_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack3_2_mBB3F69D48E34C8902098DA819CFC80EBD00F1788 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// attack3rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack3sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack3sprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack3bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack3bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack3_20;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack3_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack3_3_m3494EE11527FD56A0B32A79B3EAB831D2971FAC6 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// attack3sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3sprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack3bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack3bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack4_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack4_1_mC937F4536988983F7619C8CB0876482E7C2F068F (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// attack4rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack4rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack4_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack4_2_mB12B773C62A95A76F62FF1B6EC972BFA6F049E81 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Instantiate(attack4object, attack4posobject.transform.position, Quaternion.Euler(0, 0, 0));//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___attack4object_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___attack4posobject_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_3, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// sesource.PlayOneShot(attack4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_6 = __this->___sesource_22;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_7 = __this->___attack4_21;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::Attack4_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_Attack4_3_m57861E40C94DD458E8D5E85BC29CA4C1BD6C6D99 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// attack4rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack4rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents_AllFalse_m2865BBE37DD5008DE50526E221294ACBA65F2AD3 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// attack3bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack3bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// attack3rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___attack3rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// attack4rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___attack4rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___attack1sprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)0, NULL);
		// attack3sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___attack3sprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Demon_AnimationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AnimationEvents__ctor_m1FF99721F1EE5FB8F250A3D074E7750F5FB6FDB3 (Demon_AnimationEvents_tEE5639E87E2527E7E53CC6C04448393A9E829AC7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Demon_AttackChecker::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AttackChecker_OnTriggerEnter2D_mB09F71917EC0EAF56D00EAA1DB90FE58C761F7AD (Demon_AttackChecker_tC82E227DF9207DBCADC1B1BC2AF394FA2D06645F* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = attackweight;
		Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		int32_t L_7 = __this->___attackweight_6;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Demon_AttackChecker::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AttackChecker_OnTriggerExit2D_mD107B3CB3EC388A3915C3124AA67B67CAD68F759 (Demon_AttackChecker_tC82E227DF9207DBCADC1B1BC2AF394FA2D06645F* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = 0;
		Demon_ActionManager_t402A838EC6101947B8E7A6AE53BAF75EE1281C2A* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)0);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Demon_AttackChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_AttackChecker__ctor_m311D6A944096BCFD583393CFBF5223F57AC37C2B (Demon_AttackChecker_tC82E227DF9207DBCADC1B1BC2AF394FA2D06645F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Demon_Damage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_Damage_Start_mFBD11FFA861820C93077F9167C33B7CDA92CC795 (Demon_Damage_tDE239B55C4FCFECC857EC49C6B254A103883FA45* __this, const RuntimeMethod* method) 
{
	{
		// hp = maxhp;
		int32_t L_0 = __this->___maxhp_4;
		__this->___hp_5 = L_0;
		// downpoint = maxhp / 2;
		int32_t L_1 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_1/2));
		// }
		return;
	}
}
// System.Void Demon_Damage::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_Damage_FixedUpdate_m6C6BECA0FC73C95651FAA6D626C927EC0A8E8E44 (Demon_Damage_tDE239B55C4FCFECC857EC49C6B254A103883FA45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3CC9CCF8696A5BA9C3C1B3C366D8317EA2E580F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack4") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Dead"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral3CC9CCF8696A5BA9C3C1B3C366D8317EA2E580F1, NULL);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_7;
		L_7 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_6, 0, NULL);
		V_0 = L_7;
		bool L_8;
		L_8 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		if (!L_8)
		{
			goto IL_0067;
		}
	}

IL_0051:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Muteki");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_10;
		L_10 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_9, L_10, NULL);
		return;
	}

IL_0067:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Charactor");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_12;
		L_12 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void Demon_Damage::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_Damage_Damage_mBD16690C82672D9809D029BF8D8AFFB403F7C2DC (Demon_Damage_tDE239B55C4FCFECC857EC49C6B254A103883FA45* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hp -= value;
		int32_t L_0 = __this->___hp_5;
		int32_t L_1 = ___value0;
		__this->___hp_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// downpoint -= value;
		int32_t L_2 = __this->___downpoint_6;
		int32_t L_3 = ___value0;
		__this->___downpoint_6 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// damageeffectpos = new Vector3
		//                     (
		//                         baseposobject.transform.position.x + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.y + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.z
		//                     );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_add(L_7, L_8)), ((float)il2cpp_codegen_add(L_12, L_13)), L_17, /*hidden argument*/NULL);
		__this->___damageeffectpos_10 = L_18;
		// Instantiate(damageeffect, damageeffectpos, Quaternion.identity);//?G?t?F?N?g????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___damageeffect_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___damageeffectpos_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_19, L_20, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// if (downpoint <= 0)
		int32_t L_23 = __this->___downpoint_6;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_24, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_25, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// animator.ResetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_26, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// animator.ResetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_27, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// downpoint = maxhp / 2;
		int32_t L_28 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_28/2));
		// animator.Play("Down");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_29, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, NULL);
	}

IL_0104:
	{
		// if(hp <= 0)
		int32_t L_30 = __this->___hp_5;
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_0153;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_31, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_32, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// animator.ResetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_33, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// animator.ResetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_34, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// Death();
		Demon_Damage_Death_m0F5C0392CD08B29101687CD3454C1F320C7C9B38(__this, NULL);
	}

IL_0153:
	{
		// }
		return;
	}
}
// System.Void Demon_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_Damage_Death_m0F5C0392CD08B29101687CD3454C1F320C7C9B38 (Demon_Damage_tDE239B55C4FCFECC857EC49C6B254A103883FA45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.Play("Dead");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		// }
		return;
	}
}
// System.Void Demon_Damage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Demon_Damage__ctor_mC3FE35F7C776397EC9B8EED4CC05D1716A41DEFB (Demon_Damage_tDE239B55C4FCFECC857EC49C6B254A103883FA45* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FireWizard_ActionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_ActionManager_Start_m8A4584726EF74D513F84591E7BD5061E4F0BCADE (FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// cooltime = maxcooltime;
		float L_0 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_0;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// for (int i = 0; i < attackarray.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		// attackarray[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___attackarray_6;
		int32_t L_2 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (int32_t)0);
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___attackarray_6;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = FireWizard_ActionManager_SearchedObject_m43C5BFB2D4B2D5A408ED83C8861E0D72A8EAE68E(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_14), (void*)L_6);
		// }
		return;
	}
}
// System.Void FireWizard_ActionManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_ActionManager_FixedUpdate_m6349F41DAB6F40ABD4013EEEA7F92F3CD43DFB93 (FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// cooltime = maxcooltime;
		float L_2 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_2;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// animator.SetBool("walk",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_13;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_5, NULL);
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = FireWizard_ActionManager_SearchedObject_m43C5BFB2D4B2D5A408ED83C8861E0D72A8EAE68E(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_14), (void*)L_6);
		return;
	}

IL_0062:
	{
		// if ((animator.GetCurrentAnimatorStateInfo(0).IsName("Stand")) ||
		//      animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		V_0 = L_8;
		bool L_9;
		L_9 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_9)
		{
			goto IL_0098;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_11;
		L_11 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_10, 0, NULL);
		V_0 = L_11;
		bool L_12;
		L_12 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_12)
		{
			goto IL_00bc;
		}
	}

IL_0098:
	{
		// cooltime -= Time.deltaTime;
		float L_13 = __this->___cooltime_5;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___cooltime_5 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// walkchangetime -= Time.deltaTime;
		float L_15 = __this->___walkchangetime_8;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___walkchangetime_8 = ((float)il2cpp_codegen_subtract(L_15, L_16));
	}

IL_00bc:
	{
		// if (cooltime <= 0)
		float L_17 = __this->___cooltime_5;
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		// switch (SelectActionNumber(attackarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___attackarray_6;
		int32_t L_19;
		L_19 = FireWizard_ActionManager_SelectActionNumber_m78FC2D5497D7D4E39EC1B4193D65A9BB755BAB32(__this, L_18, NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, (-1))))
		{
			case 0:
			{
				goto IL_0128;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_010a;
			}
		}
	}
	{
		goto IL_0133;
	}

IL_00ec:
	{
		// animator.SetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_13;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_21, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// cooltime = maxcooltime;
		float L_22 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_22;
		// break;
		goto IL_0133;
	}

IL_010a:
	{
		// animator.SetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_13;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_23, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// cooltime = maxcooltime;
		float L_24 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_24;
		// break;
		goto IL_0133;
	}

IL_0128:
	{
		// cooltime = 0;
		__this->___cooltime_5 = (0.0f);
	}

IL_0133:
	{
		// if (walkchangetime <= 0)
		float L_25 = __this->___walkchangetime_8;
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_0472;
		}
	}
	{
		// switch (SelectActionNumber(walkarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___walkarray_9;
		int32_t L_27;
		L_27 = FireWizard_ActionManager_SelectActionNumber_m78FC2D5497D7D4E39EC1B4193D65A9BB755BAB32(__this, L_26, NULL);
		V_1 = L_27;
		int32_t L_28 = V_1;
		switch (L_28)
		{
			case 0:
			{
				goto IL_0173;
			}
			case 1:
			{
				goto IL_0194;
			}
			case 2:
			{
				goto IL_023c;
			}
			case 3:
			{
				goto IL_02e4;
			}
			case 4:
			{
				goto IL_030a;
			}
			case 5:
			{
				goto IL_03b2;
			}
		}
	}
	{
		goto IL_0451;
	}

IL_0173:
	{
		// movederection = DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = FireWizard_ActionManager_DerectionControl_m18ED17F8646567BA5C4ABEF6F7E1E47B1CA82763(__this, L_31, NULL);
		__this->___movederection_12 = L_32;
		// break;
		goto IL_0466;
	}

IL_0194:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		float L_36 = L_35.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_36, L_39))) > ((float)(0.100000001f)))))
		{
			goto IL_01db;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_40;
		goto IL_0466;
	}

IL_01db:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		float L_44 = L_43.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_44, L_47))) < ((float)(-0.100000001f)))))
		{
			goto IL_0222;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_48), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_48;
		goto IL_0466;
	}

IL_0222:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_49;
		// break;
		goto IL_0466;
	}

IL_023c:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		float L_56 = L_55.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_53, L_56))) > ((float)(0.100000001f)))))
		{
			goto IL_0283;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_57), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_57;
		goto IL_0466;
	}

IL_0283:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_59, NULL);
		float L_61 = L_60.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		float L_64 = L_63.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_61, L_64))) < ((float)(-0.100000001f)))))
		{
			goto IL_02ca;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_65), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_65;
		goto IL_0466;
	}

IL_02ca:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_66), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_66;
		// break;
		goto IL_0466;
	}

IL_02e4:
	{
		// movederection = -DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = FireWizard_ActionManager_DerectionControl_m18ED17F8646567BA5C4ABEF6F7E1E47B1CA82763(__this, L_69, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline(L_70, NULL);
		__this->___movederection_12 = L_71;
		// break;
		goto IL_0466;
	}

IL_030a:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_73, NULL);
		float L_75 = L_74.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		float L_78 = L_77.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_75, L_78))) > ((float)(0.100000001f)))))
		{
			goto IL_0351;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_79), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_79;
		goto IL_0466;
	}

IL_0351:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_81, NULL);
		float L_83 = L_82.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		float L_86 = L_85.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_83, L_86))) < ((float)(-0.100000001f)))))
		{
			goto IL_0398;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_87), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_87;
		goto IL_0466;
	}

IL_0398:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_88), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_88;
		// break;
		goto IL_0466;
	}

IL_03b2:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_90, NULL);
		float L_92 = L_91.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_93, NULL);
		float L_95 = L_94.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_92, L_95))) > ((float)(0.100000001f)))))
		{
			goto IL_03f6;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96;
		memset((&L_96), 0, sizeof(L_96));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_96), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_96;
		goto IL_0466;
	}

IL_03f6:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_97, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_98, NULL);
		float L_100 = L_99.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_101, NULL);
		float L_103 = L_102.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_100, L_103))) < ((float)(-0.100000001f)))))
		{
			goto IL_043a;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_104), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_104;
		goto IL_0466;
	}

IL_043a:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_105), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_105;
		// break;
		goto IL_0466;
	}

IL_0451:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_106), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_106;
	}

IL_0466:
	{
		// walkchangetime = maxwalkchangetime;
		float L_107 = __this->___maxwalkchangetime_7;
		__this->___walkchangetime_8 = L_107;
	}

IL_0472:
	{
		// if(movederection == new Vector2(0, 0))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108 = __this->___movederection_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_109), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_110;
		L_110 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_108, L_109, NULL);
		if (!L_110)
		{
			goto IL_04a1;
		}
	}
	{
		// animator.SetBool("walk", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_111 = __this->___animator_13;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_111, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		goto IL_04b2;
	}

IL_04a1:
	{
		// animator.SetBool("walk", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_112 = __this->___animator_13;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_112, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)1, NULL);
	}

IL_04b2:
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Stand") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_113 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_114;
		L_114 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_113, 0, NULL);
		V_0 = L_114;
		bool L_115;
		L_115 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_115)
		{
			goto IL_0503;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_116 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_117;
		L_117 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_116, 0, NULL);
		V_0 = L_117;
		bool L_118;
		L_118 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_118)
		{
			goto IL_0503;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_119 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_120;
		L_120 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_119, 0, NULL);
		V_0 = L_120;
		bool L_121;
		L_121 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_121)
		{
			goto IL_056a;
		}
	}

IL_0503:
	{
		// if(target.transform.position.x > this.transform.position.x)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_123, NULL);
		float L_125 = L_124.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_126, NULL);
		float L_128 = L_127.___x_2;
		if ((!(((float)L_125) > ((float)L_128))))
		{
			goto IL_054b;
		}
	}
	{
		// this.transform.rotation = Quaternion.Euler(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_130;
		L_130 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_129, L_130, NULL);
		goto IL_056a;
	}

IL_054b:
	{
		// this.transform.rotation = Quaternion.Euler(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131;
		L_131 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_132;
		L_132 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_131, L_132, NULL);
	}

IL_056a:
	{
		// if(animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_133 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_134;
		L_134 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_133, 0, NULL);
		V_0 = L_134;
		bool L_135;
		L_135 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_135)
		{
			goto IL_05a2;
		}
	}
	{
		// rb2d.velocity = movederection * walkspeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_136 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_137 = __this->___movederection_12;
		float L_138 = __this->___walkspeed_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_139;
		L_139 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_137, L_138, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_136, L_139, NULL);
		return;
	}

IL_05a2:
	{
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_140 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_141;
		memset((&L_141), 0, sizeof(L_141));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_141), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_140, L_141, NULL);
		// }
		return;
	}
}
// System.Int32 FireWizard_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FireWizard_ActionManager_SelectActionNumber_m78FC2D5497D7D4E39EC1B4193D65A9BB755BAB32 (FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int Total = 0;//?D??x???v
		V_0 = 0;
		// int Number = 0;//???^?[?????
		V_1 = 0;
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___ActionWeight0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0018;
	}

IL_000a:
	{
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// Total += Elem;
		int32_t L_5 = V_0;
		int32_t L_6 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		// foreach (int Elem in ActionWeight)
		int32_t L_8 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// if (Total <= 0)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0024:
	{
		// float RandomPoint = Random.value * Total;
		float L_11;
		L_11 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		int32_t L_12 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply(L_11, ((float)L_12)));
		goto IL_0045;
	}

IL_0030:
	{
		// if (RandomPoint < ActionWeight[Number])
		float L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___ActionWeight0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((((float)L_13) < ((float)((float)L_17))))
		{
			goto IL_004b;
		}
	}
	{
		// RandomPoint -= ActionWeight[Number];
		float L_18 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___ActionWeight0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = ((float)il2cpp_codegen_subtract(L_18, ((float)L_22)));
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0045:
	{
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_24 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___ActionWeight0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_004b:
	{
		// return Number;
		int32_t L_26 = V_1;
		return L_26;
	}
}
// UnityEngine.GameObject FireWizard_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* FireWizard_ActionManager_SearchedObject_m43C5BFB2D4B2D5A408ED83C8861E0D72A8EAE68E (FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* __this, String_t* ___targettag0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// float tmpDis = 0;           //?????p?????
		V_0 = (0.0f);
		// float nearDis = 0;          //???????I?u?W?F?N?g?????
		V_1 = (0.0f);
		// GameObject target = null; //?I?u?W?F?N?g
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		String_t* L_0 = ___targettag0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(L_0, NULL);
		V_3 = L_1;
		V_4 = 0;
		goto IL_0054;
	}

IL_001a:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_3;
		int32_t L_3 = V_4;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_5 = L_5;
		// tmpDis = Vector3.Distance(candidate.transform.position, this.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// if (nearDis == 0 || nearDis > tmpDis)
		float L_12 = V_1;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}
	{
		float L_13 = V_1;
		float L_14 = V_0;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_004e;
		}
	}

IL_0049:
	{
		// nearDis = tmpDis;
		float L_15 = V_0;
		V_1 = L_15;
		// target = candidate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_5;
		V_2 = L_16;
	}

IL_004e:
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0054:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		int32_t L_18 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// return target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		return L_20;
	}
}
// UnityEngine.Vector2 FireWizard_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FireWizard_ActionManager_DerectionControl_m18ED17F8646567BA5C4ABEF6F7E1E47B1CA82763 (FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// XDefference = targetpos.x - this.transform.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetpos0;
		float L_1 = L_0.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_4));
		// YDefference = targetpos.y - this.transform.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetpos0;
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_9));
		// if (Mathf.Abs(XDefference) > 0.1f)
		float L_10 = V_0;
		float L_11;
		L_11 = fabsf(L_10);
		if ((!(((float)L_11) > ((float)(0.100000001f)))))
		{
			goto IL_004e;
		}
	}
	{
		// Cos = XDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16 = V_1;
		float L_17;
		L_17 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)))));
		V_2 = ((float)(L_12/L_17));
		goto IL_0054;
	}

IL_004e:
	{
		// Cos = 0.0f;
		V_2 = (0.0f);
	}

IL_0054:
	{
		// if (Mathf.Abs(YDefference) > 0.1f)
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) > ((float)(0.100000001f)))))
		{
			goto IL_0072;
		}
	}
	{
		// Sin = YDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_20 = V_1;
		float L_21 = V_0;
		float L_22 = V_0;
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25;
		L_25 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24)))));
		V_3 = ((float)(L_20/L_25));
		goto IL_0078;
	}

IL_0072:
	{
		// Sin = 0.0f;
		V_3 = (0.0f);
	}

IL_0078:
	{
		// return new Vector2(Cos, Sin);
		float L_26 = V_2;
		float L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void FireWizard_ActionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_ActionManager__ctor_mB0DDBE0F3F9332A08CBF6ED0648499C886E29D7D (FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] attackarray = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___attackarray_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackarray_6), (void*)L_0);
		// [SerializeField] private int[] walkarray = new int[6];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___walkarray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walkarray_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FireWizard_AnimationEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Start_mEAC4B113952BA45AB876F1965830DB29AAF2D8FA (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		FireWizard_AnimationEvents_AllFalse_m8ED260C1D7CFC3BAA1978C5A366749973105F5DF(__this, NULL);
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___sesource_6;
		__this->___sesource_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_18), (void*)L_1);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Sporn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Sporn_m618BCE556E33FC2B9E34A81ACCE21BF7B42C7C40 (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		FireWizard_AnimationEvents_AllFalse_m8ED260C1D7CFC3BAA1978C5A366749973105F5DF(__this, NULL);
		// if(sesource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = L_2->___sesource_6;
		__this->___sesource_18 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_18), (void*)L_3);
	}

IL_0024:
	{
		// sesource.PlayOneShot(sporn);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___sesource_18;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___sporn_14;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Down_m12EDED257251091910ECF974F91B132E02AA4FDF (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		FireWizard_AnimationEvents_AllFalse_m8ED260C1D7CFC3BAA1978C5A366749973105F5DF(__this, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Dead_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Dead_1_m0965D761FFAEB3E497F9BEFAC72DE310F7A13032 (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		FireWizard_AnimationEvents_AllFalse_m8ED260C1D7CFC3BAA1978C5A366749973105F5DF(__this, NULL);
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_18;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_15;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Dead_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Dead_2_m9D807D5703EF0920603271E477FC325494AAE277 (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	{
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_18;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_15;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Dead_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Dead_3_m3EA5A1CBB4F188C31DCE28792462BA6DEBFB78BA (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ACTIONManager.instance.enemynum -= 1;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_0 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_1 = L_0;
		int32_t L_2 = L_1->___enemynum_38;
		L_1->___enemynum_38 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// if (ACTIONManager.instance.enemynum <= 0)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_3 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_4 = L_3->___enemynum_38;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// if (ACTIONManager.instance.wavenum == GameManager.instance.enemieslists.Count)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_5 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_6 = L_5->___wavenum_39;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD* L_8 = L_7->___enemieslists_9;
		int32_t L_9;
		L_9 = List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_inline(L_8, List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		// ACTIONManager.instance.StartCoroutine("Clear");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_10 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_10, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		goto IL_005c;
	}

IL_004c:
	{
		// ACTIONManager.instance.StartCoroutine("WaveStart");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_12 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_12, _stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E, NULL);
	}

IL_005c:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Attack1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Attack1_1_m76C41298B40A23D9F03E1800555C845A3DC167A7 (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_5;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Attack1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Attack1_2_m8A75414909F725E5CBB5B231AEF9CC868083176F (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_5;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack1sprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack1bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_18;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack1_16;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Attack1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Attack1_3_mFAC9D7599E0DAE0B80A0AB35F2CA23389D2AB838 (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	{
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1sprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Attack2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Attack2_1_mF1196AF46208A9AA8CEED8065BB28589E8D0D33D (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	{
		// attack2_1rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2_1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Attack2_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Attack2_2_mE35D6381061C1EE6BBFAFBA40CD2CBDD17CF1F27 (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attack2_1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2_1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___sesource_18;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___attack2_17;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_1, L_2, NULL);
		// Instantiate(attack2object, attack2_1posobject.transform.position, this.transform.rotation);//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___attack2object_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___attack2_1posobject_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_6, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// attack2_2rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___attack2_2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_10, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Attack2_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Attack2_3_m2E5313B0DE2605474CB7F653D9569289E88200DF (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attack2_2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2_2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___sesource_18;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___attack2_17;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_1, L_2, NULL);
		// Instantiate(attack2object, attack2_2posobject.transform.position, this.transform.rotation);//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___attack2object_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___attack2_2posobject_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_6, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// attack2_3rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_10 = __this->___attack2_3rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_10, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::Attack2_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_Attack2_4_m72DCD3EE5D7B9BCFA8CF7ACF82CC8E732B9C8ED7 (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attack2_3rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2_3rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___sesource_18;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___attack2_17;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_1, L_2, NULL);
		// Instantiate(attack2object, attack2_3posobject.transform.position, this.transform.rotation);//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___attack2object_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___attack2_3posobject_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_6, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents_AllFalse_m8ED260C1D7CFC3BAA1978C5A366749973105F5DF (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	{
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack1rangesprend_5;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)0, NULL);
		// attack2_1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___attack2_1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// attack2_2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___attack2_2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// attack2_3rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___attack2_3rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___attack1sprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_AnimationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AnimationEvents__ctor_mB33C35698BFC89F9CE54AD88A2182075C191120A (FireWizard_AnimationEvents_t4060873D4EABF71C0BA848A2B660E77A789A6FCE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FireWizard_AttackChecker::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AttackChecker_OnTriggerEnter2D_mA7F156D236409636F44119B03DA0D249438EFE74 (FireWizard_AttackChecker_t0E367196FF474950A069D1C825CD53A04E5F533D* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = attackweight;
		FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		int32_t L_7 = __this->___attackweight_6;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void FireWizard_AttackChecker::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AttackChecker_OnTriggerExit2D_m7FB35413409932E42802C8647F64C8F205347E43 (FireWizard_AttackChecker_t0E367196FF474950A069D1C825CD53A04E5F533D* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = 0;
		FireWizard_ActionManager_t465306DFDF8C89AC7BA34C398B3A39DDBB173FB4* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)0);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void FireWizard_AttackChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_AttackChecker__ctor_mB50D5C3F7F5D0BBCA6287C359B640774C2F84D62 (FireWizard_AttackChecker_t0E367196FF474950A069D1C825CD53A04E5F533D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FireWizard_Damage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_Damage_Start_mBAB9811E1F770D513AC07023BBAB2836AA3D4B73 (FireWizard_Damage_tD52DDE66EF3594FE0C79BFBDC131F5B246E8AD60* __this, const RuntimeMethod* method) 
{
	{
		// hp = maxhp;
		int32_t L_0 = __this->___maxhp_4;
		__this->___hp_5 = L_0;
		// downpoint = maxhp / 2;
		int32_t L_1 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_1/2));
		// }
		return;
	}
}
// System.Void FireWizard_Damage::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_Damage_FixedUpdate_m8F2BA671065F50E106929F558BE35A27A9C1F7F0 (FireWizard_Damage_tD52DDE66EF3594FE0C79BFBDC131F5B246E8AD60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Dead"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}

IL_0036:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Muteki");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_7;
		L_7 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_6, L_7, NULL);
		return;
	}

IL_004c:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Charactor");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_9;
		L_9 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_Damage::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_Damage_Damage_m8B64B6634885067C764DF5F151E875AE56AA5F01 (FireWizard_Damage_tD52DDE66EF3594FE0C79BFBDC131F5B246E8AD60* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hp -= value;
		int32_t L_0 = __this->___hp_5;
		int32_t L_1 = ___value0;
		__this->___hp_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// downpoint -= value;
		int32_t L_2 = __this->___downpoint_6;
		int32_t L_3 = ___value0;
		__this->___downpoint_6 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// damageeffectpos = new Vector3
		//                     (
		//                         baseposobject.transform.position.x + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.y + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.z
		//                     );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_add(L_7, L_8)), ((float)il2cpp_codegen_add(L_12, L_13)), L_17, /*hidden argument*/NULL);
		__this->___damageeffectpos_10 = L_18;
		// Instantiate(damageeffect, damageeffectpos, Quaternion.identity);//?G?t?F?N?g????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___damageeffect_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___damageeffectpos_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_19, L_20, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// if (downpoint <= 0)
		int32_t L_23 = __this->___downpoint_6;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_00e4;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_24, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_25, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// downpoint = maxhp / 2;
		int32_t L_26 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_26/2));
		// animator.Play("Down");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_27, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, NULL);
	}

IL_00e4:
	{
		// if(hp <= 0)
		int32_t L_28 = __this->___hp_5;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_29, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_30, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// Death();
		FireWizard_Damage_Death_m8785C10C88CA1FB6A0314323A45B72CD9787D341(__this, NULL);
	}

IL_0113:
	{
		// }
		return;
	}
}
// System.Void FireWizard_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_Damage_Death_m8785C10C88CA1FB6A0314323A45B72CD9787D341 (FireWizard_Damage_tD52DDE66EF3594FE0C79BFBDC131F5B246E8AD60* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.Play("Dead");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		// }
		return;
	}
}
// System.Void FireWizard_Damage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FireWizard_Damage__ctor_m79A86C48586E61DD727232E2CED58FF123235B4E (FireWizard_Damage_tD52DDE66EF3594FE0C79BFBDC131F5B246E8AD60* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Golem_ActionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_ActionManager_Start_m753F5E7C07C0034F8143AF15149DA73574090DB4 (Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// cooltime = maxcooltime;
		float L_0 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_0;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// for (int i = 0; i < attackarray.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		// attackarray[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___attackarray_6;
		int32_t L_2 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (int32_t)0);
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___attackarray_6;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Golem_ActionManager_SearchedObject_mAD7BE1365A4CE9C51F43DE293C1FE2F7F636A360(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_15), (void*)L_6);
		// }
		return;
	}
}
// System.Void Golem_ActionManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_ActionManager_FixedUpdate_m9C35AC6A3EB67ABBDB7243909903AAFEFB7D2E44 (Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB52A5BCA0B1FE16E6C25AFA226866B06A94BFBBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// cooltime = maxcooltime;
		float L_2 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_2;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// animator.SetBool("walk",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_14;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_5, NULL);
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Golem_ActionManager_SearchedObject_mAD7BE1365A4CE9C51F43DE293C1FE2F7F636A360(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_15), (void*)L_6);
		return;
	}

IL_0062:
	{
		// if ((animator.GetCurrentAnimatorStateInfo(0).IsName("Stand")) ||
		//      animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		V_0 = L_8;
		bool L_9;
		L_9 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_9)
		{
			goto IL_0098;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_11;
		L_11 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_10, 0, NULL);
		V_0 = L_11;
		bool L_12;
		L_12 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_12)
		{
			goto IL_00bc;
		}
	}

IL_0098:
	{
		// cooltime -= Time.deltaTime;
		float L_13 = __this->___cooltime_5;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___cooltime_5 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// walkchangetime -= Time.deltaTime;
		float L_15 = __this->___walkchangetime_8;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___walkchangetime_8 = ((float)il2cpp_codegen_subtract(L_15, L_16));
	}

IL_00bc:
	{
		// if (cooltime <= 0)
		float L_17 = __this->___cooltime_5;
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		// switch (SelectActionNumber(attackarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___attackarray_6;
		int32_t L_19;
		L_19 = Golem_ActionManager_SelectActionNumber_mEC1DE2EA54B2103AD0045A17610D4C021A994C18(__this, L_18, NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, (-1))))
		{
			case 0:
			{
				goto IL_0128;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_010a;
			}
		}
	}
	{
		goto IL_0133;
	}

IL_00ec:
	{
		// animator.SetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_14;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_21, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// cooltime = maxcooltime;
		float L_22 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_22;
		// break;
		goto IL_0133;
	}

IL_010a:
	{
		// animator.SetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_14;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_23, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// cooltime = maxcooltime;
		float L_24 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_24;
		// break;
		goto IL_0133;
	}

IL_0128:
	{
		// cooltime = 0;
		__this->___cooltime_5 = (0.0f);
	}

IL_0133:
	{
		// if (walkchangetime <= 0)
		float L_25 = __this->___walkchangetime_8;
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_0472;
		}
	}
	{
		// switch (SelectActionNumber(walkarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___walkarray_9;
		int32_t L_27;
		L_27 = Golem_ActionManager_SelectActionNumber_mEC1DE2EA54B2103AD0045A17610D4C021A994C18(__this, L_26, NULL);
		V_1 = L_27;
		int32_t L_28 = V_1;
		switch (L_28)
		{
			case 0:
			{
				goto IL_0173;
			}
			case 1:
			{
				goto IL_0194;
			}
			case 2:
			{
				goto IL_023c;
			}
			case 3:
			{
				goto IL_02e4;
			}
			case 4:
			{
				goto IL_030a;
			}
			case 5:
			{
				goto IL_03b2;
			}
		}
	}
	{
		goto IL_0451;
	}

IL_0173:
	{
		// movederection = DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Golem_ActionManager_DerectionControl_m1A2459D83C4A68E622347CD5DE297910CB498BDC(__this, L_31, NULL);
		__this->___movederection_13 = L_32;
		// break;
		goto IL_0466;
	}

IL_0194:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		float L_36 = L_35.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_36, L_39))) > ((float)(0.100000001f)))))
		{
			goto IL_01db;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_40;
		goto IL_0466;
	}

IL_01db:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		float L_44 = L_43.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_44, L_47))) < ((float)(-0.100000001f)))))
		{
			goto IL_0222;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_48), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_48;
		goto IL_0466;
	}

IL_0222:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_49;
		// break;
		goto IL_0466;
	}

IL_023c:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		float L_56 = L_55.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_53, L_56))) > ((float)(0.100000001f)))))
		{
			goto IL_0283;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_57), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_57;
		goto IL_0466;
	}

IL_0283:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_59, NULL);
		float L_61 = L_60.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		float L_64 = L_63.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_61, L_64))) < ((float)(-0.100000001f)))))
		{
			goto IL_02ca;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_65), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_65;
		goto IL_0466;
	}

IL_02ca:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_66), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_66;
		// break;
		goto IL_0466;
	}

IL_02e4:
	{
		// movederection = -DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = Golem_ActionManager_DerectionControl_m1A2459D83C4A68E622347CD5DE297910CB498BDC(__this, L_69, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline(L_70, NULL);
		__this->___movederection_13 = L_71;
		// break;
		goto IL_0466;
	}

IL_030a:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_73, NULL);
		float L_75 = L_74.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		float L_78 = L_77.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_75, L_78))) > ((float)(0.100000001f)))))
		{
			goto IL_0351;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_79), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_79;
		goto IL_0466;
	}

IL_0351:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_81, NULL);
		float L_83 = L_82.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		float L_86 = L_85.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_83, L_86))) < ((float)(-0.100000001f)))))
		{
			goto IL_0398;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_87), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_87;
		goto IL_0466;
	}

IL_0398:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_88), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_88;
		// break;
		goto IL_0466;
	}

IL_03b2:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_90, NULL);
		float L_92 = L_91.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_93, NULL);
		float L_95 = L_94.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_92, L_95))) > ((float)(0.100000001f)))))
		{
			goto IL_03f6;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96;
		memset((&L_96), 0, sizeof(L_96));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_96), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_96;
		goto IL_0466;
	}

IL_03f6:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_97, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_98, NULL);
		float L_100 = L_99.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_101, NULL);
		float L_103 = L_102.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_100, L_103))) < ((float)(-0.100000001f)))))
		{
			goto IL_043a;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_104), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_104;
		goto IL_0466;
	}

IL_043a:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_105), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_105;
		// break;
		goto IL_0466;
	}

IL_0451:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_106), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_106;
	}

IL_0466:
	{
		// walkchangetime = maxwalkchangetime;
		float L_107 = __this->___maxwalkchangetime_7;
		__this->___walkchangetime_8 = L_107;
	}

IL_0472:
	{
		// if(movederection == new Vector2(0, 0))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108 = __this->___movederection_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_109), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_110;
		L_110 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_108, L_109, NULL);
		if (!L_110)
		{
			goto IL_04a1;
		}
	}
	{
		// animator.SetBool("walk", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_111 = __this->___animator_14;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_111, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		goto IL_04b2;
	}

IL_04a1:
	{
		// animator.SetBool("walk", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_112 = __this->___animator_14;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_112, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)1, NULL);
	}

IL_04b2:
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Stand") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_113 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_114;
		L_114 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_113, 0, NULL);
		V_0 = L_114;
		bool L_115;
		L_115 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_115)
		{
			goto IL_0503;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_116 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_117;
		L_117 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_116, 0, NULL);
		V_0 = L_117;
		bool L_118;
		L_118 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_118)
		{
			goto IL_0503;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_119 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_120;
		L_120 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_119, 0, NULL);
		V_0 = L_120;
		bool L_121;
		L_121 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_121)
		{
			goto IL_056a;
		}
	}

IL_0503:
	{
		// if(target.transform.position.x > this.transform.position.x)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_123, NULL);
		float L_125 = L_124.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_126, NULL);
		float L_128 = L_127.___x_2;
		if ((!(((float)L_125) > ((float)L_128))))
		{
			goto IL_054b;
		}
	}
	{
		// this.transform.rotation = Quaternion.Euler(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_130;
		L_130 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_129, L_130, NULL);
		goto IL_056a;
	}

IL_054b:
	{
		// this.transform.rotation = Quaternion.Euler(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131;
		L_131 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_132;
		L_132 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_131, L_132, NULL);
	}

IL_056a:
	{
		// if(animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_133 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_134;
		L_134 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_133, 0, NULL);
		V_0 = L_134;
		bool L_135;
		L_135 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_135)
		{
			goto IL_05a2;
		}
	}
	{
		// rb2d.velocity = movederection * walkspeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_136 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_137 = __this->___movederection_13;
		float L_138 = __this->___walkspeed_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_139;
		L_139 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_137, L_138, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_136, L_139, NULL);
		return;
	}

IL_05a2:
	{
		// else if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack2Pre"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_140 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_141;
		L_141 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_140, 0, NULL);
		V_0 = L_141;
		bool L_142;
		L_142 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB52A5BCA0B1FE16E6C25AFA226866B06A94BFBBF, NULL);
		if (!L_142)
		{
			goto IL_05ea;
		}
	}
	{
		// rb2d.velocity = DerectionControl(target.transform.position) * attack2prespeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_143 = __this->___rb2d_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_144 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_145;
		L_145 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_144, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_146;
		L_146 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_145, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_147;
		L_147 = Golem_ActionManager_DerectionControl_m1A2459D83C4A68E622347CD5DE297910CB498BDC(__this, L_146, NULL);
		float L_148 = __this->___attack2prespeed_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_149;
		L_149 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_147, L_148, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_143, L_149, NULL);
		return;
	}

IL_05ea:
	{
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_150 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_151;
		memset((&L_151), 0, sizeof(L_151));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_151), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_150, L_151, NULL);
		// }
		return;
	}
}
// System.Int32 Golem_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Golem_ActionManager_SelectActionNumber_mEC1DE2EA54B2103AD0045A17610D4C021A994C18 (Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int Total = 0;//?D??x???v
		V_0 = 0;
		// int Number = 0;//???^?[?????
		V_1 = 0;
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___ActionWeight0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0018;
	}

IL_000a:
	{
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// Total += Elem;
		int32_t L_5 = V_0;
		int32_t L_6 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		// foreach (int Elem in ActionWeight)
		int32_t L_8 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// if (Total <= 0)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0024:
	{
		// float RandomPoint = Random.value * Total;
		float L_11;
		L_11 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		int32_t L_12 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply(L_11, ((float)L_12)));
		goto IL_0045;
	}

IL_0030:
	{
		// if (RandomPoint < ActionWeight[Number])
		float L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___ActionWeight0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((((float)L_13) < ((float)((float)L_17))))
		{
			goto IL_004b;
		}
	}
	{
		// RandomPoint -= ActionWeight[Number];
		float L_18 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___ActionWeight0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = ((float)il2cpp_codegen_subtract(L_18, ((float)L_22)));
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0045:
	{
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_24 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___ActionWeight0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_004b:
	{
		// return Number;
		int32_t L_26 = V_1;
		return L_26;
	}
}
// UnityEngine.GameObject Golem_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Golem_ActionManager_SearchedObject_mAD7BE1365A4CE9C51F43DE293C1FE2F7F636A360 (Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* __this, String_t* ___targettag0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// float tmpDis = 0;           //?????p?????
		V_0 = (0.0f);
		// float nearDis = 0;          //???????I?u?W?F?N?g?????
		V_1 = (0.0f);
		// GameObject target = null; //?I?u?W?F?N?g
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		String_t* L_0 = ___targettag0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(L_0, NULL);
		V_3 = L_1;
		V_4 = 0;
		goto IL_0054;
	}

IL_001a:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_3;
		int32_t L_3 = V_4;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_5 = L_5;
		// tmpDis = Vector3.Distance(candidate.transform.position, this.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// if (nearDis == 0 || nearDis > tmpDis)
		float L_12 = V_1;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}
	{
		float L_13 = V_1;
		float L_14 = V_0;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_004e;
		}
	}

IL_0049:
	{
		// nearDis = tmpDis;
		float L_15 = V_0;
		V_1 = L_15;
		// target = candidate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_5;
		V_2 = L_16;
	}

IL_004e:
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0054:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		int32_t L_18 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// return target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		return L_20;
	}
}
// UnityEngine.Vector2 Golem_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Golem_ActionManager_DerectionControl_m1A2459D83C4A68E622347CD5DE297910CB498BDC (Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// XDefference = targetpos.x - this.transform.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetpos0;
		float L_1 = L_0.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_4));
		// YDefference = targetpos.y - this.transform.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetpos0;
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_9));
		// if (Mathf.Abs(XDefference) > 0.1f)
		float L_10 = V_0;
		float L_11;
		L_11 = fabsf(L_10);
		if ((!(((float)L_11) > ((float)(0.100000001f)))))
		{
			goto IL_004e;
		}
	}
	{
		// Cos = XDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16 = V_1;
		float L_17;
		L_17 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)))));
		V_2 = ((float)(L_12/L_17));
		goto IL_0054;
	}

IL_004e:
	{
		// Cos = 0.0f;
		V_2 = (0.0f);
	}

IL_0054:
	{
		// if (Mathf.Abs(YDefference) > 0.1f)
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) > ((float)(0.100000001f)))))
		{
			goto IL_0072;
		}
	}
	{
		// Sin = YDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_20 = V_1;
		float L_21 = V_0;
		float L_22 = V_0;
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25;
		L_25 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24)))));
		V_3 = ((float)(L_20/L_25));
		goto IL_0078;
	}

IL_0072:
	{
		// Sin = 0.0f;
		V_3 = (0.0f);
	}

IL_0078:
	{
		// return new Vector2(Cos, Sin);
		float L_26 = V_2;
		float L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void Golem_ActionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_ActionManager__ctor_m4347626D90BFE51215922893928BD0DC20A8CFAE (Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] attackarray = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___attackarray_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackarray_6), (void*)L_0);
		// [SerializeField] private int[] walkarray = new int[6];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___walkarray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walkarray_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Golem_AnimationEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Start_m3527C5BF500F8B050E0D3108D64B0E6905A4ED9A (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		Golem_AnimationEvents_AllFalse_mC1796C8D555DDE44B41B1BC8A5676C47BF244355(__this, NULL);
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___sesource_6;
		__this->___sesource_17 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_17), (void*)L_1);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Sporn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Sporn_m657F1161ED2F9028F7A0762C4D4B099787ABEA4B (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		Golem_AnimationEvents_AllFalse_mC1796C8D555DDE44B41B1BC8A5676C47BF244355(__this, NULL);
		// if (sesource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_17;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = L_2->___sesource_6;
		__this->___sesource_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_17), (void*)L_3);
	}

IL_0024:
	{
		// sesource.PlayOneShot(sporn);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___sesource_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___sporn_13;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Down_m5A775AAE9FC43059A53F852FF8CA56A2D4C76C2B (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		Golem_AnimationEvents_AllFalse_mC1796C8D555DDE44B41B1BC8A5676C47BF244355(__this, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Dead_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Dead_1_mA28559309E5ECB81477DE6D050B733843B63A19D (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		Golem_AnimationEvents_AllFalse_mC1796C8D555DDE44B41B1BC8A5676C47BF244355(__this, NULL);
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_14;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Dead_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Dead_2_m322A832D9C18B0F22346DB80998F81BCD44CC181 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_14;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Dead_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Dead_3_mABB6875553D0EA957EDC6D842BEC4803FAFC8341 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ACTIONManager.instance.enemynum -= 1;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_0 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_1 = L_0;
		int32_t L_2 = L_1->___enemynum_38;
		L_1->___enemynum_38 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// if (ACTIONManager.instance.enemynum <= 0)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_3 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_4 = L_3->___enemynum_38;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// if (ACTIONManager.instance.wavenum == GameManager.instance.enemieslists.Count)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_5 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_6 = L_5->___wavenum_39;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD* L_8 = L_7->___enemieslists_9;
		int32_t L_9;
		L_9 = List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_inline(L_8, List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		// ACTIONManager.instance.StartCoroutine("Clear");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_10 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_10, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		goto IL_005c;
	}

IL_004c:
	{
		// ACTIONManager.instance.StartCoroutine("WaveStart");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_12 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_12, _stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E, NULL);
	}

IL_005c:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Attack1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Attack1_1_mC9A0F5D41C9F9B21858FAAA9C7A198028C6BBC4C (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// attack1_1rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1_1rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Attack1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Attack1_2_mF59A69E6879D1CAF918006F766FA9020918ABDEA (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// attack1_1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1_1rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1_1sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack1_1sprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack1_1bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack1_1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack1_15;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Attack1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Attack1_3_mB232697BDEBBBD2463538235200B2083AD5592D6 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// attack1_1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1_1sprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1_1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack1_1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// attack1_2rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___attack1_2rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Attack1_4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Attack1_4_m51167B0CDA2DBD02E76F1E8F8018624F53250F83 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// attack1_2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1_2rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1_2sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack1_2sprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack1_2bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack1_2bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack1_15;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Attack1_5()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Attack1_5_m7238E915A9CE368EBA71A10B159324CF7959CEB3 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// attack1_2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1_2sprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1_2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack1_2bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Attack2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Attack2_1_mDF78CA45AA5E0E9EBE7F4956C5D2ED769C223AE4 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Attack2_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Attack2_2_m86A05C379007CCC9B62AA5C37E08165FB18CEFA7 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack2sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack2sprend_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack2bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack2bc2d_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_17;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack2_16;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::Attack2_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_Attack2_3_mDEFDC89CEF60685C5B9511FC0E5A09754113A5E9 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// attack2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2sprend_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack2bc2d_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents_AllFalse_mC1796C8D555DDE44B41B1BC8A5676C47BF244355 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		// attack1_1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___attack1_1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// attack1_2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack1_2bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// attack2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack2bc2d_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// attack1_1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___attack1_1rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// attack1_2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___attack1_2rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___attack2rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// attack1_1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___attack1_1sprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)0, NULL);
		// attack1_2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___attack1_2sprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)0, NULL);
		// attack2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___attack2sprend_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Golem_AnimationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AnimationEvents__ctor_m7F43AF66D08E17784845FF998D88C8E8A9448FA4 (Golem_AnimationEvents_t0FEB7CBDC7E4B08ECA024475559440BE353A6BDD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Golem_AttackChecker::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AttackChecker_OnTriggerEnter2D_m83081DC786FA8CBC431A3B1AE26932EC12B01B4F (Golem_AttackChecker_tAA8D556A8DCB8E437965CE1DD478B9B2ABDC9FC2* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = attackweight;
		Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		int32_t L_7 = __this->___attackweight_6;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Golem_AttackChecker::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AttackChecker_OnTriggerExit2D_mE696DBD0A82BC8015D1696BE1BB6A9768F0E8AEB (Golem_AttackChecker_tAA8D556A8DCB8E437965CE1DD478B9B2ABDC9FC2* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = 0;
		Golem_ActionManager_t0D05171AAA252BA7C4BFC76C8B121DF7CA90315D* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)0);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Golem_AttackChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_AttackChecker__ctor_m6EA716FF118F387601682C9DB1E3C4D688C2846A (Golem_AttackChecker_tAA8D556A8DCB8E437965CE1DD478B9B2ABDC9FC2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Golem_Damage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_Damage_Start_m2AB5ACD3E5E8A517C03564C77863F952F5C62EEF (Golem_Damage_t0438D81D8BC7FEB989A76C10AF77767FD0D8F4FA* __this, const RuntimeMethod* method) 
{
	{
		// hp = maxhp;
		int32_t L_0 = __this->___maxhp_4;
		__this->___hp_5 = L_0;
		// downpoint = maxhp / 2;
		int32_t L_1 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_1/2));
		// }
		return;
	}
}
// System.Void Golem_Damage::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_Damage_FixedUpdate_m089C1FA2D9B9F6BCDF6D12876839CFC16BD5E10A (Golem_Damage_t0438D81D8BC7FEB989A76C10AF77767FD0D8F4FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Dead"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}

IL_0036:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Muteki");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_7;
		L_7 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_6, L_7, NULL);
		return;
	}

IL_004c:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Charactor");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_9;
		L_9 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Golem_Damage::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_Damage_Damage_mBA1D5463E3F20D2268C02D14B732678853277EAD (Golem_Damage_t0438D81D8BC7FEB989A76C10AF77767FD0D8F4FA* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hp -= value;
		int32_t L_0 = __this->___hp_5;
		int32_t L_1 = ___value0;
		__this->___hp_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// downpoint -= value;
		int32_t L_2 = __this->___downpoint_6;
		int32_t L_3 = ___value0;
		__this->___downpoint_6 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// damageeffectpos = new Vector3
		//                     (
		//                         baseposobject.transform.position.x + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.y + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.z
		//                     );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_add(L_7, L_8)), ((float)il2cpp_codegen_add(L_12, L_13)), L_17, /*hidden argument*/NULL);
		__this->___damageeffectpos_10 = L_18;
		// Instantiate(damageeffect, damageeffectpos, Quaternion.identity);//?G?t?F?N?g????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___damageeffect_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___damageeffectpos_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_19, L_20, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// if (downpoint <= 0)
		int32_t L_23 = __this->___downpoint_6;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_00e4;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_24, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_25, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// downpoint = maxhp / 2;
		int32_t L_26 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_26/2));
		// animator.Play("Down");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_27, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, NULL);
	}

IL_00e4:
	{
		// if(hp <= 0)
		int32_t L_28 = __this->___hp_5;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_29, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_30, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// Death();
		Golem_Damage_Death_mD1DC76BEE33FB85073144F26E323711B042D2601(__this, NULL);
	}

IL_0113:
	{
		// }
		return;
	}
}
// System.Void Golem_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_Damage_Death_mD1DC76BEE33FB85073144F26E323711B042D2601 (Golem_Damage_t0438D81D8BC7FEB989A76C10AF77767FD0D8F4FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.Play("Dead");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		// }
		return;
	}
}
// System.Void Golem_Damage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Golem_Damage__ctor_m0B9FDA0D82C6402003A25387E3D21A9F6E9A54DE (Golem_Damage_t0438D81D8BC7FEB989A76C10AF77767FD0D8F4FA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GolemKing_ActionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_ActionManager_Start_m7BA6C07C65E1B8FC0E5F76C6C232EAB02664B46A (GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// cooltime = maxcooltime;
		float L_0 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_0;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// for (int i = 0; i < attackarray.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		// attackarray[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___attackarray_6;
		int32_t L_2 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (int32_t)0);
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___attackarray_6;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GolemKing_ActionManager_SearchedObject_m795D33392DA2060A0606E41F33AF43A64FCB94C9(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_16), (void*)L_6);
		// }
		return;
	}
}
// System.Void GolemKing_ActionManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_ActionManager_FixedUpdate_m9576D2D0DFCDBA2176FE4DAA295CC432BD8C90C4 (GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E1FCD1DBB942FC3AFC42B5065D15C21381D53E2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B6D5C2699060B9B494426CA72D3976C40161000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// cooltime = maxcooltime;
		float L_2 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_2;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// animator.SetBool("walk",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_5, NULL);
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = GolemKing_ActionManager_SearchedObject_m795D33392DA2060A0606E41F33AF43A64FCB94C9(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_16), (void*)L_6);
		return;
	}

IL_0062:
	{
		// if ((animator.GetCurrentAnimatorStateInfo(0).IsName("Stand")) ||
		//      animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		V_0 = L_8;
		bool L_9;
		L_9 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_9)
		{
			goto IL_0098;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_11;
		L_11 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_10, 0, NULL);
		V_0 = L_11;
		bool L_12;
		L_12 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_12)
		{
			goto IL_00bc;
		}
	}

IL_0098:
	{
		// cooltime -= Time.deltaTime;
		float L_13 = __this->___cooltime_5;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___cooltime_5 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// walkchangetime -= Time.deltaTime;
		float L_15 = __this->___walkchangetime_8;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___walkchangetime_8 = ((float)il2cpp_codegen_subtract(L_15, L_16));
	}

IL_00bc:
	{
		// if (cooltime <= 0)
		float L_17 = __this->___cooltime_5;
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		// switch (SelectActionNumber(attackarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___attackarray_6;
		int32_t L_19;
		L_19 = GolemKing_ActionManager_SelectActionNumber_m6138EBC2C90BEC67CF1224E0096D96EE62600920(__this, L_18, NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, (-1))))
		{
			case 0:
			{
				goto IL_0172;
			}
			case 1:
			{
				goto IL_00fa;
			}
			case 2:
			{
				goto IL_0118;
			}
			case 3:
			{
				goto IL_0136;
			}
			case 4:
			{
				goto IL_0154;
			}
		}
	}
	{
		goto IL_017d;
	}

IL_00fa:
	{
		// animator.SetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_21, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// cooltime = maxcooltime;
		float L_22 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_22;
		// break;
		goto IL_017d;
	}

IL_0118:
	{
		// animator.SetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_23, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// cooltime = maxcooltime;
		float L_24 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_24;
		// break;
		goto IL_017d;
	}

IL_0136:
	{
		// animator.SetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_25, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// cooltime = maxcooltime;
		float L_26 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_26;
		// break;
		goto IL_017d;
	}

IL_0154:
	{
		// animator.SetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_27, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// cooltime = maxcooltime;
		float L_28 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_28;
		// break;
		goto IL_017d;
	}

IL_0172:
	{
		// cooltime = 0;
		__this->___cooltime_5 = (0.0f);
	}

IL_017d:
	{
		// if (walkchangetime <= 0)
		float L_29 = __this->___walkchangetime_8;
		if ((!(((float)L_29) <= ((float)(0.0f)))))
		{
			goto IL_04bc;
		}
	}
	{
		// switch (SelectActionNumber(walkarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___walkarray_9;
		int32_t L_31;
		L_31 = GolemKing_ActionManager_SelectActionNumber_m6138EBC2C90BEC67CF1224E0096D96EE62600920(__this, L_30, NULL);
		V_1 = L_31;
		int32_t L_32 = V_1;
		switch (L_32)
		{
			case 0:
			{
				goto IL_01bd;
			}
			case 1:
			{
				goto IL_01de;
			}
			case 2:
			{
				goto IL_0286;
			}
			case 3:
			{
				goto IL_032e;
			}
			case 4:
			{
				goto IL_0354;
			}
			case 5:
			{
				goto IL_03fc;
			}
		}
	}
	{
		goto IL_049b;
	}

IL_01bd:
	{
		// movederection = DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = GolemKing_ActionManager_DerectionControl_mA911FF78430B6A9E60D4F7C0DCAADB4024A0FECF(__this, L_35, NULL);
		__this->___movederection_14 = L_36;
		// break;
		goto IL_04b0;
	}

IL_01de:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		float L_40 = L_39.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		float L_43 = L_42.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_40, L_43))) > ((float)(0.100000001f)))))
		{
			goto IL_0225;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_44;
		goto IL_04b0;
	}

IL_0225:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = L_47.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		float L_51 = L_50.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_48, L_51))) < ((float)(-0.100000001f)))))
		{
			goto IL_026c;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_52;
		goto IL_04b0;
	}

IL_026c:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_53), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_53;
		// break;
		goto IL_04b0;
	}

IL_0286:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		float L_57 = L_56.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		float L_60 = L_59.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_57, L_60))) > ((float)(0.100000001f)))))
		{
			goto IL_02cd;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_61;
		goto IL_04b0;
	}

IL_02cd:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_63, NULL);
		float L_65 = L_64.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		float L_68 = L_67.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_65, L_68))) < ((float)(-0.100000001f)))))
		{
			goto IL_0314;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_69), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_69;
		goto IL_04b0;
	}

IL_0314:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_70), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_70;
		// break;
		goto IL_04b0;
	}

IL_032e:
	{
		// movederection = -DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_72, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		L_74 = GolemKing_ActionManager_DerectionControl_mA911FF78430B6A9E60D4F7C0DCAADB4024A0FECF(__this, L_73, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75;
		L_75 = Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline(L_74, NULL);
		__this->___movederection_14 = L_75;
		// break;
		goto IL_04b0;
	}

IL_0354:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_77, NULL);
		float L_79 = L_78.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
		float L_82 = L_81.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_79, L_82))) > ((float)(0.100000001f)))))
		{
			goto IL_039b;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_83), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_83;
		goto IL_04b0;
	}

IL_039b:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_85, NULL);
		float L_87 = L_86.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_88, NULL);
		float L_90 = L_89.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_87, L_90))) < ((float)(-0.100000001f)))))
		{
			goto IL_03e2;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_91), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_91;
		goto IL_04b0;
	}

IL_03e2:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_92), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_92;
		// break;
		goto IL_04b0;
	}

IL_03fc:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_94, NULL);
		float L_96 = L_95.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_97, NULL);
		float L_99 = L_98.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_96, L_99))) > ((float)(0.100000001f)))))
		{
			goto IL_0440;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_100), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_100;
		goto IL_04b0;
	}

IL_0440:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_102, NULL);
		float L_104 = L_103.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_105, NULL);
		float L_107 = L_106.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_104, L_107))) < ((float)(-0.100000001f)))))
		{
			goto IL_0484;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_108), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_108;
		goto IL_04b0;
	}

IL_0484:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_109), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_109;
		// break;
		goto IL_04b0;
	}

IL_049b:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110;
		memset((&L_110), 0, sizeof(L_110));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_110), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_110;
	}

IL_04b0:
	{
		// walkchangetime = maxwalkchangetime;
		float L_111 = __this->___maxwalkchangetime_7;
		__this->___walkchangetime_8 = L_111;
	}

IL_04bc:
	{
		// if(movederection == new Vector2(0, 0))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112 = __this->___movederection_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_113), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_114;
		L_114 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_112, L_113, NULL);
		if (!L_114)
		{
			goto IL_04eb;
		}
	}
	{
		// animator.SetBool("walk", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_115 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_115, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		goto IL_04fc;
	}

IL_04eb:
	{
		// animator.SetBool("walk", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_116 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_116, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)1, NULL);
	}

IL_04fc:
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Stand") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack2") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack3") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_117 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_118;
		L_118 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_117, 0, NULL);
		V_0 = L_118;
		bool L_119;
		L_119 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_119)
		{
			goto IL_0583;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_120 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_121;
		L_121 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_120, 0, NULL);
		V_0 = L_121;
		bool L_122;
		L_122 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_122)
		{
			goto IL_0583;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_123 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_124;
		L_124 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_123, 0, NULL);
		V_0 = L_124;
		bool L_125;
		L_125 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral7B6D5C2699060B9B494426CA72D3976C40161000, NULL);
		if (L_125)
		{
			goto IL_0583;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_126 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_127;
		L_127 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_126, 0, NULL);
		V_0 = L_127;
		bool L_128;
		L_128 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral3E1FCD1DBB942FC3AFC42B5065D15C21381D53E2, NULL);
		if (L_128)
		{
			goto IL_0583;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_129 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_130;
		L_130 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_129, 0, NULL);
		V_0 = L_130;
		bool L_131;
		L_131 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_131)
		{
			goto IL_05ea;
		}
	}

IL_0583:
	{
		// if(target.transform.position.x > this.transform.position.x)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133;
		L_133 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_132, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_134;
		L_134 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_133, NULL);
		float L_135 = L_134.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_136;
		L_136 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		L_137 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_136, NULL);
		float L_138 = L_137.___x_2;
		if ((!(((float)L_135) > ((float)L_138))))
		{
			goto IL_05cb;
		}
	}
	{
		// this.transform.rotation = Quaternion.Euler(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_139;
		L_139 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_140;
		L_140 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_139, L_140, NULL);
		goto IL_05ea;
	}

IL_05cb:
	{
		// this.transform.rotation = Quaternion.Euler(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_141;
		L_141 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_142;
		L_142 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_141, L_142, NULL);
	}

IL_05ea:
	{
		// if(animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_143 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_144;
		L_144 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_143, 0, NULL);
		V_0 = L_144;
		bool L_145;
		L_145 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_145)
		{
			goto IL_0622;
		}
	}
	{
		// rb2d.velocity = movederection * walkspeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_146 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_147 = __this->___movederection_14;
		float L_148 = __this->___walkspeed_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_149;
		L_149 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_147, L_148, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_146, L_149, NULL);
		return;
	}

IL_0622:
	{
		// else if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack2"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_150 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_151;
		L_151 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_150, 0, NULL);
		V_0 = L_151;
		bool L_152;
		L_152 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral7B6D5C2699060B9B494426CA72D3976C40161000, NULL);
		if (!L_152)
		{
			goto IL_06ee;
		}
	}
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_154;
		L_154 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_153, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_154, NULL);
		float L_156 = L_155.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_157;
		L_157 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_158;
		L_158 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_157, NULL);
		float L_159 = L_158.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_156, L_159))) > ((float)(0.100000001f)))))
		{
			goto IL_0689;
		}
	}
	{
		// rb2d.velocity = new Vector2(0, attack2speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_160 = __this->___rb2d_10;
		float L_161 = __this->___attack2speed_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_162;
		memset((&L_162), 0, sizeof(L_162));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_162), (0.0f), L_161, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_160, L_162, NULL);
		return;
	}

IL_0689:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_163 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_164;
		L_164 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_163, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_165;
		L_165 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_164, NULL);
		float L_166 = L_165.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_167;
		L_167 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_168;
		L_168 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_167, NULL);
		float L_169 = L_168.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_166, L_169))) < ((float)(-0.100000001f)))))
		{
			goto IL_06d3;
		}
	}
	{
		// rb2d.velocity = new Vector2(0, -attack2speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_170 = __this->___rb2d_10;
		float L_171 = __this->___attack2speed_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_172;
		memset((&L_172), 0, sizeof(L_172));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_172), (0.0f), ((-L_171)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_170, L_172, NULL);
		return;
	}

IL_06d3:
	{
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_173 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_174;
		memset((&L_174), 0, sizeof(L_174));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_174), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_173, L_174, NULL);
		return;
	}

IL_06ee:
	{
		// else if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack3"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_175 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_176;
		L_176 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_175, 0, NULL);
		V_0 = L_176;
		bool L_177;
		L_177 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral3E1FCD1DBB942FC3AFC42B5065D15C21381D53E2, NULL);
		if (!L_177)
		{
			goto IL_07ba;
		}
	}
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_178 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_179;
		L_179 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_178, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_180;
		L_180 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_179, NULL);
		float L_181 = L_180.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_182;
		L_182 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_182, NULL);
		float L_184 = L_183.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_181, L_184))) > ((float)(0.100000001f)))))
		{
			goto IL_0755;
		}
	}
	{
		// rb2d.velocity = new Vector2(0, attack3speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_185 = __this->___rb2d_10;
		float L_186 = __this->___attack3speed_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_187;
		memset((&L_187), 0, sizeof(L_187));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_187), (0.0f), L_186, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_185, L_187, NULL);
		return;
	}

IL_0755:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_188 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_189;
		L_189 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_188, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_190;
		L_190 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_189, NULL);
		float L_191 = L_190.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_192;
		L_192 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_193;
		L_193 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_192, NULL);
		float L_194 = L_193.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_191, L_194))) < ((float)(-0.100000001f)))))
		{
			goto IL_079f;
		}
	}
	{
		// rb2d.velocity = new Vector2(0, -attack3speed);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_195 = __this->___rb2d_10;
		float L_196 = __this->___attack3speed_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_197;
		memset((&L_197), 0, sizeof(L_197));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_197), (0.0f), ((-L_196)), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_195, L_197, NULL);
		return;
	}

IL_079f:
	{
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_198 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_199;
		memset((&L_199), 0, sizeof(L_199));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_199), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_198, L_199, NULL);
		return;
	}

IL_07ba:
	{
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_200 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_201;
		memset((&L_201), 0, sizeof(L_201));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_201), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_200, L_201, NULL);
		// }
		return;
	}
}
// System.Int32 GolemKing_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GolemKing_ActionManager_SelectActionNumber_m6138EBC2C90BEC67CF1224E0096D96EE62600920 (GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int Total = 0;//?D??x???v
		V_0 = 0;
		// int Number = 0;//???^?[?????
		V_1 = 0;
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___ActionWeight0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0018;
	}

IL_000a:
	{
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// Total += Elem;
		int32_t L_5 = V_0;
		int32_t L_6 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		// foreach (int Elem in ActionWeight)
		int32_t L_8 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// if (Total <= 0)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0024:
	{
		// float RandomPoint = Random.value * Total;
		float L_11;
		L_11 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		int32_t L_12 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply(L_11, ((float)L_12)));
		goto IL_0045;
	}

IL_0030:
	{
		// if (RandomPoint < ActionWeight[Number])
		float L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___ActionWeight0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((((float)L_13) < ((float)((float)L_17))))
		{
			goto IL_004b;
		}
	}
	{
		// RandomPoint -= ActionWeight[Number];
		float L_18 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___ActionWeight0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = ((float)il2cpp_codegen_subtract(L_18, ((float)L_22)));
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0045:
	{
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_24 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___ActionWeight0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_004b:
	{
		// return Number;
		int32_t L_26 = V_1;
		return L_26;
	}
}
// UnityEngine.GameObject GolemKing_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GolemKing_ActionManager_SearchedObject_m795D33392DA2060A0606E41F33AF43A64FCB94C9 (GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* __this, String_t* ___targettag0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// float tmpDis = 0;           //?????p?????
		V_0 = (0.0f);
		// float nearDis = 0;          //???????I?u?W?F?N?g?????
		V_1 = (0.0f);
		// GameObject target = null; //?I?u?W?F?N?g
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		String_t* L_0 = ___targettag0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(L_0, NULL);
		V_3 = L_1;
		V_4 = 0;
		goto IL_0054;
	}

IL_001a:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_3;
		int32_t L_3 = V_4;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_5 = L_5;
		// tmpDis = Vector3.Distance(candidate.transform.position, this.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// if (nearDis == 0 || nearDis > tmpDis)
		float L_12 = V_1;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}
	{
		float L_13 = V_1;
		float L_14 = V_0;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_004e;
		}
	}

IL_0049:
	{
		// nearDis = tmpDis;
		float L_15 = V_0;
		V_1 = L_15;
		// target = candidate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_5;
		V_2 = L_16;
	}

IL_004e:
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0054:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		int32_t L_18 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// return target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		return L_20;
	}
}
// UnityEngine.Vector2 GolemKing_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GolemKing_ActionManager_DerectionControl_mA911FF78430B6A9E60D4F7C0DCAADB4024A0FECF (GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// XDefference = targetpos.x - this.transform.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetpos0;
		float L_1 = L_0.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_4));
		// YDefference = targetpos.y - this.transform.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetpos0;
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_9));
		// if (Mathf.Abs(XDefference) > 0.1f)
		float L_10 = V_0;
		float L_11;
		L_11 = fabsf(L_10);
		if ((!(((float)L_11) > ((float)(0.100000001f)))))
		{
			goto IL_004e;
		}
	}
	{
		// Cos = XDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16 = V_1;
		float L_17;
		L_17 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)))));
		V_2 = ((float)(L_12/L_17));
		goto IL_0054;
	}

IL_004e:
	{
		// Cos = 0.0f;
		V_2 = (0.0f);
	}

IL_0054:
	{
		// if (Mathf.Abs(YDefference) > 0.1f)
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) > ((float)(0.100000001f)))))
		{
			goto IL_0072;
		}
	}
	{
		// Sin = YDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_20 = V_1;
		float L_21 = V_0;
		float L_22 = V_0;
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25;
		L_25 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24)))));
		V_3 = ((float)(L_20/L_25));
		goto IL_0078;
	}

IL_0072:
	{
		// Sin = 0.0f;
		V_3 = (0.0f);
	}

IL_0078:
	{
		// return new Vector2(Cos, Sin);
		float L_26 = V_2;
		float L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void GolemKing_ActionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_ActionManager__ctor_m5A2669B4D40911D521EEA4CB4CF2F92ED8ADEDED (GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] attackarray = new int[4];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___attackarray_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackarray_6), (void*)L_0);
		// [SerializeField] private int[] walkarray = new int[6];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___walkarray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walkarray_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GolemKing_AnimationEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Start_m96A573AA43643CBFD8B9DA903C154DBBFE138176 (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		GolemKing_AnimationEvents_AllFalse_m6AFD7DC10E5B3ECB3E3AC51F7E0B379DB1F3E76E(__this, NULL);
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___sesource_6;
		__this->___sesource_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_23), (void*)L_1);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Sporn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Sporn_mC9873EAFC1E88B00EB816D0970B06753BBE9781B (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		GolemKing_AnimationEvents_AllFalse_m6AFD7DC10E5B3ECB3E3AC51F7E0B379DB1F3E76E(__this, NULL);
		// if(sesource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = L_2->___sesource_6;
		__this->___sesource_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_23), (void*)L_3);
	}

IL_0024:
	{
		// sesource.PlayOneShot(sporn);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___sporn_17;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Down_m4552CEAAB94BF621553C7C2500FC43268CE6E04B (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		GolemKing_AnimationEvents_AllFalse_m6AFD7DC10E5B3ECB3E3AC51F7E0B379DB1F3E76E(__this, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Dead_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Dead_1_m07001D96EF2C5CDA67E961F2ED0ED14A38D2E8BF (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		GolemKing_AnimationEvents_AllFalse_m6AFD7DC10E5B3ECB3E3AC51F7E0B379DB1F3E76E(__this, NULL);
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_18;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Dead_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Dead_2_mEFCEDD3BB625817D37C109756531B2F4D80DE8AB (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_18;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Dead_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Dead_3_mD29F27B938F5DB9A11C63EA58C8B72EA1F6C6033 (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ACTIONManager.instance.enemynum -= 1;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_0 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_1 = L_0;
		int32_t L_2 = L_1->___enemynum_38;
		L_1->___enemynum_38 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// if (ACTIONManager.instance.enemynum <= 0)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_3 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_4 = L_3->___enemynum_38;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// if (ACTIONManager.instance.wavenum == GameManager.instance.enemieslists.Count)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_5 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_6 = L_5->___wavenum_39;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD* L_8 = L_7->___enemieslists_9;
		int32_t L_9;
		L_9 = List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_inline(L_8, List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		// ACTIONManager.instance.StartCoroutine("Clear");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_10 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_10, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		goto IL_005c;
	}

IL_004c:
	{
		// ACTIONManager.instance.StartCoroutine("WaveStart");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_12 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_12, _stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E, NULL);
	}

IL_005c:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Attack1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Attack1_1_m4E438DD257F03771A41AF77ACABD0D0CF5284C12 (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Attack1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Attack1_2_m59975B4907CCD502E5B4384A805C0E9B3C08DC6F (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack1sprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack1bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack1bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack1_19;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Attack1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Attack1_3_mCEC6466ED5639BD43BFAB6E43227B1A7B1EC9601 (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1sprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack1bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Attack2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Attack2_1_m90C685BC79F5071937644EDCE7246E1C5D06EDBD (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Attack2_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Attack2_2_m68F443415A5D3CC7F84D0DFA3B6845FBCB43E829 (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// Instantiate(attack2object, attack2posobject.transform.position, this.transform.rotation);//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___attack2object_14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___attack2posobject_11;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___attack2_20;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Attack3_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Attack3_1_mC80E90E89EFCE184CF03674F8277DB4313DBACD1 (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		// attack3rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Attack3_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Attack3_2_m0777D361A2BF7B85CC9F9A58BD71BC3C73931012 (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attack3rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// Instantiate(attack3object, attack3posobject.transform.position, this.transform.rotation);//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___attack3object_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___attack3posobject_12;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// sesource.PlayOneShot(attack3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_8 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_9 = __this->___attack3_21;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Attack4_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Attack4_1_mE0541F597DF8B182A5D60EBD8382C6D1FDA591BF (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		// attack4posobject.transform.position = actionmanager.target.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___attack4posobject_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* L_2 = __this->___actionmanager_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// attack4rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___attack4rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::Attack4_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_Attack4_2_mBBCC3134E0883BC2D733928205A48C4615ABEDF7 (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attack4rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack4rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// Instantiate(attack4object, attack4posobject.transform.position, Quaternion.Euler(0, 0, 0));//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___attack4object_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___attack4posobject_13;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// sesource.PlayOneShot(attack4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_8 = __this->___attack4_22;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents_AllFalse_m6AFD7DC10E5B3ECB3E3AC51F7E0B379DB1F3E76E (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___attack1bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)0, NULL);
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// attack3rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___attack3rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// attack4rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___attack4rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___attack1sprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_AnimationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AnimationEvents__ctor_m746E38927C8393C7E654AB37D5C32A08B3A6C26F (GolemKing_AnimationEvents_tF5C8445895F074C2207100441C9516496191DB79* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GolemKing_AttackChecker::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AttackChecker_OnTriggerEnter2D_mA6E49AFF352818A054C4977FDFB7875590D3657D (GolemKing_AttackChecker_tE0F5D98D1FC88290913100A5CD7D0B717F3B1C54* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = attackweight;
		GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		int32_t L_7 = __this->___attackweight_6;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void GolemKing_AttackChecker::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AttackChecker_OnTriggerExit2D_m022CBCE02D89CA085898D568ED531B5A34951A88 (GolemKing_AttackChecker_tE0F5D98D1FC88290913100A5CD7D0B717F3B1C54* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = 0;
		GolemKing_ActionManager_tB460110F67C23ABF03CB04B78C59A0FEAAAAAB29* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)0);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void GolemKing_AttackChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_AttackChecker__ctor_mAD7DB1F9E9E0DD1C74DBB8DA505900F3CCC0C062 (GolemKing_AttackChecker_tE0F5D98D1FC88290913100A5CD7D0B717F3B1C54* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GolemKing_Damage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_Damage_Start_m9F3CDE6CD8E126DF120B105F159A422A912F235D (GolemKing_Damage_tE4425C2DEB82569459B27954BA0567BF78E83CE6* __this, const RuntimeMethod* method) 
{
	{
		// hp = maxhp;
		int32_t L_0 = __this->___maxhp_4;
		__this->___hp_5 = L_0;
		// downpoint = maxhp / 2;
		int32_t L_1 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_1/2));
		// }
		return;
	}
}
// System.Void GolemKing_Damage::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_Damage_FixedUpdate_m5421A7CD6DF82BCEFC4D3EFAB4E684DCD3D69D52 (GolemKing_Damage_tE4425C2DEB82569459B27954BA0567BF78E83CE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Dead"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}

IL_0036:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Muteki");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_7;
		L_7 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_6, L_7, NULL);
		return;
	}

IL_004c:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Charactor");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_9;
		L_9 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_Damage::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_Damage_Damage_m6874DA4246C6F766416532173E45BF9AFC44CB0B (GolemKing_Damage_tE4425C2DEB82569459B27954BA0567BF78E83CE6* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hp -= value;
		int32_t L_0 = __this->___hp_5;
		int32_t L_1 = ___value0;
		__this->___hp_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// downpoint -= value;
		int32_t L_2 = __this->___downpoint_6;
		int32_t L_3 = ___value0;
		__this->___downpoint_6 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// damageeffectpos = new Vector3
		//                     (
		//                         baseposobject.transform.position.x + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.y + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.z
		//                     );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_add(L_7, L_8)), ((float)il2cpp_codegen_add(L_12, L_13)), L_17, /*hidden argument*/NULL);
		__this->___damageeffectpos_10 = L_18;
		// Instantiate(damageeffect, damageeffectpos, Quaternion.identity);//?G?t?F?N?g????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___damageeffect_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___damageeffectpos_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_19, L_20, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// if (downpoint <= 0)
		int32_t L_23 = __this->___downpoint_6;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_24, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_25, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// animator.ResetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_26, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// animator.ResetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_27, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// downpoint = maxhp / 2;
		int32_t L_28 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_28/2));
		// animator.Play("Down");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_29, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, NULL);
	}

IL_0104:
	{
		// if(hp <= 0)
		int32_t L_30 = __this->___hp_5;
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_0153;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_31, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_32, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// animator.ResetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_33, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// animator.ResetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_34, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// Death();
		GolemKing_Damage_Death_m0A5DCD897ACF774CF076A31DABA2B892BAA84738(__this, NULL);
	}

IL_0153:
	{
		// }
		return;
	}
}
// System.Void GolemKing_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_Damage_Death_m0A5DCD897ACF774CF076A31DABA2B892BAA84738 (GolemKing_Damage_tE4425C2DEB82569459B27954BA0567BF78E83CE6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.Play("Dead");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		// }
		return;
	}
}
// System.Void GolemKing_Damage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GolemKing_Damage__ctor_m1E6EA22D5BCCCE20023BB746DB2F069AB4B1D779 (GolemKing_Damage_tE4425C2DEB82569459B27954BA0567BF78E83CE6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HeavyLizard_ActionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_ActionManager_Start_m3AABD36AD386B66A566B8B7B903198B257E968AF (HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// cooltime = maxcooltime;
		float L_0 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_0;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// for (int i = 0; i < attackarray.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		// attackarray[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___attackarray_6;
		int32_t L_2 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (int32_t)0);
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___attackarray_6;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = HeavyLizard_ActionManager_SearchedObject_m4B0A87247290BF1CCE03B051575F1A5DF26794D1(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_14), (void*)L_6);
		// }
		return;
	}
}
// System.Void HeavyLizard_ActionManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_ActionManager_FixedUpdate_m3E702A241B01C6EA6823B7D76CD3C7CED2C9E9AA (HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// cooltime = maxcooltime;
		float L_2 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_2;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// animator.SetBool("walk",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_13;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_5, NULL);
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = HeavyLizard_ActionManager_SearchedObject_m4B0A87247290BF1CCE03B051575F1A5DF26794D1(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_14 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_14), (void*)L_6);
		return;
	}

IL_0062:
	{
		// if ((animator.GetCurrentAnimatorStateInfo(0).IsName("Stand")) ||
		//      animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		V_0 = L_8;
		bool L_9;
		L_9 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_9)
		{
			goto IL_0098;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_11;
		L_11 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_10, 0, NULL);
		V_0 = L_11;
		bool L_12;
		L_12 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_12)
		{
			goto IL_00bc;
		}
	}

IL_0098:
	{
		// cooltime -= Time.deltaTime;
		float L_13 = __this->___cooltime_5;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___cooltime_5 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// walkchangetime -= Time.deltaTime;
		float L_15 = __this->___walkchangetime_8;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___walkchangetime_8 = ((float)il2cpp_codegen_subtract(L_15, L_16));
	}

IL_00bc:
	{
		// if (cooltime <= 0)
		float L_17 = __this->___cooltime_5;
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		// switch (SelectActionNumber(attackarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___attackarray_6;
		int32_t L_19;
		L_19 = HeavyLizard_ActionManager_SelectActionNumber_mB7E874266C3A26B34B42CEF9E1D13B8227984C33(__this, L_18, NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, (-1))))
		{
			case 0:
			{
				goto IL_0128;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_010a;
			}
		}
	}
	{
		goto IL_0133;
	}

IL_00ec:
	{
		// animator.SetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_13;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_21, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// cooltime = maxcooltime;
		float L_22 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_22;
		// break;
		goto IL_0133;
	}

IL_010a:
	{
		// animator.SetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_13;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_23, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// cooltime = maxcooltime;
		float L_24 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_24;
		// break;
		goto IL_0133;
	}

IL_0128:
	{
		// cooltime = 0;
		__this->___cooltime_5 = (0.0f);
	}

IL_0133:
	{
		// if (walkchangetime <= 0)
		float L_25 = __this->___walkchangetime_8;
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_0472;
		}
	}
	{
		// switch (SelectActionNumber(walkarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___walkarray_9;
		int32_t L_27;
		L_27 = HeavyLizard_ActionManager_SelectActionNumber_mB7E874266C3A26B34B42CEF9E1D13B8227984C33(__this, L_26, NULL);
		V_1 = L_27;
		int32_t L_28 = V_1;
		switch (L_28)
		{
			case 0:
			{
				goto IL_0173;
			}
			case 1:
			{
				goto IL_0194;
			}
			case 2:
			{
				goto IL_023c;
			}
			case 3:
			{
				goto IL_02e4;
			}
			case 4:
			{
				goto IL_030a;
			}
			case 5:
			{
				goto IL_03b2;
			}
		}
	}
	{
		goto IL_0451;
	}

IL_0173:
	{
		// movederection = DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = HeavyLizard_ActionManager_DerectionControl_mADD60551CC9BD03985F15F95A42C0CCF16736E14(__this, L_31, NULL);
		__this->___movederection_12 = L_32;
		// break;
		goto IL_0466;
	}

IL_0194:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		float L_36 = L_35.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_36, L_39))) > ((float)(0.100000001f)))))
		{
			goto IL_01db;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_40;
		goto IL_0466;
	}

IL_01db:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		float L_44 = L_43.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_44, L_47))) < ((float)(-0.100000001f)))))
		{
			goto IL_0222;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_48), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_48;
		goto IL_0466;
	}

IL_0222:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_49;
		// break;
		goto IL_0466;
	}

IL_023c:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		float L_56 = L_55.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_53, L_56))) > ((float)(0.100000001f)))))
		{
			goto IL_0283;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_57), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_57;
		goto IL_0466;
	}

IL_0283:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_59, NULL);
		float L_61 = L_60.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		float L_64 = L_63.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_61, L_64))) < ((float)(-0.100000001f)))))
		{
			goto IL_02ca;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_65), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_65;
		goto IL_0466;
	}

IL_02ca:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_66), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_66;
		// break;
		goto IL_0466;
	}

IL_02e4:
	{
		// movederection = -DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = HeavyLizard_ActionManager_DerectionControl_mADD60551CC9BD03985F15F95A42C0CCF16736E14(__this, L_69, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline(L_70, NULL);
		__this->___movederection_12 = L_71;
		// break;
		goto IL_0466;
	}

IL_030a:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_73, NULL);
		float L_75 = L_74.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		float L_78 = L_77.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_75, L_78))) > ((float)(0.100000001f)))))
		{
			goto IL_0351;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_79), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_79;
		goto IL_0466;
	}

IL_0351:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_81, NULL);
		float L_83 = L_82.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		float L_86 = L_85.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_83, L_86))) < ((float)(-0.100000001f)))))
		{
			goto IL_0398;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_87), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_87;
		goto IL_0466;
	}

IL_0398:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_88), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_88;
		// break;
		goto IL_0466;
	}

IL_03b2:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_90, NULL);
		float L_92 = L_91.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_93, NULL);
		float L_95 = L_94.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_92, L_95))) > ((float)(0.100000001f)))))
		{
			goto IL_03f6;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96;
		memset((&L_96), 0, sizeof(L_96));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_96), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_96;
		goto IL_0466;
	}

IL_03f6:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_97, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_98, NULL);
		float L_100 = L_99.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_101, NULL);
		float L_103 = L_102.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_100, L_103))) < ((float)(-0.100000001f)))))
		{
			goto IL_043a;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_104), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_104;
		goto IL_0466;
	}

IL_043a:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_105), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_105;
		// break;
		goto IL_0466;
	}

IL_0451:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_106), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_12 = L_106;
	}

IL_0466:
	{
		// walkchangetime = maxwalkchangetime;
		float L_107 = __this->___maxwalkchangetime_7;
		__this->___walkchangetime_8 = L_107;
	}

IL_0472:
	{
		// if(movederection == new Vector2(0, 0))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108 = __this->___movederection_12;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_109), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_110;
		L_110 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_108, L_109, NULL);
		if (!L_110)
		{
			goto IL_04a1;
		}
	}
	{
		// animator.SetBool("walk", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_111 = __this->___animator_13;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_111, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		goto IL_04b2;
	}

IL_04a1:
	{
		// animator.SetBool("walk", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_112 = __this->___animator_13;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_112, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)1, NULL);
	}

IL_04b2:
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Stand") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_113 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_114;
		L_114 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_113, 0, NULL);
		V_0 = L_114;
		bool L_115;
		L_115 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_115)
		{
			goto IL_0503;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_116 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_117;
		L_117 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_116, 0, NULL);
		V_0 = L_117;
		bool L_118;
		L_118 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_118)
		{
			goto IL_0503;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_119 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_120;
		L_120 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_119, 0, NULL);
		V_0 = L_120;
		bool L_121;
		L_121 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_121)
		{
			goto IL_056a;
		}
	}

IL_0503:
	{
		// if(target.transform.position.x > this.transform.position.x)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = __this->___target_14;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_123;
		L_123 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_122, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_123, NULL);
		float L_125 = L_124.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_126, NULL);
		float L_128 = L_127.___x_2;
		if ((!(((float)L_125) > ((float)L_128))))
		{
			goto IL_054b;
		}
	}
	{
		// this.transform.rotation = Quaternion.Euler(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_130;
		L_130 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_129, L_130, NULL);
		goto IL_056a;
	}

IL_054b:
	{
		// this.transform.rotation = Quaternion.Euler(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_131;
		L_131 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_132;
		L_132 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_131, L_132, NULL);
	}

IL_056a:
	{
		// if(animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_133 = __this->___animator_13;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_134;
		L_134 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_133, 0, NULL);
		V_0 = L_134;
		bool L_135;
		L_135 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_135)
		{
			goto IL_05a2;
		}
	}
	{
		// rb2d.velocity = movederection * walkspeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_136 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_137 = __this->___movederection_12;
		float L_138 = __this->___walkspeed_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_139;
		L_139 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_137, L_138, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_136, L_139, NULL);
		return;
	}

IL_05a2:
	{
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_140 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_141;
		memset((&L_141), 0, sizeof(L_141));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_141), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_140, L_141, NULL);
		// }
		return;
	}
}
// System.Int32 HeavyLizard_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HeavyLizard_ActionManager_SelectActionNumber_mB7E874266C3A26B34B42CEF9E1D13B8227984C33 (HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int Total = 0;//?D??x???v
		V_0 = 0;
		// int Number = 0;//???^?[?????
		V_1 = 0;
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___ActionWeight0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0018;
	}

IL_000a:
	{
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// Total += Elem;
		int32_t L_5 = V_0;
		int32_t L_6 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		// foreach (int Elem in ActionWeight)
		int32_t L_8 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// if (Total <= 0)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0024:
	{
		// float RandomPoint = Random.value * Total;
		float L_11;
		L_11 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		int32_t L_12 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply(L_11, ((float)L_12)));
		goto IL_0045;
	}

IL_0030:
	{
		// if (RandomPoint < ActionWeight[Number])
		float L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___ActionWeight0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((((float)L_13) < ((float)((float)L_17))))
		{
			goto IL_004b;
		}
	}
	{
		// RandomPoint -= ActionWeight[Number];
		float L_18 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___ActionWeight0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = ((float)il2cpp_codegen_subtract(L_18, ((float)L_22)));
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0045:
	{
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_24 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___ActionWeight0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_004b:
	{
		// return Number;
		int32_t L_26 = V_1;
		return L_26;
	}
}
// UnityEngine.GameObject HeavyLizard_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* HeavyLizard_ActionManager_SearchedObject_m4B0A87247290BF1CCE03B051575F1A5DF26794D1 (HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* __this, String_t* ___targettag0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// float tmpDis = 0;           //?????p?????
		V_0 = (0.0f);
		// float nearDis = 0;          //???????I?u?W?F?N?g?????
		V_1 = (0.0f);
		// GameObject target = null; //?I?u?W?F?N?g
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		String_t* L_0 = ___targettag0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(L_0, NULL);
		V_3 = L_1;
		V_4 = 0;
		goto IL_0054;
	}

IL_001a:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_3;
		int32_t L_3 = V_4;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_5 = L_5;
		// tmpDis = Vector3.Distance(candidate.transform.position, this.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// if (nearDis == 0 || nearDis > tmpDis)
		float L_12 = V_1;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}
	{
		float L_13 = V_1;
		float L_14 = V_0;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_004e;
		}
	}

IL_0049:
	{
		// nearDis = tmpDis;
		float L_15 = V_0;
		V_1 = L_15;
		// target = candidate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_5;
		V_2 = L_16;
	}

IL_004e:
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0054:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		int32_t L_18 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// return target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		return L_20;
	}
}
// UnityEngine.Vector2 HeavyLizard_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 HeavyLizard_ActionManager_DerectionControl_mADD60551CC9BD03985F15F95A42C0CCF16736E14 (HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// XDefference = targetpos.x - this.transform.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetpos0;
		float L_1 = L_0.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_4));
		// YDefference = targetpos.y - this.transform.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetpos0;
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_9));
		// if (Mathf.Abs(XDefference) > 0.1f)
		float L_10 = V_0;
		float L_11;
		L_11 = fabsf(L_10);
		if ((!(((float)L_11) > ((float)(0.100000001f)))))
		{
			goto IL_004e;
		}
	}
	{
		// Cos = XDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16 = V_1;
		float L_17;
		L_17 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)))));
		V_2 = ((float)(L_12/L_17));
		goto IL_0054;
	}

IL_004e:
	{
		// Cos = 0.0f;
		V_2 = (0.0f);
	}

IL_0054:
	{
		// if (Mathf.Abs(YDefference) > 0.1f)
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) > ((float)(0.100000001f)))))
		{
			goto IL_0072;
		}
	}
	{
		// Sin = YDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_20 = V_1;
		float L_21 = V_0;
		float L_22 = V_0;
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25;
		L_25 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24)))));
		V_3 = ((float)(L_20/L_25));
		goto IL_0078;
	}

IL_0072:
	{
		// Sin = 0.0f;
		V_3 = (0.0f);
	}

IL_0078:
	{
		// return new Vector2(Cos, Sin);
		float L_26 = V_2;
		float L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void HeavyLizard_ActionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_ActionManager__ctor_mD0FC13245EB4D47DE8BB94A555FC05D85200C29D (HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] attackarray = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___attackarray_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackarray_6), (void*)L_0);
		// [SerializeField] private int[] walkarray = new int[6];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___walkarray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walkarray_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HeavyLizard_AnimationEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Start_mFC5CC614B1D9C58471F9D336EFD915E7EC337FF1 (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		HeavyLizard_AnimationEvents_AllFalse_m8043DC2843491A85C3F131209079133B10FD4C0B(__this, NULL);
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___sesource_6;
		__this->___sesource_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_14), (void*)L_1);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Sporn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Sporn_mFF69F12CA4D98309C5A5EEEE4930F0DF7BB43347 (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		HeavyLizard_AnimationEvents_AllFalse_m8043DC2843491A85C3F131209079133B10FD4C0B(__this, NULL);
		// if (sesource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = L_2->___sesource_6;
		__this->___sesource_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_14), (void*)L_3);
	}

IL_0024:
	{
		// sesource.PlayOneShot(sporn);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___sesource_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___sporn_10;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Down_m97F1D9A27E6A5E97549A24DC2A2F0892351A822D (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		HeavyLizard_AnimationEvents_AllFalse_m8043DC2843491A85C3F131209079133B10FD4C0B(__this, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Dead_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Dead_1_m8C68E24865FBD2E0FD0B8711F9970FAB8247FA22 (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		HeavyLizard_AnimationEvents_AllFalse_m8043DC2843491A85C3F131209079133B10FD4C0B(__this, NULL);
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_11;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Dead_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Dead_2_m79BE9BBD014ED1FA3E7C806CEE206B7BEA40EAAA (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_11;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Dead_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Dead_3_m19BCC12E50C5BA31AD1073EA9D843A147034EE85 (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ACTIONManager.instance.enemynum -= 1;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_0 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_1 = L_0;
		int32_t L_2 = L_1->___enemynum_38;
		L_1->___enemynum_38 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// if (ACTIONManager.instance.enemynum <= 0)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_3 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_4 = L_3->___enemynum_38;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// if (ACTIONManager.instance.wavenum == GameManager.instance.enemieslists.Count)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_5 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_6 = L_5->___wavenum_39;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD* L_8 = L_7->___enemieslists_9;
		int32_t L_9;
		L_9 = List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_inline(L_8, List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		// ACTIONManager.instance.StartCoroutine("Clear");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_10 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_10, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		goto IL_005c;
	}

IL_004c:
	{
		// ACTIONManager.instance.StartCoroutine("WaveStart");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_12 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_12, _stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E, NULL);
	}

IL_005c:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Attack1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Attack1_1_mD14FF5D9E441C871015F68B498D909F785A08944 (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Attack1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Attack1_2_m3905751659812D303488C9FFE88000C8EF09DA1D (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack1sprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack1bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack1_12;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Attack1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Attack1_3_mA6B509FD2E9BD18DF40F5BB6551E2EAF9FF188C5 (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1sprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Attack2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Attack2_1_m1AB9EC72C3B1006AB1E8942298886ECAF815B8DA (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Attack2_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Attack2_2_m3AA3D93D054A2C5630DF118CF6CE2DC9AB707FB7 (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack2sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack2sprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack2bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack2bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack2_13;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::Attack2_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_Attack2_3_m461C4CC8665ED1A3F09E256080CFBC80D2CF7F12 (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		// attack2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2sprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack2bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents_AllFalse_m8043DC2843491A85C3F131209079133B10FD4C0B (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// attack2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack2bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___attack1sprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// attack2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___attack2sprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_AnimationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AnimationEvents__ctor_mCF65774BA7ED47BF10EF248142A5287289A60F8F (HeavyLizard_AnimationEvents_tEDC9AB77A96C0A71A5BD178EB731211F1667DB76* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HeavyLizard_AttackChecker::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AttackChecker_OnTriggerEnter2D_m05B521ECFA17939B795E034EB868B9F8F7AAB805 (HeavyLizard_AttackChecker_t20DF6C063552C0C600C0D91B361C2C806B998217* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = attackweight;
		HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		int32_t L_7 = __this->___attackweight_6;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void HeavyLizard_AttackChecker::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AttackChecker_OnTriggerExit2D_m9AEA4070120B0D005436833A7535B24CC5A863FB (HeavyLizard_AttackChecker_t20DF6C063552C0C600C0D91B361C2C806B998217* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = 0;
		HeavyLizard_ActionManager_t1557D281D7A1FD47416441DA8D7587BA3CB45DE5* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)0);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void HeavyLizard_AttackChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_AttackChecker__ctor_m7C4FF5ABE665513504E3448388008A88B65EA783 (HeavyLizard_AttackChecker_t20DF6C063552C0C600C0D91B361C2C806B998217* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HeavyLizard_Damage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_Damage_Start_mACC4350311DDB616A790724D18AF6B351FCFC7D2 (HeavyLizard_Damage_tD0A416A1F4EF565EEDECBC7536190ACDFF55F3FD* __this, const RuntimeMethod* method) 
{
	{
		// hp = maxhp;
		int32_t L_0 = __this->___maxhp_4;
		__this->___hp_5 = L_0;
		// downpoint = maxhp / 2;
		int32_t L_1 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_1/2));
		// }
		return;
	}
}
// System.Void HeavyLizard_Damage::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_Damage_Damage_m974A07C6264AF41E1F2E5449C58615DB14557E0D (HeavyLizard_Damage_tD0A416A1F4EF565EEDECBC7536190ACDFF55F3FD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") &&
		//     !animator.GetCurrentAnimatorStateInfo(0).IsName("Dead"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_2)
		{
			goto IL_014f;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		if (L_5)
		{
			goto IL_014f;
		}
	}
	{
		// hp -= value;
		int32_t L_6 = __this->___hp_5;
		int32_t L_7 = ___value0;
		__this->___hp_5 = ((int32_t)il2cpp_codegen_subtract(L_6, L_7));
		// downpoint -= value;
		int32_t L_8 = __this->___downpoint_6;
		int32_t L_9 = ___value0;
		__this->___downpoint_6 = ((int32_t)il2cpp_codegen_subtract(L_8, L_9));
		// damageeffectpos = new Vector3
		//                     (
		//                         baseposobject.transform.position.x + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.y + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.z
		//                     );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		float L_13 = L_12.___x_2;
		float L_14;
		L_14 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___y_3;
		float L_19;
		L_19 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		float L_23 = L_22.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_add(L_13, L_14)), ((float)il2cpp_codegen_add(L_18, L_19)), L_23, /*hidden argument*/NULL);
		__this->___damageeffectpos_10 = L_24;
		// Instantiate(damageeffect, damageeffectpos, Quaternion.identity);//?G?t?F?N?g????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___damageeffect_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = __this->___damageeffectpos_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_27;
		L_27 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_25, L_26, L_27, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// if (downpoint <= 0)
		int32_t L_29 = __this->___downpoint_6;
		if ((((int32_t)L_29) > ((int32_t)0)))
		{
			goto IL_0120;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_30, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_31, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// downpoint = maxhp / 2;
		int32_t L_32 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_32/2));
		// animator.Play("Down");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_33, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, NULL);
	}

IL_0120:
	{
		// if (hp <= 0)
		int32_t L_34 = __this->___hp_5;
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_014f;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_35, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_36 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_36, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// Death();
		HeavyLizard_Damage_Death_m9F8E34CCF67D817D7B39C97645FE8AFD77B69ED1(__this, NULL);
	}

IL_014f:
	{
		// }
		return;
	}
}
// System.Void HeavyLizard_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_Damage_Death_m9F8E34CCF67D817D7B39C97645FE8AFD77B69ED1 (HeavyLizard_Damage_tD0A416A1F4EF565EEDECBC7536190ACDFF55F3FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.Play("Dead");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		// }
		return;
	}
}
// System.Void HeavyLizard_Damage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeavyLizard_Damage__ctor_mE49C607D266EB98E2EF8C195C6870AC5B2C4F9CF (HeavyLizard_Damage_tD0A416A1F4EF565EEDECBC7536190ACDFF55F3FD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Knight_ActionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_ActionManager_Start_m5EB787448F72CE5B86C60F82D65C4F8C3B650726 (Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// cooltime = maxcooltime;
		float L_0 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_0;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// for (int i = 0; i < attackarray.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		// attackarray[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___attackarray_6;
		int32_t L_2 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (int32_t)0);
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___attackarray_6;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Knight_ActionManager_SearchedObject_mFC38D2C447C2E616323542BFBB7A3AFCDAAC72B9(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_15), (void*)L_6);
		// }
		return;
	}
}
// System.Void Knight_ActionManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_ActionManager_FixedUpdate_m687EEA659094C4680917CE8ED402DC26CF631CED (Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93CD35E03C1A424B1F418957BABE8F734B1AD3D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB52A5BCA0B1FE16E6C25AFA226866B06A94BFBBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_15;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// cooltime = maxcooltime;
		float L_2 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_2;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// animator.SetBool("walk",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_14;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_5, NULL);
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Knight_ActionManager_SearchedObject_mFC38D2C447C2E616323542BFBB7A3AFCDAAC72B9(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_15), (void*)L_6);
		return;
	}

IL_0062:
	{
		// if ((animator.GetCurrentAnimatorStateInfo(0).IsName("Stand")) ||
		//      animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		V_0 = L_8;
		bool L_9;
		L_9 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_9)
		{
			goto IL_0098;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_11;
		L_11 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_10, 0, NULL);
		V_0 = L_11;
		bool L_12;
		L_12 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_12)
		{
			goto IL_00bc;
		}
	}

IL_0098:
	{
		// cooltime -= Time.deltaTime;
		float L_13 = __this->___cooltime_5;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___cooltime_5 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// walkchangetime -= Time.deltaTime;
		float L_15 = __this->___walkchangetime_8;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___walkchangetime_8 = ((float)il2cpp_codegen_subtract(L_15, L_16));
	}

IL_00bc:
	{
		// if (cooltime <= 0)
		float L_17 = __this->___cooltime_5;
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_0133;
		}
	}
	{
		// switch (SelectActionNumber(attackarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___attackarray_6;
		int32_t L_19;
		L_19 = Knight_ActionManager_SelectActionNumber_m528BF27B6BE726455A9D2C696F235E20F6C37242(__this, L_18, NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, (-1))))
		{
			case 0:
			{
				goto IL_0128;
			}
			case 1:
			{
				goto IL_00ec;
			}
			case 2:
			{
				goto IL_010a;
			}
		}
	}
	{
		goto IL_0133;
	}

IL_00ec:
	{
		// animator.SetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_14;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_21, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// cooltime = maxcooltime;
		float L_22 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_22;
		// break;
		goto IL_0133;
	}

IL_010a:
	{
		// animator.SetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_14;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_23, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// cooltime = maxcooltime;
		float L_24 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_24;
		// break;
		goto IL_0133;
	}

IL_0128:
	{
		// cooltime = 0;
		__this->___cooltime_5 = (0.0f);
	}

IL_0133:
	{
		// if (walkchangetime <= 0)
		float L_25 = __this->___walkchangetime_8;
		if ((!(((float)L_25) <= ((float)(0.0f)))))
		{
			goto IL_0472;
		}
	}
	{
		// switch (SelectActionNumber(walkarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_26 = __this->___walkarray_9;
		int32_t L_27;
		L_27 = Knight_ActionManager_SelectActionNumber_m528BF27B6BE726455A9D2C696F235E20F6C37242(__this, L_26, NULL);
		V_1 = L_27;
		int32_t L_28 = V_1;
		switch (L_28)
		{
			case 0:
			{
				goto IL_0173;
			}
			case 1:
			{
				goto IL_0194;
			}
			case 2:
			{
				goto IL_023c;
			}
			case 3:
			{
				goto IL_02e4;
			}
			case 4:
			{
				goto IL_030a;
			}
			case 5:
			{
				goto IL_03b2;
			}
		}
	}
	{
		goto IL_0451;
	}

IL_0173:
	{
		// movederection = DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_32;
		L_32 = Knight_ActionManager_DerectionControl_mEB9B97A8929505EDA9894119A797E4F9D130DC79(__this, L_31, NULL);
		__this->___movederection_13 = L_32;
		// break;
		goto IL_0466;
	}

IL_0194:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		float L_36 = L_35.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		float L_39 = L_38.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_36, L_39))) > ((float)(0.100000001f)))))
		{
			goto IL_01db;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		memset((&L_40), 0, sizeof(L_40));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_40), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_40;
		goto IL_0466;
	}

IL_01db:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_42, NULL);
		float L_44 = L_43.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_45, NULL);
		float L_47 = L_46.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_44, L_47))) < ((float)(-0.100000001f)))))
		{
			goto IL_0222;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		memset((&L_48), 0, sizeof(L_48));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_48), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_48;
		goto IL_0466;
	}

IL_0222:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_49;
		// break;
		goto IL_0466;
	}

IL_023c:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_51;
		L_51 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_51, NULL);
		float L_53 = L_52.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_54;
		L_54 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_54, NULL);
		float L_56 = L_55.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_53, L_56))) > ((float)(0.100000001f)))))
		{
			goto IL_0283;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		memset((&L_57), 0, sizeof(L_57));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_57), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_57;
		goto IL_0466;
	}

IL_0283:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_58, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_59, NULL);
		float L_61 = L_60.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_62, NULL);
		float L_64 = L_63.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_61, L_64))) < ((float)(-0.100000001f)))))
		{
			goto IL_02ca;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_65;
		memset((&L_65), 0, sizeof(L_65));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_65), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_65;
		goto IL_0466;
	}

IL_02ca:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_66), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_66;
		// break;
		goto IL_0466;
	}

IL_02e4:
	{
		// movederection = -DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_68, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		L_70 = Knight_ActionManager_DerectionControl_mEB9B97A8929505EDA9894119A797E4F9D130DC79(__this, L_69, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_71;
		L_71 = Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline(L_70, NULL);
		__this->___movederection_13 = L_71;
		// break;
		goto IL_0466;
	}

IL_030a:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_73;
		L_73 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_73, NULL);
		float L_75 = L_74.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_76;
		L_76 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_76, NULL);
		float L_78 = L_77.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_75, L_78))) > ((float)(0.100000001f)))))
		{
			goto IL_0351;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_79), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_79;
		goto IL_0466;
	}

IL_0351:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_81, NULL);
		float L_83 = L_82.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84;
		L_84 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85;
		L_85 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_84, NULL);
		float L_86 = L_85.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_83, L_86))) < ((float)(-0.100000001f)))))
		{
			goto IL_0398;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_87;
		memset((&L_87), 0, sizeof(L_87));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_87), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_87;
		goto IL_0466;
	}

IL_0398:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_88), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_88;
		// break;
		goto IL_0466;
	}

IL_03b2:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_90;
		L_90 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_89, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_90, NULL);
		float L_92 = L_91.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_93;
		L_93 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_93, NULL);
		float L_95 = L_94.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_92, L_95))) > ((float)(0.100000001f)))))
		{
			goto IL_03f6;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_96;
		memset((&L_96), 0, sizeof(L_96));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_96), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_96;
		goto IL_0466;
	}

IL_03f6:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_97, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_98, NULL);
		float L_100 = L_99.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102;
		L_102 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_101, NULL);
		float L_103 = L_102.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_100, L_103))) < ((float)(-0.100000001f)))))
		{
			goto IL_043a;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_104;
		memset((&L_104), 0, sizeof(L_104));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_104), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_104;
		goto IL_0466;
	}

IL_043a:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_105), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_105;
		// break;
		goto IL_0466;
	}

IL_0451:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_106;
		memset((&L_106), 0, sizeof(L_106));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_106), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_13 = L_106;
	}

IL_0466:
	{
		// walkchangetime = maxwalkchangetime;
		float L_107 = __this->___maxwalkchangetime_7;
		__this->___walkchangetime_8 = L_107;
	}

IL_0472:
	{
		// if(movederection == new Vector2(0, 0))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108 = __this->___movederection_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_109), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_110;
		L_110 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_108, L_109, NULL);
		if (!L_110)
		{
			goto IL_04a1;
		}
	}
	{
		// animator.SetBool("walk", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_111 = __this->___animator_14;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_111, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		goto IL_04b2;
	}

IL_04a1:
	{
		// animator.SetBool("walk", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_112 = __this->___animator_14;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_112, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)1, NULL);
	}

IL_04b2:
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Stand") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack2Pre") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_113 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_114;
		L_114 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_113, 0, NULL);
		V_0 = L_114;
		bool L_115;
		L_115 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_115)
		{
			goto IL_051e;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_116 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_117;
		L_117 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_116, 0, NULL);
		V_0 = L_117;
		bool L_118;
		L_118 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_118)
		{
			goto IL_051e;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_119 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_120;
		L_120 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_119, 0, NULL);
		V_0 = L_120;
		bool L_121;
		L_121 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB52A5BCA0B1FE16E6C25AFA226866B06A94BFBBF, NULL);
		if (L_121)
		{
			goto IL_051e;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_122 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_123;
		L_123 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_122, 0, NULL);
		V_0 = L_123;
		bool L_124;
		L_124 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_124)
		{
			goto IL_0585;
		}
	}

IL_051e:
	{
		// if(target.transform.position.x > this.transform.position.x)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = __this->___target_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_125, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_127;
		L_127 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_126, NULL);
		float L_128 = L_127.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_129;
		L_129 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_129, NULL);
		float L_131 = L_130.___x_2;
		if ((!(((float)L_128) > ((float)L_131))))
		{
			goto IL_0566;
		}
	}
	{
		// this.transform.rotation = Quaternion.Euler(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_132;
		L_132 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_133;
		L_133 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_132, L_133, NULL);
		goto IL_0585;
	}

IL_0566:
	{
		// this.transform.rotation = Quaternion.Euler(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_134;
		L_134 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_135;
		L_135 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_134, L_135, NULL);
	}

IL_0585:
	{
		// if(animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_136 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_137;
		L_137 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_136, 0, NULL);
		V_0 = L_137;
		bool L_138;
		L_138 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_138)
		{
			goto IL_05bd;
		}
	}
	{
		// rb2d.velocity = movederection * walkspeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_139 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_140 = __this->___movederection_13;
		float L_141 = __this->___walkspeed_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_142;
		L_142 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_140, L_141, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_139, L_142, NULL);
		return;
	}

IL_05bd:
	{
		// else if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack1"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_143 = __this->___animator_14;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_144;
		L_144 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_143, 0, NULL);
		V_0 = L_144;
		bool L_145;
		L_145 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral93CD35E03C1A424B1F418957BABE8F734B1AD3D4, NULL);
		if (!L_145)
		{
			goto IL_05ff;
		}
	}
	{
		// rb2d.velocity = transform.right * attack1speed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_146 = __this->___rb2d_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_147;
		L_147 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148;
		L_148 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_147, NULL);
		float L_149 = __this->___attack1speed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_148, L_149, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_151;
		L_151 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_150, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_146, L_151, NULL);
		return;
	}

IL_05ff:
	{
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_152 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_153;
		memset((&L_153), 0, sizeof(L_153));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_153), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_152, L_153, NULL);
		// }
		return;
	}
}
// System.Int32 Knight_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Knight_ActionManager_SelectActionNumber_m528BF27B6BE726455A9D2C696F235E20F6C37242 (Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int Total = 0;//?D??x???v
		V_0 = 0;
		// int Number = 0;//???^?[?????
		V_1 = 0;
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___ActionWeight0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0018;
	}

IL_000a:
	{
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// Total += Elem;
		int32_t L_5 = V_0;
		int32_t L_6 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		// foreach (int Elem in ActionWeight)
		int32_t L_8 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// if (Total <= 0)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0024:
	{
		// float RandomPoint = Random.value * Total;
		float L_11;
		L_11 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		int32_t L_12 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply(L_11, ((float)L_12)));
		goto IL_0045;
	}

IL_0030:
	{
		// if (RandomPoint < ActionWeight[Number])
		float L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___ActionWeight0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((((float)L_13) < ((float)((float)L_17))))
		{
			goto IL_004b;
		}
	}
	{
		// RandomPoint -= ActionWeight[Number];
		float L_18 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___ActionWeight0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = ((float)il2cpp_codegen_subtract(L_18, ((float)L_22)));
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0045:
	{
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_24 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___ActionWeight0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_004b:
	{
		// return Number;
		int32_t L_26 = V_1;
		return L_26;
	}
}
// UnityEngine.GameObject Knight_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Knight_ActionManager_SearchedObject_mFC38D2C447C2E616323542BFBB7A3AFCDAAC72B9 (Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* __this, String_t* ___targettag0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// float tmpDis = 0;           //?????p?????
		V_0 = (0.0f);
		// float nearDis = 0;          //???????I?u?W?F?N?g?????
		V_1 = (0.0f);
		// GameObject target = null; //?I?u?W?F?N?g
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		String_t* L_0 = ___targettag0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(L_0, NULL);
		V_3 = L_1;
		V_4 = 0;
		goto IL_0054;
	}

IL_001a:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_3;
		int32_t L_3 = V_4;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_5 = L_5;
		// tmpDis = Vector3.Distance(candidate.transform.position, this.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// if (nearDis == 0 || nearDis > tmpDis)
		float L_12 = V_1;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}
	{
		float L_13 = V_1;
		float L_14 = V_0;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_004e;
		}
	}

IL_0049:
	{
		// nearDis = tmpDis;
		float L_15 = V_0;
		V_1 = L_15;
		// target = candidate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_5;
		V_2 = L_16;
	}

IL_004e:
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0054:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		int32_t L_18 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// return target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		return L_20;
	}
}
// UnityEngine.Vector2 Knight_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Knight_ActionManager_DerectionControl_mEB9B97A8929505EDA9894119A797E4F9D130DC79 (Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// XDefference = targetpos.x - this.transform.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetpos0;
		float L_1 = L_0.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_4));
		// YDefference = targetpos.y - this.transform.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetpos0;
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_9));
		// if (Mathf.Abs(XDefference) > 0.1f)
		float L_10 = V_0;
		float L_11;
		L_11 = fabsf(L_10);
		if ((!(((float)L_11) > ((float)(0.100000001f)))))
		{
			goto IL_004e;
		}
	}
	{
		// Cos = XDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16 = V_1;
		float L_17;
		L_17 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)))));
		V_2 = ((float)(L_12/L_17));
		goto IL_0054;
	}

IL_004e:
	{
		// Cos = 0.0f;
		V_2 = (0.0f);
	}

IL_0054:
	{
		// if (Mathf.Abs(YDefference) > 0.1f)
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) > ((float)(0.100000001f)))))
		{
			goto IL_0072;
		}
	}
	{
		// Sin = YDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_20 = V_1;
		float L_21 = V_0;
		float L_22 = V_0;
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25;
		L_25 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24)))));
		V_3 = ((float)(L_20/L_25));
		goto IL_0078;
	}

IL_0072:
	{
		// Sin = 0.0f;
		V_3 = (0.0f);
	}

IL_0078:
	{
		// return new Vector2(Cos, Sin);
		float L_26 = V_2;
		float L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void Knight_ActionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_ActionManager__ctor_m0D39D055ADA412F0D5294F0A3407884FCFAE5B3D (Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] attackarray = new int[2];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->___attackarray_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackarray_6), (void*)L_0);
		// [SerializeField] private int[] walkarray = new int[6];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___walkarray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walkarray_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Knight_AnimationEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Start_m126153CB1A3D6B6D2AAAB7B884BA21A45ED70E92 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		Knight_AnimationEvents_AllFalse_m83C7BB7C453476A01FE9072AFA63F653B63B8ED3(__this, NULL);
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___sesource_6;
		__this->___sesource_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_14), (void*)L_1);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Sporn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Sporn_mB04857EAFA2E3A70FFE1004A0A3D87A5CE23AEC6 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		Knight_AnimationEvents_AllFalse_m83C7BB7C453476A01FE9072AFA63F653B63B8ED3(__this, NULL);
		// if(sesource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_14;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = L_2->___sesource_6;
		__this->___sesource_14 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_14), (void*)L_3);
	}

IL_0024:
	{
		// sesource.PlayOneShot(sporn);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___sesource_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___sporn_10;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Down_mF8D8C080E3FC2EF9542A17D1C4D4B9659473DE05 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		Knight_AnimationEvents_AllFalse_m83C7BB7C453476A01FE9072AFA63F653B63B8ED3(__this, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Dead_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Dead_1_mA332628CC90413E3F994A6F8FB9C56D9A97A7E5D (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		Knight_AnimationEvents_AllFalse_m83C7BB7C453476A01FE9072AFA63F653B63B8ED3(__this, NULL);
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_11;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Dead_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Dead_2_m89DB2504F479725C0E25016FC9409E66EEBF3DF4 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_11;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Dead_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Dead_3_m6DC08ACF0C301D009B6B7B8A86BE51624B57DEA3 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ACTIONManager.instance.enemynum -= 1;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_0 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_1 = L_0;
		int32_t L_2 = L_1->___enemynum_38;
		L_1->___enemynum_38 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// if (ACTIONManager.instance.enemynum <= 0)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_3 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_4 = L_3->___enemynum_38;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// if (ACTIONManager.instance.wavenum == GameManager.instance.enemieslists.Count)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_5 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_6 = L_5->___wavenum_39;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD* L_8 = L_7->___enemieslists_9;
		int32_t L_9;
		L_9 = List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_inline(L_8, List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		// ACTIONManager.instance.StartCoroutine("Clear");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_10 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_10, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		goto IL_005c;
	}

IL_004c:
	{
		// ACTIONManager.instance.StartCoroutine("WaveStart");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_12 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_12, _stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E, NULL);
	}

IL_005c:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Attack1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Attack1_1_m0214F97463E65E50272C8F4E554153D2CCC4B9D1 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Attack1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Attack1_2_mFB0F195FAE241D0BB34E6B7A21CE81CB0344E572 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack1sprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack1bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack1_12;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Attack1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Attack1_3_m0DA624C101532FB8A8C61F12D96E439C2EDAA597 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1sprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Attack2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Attack2_1_mEC037E18512D24572E026C6B2E0FDF8659B2EE51 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Attack2_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Attack2_2_m57D52A4244C6038083A12A07D50F823B98636C9E (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack2sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack2sprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack2bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack2bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_14;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack2_13;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::Attack2_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_Attack2_3_m020AA798F6BF88F2A70BDD422785024ACAB4199B (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		// attack2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2sprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack2bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents_AllFalse_m83C7BB7C453476A01FE9072AFA63F653B63B8ED3 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack1bc2d_4;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2 = __this->___attack1rangesprend_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_2, (bool)0, NULL);
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___attack2rangesprend_7;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___attack1sprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// attack2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___attack2sprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Knight_AnimationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AnimationEvents__ctor_m5B83548C93718FD871A8BD82465121D3994E2559 (Knight_AnimationEvents_t45001561F46183C5B20AF4976E3CEA0E99BBF54F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Knight_AttackChecker::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AttackChecker_OnTriggerEnter2D_m34AE988EB3D4CD786569A905DDEB4B85BB02DF52 (Knight_AttackChecker_t8B138B09F811F7803A9BD8A05F2E9E5CA4EC8896* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = attackweight;
		Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		int32_t L_7 = __this->___attackweight_6;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Knight_AttackChecker::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AttackChecker_OnTriggerExit2D_mBABCDED748C3F1184F72E038F9903B42051FD662 (Knight_AttackChecker_t8B138B09F811F7803A9BD8A05F2E9E5CA4EC8896* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = 0;
		Knight_ActionManager_t87C3CD51823D590901637B2648E0FD09E0E4E36C* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)0);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void Knight_AttackChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_AttackChecker__ctor_m449869F8AF6295CDF3186D46877DCA870CACD883 (Knight_AttackChecker_t8B138B09F811F7803A9BD8A05F2E9E5CA4EC8896* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Knight_Damage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_Damage_Start_m93CB73FA4EFA9FC22B530ABF9DB27133F3459426 (Knight_Damage_t15562B693DA98E98F99805692CC739C6AD3B0DE7* __this, const RuntimeMethod* method) 
{
	{
		// hp = maxhp;
		int32_t L_0 = __this->___maxhp_4;
		__this->___hp_5 = L_0;
		// downpoint = maxhp / 2;
		int32_t L_1 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_1/2));
		// }
		return;
	}
}
// System.Void Knight_Damage::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_Damage_FixedUpdate_m9101A020D6B19C2306A1B73AA7D3828EE63DC8D5 (Knight_Damage_t15562B693DA98E98F99805692CC739C6AD3B0DE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Dead"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_2)
		{
			goto IL_0036;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		if (!L_5)
		{
			goto IL_004c;
		}
	}

IL_0036:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Muteki");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_7;
		L_7 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_6, L_7, NULL);
		return;
	}

IL_004c:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Charactor");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_9;
		L_9 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_8, L_9, NULL);
		// }
		return;
	}
}
// System.Void Knight_Damage::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_Damage_Damage_m82DC842629E217ED6030CB85AF1BB0AFCA2190E7 (Knight_Damage_t15562B693DA98E98F99805692CC739C6AD3B0DE7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hp -= value;
		int32_t L_0 = __this->___hp_5;
		int32_t L_1 = ___value0;
		__this->___hp_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// downpoint -= value;
		int32_t L_2 = __this->___downpoint_6;
		int32_t L_3 = ___value0;
		__this->___downpoint_6 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// damageeffectpos = new Vector3
		//                     (
		//                         baseposobject.transform.position.x + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.y + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.z
		//                     );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_add(L_7, L_8)), ((float)il2cpp_codegen_add(L_12, L_13)), L_17, /*hidden argument*/NULL);
		__this->___damageeffectpos_10 = L_18;
		// Instantiate(damageeffect, damageeffectpos, Quaternion.identity);//?G?t?F?N?g????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___damageeffect_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___damageeffectpos_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_19, L_20, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// if (downpoint <= 0)
		int32_t L_23 = __this->___downpoint_6;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_00e4;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_24, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_25, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// downpoint = maxhp / 2;
		int32_t L_26 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_26/2));
		// animator.Play("Down");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_27, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, NULL);
	}

IL_00e4:
	{
		// if (hp <= 0)
		int32_t L_28 = __this->___hp_5;
		if ((((int32_t)L_28) > ((int32_t)0)))
		{
			goto IL_0113;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_29, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_30, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// Death();
		Knight_Damage_Death_m0BD6AC4B11B15A5BA565019D245E7E9AAD9615C4(__this, NULL);
	}

IL_0113:
	{
		// }
		return;
	}
}
// System.Void Knight_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_Damage_Death_m0BD6AC4B11B15A5BA565019D245E7E9AAD9615C4 (Knight_Damage_t15562B693DA98E98F99805692CC739C6AD3B0DE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.Play("Dead");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		// }
		return;
	}
}
// System.Void Knight_Damage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Knight_Damage__ctor_m281821271C4576C92E43806EC2FCC044897E0A51 (Knight_Damage_t15562B693DA98E98F99805692CC739C6AD3B0DE7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LoadOfBeasts_ActionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_ActionManager_Start_mE9A9B46745CD8EBC1B879F93F2B4BB83BCE33B1A (LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// cooltime = maxcooltime;
		float L_0 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_0;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// for (int i = 0; i < attackarray.Length; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_001b:
	{
		// attackarray[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->___attackarray_6;
		int32_t L_2 = V_0;
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2), (int32_t)0);
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < attackarray.Length; i++)
		int32_t L_4 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->___attackarray_6;
		if ((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = LoadOfBeasts_ActionManager_SearchedObject_m3A27BA0C385D43C6EA7224207C018FA22AEB7AEF(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_16), (void*)L_6);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_ActionManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_ActionManager_FixedUpdate_mB260B8C1FC6FBA328D4D59AF4DC69F2BF7BB0D8E (LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B6D5C2699060B9B494426CA72D3976C40161000);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// if (target == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___target_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0062;
		}
	}
	{
		// cooltime = maxcooltime;
		float L_2 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_2;
		// walkchangetime = 0;
		__this->___walkchangetime_8 = (0.0f);
		// animator.SetBool("walk",false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_3, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_5), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_5, NULL);
		// target = SearchedObject("Player");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = LoadOfBeasts_ActionManager_SearchedObject_m3A27BA0C385D43C6EA7224207C018FA22AEB7AEF(__this, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		__this->___target_16 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_16), (void*)L_6);
		return;
	}

IL_0062:
	{
		// if ((animator.GetCurrentAnimatorStateInfo(0).IsName("Stand")) ||
		//      animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_8;
		L_8 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_7, 0, NULL);
		V_0 = L_8;
		bool L_9;
		L_9 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_9)
		{
			goto IL_0098;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_11;
		L_11 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_10, 0, NULL);
		V_0 = L_11;
		bool L_12;
		L_12 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_12)
		{
			goto IL_00bc;
		}
	}

IL_0098:
	{
		// cooltime -= Time.deltaTime;
		float L_13 = __this->___cooltime_5;
		float L_14;
		L_14 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___cooltime_5 = ((float)il2cpp_codegen_subtract(L_13, L_14));
		// walkchangetime -= Time.deltaTime;
		float L_15 = __this->___walkchangetime_8;
		float L_16;
		L_16 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		__this->___walkchangetime_8 = ((float)il2cpp_codegen_subtract(L_15, L_16));
	}

IL_00bc:
	{
		// if (cooltime <= 0)
		float L_17 = __this->___cooltime_5;
		if ((!(((float)L_17) <= ((float)(0.0f)))))
		{
			goto IL_017d;
		}
	}
	{
		// switch (SelectActionNumber(attackarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___attackarray_6;
		int32_t L_19;
		L_19 = LoadOfBeasts_ActionManager_SelectActionNumber_m572545E8889094C318B6F9B5C44E35C0527ECD1F(__this, L_18, NULL);
		V_1 = L_19;
		int32_t L_20 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_20, (-1))))
		{
			case 0:
			{
				goto IL_0172;
			}
			case 1:
			{
				goto IL_00fa;
			}
			case 2:
			{
				goto IL_0118;
			}
			case 3:
			{
				goto IL_0136;
			}
			case 4:
			{
				goto IL_0154;
			}
		}
	}
	{
		goto IL_017d;
	}

IL_00fa:
	{
		// animator.SetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_21, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// cooltime = maxcooltime;
		float L_22 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_22;
		// break;
		goto IL_017d;
	}

IL_0118:
	{
		// animator.SetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_23, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// cooltime = maxcooltime;
		float L_24 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_24;
		// break;
		goto IL_017d;
	}

IL_0136:
	{
		// animator.SetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_25, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// cooltime = maxcooltime;
		float L_26 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_26;
		// break;
		goto IL_017d;
	}

IL_0154:
	{
		// animator.SetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_15;
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_27, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// cooltime = maxcooltime;
		float L_28 = __this->___maxcooltime_4;
		__this->___cooltime_5 = L_28;
		// break;
		goto IL_017d;
	}

IL_0172:
	{
		// cooltime = 0;
		__this->___cooltime_5 = (0.0f);
	}

IL_017d:
	{
		// if (walkchangetime <= 0)
		float L_29 = __this->___walkchangetime_8;
		if ((!(((float)L_29) <= ((float)(0.0f)))))
		{
			goto IL_04bc;
		}
	}
	{
		// switch (SelectActionNumber(walkarray))
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->___walkarray_9;
		int32_t L_31;
		L_31 = LoadOfBeasts_ActionManager_SelectActionNumber_m572545E8889094C318B6F9B5C44E35C0527ECD1F(__this, L_30, NULL);
		V_1 = L_31;
		int32_t L_32 = V_1;
		switch (L_32)
		{
			case 0:
			{
				goto IL_01bd;
			}
			case 1:
			{
				goto IL_01de;
			}
			case 2:
			{
				goto IL_0286;
			}
			case 3:
			{
				goto IL_032e;
			}
			case 4:
			{
				goto IL_0354;
			}
			case 5:
			{
				goto IL_03fc;
			}
		}
	}
	{
		goto IL_049b;
	}

IL_01bd:
	{
		// movederection = DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_34, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = LoadOfBeasts_ActionManager_DerectionControl_mC2FD0818DEB836ACD25B970A7922E8C4AE60DE20(__this, L_35, NULL);
		__this->___movederection_14 = L_36;
		// break;
		goto IL_04b0;
	}

IL_01de:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_38, NULL);
		float L_40 = L_39.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_41;
		L_41 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_41, NULL);
		float L_43 = L_42.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_40, L_43))) > ((float)(0.100000001f)))))
		{
			goto IL_0225;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_44;
		goto IL_04b0;
	}

IL_0225:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_46, NULL);
		float L_48 = L_47.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_49, NULL);
		float L_51 = L_50.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_48, L_51))) < ((float)(-0.100000001f)))))
		{
			goto IL_026c;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52;
		memset((&L_52), 0, sizeof(L_52));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_52), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_52;
		goto IL_04b0;
	}

IL_026c:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_53;
		memset((&L_53), 0, sizeof(L_53));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_53), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_53;
		// break;
		goto IL_04b0;
	}

IL_0286:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		float L_57 = L_56.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_58, NULL);
		float L_60 = L_59.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_57, L_60))) > ((float)(0.100000001f)))))
		{
			goto IL_02cd;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_61;
		goto IL_04b0;
	}

IL_02cd:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_63, NULL);
		float L_65 = L_64.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_66;
		L_66 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_66, NULL);
		float L_68 = L_67.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_65, L_68))) < ((float)(-0.100000001f)))))
		{
			goto IL_0314;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_69), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_69;
		goto IL_04b0;
	}

IL_0314:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_70;
		memset((&L_70), 0, sizeof(L_70));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_70), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_70;
		// break;
		goto IL_04b0;
	}

IL_032e:
	{
		// movederection = -DerectionControl(target.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_72, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74;
		L_74 = LoadOfBeasts_ActionManager_DerectionControl_mC2FD0818DEB836ACD25B970A7922E8C4AE60DE20(__this, L_73, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75;
		L_75 = Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline(L_74, NULL);
		__this->___movederection_14 = L_75;
		// break;
		goto IL_04b0;
	}

IL_0354:
	{
		// if (target.transform.position.x - this.transform.position.x > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_77, NULL);
		float L_79 = L_78.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_80;
		L_80 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_80, NULL);
		float L_82 = L_81.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_79, L_82))) > ((float)(0.100000001f)))))
		{
			goto IL_039b;
		}
	}
	{
		// movederection = new Vector2(-1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_83;
		memset((&L_83), 0, sizeof(L_83));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_83), (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_83;
		goto IL_04b0;
	}

IL_039b:
	{
		// else if (target.transform.position.x - this.transform.position.x < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_84, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_85, NULL);
		float L_87 = L_86.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88;
		L_88 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_88, NULL);
		float L_90 = L_89.___x_2;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_87, L_90))) < ((float)(-0.100000001f)))))
		{
			goto IL_03e2;
		}
	}
	{
		// movederection = new Vector2(1, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_91;
		memset((&L_91), 0, sizeof(L_91));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_91), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_91;
		goto IL_04b0;
	}

IL_03e2:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_92), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_92;
		// break;
		goto IL_04b0;
	}

IL_03fc:
	{
		// if (target.transform.position.y - this.transform.position.y > 0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_94, NULL);
		float L_96 = L_95.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_97;
		L_97 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		L_98 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_97, NULL);
		float L_99 = L_98.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_96, L_99))) > ((float)(0.100000001f)))))
		{
			goto IL_0440;
		}
	}
	{
		// movederection = new Vector2(0, -1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_100;
		memset((&L_100), 0, sizeof(L_100));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_100), (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_100;
		goto IL_04b0;
	}

IL_0440:
	{
		// else if (target.transform.position.y - this.transform.position.y < -0.1f)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_101, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_102, NULL);
		float L_104 = L_103.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_105;
		L_105 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106;
		L_106 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_105, NULL);
		float L_107 = L_106.___y_3;
		if ((!(((float)((float)il2cpp_codegen_subtract(L_104, L_107))) < ((float)(-0.100000001f)))))
		{
			goto IL_0484;
		}
	}
	{
		// movederection = new Vector2(0, 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_108), (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_108;
		goto IL_04b0;
	}

IL_0484:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_109;
		memset((&L_109), 0, sizeof(L_109));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_109), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_109;
		// break;
		goto IL_04b0;
	}

IL_049b:
	{
		// movederection = new Vector2(0, 0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110;
		memset((&L_110), 0, sizeof(L_110));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_110), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___movederection_14 = L_110;
	}

IL_04b0:
	{
		// walkchangetime = maxwalkchangetime;
		float L_111 = __this->___maxwalkchangetime_7;
		__this->___walkchangetime_8 = L_111;
	}

IL_04bc:
	{
		// if(movederection == new Vector2(0, 0))
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_112 = __this->___movederection_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_113;
		memset((&L_113), 0, sizeof(L_113));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_113), (0.0f), (0.0f), /*hidden argument*/NULL);
		bool L_114;
		L_114 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_112, L_113, NULL);
		if (!L_114)
		{
			goto IL_04eb;
		}
	}
	{
		// animator.SetBool("walk", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_115 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_115, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)0, NULL);
		goto IL_04fc;
	}

IL_04eb:
	{
		// animator.SetBool("walk", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_116 = __this->___animator_15;
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_116, _stringLiteralF87551CF202A9D753BE355AA74860ED99F53B97E, (bool)1, NULL);
	}

IL_04fc:
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Stand") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_117 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_118;
		L_118 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_117, 0, NULL);
		V_0 = L_118;
		bool L_119;
		L_119 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_119)
		{
			goto IL_054d;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_120 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_121;
		L_121 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_120, 0, NULL);
		V_0 = L_121;
		bool L_122;
		L_122 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC3AD0C4052F486E1F58F58CB348446B07981A9B0, NULL);
		if (L_122)
		{
			goto IL_054d;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_123 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_124;
		L_124 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_123, 0, NULL);
		V_0 = L_124;
		bool L_125;
		L_125 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_125)
		{
			goto IL_05b4;
		}
	}

IL_054d:
	{
		// if(target.transform.position.x > this.transform.position.x)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_127;
		L_127 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_126, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_128;
		L_128 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_127, NULL);
		float L_129 = L_128.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_130;
		L_130 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_130, NULL);
		float L_132 = L_131.___x_2;
		if ((!(((float)L_129) > ((float)L_132))))
		{
			goto IL_0595;
		}
	}
	{
		// this.transform.rotation = Quaternion.Euler(0, 0, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_133;
		L_133 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_134;
		L_134 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_133, L_134, NULL);
		goto IL_05b4;
	}

IL_0595:
	{
		// this.transform.rotation = Quaternion.Euler(0, 180, 0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_135;
		L_135 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_136;
		L_136 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (180.0f), (0.0f), NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_135, L_136, NULL);
	}

IL_05b4:
	{
		// if(animator.GetCurrentAnimatorStateInfo(0).IsName("Walk"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_137 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_138;
		L_138 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_137, 0, NULL);
		V_0 = L_138;
		bool L_139;
		L_139 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, NULL);
		if (!L_139)
		{
			goto IL_05ec;
		}
	}
	{
		// rb2d.velocity = movederection * walkspeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_140 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_141 = __this->___movederection_14;
		float L_142 = __this->___walkspeed_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_143;
		L_143 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_141, L_142, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_140, L_143, NULL);
		return;
	}

IL_05ec:
	{
		// else if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack2"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_144 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_145;
		L_145 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_144, 0, NULL);
		V_0 = L_145;
		bool L_146;
		L_146 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral7B6D5C2699060B9B494426CA72D3976C40161000, NULL);
		if (!L_146)
		{
			goto IL_062e;
		}
	}
	{
		// rb2d.velocity = transform.right * attack2speed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_147 = __this->___rb2d_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_148;
		L_148 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149;
		L_149 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_148, NULL);
		float L_150 = __this->___attack2speed_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_149, L_150, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_152;
		L_152 = Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline(L_151, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_147, L_152, NULL);
		return;
	}

IL_062e:
	{
		// else if (animator.GetCurrentAnimatorStateInfo(0).IsName("Attack3Pre"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_153 = __this->___animator_15;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_154;
		L_154 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_153, 0, NULL);
		V_0 = L_154;
		bool L_155;
		L_155 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982, NULL);
		if (!L_155)
		{
			goto IL_0676;
		}
	}
	{
		// rb2d.velocity = DerectionControl(target.transform.position) * attack3prespeed;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_156 = __this->___rb2d_10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_157 = __this->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_158;
		L_158 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_157, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_159;
		L_159 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_158, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_160;
		L_160 = LoadOfBeasts_ActionManager_DerectionControl_mC2FD0818DEB836ACD25B970A7922E8C4AE60DE20(__this, L_159, NULL);
		float L_161 = __this->___attack3prespeed_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_162;
		L_162 = Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline(L_160, L_161, NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_156, L_162, NULL);
		return;
	}

IL_0676:
	{
		// rb2d.velocity = new Vector2(0, 0);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_163 = __this->___rb2d_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_164;
		memset((&L_164), 0, sizeof(L_164));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_164), (0.0f), (0.0f), /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_163, L_164, NULL);
		// }
		return;
	}
}
// System.Int32 LoadOfBeasts_ActionManager::SelectActionNumber(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LoadOfBeasts_ActionManager_SelectActionNumber_m572545E8889094C318B6F9B5C44E35C0527ECD1F (LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ActionWeight0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	{
		// int Total = 0;//?D??x???v
		V_0 = 0;
		// int Number = 0;//???^?[?????
		V_1 = 0;
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___ActionWeight0;
		V_2 = L_0;
		V_3 = 0;
		goto IL_0018;
	}

IL_000a:
	{
		// foreach (int Elem in ActionWeight)
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = V_2;
		int32_t L_2 = V_3;
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		V_4 = L_4;
		// Total += Elem;
		int32_t L_5 = V_0;
		int32_t L_6 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_add(L_5, L_6));
		int32_t L_7 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0018:
	{
		// foreach (int Elem in ActionWeight)
		int32_t L_8 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = V_2;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
		{
			goto IL_000a;
		}
	}
	{
		// if (Total <= 0)
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			goto IL_0024;
		}
	}
	{
		// return -1;
		return (-1);
	}

IL_0024:
	{
		// float RandomPoint = Random.value * Total;
		float L_11;
		L_11 = Random_get_value_m87344B352E686178D743B14C468EEE01757E9D43(NULL);
		int32_t L_12 = V_0;
		V_5 = ((float)il2cpp_codegen_multiply(L_11, ((float)L_12)));
		goto IL_0045;
	}

IL_0030:
	{
		// if (RandomPoint < ActionWeight[Number])
		float L_13 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = ___ActionWeight0;
		int32_t L_15 = V_1;
		int32_t L_16 = L_15;
		int32_t L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
		if ((((float)L_13) < ((float)((float)L_17))))
		{
			goto IL_004b;
		}
	}
	{
		// RandomPoint -= ActionWeight[Number];
		float L_18 = V_5;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = ___ActionWeight0;
		int32_t L_20 = V_1;
		int32_t L_21 = L_20;
		int32_t L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		V_5 = ((float)il2cpp_codegen_subtract(L_18, ((float)L_22)));
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0045:
	{
		// for (; Number < ActionWeight.Length; Number++)
		int32_t L_24 = V_1;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = ___ActionWeight0;
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_0030;
		}
	}

IL_004b:
	{
		// return Number;
		int32_t L_26 = V_1;
		return L_26;
	}
}
// UnityEngine.GameObject LoadOfBeasts_ActionManager::SearchedObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* LoadOfBeasts_ActionManager_SearchedObject_m3A27BA0C385D43C6EA7224207C018FA22AEB7AEF (LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* __this, String_t* ___targettag0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	{
		// float tmpDis = 0;           //?????p?????
		V_0 = (0.0f);
		// float nearDis = 0;          //???????I?u?W?F?N?g?????
		V_1 = (0.0f);
		// GameObject target = null; //?I?u?W?F?N?g
		V_2 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		String_t* L_0 = ___targettag0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1;
		L_1 = GameObject_FindGameObjectsWithTag_m63AB9863553265F03EDE4C11AEA98AF591CAEA1E(L_0, NULL);
		V_3 = L_1;
		V_4 = 0;
		goto IL_0054;
	}

IL_001a:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_3;
		int32_t L_3 = V_4;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_5 = L_5;
		// tmpDis = Vector3.Distance(candidate.transform.position, this.transform.position);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_9, NULL);
		float L_11;
		L_11 = Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline(L_8, L_10, NULL);
		V_0 = L_11;
		// if (nearDis == 0 || nearDis > tmpDis)
		float L_12 = V_1;
		if ((((float)L_12) == ((float)(0.0f))))
		{
			goto IL_0049;
		}
	}
	{
		float L_13 = V_1;
		float L_14 = V_0;
		if ((!(((float)L_13) > ((float)L_14))))
		{
			goto IL_004e;
		}
	}

IL_0049:
	{
		// nearDis = tmpDis;
		float L_15 = V_0;
		V_1 = L_15;
		// target = candidate;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_5;
		V_2 = L_16;
	}

IL_004e:
	{
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0054:
	{
		// foreach (GameObject candidate in GameObject.FindGameObjectsWithTag(targettag))
		int32_t L_18 = V_4;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = V_3;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// return target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_2;
		return L_20;
	}
}
// UnityEngine.Vector2 LoadOfBeasts_ActionManager::DerectionControl(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 LoadOfBeasts_ActionManager_DerectionControl_mC2FD0818DEB836ACD25B970A7922E8C4AE60DE20 (LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetpos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		// XDefference = targetpos.x - this.transform.position.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___targetpos0;
		float L_1 = L_0.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_4));
		// YDefference = targetpos.y - this.transform.position.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___targetpos0;
		float L_6 = L_5.___y_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_6, L_9));
		// if (Mathf.Abs(XDefference) > 0.1f)
		float L_10 = V_0;
		float L_11;
		L_11 = fabsf(L_10);
		if ((!(((float)L_11) > ((float)(0.100000001f)))))
		{
			goto IL_004e;
		}
	}
	{
		// Cos = XDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_0;
		float L_15 = V_1;
		float L_16 = V_1;
		float L_17;
		L_17 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_13, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_16)))));
		V_2 = ((float)(L_12/L_17));
		goto IL_0054;
	}

IL_004e:
	{
		// Cos = 0.0f;
		V_2 = (0.0f);
	}

IL_0054:
	{
		// if (Mathf.Abs(YDefference) > 0.1f)
		float L_18 = V_1;
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((float)L_19) > ((float)(0.100000001f)))))
		{
			goto IL_0072;
		}
	}
	{
		// Sin = YDefference / Mathf.Sqrt(XDefference * XDefference + YDefference * YDefference);
		float L_20 = V_1;
		float L_21 = V_0;
		float L_22 = V_0;
		float L_23 = V_1;
		float L_24 = V_1;
		float L_25;
		L_25 = sqrtf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_21, L_22)), ((float)il2cpp_codegen_multiply(L_23, L_24)))));
		V_3 = ((float)(L_20/L_25));
		goto IL_0078;
	}

IL_0072:
	{
		// Sin = 0.0f;
		V_3 = (0.0f);
	}

IL_0078:
	{
		// return new Vector2(Cos, Sin);
		float L_26 = V_2;
		float L_27 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_28), L_26, L_27, /*hidden argument*/NULL);
		return L_28;
	}
}
// System.Void LoadOfBeasts_ActionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_ActionManager__ctor_m55E6D9F2DB8D6BCB19A155375AED37F2F5341B90 (LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] attackarray = new int[4];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___attackarray_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___attackarray_6), (void*)L_0);
		// [SerializeField] private int[] walkarray = new int[6];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)6);
		__this->___walkarray_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___walkarray_9), (void*)L_1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LoadOfBeasts_AnimationEvents::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Start_m4963CDFE1E61CE0A903E2DC7F79A70577984A0DB (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		LoadOfBeasts_AnimationEvents_AllFalse_m680F9886F4AD778F5B76FCDD0C9217EC8CF037E2(__this, NULL);
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = L_0->___sesource_6;
		__this->___sesource_23 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_23), (void*)L_1);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Sporn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Sporn_m3C0BD96C2ABE4E04FCC599CEA9AEF3250C71FFE8 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AllFalse();
		LoadOfBeasts_AnimationEvents_AllFalse_m680F9886F4AD778F5B76FCDD0C9217EC8CF037E2(__this, NULL);
		// if(sesource == null)
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_23;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// sesource = GameManager.instance.sesource;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_2 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = L_2->___sesource_6;
		__this->___sesource_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sesource_23), (void*)L_3);
	}

IL_0024:
	{
		// sesource.PlayOneShot(sporn);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_5 = __this->___sporn_17;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Down_m9F2982BEFDAF7228E879FED20F9202CC690D8A39 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		LoadOfBeasts_AnimationEvents_AllFalse_m680F9886F4AD778F5B76FCDD0C9217EC8CF037E2(__this, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Dead_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Dead_1_m9ABEDB40D6D7273DCE3FE6E8D79F00036677A7E0 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// AllFalse();
		LoadOfBeasts_AnimationEvents_AllFalse_m680F9886F4AD778F5B76FCDD0C9217EC8CF037E2(__this, NULL);
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_18;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Dead_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Dead_2_mA6233F43096344C3974E304FE1DB6F19587D405C (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// sesource.PlayOneShot(dead);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = __this->___dead_18;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Dead_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Dead_3_mB7ECE16CA10B1A93A8A9BD5CB3DC651B886CDB96 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ACTIONManager.instance.enemynum -= 1;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_0 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_1 = L_0;
		int32_t L_2 = L_1->___enemynum_38;
		L_1->___enemynum_38 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// if (ACTIONManager.instance.enemynum <= 0)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_3 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_4 = L_3->___enemynum_38;
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// if (ACTIONManager.instance.wavenum == GameManager.instance.enemieslists.Count)
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_5 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		int32_t L_6 = L_5->___wavenum_39;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_7 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		List_1_tAB546D607E887BA476555A06B8B8C49BFA291EBD* L_8 = L_7->___enemieslists_9;
		int32_t L_9;
		L_9 = List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_inline(L_8, List_1_get_Count_m135402F7200F37E5510BF59355514DDFADB97B91_RuntimeMethod_var);
		if ((!(((uint32_t)L_6) == ((uint32_t)L_9))))
		{
			goto IL_004c;
		}
	}
	{
		// ACTIONManager.instance.StartCoroutine("Clear");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_10 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_10, _stringLiteral1D8BE65F4D775FA68F7EA356CD9EF08F2666FC54, NULL);
		goto IL_005c;
	}

IL_004c:
	{
		// ACTIONManager.instance.StartCoroutine("WaveStart");
		ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50* L_12 = ((ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_StaticFields*)il2cpp_codegen_static_fields_for(ACTIONManager_t5E4C2F2D8D150CEF5107538FF934AAB0EED83F50_il2cpp_TypeInfo_var))->___instance_4;
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(L_12, _stringLiteralB71089DD272D8A0511A24F11C14E2FCE3075B76E, NULL);
	}

IL_005c:
	{
		// Destroy(this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_14, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack1_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack1_1_mB3CE64ED46B33E54B0D4D72CEF488A2450E9423D (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack1_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack1_2_m651F40833B4B1A528BCAD9842F4B12CE428D7F7B (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack1sprend_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack1bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack1bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack1);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack1_19;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack1_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack1_3_m04A575DAEA0F3220B29EA597C292738BB6AC5442 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack1sprend_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack1bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack2_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack2_1_m14340A7D53423C7219CE7AAD259EECC97C05D142 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack2_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack2_2_mB64CC7D0DB009BD52C51A83EA16900C43C8092BB (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack2sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack2sprend_13;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack2bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack2bc2d_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack2);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack2_20;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack2_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack2_3_m09278A4881FB05E776D66ED4E29C4CB77E0CB097 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack2sprend_13;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack2bc2d_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack3_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack3_1_mB087B8C1CF8FF0B403F9631D6E815E7B1B9D8BDD (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack3rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3rangesprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack3_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack3_2_m8905EADEF2C50A1BEB3A20A935B530C93070E301 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack3rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3rangesprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack3sprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_1 = __this->___attack3sprend_14;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_1, (bool)1, NULL);
		// attack3bc2d.enabled = true;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack3bc2d_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)1, NULL);
		// sesource.PlayOneShot(attack3);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_4 = __this->___attack3_21;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_3, L_4, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack3_3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack3_3_m3855655CD39F4046BD78A7C72108A2BBC4BC9A83 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack3sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack3sprend_14;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// attack3bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack3bc2d_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack4_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack4_1_m3F2EFEAD3AF2C55503C668629FFE8644B2336193 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack4posobject.transform.position = actionmanager.target.transform.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___attack4posobject_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* L_2 = __this->___actionmanager_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___target_16;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_5, NULL);
		// attack4rangesprend.enabled = true;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___attack4rangesprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::Attack4_2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_Attack4_2_m01F38722D656D64CA397DE742460DDA2964D87B7 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attack4rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_0 = __this->___attack4rangesprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)0, NULL);
		// sesource.PlayOneShot(attack4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1 = __this->___sesource_23;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_2 = __this->___attack4_22;
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_1, L_2, NULL);
		// Instantiate(attack4object, attack4posobject.transform.position, Quaternion.Euler(0, 0, 0));//?U??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___attack4object_16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___attack4posobject_15;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline((0.0f), (0.0f), (0.0f), NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_3, L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::AllFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents_AllFalse_m680F9886F4AD778F5B76FCDD0C9217EC8CF037E2 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		// attack1bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0 = __this->___attack1bc2d_5;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_0, (bool)0, NULL);
		// attack2bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = __this->___attack2bc2d_6;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_1, (bool)0, NULL);
		// attack3bc2d.enabled = false;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_2 = __this->___attack3bc2d_7;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_2, (bool)0, NULL);
		// attack1rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___attack1rangesprend_8;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_3, (bool)0, NULL);
		// attack2rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_4 = __this->___attack2rangesprend_9;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_4, (bool)0, NULL);
		// attack3rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_5 = __this->___attack3rangesprend_10;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_5, (bool)0, NULL);
		// attack4rangesprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_6 = __this->___attack4rangesprend_11;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_6, (bool)0, NULL);
		// attack1sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_7 = __this->___attack1sprend_12;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_7, (bool)0, NULL);
		// attack2sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_8 = __this->___attack2sprend_13;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_8, (bool)0, NULL);
		// attack3sprend.enabled = false;
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_9 = __this->___attack3sprend_14;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AnimationEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AnimationEvents__ctor_m01632973264ED8D0C1A3C2F4727E764887640D68 (LoadOfBeasts_AnimationEvents_tCF2F64FF37952D88022E336F081A3D864CDAABB8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LoadOfBeasts_AttackChecker::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AttackChecker_OnTriggerEnter2D_m3F96196E2898E18D0C5CE084D4A87D052ED828BF (LoadOfBeasts_AttackChecker_t2EFC1E99D1DE7816166CC6DE784B455A83F27219* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = attackweight;
		LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		int32_t L_7 = __this->___attackweight_6;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)L_7);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AttackChecker::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AttackChecker_OnTriggerExit2D_mEF1BDF871B45738E041F2AB1CA7075633FE70024 (LoadOfBeasts_AttackChecker_t2EFC1E99D1DE7816166CC6DE784B455A83F27219* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag == "Player")
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		// actionmanager.attackarray[attacknum] = 0;
		LoadOfBeasts_ActionManager_tBC8926DAC8F5D7BAFFD5F85632FDD7049F486F7E* L_4 = __this->___actionmanager_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = L_4->___attackarray_6;
		int32_t L_6 = __this->___attacknum_5;
		(L_5)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_6), (int32_t)0);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void LoadOfBeasts_AttackChecker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_AttackChecker__ctor_m37A4582A5FCDD9D692C475AC23542B38AC2B303E (LoadOfBeasts_AttackChecker_t2EFC1E99D1DE7816166CC6DE784B455A83F27219* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void LoadOfBeasts_Damage::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_Damage_Start_m494DD45AA7FB05FE5754B3F7A189B6220866467B (LoadOfBeasts_Damage_tD9A019105F6D68B49B18BABFE7B5B278320F87A2* __this, const RuntimeMethod* method) 
{
	{
		// hp = maxhp;
		int32_t L_0 = __this->___maxhp_4;
		__this->___hp_5 = L_0;
		// downpoint = maxhp / 2;
		int32_t L_1 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_1/2));
		// }
		return;
	}
}
// System.Void LoadOfBeasts_Damage::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_Damage_FixedUpdate_m698EA3BCF2D72D2BE5973D85DCB0E117C8575FCA (LoadOfBeasts_Damage_tD9A019105F6D68B49B18BABFE7B5B278320F87A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (animator.GetCurrentAnimatorStateInfo(0).IsName("Sporn") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Attack3Pre") ||
		//     animator.GetCurrentAnimatorStateInfo(0).IsName("Dead"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1;
		L_1 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_0, 0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralB1B0611BB757FB63AD5FE910DFA46A322067F1C1, NULL);
		if (L_2)
		{
			goto IL_0051;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralF6804FBC427EFF0BBA0AD189D02F4728FF39E982, NULL);
		if (L_5)
		{
			goto IL_0051;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___animator_7;
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_7;
		L_7 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_6, 0, NULL);
		V_0 = L_7;
		bool L_8;
		L_8 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		if (!L_8)
		{
			goto IL_0067;
		}
	}

IL_0051:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Muteki");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_10;
		L_10 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteral063F97059CD88D145EDB292C811A17C276E520A2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_9, L_10, NULL);
		return;
	}

IL_0067:
	{
		// this.gameObject.layer = LayerMask.NameToLayer("Charactor");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		int32_t L_12;
		L_12 = LayerMask_NameToLayer_mEA9343DFAF52541409F557BBB4FAC0E92E2FBF6B(_stringLiteralDD08436EE573EF8780EFC9D7FB4C7420258C0EA2, NULL);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_11, L_12, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_Damage::Damage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_Damage_Damage_m74171582E4A3676B1A3B940D9BDAACC090AD02FE (LoadOfBeasts_Damage_tD9A019105F6D68B49B18BABFE7B5B278320F87A2* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hp -= value;
		int32_t L_0 = __this->___hp_5;
		int32_t L_1 = ___value0;
		__this->___hp_5 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		// downpoint -= value;
		int32_t L_2 = __this->___downpoint_6;
		int32_t L_3 = ___value0;
		__this->___downpoint_6 = ((int32_t)il2cpp_codegen_subtract(L_2, L_3));
		// damageeffectpos = new Vector3
		//                     (
		//                         baseposobject.transform.position.x + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.y + Random.Range(-0.5f, 0.5f),
		//                         baseposobject.transform.position.z
		//                     );
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		float L_7 = L_6.___x_2;
		float L_8;
		L_8 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		float L_12 = L_11.___y_3;
		float L_13;
		L_13 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B((-0.5f), (0.5f), NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___baseposobject_9;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_add(L_7, L_8)), ((float)il2cpp_codegen_add(L_12, L_13)), L_17, /*hidden argument*/NULL);
		__this->___damageeffectpos_10 = L_18;
		// Instantiate(damageeffect, damageeffectpos, Quaternion.identity);//?G?t?F?N?g????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___damageeffect_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = __this->___damageeffectpos_10;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_19, L_20, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// if (downpoint <= 0)
		int32_t L_23 = __this->___downpoint_6;
		if ((((int32_t)L_23) > ((int32_t)0)))
		{
			goto IL_0104;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_24 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_24, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_25 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_25, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// animator.ResetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_26 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_26, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// animator.ResetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_27, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// downpoint = maxhp / 2;
		int32_t L_28 = __this->___maxhp_4;
		__this->___downpoint_6 = ((int32_t)(L_28/2));
		// animator.Play("Down");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_29, _stringLiteral455BE6C51A15F36C8D913F896775D15888AC8673, NULL);
	}

IL_0104:
	{
		// if (hp <= 0)
		int32_t L_30 = __this->___hp_5;
		if ((((int32_t)L_30) > ((int32_t)0)))
		{
			goto IL_0153;
		}
	}
	{
		// animator.ResetTrigger("attack1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_31, _stringLiteral442C6C9A3194E6401B089F80A3BCFAA96C389D8E, NULL);
		// animator.ResetTrigger("attack2");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_32, _stringLiteral8AF464F3B1B6ADC51646AC7BB2193F97AC9166A0, NULL);
		// animator.ResetTrigger("attack3");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_33, _stringLiteralA1566C6EC1C98DB1BD97820FB6DB6117A05C4B4A, NULL);
		// animator.ResetTrigger("attack4");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34 = __this->___animator_7;
		Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC(L_34, _stringLiteralBC49E01B94744D7067F3860C0595CFBACE712B77, NULL);
		// Death();
		LoadOfBeasts_Damage_Death_mA4D80C66A2F86CD89B3073045DC2099A72C6870B(__this, NULL);
	}

IL_0153:
	{
		// }
		return;
	}
}
// System.Void LoadOfBeasts_Damage::Death()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_Damage_Death_mA4D80C66A2F86CD89B3073045DC2099A72C6870B (LoadOfBeasts_Damage_tD9A019105F6D68B49B18BABFE7B5B278320F87A2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator.Play("Dead");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_7;
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		// }
		return;
	}
}
// System.Void LoadOfBeasts_Damage::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadOfBeasts_Damage__ctor_mDCB0A2E4F009BF682F4176A4A5A7A97513832A5D (LoadOfBeasts_Damage_tD9A019105F6D68B49B18BABFE7B5B278320F87A2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_UnaryNegation_m47556D28F72B018AC4D5160710C83A805F10A783_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___a0;
		float L_3 = L_2.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((-L_1)), ((-L_3)), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0017;
	}

IL_0017:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m4EEB2FF3F4830390A53CE9B6076FB31801D65EED_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_m8F73B300CB4E6F9B4EB5FB6130363D76CEAA230B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m99C722723EDD875852EF854AD7B7C4F8AC4F84AB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
