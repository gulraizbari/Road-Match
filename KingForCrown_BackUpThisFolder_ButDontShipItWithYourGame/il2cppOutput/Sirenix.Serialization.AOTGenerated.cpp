#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Sirenix.Serialization.ComplexTypeSerializer`1<CellData[,]>
struct ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502;
// Sirenix.Serialization.ComplexTypeSerializer`1<CellData>
struct ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29;
// Sirenix.Serialization.ComplexTypeSerializer`1<System.Object>
struct ComplexTypeSerializer_1_tCFADED5CEF4AAA38D0FB34727CB6436B605B38A8;
// Sirenix.Serialization.ComplexTypeSerializer`1<System.String>
struct ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<CellData[,]>>
struct Dictionary_2_t574AA8107B5975A17206CCA73170950F2472CA9E;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<CellData>>
struct Dictionary_2_t0B3E69994D0A3E4A0F4FC28BE1C7F22A7F41AD7D;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<System.String>>
struct Dictionary_2_t94F48EFE328BC7301E1B5F2EBEF635A1A12D6695;
// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer>
struct Dictionary_2_tFC542F52AF721FEF237136A160FE0EBB15A771CA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// Sirenix.Serialization.EnumSerializer`1<Animals>
struct EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02;
// Sirenix.Serialization.EnumSerializer`1<BoosterType>
struct EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5;
// Sirenix.Serialization.EnumSerializer`1<CollectableItems>
struct EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D;
// Sirenix.Serialization.EnumSerializer`1<Fruits>
struct EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409;
// Sirenix.Serialization.EnumSerializer`1<System.Int32Enum>
struct EnumSerializer_1_t06FE69B3F19EE7862025B6F9D1E3847F425D0733;
// Sirenix.Serialization.EnumSerializer`1<ItemType>
struct EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545;
// Sirenix.Serialization.EnumSerializer`1<PowerUpTypes>
struct EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC;
// Sirenix.Serialization.EnumSerializer`1<RandomObjects>
struct EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD;
// Sirenix.Serialization.EnumSerializer`1<TilePlacements>
struct EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79;
// Sirenix.Serialization.EnumSerializer`1<TileType>
struct EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87;
// Sirenix.Serialization.EnumSerializer`1<TypesOfHurdle>
struct EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C;
// Sirenix.Serialization.EnumSerializer`1<Vegetables>
struct EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214;
// Sirenix.Serialization.IFormatter`1<CellData[,]>
struct IFormatter_1_t7A7ECB87892E8E5C52054F5A63CC4D3697296B49;
// Sirenix.Serialization.IFormatter`1<CellData>
struct IFormatter_1_tF3008F62DCEE7A2CF2B17B75F5473C359582592E;
// Sirenix.Serialization.IFormatter`1<System.String>
struct IFormatter_1_t0DD7B13C6F431C73CF0E1F3E5BD29A7EC96C4AB9;
// Sirenix.Serialization.MultiDimensionalArrayFormatter`2<CellData[,],CellData>
struct MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012;
// Sirenix.Serialization.MultiDimensionalArrayFormatter`2<System.Object,System.Object>
struct MultiDimensionalArrayFormatter_2_t38BF2BEBFF8D70E832A7AFAA4F7E371B4922709C;
// Sirenix.Serialization.ReflectionFormatter`1<CellData[,]>
struct ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8;
// Sirenix.Serialization.ReflectionFormatter`1<CellData>
struct ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB;
// Sirenix.Serialization.ReflectionFormatter`1<System.Object>
struct ReflectionFormatter_1_tB6DAF53F6F410C9664F5960209ABDD85E507E2D8;
// Sirenix.Serialization.Serializer`1<CellData>
struct Serializer_1_t0648E2596A41B728BDE4CE5C8F95C8CC5B66A288;
// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<CellData[,]>[]
struct SerializationCallbackU5BU5D_t5C179BBAAED9A84D0F93F911F281CFA8A8EC693A;
// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<CellData>[]
struct SerializationCallbackU5BU5D_tCA44B67F3FA8449C4DAE326BA15245B4F2AE3BEB;
// Sirenix.Serialization.BooleanSerializer
struct BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7;
// CellData
struct CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F;
// Sirenix.Serialization.ISerializationPolicy
struct ISerializationPolicy_t0C47BF78FD9B96AE6371585EAE63593988C2FA43;
// Sirenix.Serialization.Int32Serializer
struct Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2;
// System.String
struct String_t;
// System.Type
struct Type_t;

IL2CPP_EXTERN_C RuntimeClass* BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_m33FA7E3D45B09DB4A83396329EEF3382F208BD46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_m36A7F11181D62C3A99BDC8FD80E06382462316C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_mA7E5B0B24309BFE20A1155BB67A6F5DF0339D8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_m153F5928F0E6DA459EA5A0C207229221E756DDEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_m5D527EA932D3809F531B83621E29BF5390302CE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_m7387133D5499495A1DEB804BB913911B1B78A4F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_m771A21638AA42485B5BB6C2899EA87A27D4ADC73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_m806AADF911BE1AA971EAC202A8CCF9A48F5B6A52_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_m822CC7A531748960623E6FBCC6D7E5964419F1BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_m8C0FD65EABB7E6395048CB2BA9CEA8E501DE5738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_mA5F42C34DA67A470299439EBB45B9EEB3D9976E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_mBFED44DDE89189B8FDF15E7BBB5958FF3A9B7133_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_mD570EC3D56EDC4DD8028E05AD3B05FD8488751F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_mF1E485F57C19B0CABDF37D02630667AB1DA16560_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionFormatter_1__ctor_m1C60BB8482FA8292579BCA021C38A4EC7CA5DEA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionFormatter_1__ctor_m367E05F1A7DAC7798595E41F666FD0E65357E1B8_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t173B7B51E1BD4E21DB527508DCEFDA1073158A81 
{
};

// Sirenix.Serialization.BaseFormatter`1<CellData[,]>
struct BaseFormatter_1_tC50B4D04BDEF3951CC3E30850CAB420B17D127AD  : public RuntimeObject
{
};

// Sirenix.Serialization.BaseFormatter`1<CellData>
struct BaseFormatter_1_t86EBCDB87DC33F523DB0BF6CBD124A5283E33DEB  : public RuntimeObject
{
};

// CellData
struct CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F  : public RuntimeObject
{
	// TileType CellData::tileType
	int32_t ___tileType_0;
	// TilePlacements CellData::tilePlacement
	int32_t ___tilePlacement_1;
	// TypesOfHurdle CellData::typeOfHurdle
	int32_t ___typeOfHurdle_2;
	// ItemType CellData::typeOfItem
	int32_t ___typeOfItem_3;
	// Fruits CellData::typeOfFruit
	int32_t ___typeOfFruit_4;
	// Vegetables CellData::typeOfVegetables
	int32_t ___typeOfVegetables_5;
	// Animals CellData::typeOfAnimals
	int32_t ___typeOfAnimals_6;
	// RandomObjects CellData::typeOfRandomObjects
	int32_t ___typeOfRandomObjects_7;
	// CollectableItems CellData::typeOfCollectableItems
	int32_t ___typeOfCollectableItems_8;
	// BoosterType CellData::typeOfBooster
	int32_t ___typeOfBooster_9;
	// PowerUpTypes CellData::typeOfPowerUps
	int32_t ___typeOfPowerUps_10;
	// System.String CellData::linkedID
	String_t* ___linkedID_11;
	// System.Boolean CellData::IsPlayer
	bool ___IsPlayer_12;
	// System.Boolean CellData::IsCage
	bool ___IsCage_13;
	// System.Boolean CellData::notLink
	bool ___notLink_14;
	// System.Boolean CellData::walkableGate
	bool ___walkableGate_15;
	// System.Int32 CellData::enemyHealth
	int32_t ___enemyHealth_16;
	// System.Int32 CellData::powerUPLVL
	int32_t ___powerUPLVL_17;
};

// Sirenix.Serialization.AOTGenerated.PreventCodeStrippingViaReferences
struct PreventCodeStrippingViaReferences_t73A6D17CC562E67E2D540453D45099F37AB84BCD  : public RuntimeObject
{
};

// Sirenix.Serialization.Serializer
struct Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Sirenix.Serialization.MultiDimensionalArrayFormatter`2<CellData[,],CellData>
struct MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012  : public BaseFormatter_1_tC50B4D04BDEF3951CC3E30850CAB420B17D127AD
{
};

// Sirenix.Serialization.ReflectionFormatter`1<CellData[,]>
struct ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8  : public BaseFormatter_1_tC50B4D04BDEF3951CC3E30850CAB420B17D127AD
{
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ReflectionFormatter`1::<OverridePolicy>k__BackingField
	RuntimeObject* ___U3COverridePolicyU3Ek__BackingField_8;
};

// Sirenix.Serialization.ReflectionFormatter`1<CellData>
struct ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB  : public BaseFormatter_1_t86EBCDB87DC33F523DB0BF6CBD124A5283E33DEB
{
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ReflectionFormatter`1::<OverridePolicy>k__BackingField
	RuntimeObject* ___U3COverridePolicyU3Ek__BackingField_8;
};

// Sirenix.Serialization.Serializer`1<CellData[,]>
struct Serializer_1_t162F0D3C49220ABB94AE43A8893A9AB33C4F83AB  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<Animals>
struct Serializer_1_tCBFD5CA69B74C3B21FB72C8A9BD3A502C6B22EF3  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<System.Boolean>
struct Serializer_1_tE9BCFFCE3749D415B953BEC8196DE5DD105114F6  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<BoosterType>
struct Serializer_1_tB60CD4AE2A4A3A8BDC28BF08894969A30CDBBFB1  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<CellData>
struct Serializer_1_t0648E2596A41B728BDE4CE5C8F95C8CC5B66A288  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<CollectableItems>
struct Serializer_1_t1609F288AD35B856903D5D557EB5B35E5895B533  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<Fruits>
struct Serializer_1_t75C819E05C086FB6B9DBE68AA3E265A583DC1609  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<System.Int32>
struct Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<ItemType>
struct Serializer_1_t1C9CE6A025005899DAAE74296661AFAEB2ECE605  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<PowerUpTypes>
struct Serializer_1_t84860E54D2742FD9A5B87EEDDBB391179F26A90A  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<RandomObjects>
struct Serializer_1_t152D46B3486A80C5BE9982FBF03D23626254554D  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<System.String>
struct Serializer_1_t9854C0179F50900A646768F185F6E029A9121EE0  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<TilePlacements>
struct Serializer_1_t040F0228A15896CA91F8D8B2A5C710D5AEB7646B  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<TileType>
struct Serializer_1_t54DDD976681EC31A9EC98CFAD36C407D67367273  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<TypesOfHurdle>
struct Serializer_1_t0844B3013894BFF0AEB791F0B0569E22F31583C2  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<Vegetables>
struct Serializer_1_tAD3D889623F90A706677E77FD9F2BAEC716E944F  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// Sirenix.Serialization.ComplexTypeSerializer`1<CellData[,]>
struct ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502  : public Serializer_1_t162F0D3C49220ABB94AE43A8893A9AB33C4F83AB
{
};

// Sirenix.Serialization.ComplexTypeSerializer`1<CellData>
struct ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29  : public Serializer_1_t0648E2596A41B728BDE4CE5C8F95C8CC5B66A288
{
};

// Sirenix.Serialization.ComplexTypeSerializer`1<System.String>
struct ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8  : public Serializer_1_t9854C0179F50900A646768F185F6E029A9121EE0
{
};

// Sirenix.Serialization.EnumSerializer`1<Animals>
struct EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02  : public Serializer_1_tCBFD5CA69B74C3B21FB72C8A9BD3A502C6B22EF3
{
};

// Sirenix.Serialization.EnumSerializer`1<BoosterType>
struct EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5  : public Serializer_1_tB60CD4AE2A4A3A8BDC28BF08894969A30CDBBFB1
{
};

// Sirenix.Serialization.EnumSerializer`1<CollectableItems>
struct EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D  : public Serializer_1_t1609F288AD35B856903D5D557EB5B35E5895B533
{
};

// Sirenix.Serialization.EnumSerializer`1<Fruits>
struct EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409  : public Serializer_1_t75C819E05C086FB6B9DBE68AA3E265A583DC1609
{
};

// Sirenix.Serialization.EnumSerializer`1<ItemType>
struct EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545  : public Serializer_1_t1C9CE6A025005899DAAE74296661AFAEB2ECE605
{
};

// Sirenix.Serialization.EnumSerializer`1<PowerUpTypes>
struct EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC  : public Serializer_1_t84860E54D2742FD9A5B87EEDDBB391179F26A90A
{
};

// Sirenix.Serialization.EnumSerializer`1<RandomObjects>
struct EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD  : public Serializer_1_t152D46B3486A80C5BE9982FBF03D23626254554D
{
};

// Sirenix.Serialization.EnumSerializer`1<TilePlacements>
struct EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79  : public Serializer_1_t040F0228A15896CA91F8D8B2A5C710D5AEB7646B
{
};

// Sirenix.Serialization.EnumSerializer`1<TileType>
struct EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87  : public Serializer_1_t54DDD976681EC31A9EC98CFAD36C407D67367273
{
};

// Sirenix.Serialization.EnumSerializer`1<TypesOfHurdle>
struct EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C  : public Serializer_1_t0844B3013894BFF0AEB791F0B0569E22F31583C2
{
};

// Sirenix.Serialization.EnumSerializer`1<Vegetables>
struct EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214  : public Serializer_1_tAD3D889623F90A706677E77FD9F2BAEC716E944F
{
};

// Sirenix.Serialization.BooleanSerializer
struct BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7  : public Serializer_1_tE9BCFFCE3749D415B953BEC8196DE5DD105114F6
{
};

// Sirenix.Serialization.Int32Serializer
struct Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2  : public Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07
{
};

// <Module>

// <Module>

// Sirenix.Serialization.BaseFormatter`1<CellData[,]>
struct BaseFormatter_1_tC50B4D04BDEF3951CC3E30850CAB420B17D127AD_StaticFields
{
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializingCallbacks
	SerializationCallbackU5BU5D_t5C179BBAAED9A84D0F93F911F281CFA8A8EC693A* ___OnSerializingCallbacks_0;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializedCallbacks
	SerializationCallbackU5BU5D_t5C179BBAAED9A84D0F93F911F281CFA8A8EC693A* ___OnSerializedCallbacks_1;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializingCallbacks
	SerializationCallbackU5BU5D_t5C179BBAAED9A84D0F93F911F281CFA8A8EC693A* ___OnDeserializingCallbacks_2;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializedCallbacks
	SerializationCallbackU5BU5D_t5C179BBAAED9A84D0F93F911F281CFA8A8EC693A* ___OnDeserializedCallbacks_3;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::IsValueType
	bool ___IsValueType_4;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsISerializationCallbackReceiver
	bool ___ImplementsISerializationCallbackReceiver_5;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIDeserializationCallback
	bool ___ImplementsIDeserializationCallback_6;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIObjectReference
	bool ___ImplementsIObjectReference_7;
};

// Sirenix.Serialization.BaseFormatter`1<CellData[,]>

// Sirenix.Serialization.BaseFormatter`1<CellData>
struct BaseFormatter_1_t86EBCDB87DC33F523DB0BF6CBD124A5283E33DEB_StaticFields
{
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializingCallbacks
	SerializationCallbackU5BU5D_tCA44B67F3FA8449C4DAE326BA15245B4F2AE3BEB* ___OnSerializingCallbacks_0;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnSerializedCallbacks
	SerializationCallbackU5BU5D_tCA44B67F3FA8449C4DAE326BA15245B4F2AE3BEB* ___OnSerializedCallbacks_1;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializingCallbacks
	SerializationCallbackU5BU5D_tCA44B67F3FA8449C4DAE326BA15245B4F2AE3BEB* ___OnDeserializingCallbacks_2;
	// Sirenix.Serialization.BaseFormatter`1/SerializationCallback<T>[] Sirenix.Serialization.BaseFormatter`1::OnDeserializedCallbacks
	SerializationCallbackU5BU5D_tCA44B67F3FA8449C4DAE326BA15245B4F2AE3BEB* ___OnDeserializedCallbacks_3;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::IsValueType
	bool ___IsValueType_4;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsISerializationCallbackReceiver
	bool ___ImplementsISerializationCallbackReceiver_5;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIDeserializationCallback
	bool ___ImplementsIDeserializationCallback_6;
	// System.Boolean Sirenix.Serialization.BaseFormatter`1::ImplementsIObjectReference
	bool ___ImplementsIObjectReference_7;
};

// Sirenix.Serialization.BaseFormatter`1<CellData>

// CellData

// CellData

// Sirenix.Serialization.AOTGenerated.PreventCodeStrippingViaReferences

// Sirenix.Serialization.AOTGenerated.PreventCodeStrippingViaReferences

// Sirenix.Serialization.Serializer
struct Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> Sirenix.Serialization.Serializer::PrimitiveReaderWriterTypes
	Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0* ___PrimitiveReaderWriterTypes_0;
	// System.Object Sirenix.Serialization.Serializer::LOCK
	RuntimeObject* ___LOCK_1;
	// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer> Sirenix.Serialization.Serializer::ReaderWriterCache
	Dictionary_2_tFC542F52AF721FEF237136A160FE0EBB15A771CA* ___ReaderWriterCache_2;
};

// Sirenix.Serialization.Serializer

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// Sirenix.Serialization.MultiDimensionalArrayFormatter`2<CellData[,],CellData>
struct MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012_StaticFields
{
	// System.Int32 Sirenix.Serialization.MultiDimensionalArrayFormatter`2::ArrayRank
	int32_t ___ArrayRank_10;
	// Sirenix.Serialization.Serializer`1<TElement> Sirenix.Serialization.MultiDimensionalArrayFormatter`2::ValueReaderWriter
	Serializer_1_t0648E2596A41B728BDE4CE5C8F95C8CC5B66A288* ___ValueReaderWriter_11;
};

// Sirenix.Serialization.MultiDimensionalArrayFormatter`2<CellData[,],CellData>

// Sirenix.Serialization.ReflectionFormatter`1<CellData[,]>

// Sirenix.Serialization.ReflectionFormatter`1<CellData[,]>

// Sirenix.Serialization.ReflectionFormatter`1<CellData>

// Sirenix.Serialization.ReflectionFormatter`1<CellData>

// Sirenix.Serialization.Serializer`1<CellData[,]>

// Sirenix.Serialization.Serializer`1<CellData[,]>

// Sirenix.Serialization.Serializer`1<Animals>

// Sirenix.Serialization.Serializer`1<Animals>

// Sirenix.Serialization.Serializer`1<System.Boolean>

// Sirenix.Serialization.Serializer`1<System.Boolean>

// Sirenix.Serialization.Serializer`1<BoosterType>

// Sirenix.Serialization.Serializer`1<BoosterType>

// Sirenix.Serialization.Serializer`1<CellData>

// Sirenix.Serialization.Serializer`1<CellData>

// Sirenix.Serialization.Serializer`1<CollectableItems>

// Sirenix.Serialization.Serializer`1<CollectableItems>

// Sirenix.Serialization.Serializer`1<Fruits>

// Sirenix.Serialization.Serializer`1<Fruits>

// Sirenix.Serialization.Serializer`1<System.Int32>

// Sirenix.Serialization.Serializer`1<System.Int32>

// Sirenix.Serialization.Serializer`1<ItemType>

// Sirenix.Serialization.Serializer`1<ItemType>

// Sirenix.Serialization.Serializer`1<PowerUpTypes>

// Sirenix.Serialization.Serializer`1<PowerUpTypes>

// Sirenix.Serialization.Serializer`1<RandomObjects>

// Sirenix.Serialization.Serializer`1<RandomObjects>

// Sirenix.Serialization.Serializer`1<System.String>

// Sirenix.Serialization.Serializer`1<System.String>

// Sirenix.Serialization.Serializer`1<TilePlacements>

// Sirenix.Serialization.Serializer`1<TilePlacements>

// Sirenix.Serialization.Serializer`1<TileType>

// Sirenix.Serialization.Serializer`1<TileType>

// Sirenix.Serialization.Serializer`1<TypesOfHurdle>

// Sirenix.Serialization.Serializer`1<TypesOfHurdle>

// Sirenix.Serialization.Serializer`1<Vegetables>

// Sirenix.Serialization.Serializer`1<Vegetables>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.Void

// System.Void

// Sirenix.Serialization.ComplexTypeSerializer`1<CellData[,]>
struct ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_t574AA8107B5975A17206CCA73170950F2472CA9E* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.ComplexTypeSerializer`1<CellData[,]>

// Sirenix.Serialization.ComplexTypeSerializer`1<CellData>
struct ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_t0B3E69994D0A3E4A0F4FC28BE1C7F22A7F41AD7D* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.ComplexTypeSerializer`1<CellData>

// Sirenix.Serialization.ComplexTypeSerializer`1<System.String>
struct ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8_StaticFields
{
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeMayBeBoxedValueType
	bool ___ComplexTypeMayBeBoxedValueType_3;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsAbstract
	bool ___ComplexTypeIsAbstract_4;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsNullable
	bool ___ComplexTypeIsNullable_5;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::ComplexTypeIsValueType
	bool ___ComplexTypeIsValueType_6;
	// System.Type Sirenix.Serialization.ComplexTypeSerializer`1::TypeOf_T
	Type_t* ___TypeOf_T_7;
	// System.Boolean Sirenix.Serialization.ComplexTypeSerializer`1::AllowDeserializeInvalidDataForT
	bool ___AllowDeserializeInvalidDataForT_8;
	// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<T>> Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy
	Dictionary_2_t94F48EFE328BC7301E1B5F2EBEF635A1A12D6695* ___FormattersByPolicy_9;
	// System.Object Sirenix.Serialization.ComplexTypeSerializer`1::FormattersByPolicy_LOCK
	RuntimeObject* ___FormattersByPolicy_LOCK_10;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicy
	RuntimeObject* ___UnityPolicy_11;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicy
	RuntimeObject* ___StrictPolicy_12;
	// Sirenix.Serialization.ISerializationPolicy Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicy
	RuntimeObject* ___EverythingPolicy_13;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::UnityPolicyFormatter
	RuntimeObject* ___UnityPolicyFormatter_14;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::StrictPolicyFormatter
	RuntimeObject* ___StrictPolicyFormatter_15;
	// Sirenix.Serialization.IFormatter`1<T> Sirenix.Serialization.ComplexTypeSerializer`1::EverythingPolicyFormatter
	RuntimeObject* ___EverythingPolicyFormatter_16;
};

// Sirenix.Serialization.ComplexTypeSerializer`1<System.String>

// Sirenix.Serialization.EnumSerializer`1<Animals>

// Sirenix.Serialization.EnumSerializer`1<Animals>

// Sirenix.Serialization.EnumSerializer`1<BoosterType>

// Sirenix.Serialization.EnumSerializer`1<BoosterType>

// Sirenix.Serialization.EnumSerializer`1<CollectableItems>

// Sirenix.Serialization.EnumSerializer`1<CollectableItems>

// Sirenix.Serialization.EnumSerializer`1<Fruits>

// Sirenix.Serialization.EnumSerializer`1<Fruits>

// Sirenix.Serialization.EnumSerializer`1<ItemType>

// Sirenix.Serialization.EnumSerializer`1<ItemType>

// Sirenix.Serialization.EnumSerializer`1<PowerUpTypes>

// Sirenix.Serialization.EnumSerializer`1<PowerUpTypes>

// Sirenix.Serialization.EnumSerializer`1<RandomObjects>

// Sirenix.Serialization.EnumSerializer`1<RandomObjects>

// Sirenix.Serialization.EnumSerializer`1<TilePlacements>

// Sirenix.Serialization.EnumSerializer`1<TilePlacements>

// Sirenix.Serialization.EnumSerializer`1<TileType>

// Sirenix.Serialization.EnumSerializer`1<TileType>

// Sirenix.Serialization.EnumSerializer`1<TypesOfHurdle>

// Sirenix.Serialization.EnumSerializer`1<TypesOfHurdle>

// Sirenix.Serialization.EnumSerializer`1<Vegetables>

// Sirenix.Serialization.EnumSerializer`1<Vegetables>

// Sirenix.Serialization.BooleanSerializer

// Sirenix.Serialization.BooleanSerializer

// Sirenix.Serialization.Int32Serializer

// Sirenix.Serialization.Int32Serializer
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Sirenix.Serialization.EnumSerializer`1<System.Int32Enum>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared (EnumSerializer_1_t06FE69B3F19EE7862025B6F9D1E3847F425D0733* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared (ComplexTypeSerializer_1_tCFADED5CEF4AAA38D0FB34727CB6436B605B38A8* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionFormatter_1__ctor_mBEB4F353923A667045D79ACE70460FF2968B5EDE_gshared (ReflectionFormatter_1_tB6DAF53F6F410C9664F5960209ABDD85E507E2D8* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.MultiDimensionalArrayFormatter`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiDimensionalArrayFormatter_2__ctor_mD833E61358B3C40EEED9E8967B19F84C894F8F0F_gshared (MultiDimensionalArrayFormatter_2_t38BF2BEBFF8D70E832A7AFAA4F7E371B4922709C* __this, const RuntimeMethod* method) ;

// System.Void Sirenix.Serialization.EnumSerializer`1<Animals>::.ctor()
inline void EnumSerializer_1__ctor_m153F5928F0E6DA459EA5A0C207229221E756DDEB (EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<BoosterType>::.ctor()
inline void EnumSerializer_1__ctor_mF1E485F57C19B0CABDF37D02630667AB1DA16560 (EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<CollectableItems>::.ctor()
inline void EnumSerializer_1__ctor_m822CC7A531748960623E6FBCC6D7E5964419F1BB (EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<Fruits>::.ctor()
inline void EnumSerializer_1__ctor_m7387133D5499495A1DEB804BB913911B1B78A4F7 (EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<ItemType>::.ctor()
inline void EnumSerializer_1__ctor_m8C0FD65EABB7E6395048CB2BA9CEA8E501DE5738 (EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<PowerUpTypes>::.ctor()
inline void EnumSerializer_1__ctor_mBFED44DDE89189B8FDF15E7BBB5958FF3A9B7133 (EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<RandomObjects>::.ctor()
inline void EnumSerializer_1__ctor_mD570EC3D56EDC4DD8028E05AD3B05FD8488751F8 (EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<System.String>::.ctor()
inline void ComplexTypeSerializer_1__ctor_m36A7F11181D62C3A99BDC8FD80E06382462316C0 (ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<TilePlacements>::.ctor()
inline void EnumSerializer_1__ctor_m806AADF911BE1AA971EAC202A8CCF9A48F5B6A52 (EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<TileType>::.ctor()
inline void EnumSerializer_1__ctor_m771A21638AA42485B5BB6C2899EA87A27D4ADC73 (EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<TypesOfHurdle>::.ctor()
inline void EnumSerializer_1__ctor_m5D527EA932D3809F531B83621E29BF5390302CE1 (EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<Vegetables>::.ctor()
inline void EnumSerializer_1__ctor_mA5F42C34DA67A470299439EBB45B9EEB3D9976E6 (EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214*, const RuntimeMethod*))EnumSerializer_1__ctor_mAC694703E716197B0BBD5CC3AD6CE13599A0CEBD_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.BooleanSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanSerializer__ctor_m88A837E4C477BB0AF23DA82F4609AD8868F8556D (BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* __this, const RuntimeMethod* method) ;
// System.Void CellData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CellData__ctor_m96A52AEA79C7AEBD19464949AEA58DC17D22A834 (CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<CellData>::.ctor()
inline void ReflectionFormatter_1__ctor_m367E05F1A7DAC7798595E41F666FD0E65357E1B8 (ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB*, const RuntimeMethod*))ReflectionFormatter_1__ctor_mBEB4F353923A667045D79ACE70460FF2968B5EDE_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<CellData>::.ctor()
inline void ComplexTypeSerializer_1__ctor_m33FA7E3D45B09DB4A83396329EEF3382F208BD46 (ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.MultiDimensionalArrayFormatter`2<CellData[,],CellData>::.ctor()
inline void MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D (MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012* __this, const RuntimeMethod* method)
{
	((  void (*) (MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012*, const RuntimeMethod*))MultiDimensionalArrayFormatter_2__ctor_mD833E61358B3C40EEED9E8967B19F84C894F8F0F_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ReflectionFormatter`1<CellData[,]>::.ctor()
inline void ReflectionFormatter_1__ctor_m1C60BB8482FA8292579BCA021C38A4EC7CA5DEA0 (ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8* __this, const RuntimeMethod* method)
{
	((  void (*) (ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8*, const RuntimeMethod*))ReflectionFormatter_1__ctor_mBEB4F353923A667045D79ACE70460FF2968B5EDE_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<CellData[,]>::.ctor()
inline void ComplexTypeSerializer_1__ctor_mA7E5B0B24309BFE20A1155BB67A6F5DF0339D8EC (ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.Int32Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Serializer__ctor_m4597E47DF915AB38A814DDD497B71E3DBC4AF02C (Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* __this, const RuntimeMethod* method) ;
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
// System.Void Sirenix.Serialization.AOTGenerated.PreventCodeStrippingViaReferences::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreventCodeStrippingViaReferences__cctor_m2299EBFF5769500E8639CDB151322A7B2C673EB6 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_m33FA7E3D45B09DB4A83396329EEF3382F208BD46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_m36A7F11181D62C3A99BDC8FD80E06382462316C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_mA7E5B0B24309BFE20A1155BB67A6F5DF0339D8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_m153F5928F0E6DA459EA5A0C207229221E756DDEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_m5D527EA932D3809F531B83621E29BF5390302CE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_m7387133D5499495A1DEB804BB913911B1B78A4F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_m771A21638AA42485B5BB6C2899EA87A27D4ADC73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_m806AADF911BE1AA971EAC202A8CCF9A48F5B6A52_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_m822CC7A531748960623E6FBCC6D7E5964419F1BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_m8C0FD65EABB7E6395048CB2BA9CEA8E501DE5738_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_mA5F42C34DA67A470299439EBB45B9EEB3D9976E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_mBFED44DDE89189B8FDF15E7BBB5958FF3A9B7133_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_mD570EC3D56EDC4DD8028E05AD3B05FD8488751F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_mF1E485F57C19B0CABDF37D02630667AB1DA16560_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1__ctor_m1C60BB8482FA8292579BCA021C38A4EC7CA5DEA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1__ctor_m367E05F1A7DAC7798595E41F666FD0E65357E1B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	bool V_12 = false;
	int32_t V_13 = 0;
	EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02* G_B2_0 = NULL;
	EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02* G_B1_0 = NULL;
	EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5* G_B4_0 = NULL;
	EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5* G_B3_0 = NULL;
	EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D* G_B6_0 = NULL;
	EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D* G_B5_0 = NULL;
	EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409* G_B8_0 = NULL;
	EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409* G_B7_0 = NULL;
	EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545* G_B10_0 = NULL;
	EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545* G_B9_0 = NULL;
	EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC* G_B12_0 = NULL;
	EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC* G_B11_0 = NULL;
	EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD* G_B14_0 = NULL;
	EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD* G_B13_0 = NULL;
	EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79* G_B16_0 = NULL;
	EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79* G_B15_0 = NULL;
	EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87* G_B18_0 = NULL;
	EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87* G_B17_0 = NULL;
	EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C* G_B20_0 = NULL;
	EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C* G_B19_0 = NULL;
	EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214* G_B22_0 = NULL;
	EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214* G_B21_0 = NULL;
	BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* G_B24_0 = NULL;
	BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* G_B23_0 = NULL;
	Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* G_B26_0 = NULL;
	Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* G_B25_0 = NULL;
	{
		V_0 = (bool)0;
		il2cpp_codegen_initobj((&V_1), sizeof(int32_t));
		EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02* L_0 = (EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02*)il2cpp_codegen_object_new(EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		EnumSerializer_1__ctor_m153F5928F0E6DA459EA5A0C207229221E756DDEB(L_0, EnumSerializer_1__ctor_m153F5928F0E6DA459EA5A0C207229221E756DDEB_RuntimeMethod_var);
		bool L_1 = V_0;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0026;
		}
	}
	{
		EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02* L_2 = G_B1_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<Animals>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_2, (RuntimeObject*)NULL);
		EnumSerializer_1_t7C4BC2D37E8BB33195C275EB4F5428A27E17CF02* L_4 = L_2;
		NullCheck(L_4);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<Animals>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_4, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B2_0 = L_4;
	}

IL_0026:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(int32_t));
		EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5* L_5 = (EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5*)il2cpp_codegen_object_new(EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EnumSerializer_1__ctor_mF1E485F57C19B0CABDF37D02630667AB1DA16560(L_5, EnumSerializer_1__ctor_mF1E485F57C19B0CABDF37D02630667AB1DA16560_RuntimeMethod_var);
		bool L_6 = V_0;
		G_B3_0 = L_5;
		if (!L_6)
		{
			G_B4_0 = L_5;
			goto IL_004b;
		}
	}
	{
		EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5* L_7 = G_B3_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<BoosterType>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_7, (RuntimeObject*)NULL);
		EnumSerializer_1_t51BA89D43B1191C96BA9AF70260BA6F2F74ED8C5* L_9 = L_7;
		NullCheck(L_9);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<BoosterType>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_9, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B4_0 = L_9;
	}

IL_004b:
	{
		il2cpp_codegen_initobj((&V_3), sizeof(int32_t));
		EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D* L_10 = (EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D*)il2cpp_codegen_object_new(EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		EnumSerializer_1__ctor_m822CC7A531748960623E6FBCC6D7E5964419F1BB(L_10, EnumSerializer_1__ctor_m822CC7A531748960623E6FBCC6D7E5964419F1BB_RuntimeMethod_var);
		bool L_11 = V_0;
		G_B5_0 = L_10;
		if (!L_11)
		{
			G_B6_0 = L_10;
			goto IL_0070;
		}
	}
	{
		EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D* L_12 = G_B5_0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<CollectableItems>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_12, (RuntimeObject*)NULL);
		EnumSerializer_1_tFF4A159576D7FEDDFC570C2771B5CABE7B7D6C4D* L_14 = L_12;
		NullCheck(L_14);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<CollectableItems>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_14, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B6_0 = L_14;
	}

IL_0070:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(int32_t));
		EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409* L_15 = (EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409*)il2cpp_codegen_object_new(EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EnumSerializer_1__ctor_m7387133D5499495A1DEB804BB913911B1B78A4F7(L_15, EnumSerializer_1__ctor_m7387133D5499495A1DEB804BB913911B1B78A4F7_RuntimeMethod_var);
		bool L_16 = V_0;
		G_B7_0 = L_15;
		if (!L_16)
		{
			G_B8_0 = L_15;
			goto IL_0095;
		}
	}
	{
		EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409* L_17 = G_B7_0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<Fruits>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_17, (RuntimeObject*)NULL);
		EnumSerializer_1_t74CEAB1AD231F6529E7129F188784A59174F1409* L_19 = L_17;
		NullCheck(L_19);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<Fruits>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_19, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B8_0 = L_19;
	}

IL_0095:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
		EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545* L_20 = (EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545*)il2cpp_codegen_object_new(EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		EnumSerializer_1__ctor_m8C0FD65EABB7E6395048CB2BA9CEA8E501DE5738(L_20, EnumSerializer_1__ctor_m8C0FD65EABB7E6395048CB2BA9CEA8E501DE5738_RuntimeMethod_var);
		bool L_21 = V_0;
		G_B9_0 = L_20;
		if (!L_21)
		{
			G_B10_0 = L_20;
			goto IL_00ba;
		}
	}
	{
		EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545* L_22 = G_B9_0;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<ItemType>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_22, (RuntimeObject*)NULL);
		EnumSerializer_1_tD40D14C4E168CF5B2BDE315C0451A461CEEFD545* L_24 = L_22;
		NullCheck(L_24);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<ItemType>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_24, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B10_0 = L_24;
	}

IL_00ba:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(int32_t));
		EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC* L_25 = (EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC*)il2cpp_codegen_object_new(EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		EnumSerializer_1__ctor_mBFED44DDE89189B8FDF15E7BBB5958FF3A9B7133(L_25, EnumSerializer_1__ctor_mBFED44DDE89189B8FDF15E7BBB5958FF3A9B7133_RuntimeMethod_var);
		bool L_26 = V_0;
		G_B11_0 = L_25;
		if (!L_26)
		{
			G_B12_0 = L_25;
			goto IL_00df;
		}
	}
	{
		EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC* L_27 = G_B11_0;
		NullCheck(L_27);
		RuntimeObject* L_28;
		L_28 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<PowerUpTypes>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_27, (RuntimeObject*)NULL);
		EnumSerializer_1_t810C8DF4CFED42DEEC84CED731BFD1B3AFA555FC* L_29 = L_27;
		NullCheck(L_29);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<PowerUpTypes>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_29, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B12_0 = L_29;
	}

IL_00df:
	{
		il2cpp_codegen_initobj((&V_7), sizeof(int32_t));
		EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD* L_30 = (EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD*)il2cpp_codegen_object_new(EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		EnumSerializer_1__ctor_mD570EC3D56EDC4DD8028E05AD3B05FD8488751F8(L_30, EnumSerializer_1__ctor_mD570EC3D56EDC4DD8028E05AD3B05FD8488751F8_RuntimeMethod_var);
		bool L_31 = V_0;
		G_B13_0 = L_30;
		if (!L_31)
		{
			G_B14_0 = L_30;
			goto IL_0104;
		}
	}
	{
		EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD* L_32 = G_B13_0;
		NullCheck(L_32);
		RuntimeObject* L_33;
		L_33 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<RandomObjects>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_32, (RuntimeObject*)NULL);
		EnumSerializer_1_t84B0A838325C94F77AD55B55419D03CC275A9ECD* L_34 = L_32;
		NullCheck(L_34);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<RandomObjects>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_34, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B14_0 = L_34;
	}

IL_0104:
	{
		ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8* L_35 = (ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t17C1BEBA4D19A69B433AE527B454984508603CD8_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		ComplexTypeSerializer_1__ctor_m36A7F11181D62C3A99BDC8FD80E06382462316C0(L_35, ComplexTypeSerializer_1__ctor_m36A7F11181D62C3A99BDC8FD80E06382462316C0_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_8), sizeof(int32_t));
		EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79* L_36 = (EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79*)il2cpp_codegen_object_new(EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		EnumSerializer_1__ctor_m806AADF911BE1AA971EAC202A8CCF9A48F5B6A52(L_36, EnumSerializer_1__ctor_m806AADF911BE1AA971EAC202A8CCF9A48F5B6A52_RuntimeMethod_var);
		bool L_37 = V_0;
		G_B15_0 = L_36;
		if (!L_37)
		{
			G_B16_0 = L_36;
			goto IL_012f;
		}
	}
	{
		EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79* L_38 = G_B15_0;
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<TilePlacements>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_38, (RuntimeObject*)NULL);
		EnumSerializer_1_t8FED9019F053AEBF3CCF7E10D8ABD048396C8A79* L_40 = L_38;
		NullCheck(L_40);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<TilePlacements>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_40, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B16_0 = L_40;
	}

IL_012f:
	{
		il2cpp_codegen_initobj((&V_9), sizeof(int32_t));
		EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87* L_41 = (EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87*)il2cpp_codegen_object_new(EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		EnumSerializer_1__ctor_m771A21638AA42485B5BB6C2899EA87A27D4ADC73(L_41, EnumSerializer_1__ctor_m771A21638AA42485B5BB6C2899EA87A27D4ADC73_RuntimeMethod_var);
		bool L_42 = V_0;
		G_B17_0 = L_41;
		if (!L_42)
		{
			G_B18_0 = L_41;
			goto IL_0154;
		}
	}
	{
		EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87* L_43 = G_B17_0;
		NullCheck(L_43);
		RuntimeObject* L_44;
		L_44 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<TileType>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_43, (RuntimeObject*)NULL);
		EnumSerializer_1_tB678DF8A99B717233671F1D53A54298BCEE7BC87* L_45 = L_43;
		NullCheck(L_45);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<TileType>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_45, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B18_0 = L_45;
	}

IL_0154:
	{
		il2cpp_codegen_initobj((&V_10), sizeof(int32_t));
		EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C* L_46 = (EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C*)il2cpp_codegen_object_new(EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		EnumSerializer_1__ctor_m5D527EA932D3809F531B83621E29BF5390302CE1(L_46, EnumSerializer_1__ctor_m5D527EA932D3809F531B83621E29BF5390302CE1_RuntimeMethod_var);
		bool L_47 = V_0;
		G_B19_0 = L_46;
		if (!L_47)
		{
			G_B20_0 = L_46;
			goto IL_0179;
		}
	}
	{
		EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C* L_48 = G_B19_0;
		NullCheck(L_48);
		RuntimeObject* L_49;
		L_49 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<TypesOfHurdle>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_48, (RuntimeObject*)NULL);
		EnumSerializer_1_tA9F7A7A5DBA44441B8E4FF74174AF3176204E26C* L_50 = L_48;
		NullCheck(L_50);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<TypesOfHurdle>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_50, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B20_0 = L_50;
	}

IL_0179:
	{
		il2cpp_codegen_initobj((&V_11), sizeof(int32_t));
		EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214* L_51 = (EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214*)il2cpp_codegen_object_new(EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		EnumSerializer_1__ctor_mA5F42C34DA67A470299439EBB45B9EEB3D9976E6(L_51, EnumSerializer_1__ctor_mA5F42C34DA67A470299439EBB45B9EEB3D9976E6_RuntimeMethod_var);
		bool L_52 = V_0;
		G_B21_0 = L_51;
		if (!L_52)
		{
			G_B22_0 = L_51;
			goto IL_019e;
		}
	}
	{
		EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214* L_53 = G_B21_0;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<Vegetables>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_53, (RuntimeObject*)NULL);
		EnumSerializer_1_t42FB56B3F2069E8F523FD676D9B327010AE43214* L_55 = L_53;
		NullCheck(L_55);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<Vegetables>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_55, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B22_0 = L_55;
	}

IL_019e:
	{
		il2cpp_codegen_initobj((&V_12), sizeof(bool));
		BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* L_56 = (BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7*)il2cpp_codegen_object_new(BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		BooleanSerializer__ctor_m88A837E4C477BB0AF23DA82F4609AD8868F8556D(L_56, NULL);
		bool L_57 = V_0;
		G_B23_0 = L_56;
		if (!L_57)
		{
			G_B24_0 = L_56;
			goto IL_01c3;
		}
	}
	{
		BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* L_58 = G_B23_0;
		NullCheck(L_58);
		RuntimeObject* L_59;
		L_59 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<System.Boolean>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_58, (RuntimeObject*)NULL);
		BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* L_60 = L_58;
		NullCheck(L_60);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<System.Boolean>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_60, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B24_0 = L_60;
	}

IL_01c3:
	{
		CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F* L_61 = (CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F*)il2cpp_codegen_object_new(CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		CellData__ctor_m96A52AEA79C7AEBD19464949AEA58DC17D22A834(L_61, NULL);
		ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB* L_62 = (ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB*)il2cpp_codegen_object_new(ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB_il2cpp_TypeInfo_var);
		NullCheck(L_62);
		ReflectionFormatter_1__ctor_m367E05F1A7DAC7798595E41F666FD0E65357E1B8(L_62, ReflectionFormatter_1__ctor_m367E05F1A7DAC7798595E41F666FD0E65357E1B8_RuntimeMethod_var);
		ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29* L_63 = (ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		ComplexTypeSerializer_1__ctor_m33FA7E3D45B09DB4A83396329EEF3382F208BD46(L_63, ComplexTypeSerializer_1__ctor_m33FA7E3D45B09DB4A83396329EEF3382F208BD46_RuntimeMethod_var);
		MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012* L_64 = (MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012*)il2cpp_codegen_object_new(MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012_il2cpp_TypeInfo_var);
		NullCheck(L_64);
		MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D(L_64, MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D_RuntimeMethod_var);
		MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012* L_65 = (MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012*)il2cpp_codegen_object_new(MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012_il2cpp_TypeInfo_var);
		NullCheck(L_65);
		MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D(L_65, MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D_RuntimeMethod_var);
		ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8* L_66 = (ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8*)il2cpp_codegen_object_new(ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		ReflectionFormatter_1__ctor_m1C60BB8482FA8292579BCA021C38A4EC7CA5DEA0(L_66, ReflectionFormatter_1__ctor_m1C60BB8482FA8292579BCA021C38A4EC7CA5DEA0_RuntimeMethod_var);
		ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502* L_67 = (ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502_il2cpp_TypeInfo_var);
		NullCheck(L_67);
		ComplexTypeSerializer_1__ctor_mA7E5B0B24309BFE20A1155BB67A6F5DF0339D8EC(L_67, ComplexTypeSerializer_1__ctor_mA7E5B0B24309BFE20A1155BB67A6F5DF0339D8EC_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_13), sizeof(int32_t));
		Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* L_68 = (Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2*)il2cpp_codegen_object_new(Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2_il2cpp_TypeInfo_var);
		NullCheck(L_68);
		Int32Serializer__ctor_m4597E47DF915AB38A814DDD497B71E3DBC4AF02C(L_68, NULL);
		bool L_69 = V_0;
		G_B25_0 = L_68;
		if (!L_69)
		{
			G_B26_0 = L_68;
			goto IL_0212;
		}
	}
	{
		Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* L_70 = G_B25_0;
		NullCheck(L_70);
		RuntimeObject* L_71;
		L_71 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<System.Int32>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_70, (RuntimeObject*)NULL);
		Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* L_72 = L_70;
		NullCheck(L_72);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<System.Int32>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_72, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B26_0 = L_72;
	}

IL_0212:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
