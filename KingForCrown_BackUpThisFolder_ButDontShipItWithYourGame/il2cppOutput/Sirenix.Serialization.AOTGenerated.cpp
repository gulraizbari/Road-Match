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
// Sirenix.Serialization.ComplexTypeSerializer`1<ChestData>
struct ComplexTypeSerializer_1_tCAFCFE2BB7B9DB60C5FD13E8F92FBAFB43FA981B;
// Sirenix.Serialization.ComplexTypeSerializer`1<System.Object>
struct ComplexTypeSerializer_1_tCFADED5CEF4AAA38D0FB34727CB6436B605B38A8;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<CellData[,]>>
struct Dictionary_2_t574AA8107B5975A17206CCA73170950F2472CA9E;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<CellData>>
struct Dictionary_2_t0B3E69994D0A3E4A0F4FC28BE1C7F22A7F41AD7D;
// System.Collections.Generic.Dictionary`2<Sirenix.Serialization.ISerializationPolicy,Sirenix.Serialization.IFormatter`1<ChestData>>
struct Dictionary_2_t9776DA3ABBB725666FB82482260516F85F74330F;
// System.Collections.Generic.Dictionary`2<System.Type,Sirenix.Serialization.Serializer>
struct Dictionary_2_tFC542F52AF721FEF237136A160FE0EBB15A771CA;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_t8BF76F08F2E28AE3B97CD39EBC7A0FE57398B1B0;
// Sirenix.Serialization.EnumSerializer`1<Cell>
struct EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED;
// Sirenix.Serialization.EnumSerializer`1<Currency>
struct EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0;
// Sirenix.Serialization.EnumSerializer`1<MineType>
struct EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7;
// Sirenix.Serialization.EnumSerializer`1<ShaftType>
struct EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096;
// Sirenix.Serialization.IFormatter`1<CellData[,]>
struct IFormatter_1_t7A7ECB87892E8E5C52054F5A63CC4D3697296B49;
// Sirenix.Serialization.IFormatter`1<CellData>
struct IFormatter_1_tF3008F62DCEE7A2CF2B17B75F5473C359582592E;
// Sirenix.Serialization.IFormatter`1<ChestData>
struct IFormatter_1_t77404C7A21D3BA11CBCFCF36BF37DFE8B3129F1E;
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
// ChestData
struct ChestData_tB7D26CC2219E5602EC73760AA942E994E7DB475D;
// Sirenix.Serialization.DoubleSerializer
struct DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D;
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
IL2CPP_EXTERN_C RuntimeClass* ChestData_tB7D26CC2219E5602EC73760AA942E994E7DB475D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComplexTypeSerializer_1_tCAFCFE2BB7B9DB60C5FD13E8F92FBAFB43FA981B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_m33FA7E3D45B09DB4A83396329EEF3382F208BD46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_m97087A53982403D4B41A788858BDEFA1B619D621_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ComplexTypeSerializer_1__ctor_mA7E5B0B24309BFE20A1155BB67A6F5DF0339D8EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_m0B2FE83AAAD41FB2D6815311619C8455CEF47833_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_mC55F71F323A7411FC7CEE7961ABC42F5BA9AEEEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_mE85E9EC7EC37C61EE9B1330BFA305A65E2BEF270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnumSerializer_1__ctor_mF6866775A607693B23C928E140BFEB1F0F6E759B_RuntimeMethod_var;
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

// ChestData
struct ChestData_tB7D26CC2219E5602EC73760AA942E994E7DB475D  : public RuntimeObject
{
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

// Sirenix.Serialization.Serializer`1<System.Boolean>
struct Serializer_1_tE9BCFFCE3749D415B953BEC8196DE5DD105114F6  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<Cell>
struct Serializer_1_tDBA935FD60A7650E9606548BC38F0BCA5874BA71  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<CellData>
struct Serializer_1_t0648E2596A41B728BDE4CE5C8F95C8CC5B66A288  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<ChestData>
struct Serializer_1_tD231007422355773F4B799923E17A12ECB885FDE  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<Currency>
struct Serializer_1_t3796C759BDDF81B0D83E3B784AAC828654E33189  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<System.Double>
struct Serializer_1_tAA8260B22A5C6F67ADC9263F84778C286F6ABF47  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<System.Int32>
struct Serializer_1_tB9533CFC0D3480AB1A3646A517BFB1110081BF07  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<MineType>
struct Serializer_1_tFA409AE9B0E4A7442602ECF05454BB960DC630B2  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// Sirenix.Serialization.Serializer`1<ShaftType>
struct Serializer_1_tEAA20432EF806533AE4567CC2977ADFD36DE65B7  : public Serializer_t6C6FF0C071058921A25F0197AEBE808891C78EDA
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// Cell
struct Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A 
{
	union
	{
		struct
		{
		};
		uint8_t Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A__padding[1];
	};
};

// Currency
struct Currency_t1280D343A7BB30C73CA2D0C51225F94CFF067BC5 
{
	union
	{
		struct
		{
		};
		uint8_t Currency_t1280D343A7BB30C73CA2D0C51225F94CFF067BC5__padding[1];
	};
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

// MineType
struct MineType_t9BB2AEF3E6BDE22949C94F1C5D494C44F9383990 
{
	union
	{
		struct
		{
		};
		uint8_t MineType_t9BB2AEF3E6BDE22949C94F1C5D494C44F9383990__padding[1];
	};
};

// ShaftType
struct ShaftType_t248D87AA71B953822864D29DAE784E9BA081AA19 
{
	union
	{
		struct
		{
		};
		uint8_t ShaftType_t248D87AA71B953822864D29DAE784E9BA081AA19__padding[1];
	};
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

// Sirenix.Serialization.ComplexTypeSerializer`1<ChestData>
struct ComplexTypeSerializer_1_tCAFCFE2BB7B9DB60C5FD13E8F92FBAFB43FA981B  : public Serializer_1_tD231007422355773F4B799923E17A12ECB885FDE
{
};

// Sirenix.Serialization.EnumSerializer`1<Cell>
struct EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED  : public Serializer_1_tDBA935FD60A7650E9606548BC38F0BCA5874BA71
{
};

// Sirenix.Serialization.EnumSerializer`1<Currency>
struct EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0  : public Serializer_1_t3796C759BDDF81B0D83E3B784AAC828654E33189
{
};

// Sirenix.Serialization.EnumSerializer`1<MineType>
struct EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7  : public Serializer_1_tFA409AE9B0E4A7442602ECF05454BB960DC630B2
{
};

// Sirenix.Serialization.EnumSerializer`1<ShaftType>
struct EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096  : public Serializer_1_tEAA20432EF806533AE4567CC2977ADFD36DE65B7
{
};

// Sirenix.Serialization.BooleanSerializer
struct BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7  : public Serializer_1_tE9BCFFCE3749D415B953BEC8196DE5DD105114F6
{
};

// Sirenix.Serialization.DoubleSerializer
struct DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D  : public Serializer_1_tAA8260B22A5C6F67ADC9263F84778C286F6ABF47
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

// ChestData

// ChestData

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

// Sirenix.Serialization.Serializer`1<System.Boolean>

// Sirenix.Serialization.Serializer`1<System.Boolean>

// Sirenix.Serialization.Serializer`1<Cell>

// Sirenix.Serialization.Serializer`1<Cell>

// Sirenix.Serialization.Serializer`1<CellData>

// Sirenix.Serialization.Serializer`1<CellData>

// Sirenix.Serialization.Serializer`1<ChestData>

// Sirenix.Serialization.Serializer`1<ChestData>

// Sirenix.Serialization.Serializer`1<Currency>

// Sirenix.Serialization.Serializer`1<Currency>

// Sirenix.Serialization.Serializer`1<System.Double>

// Sirenix.Serialization.Serializer`1<System.Double>

// Sirenix.Serialization.Serializer`1<System.Int32>

// Sirenix.Serialization.Serializer`1<System.Int32>

// Sirenix.Serialization.Serializer`1<MineType>

// Sirenix.Serialization.Serializer`1<MineType>

// Sirenix.Serialization.Serializer`1<ShaftType>

// Sirenix.Serialization.Serializer`1<ShaftType>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// Cell

// Cell

// Currency

// Currency

// System.Double

// System.Double

// System.Int32

// System.Int32

// MineType

// MineType

// ShaftType

// ShaftType

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

// Sirenix.Serialization.ComplexTypeSerializer`1<ChestData>
struct ComplexTypeSerializer_1_tCAFCFE2BB7B9DB60C5FD13E8F92FBAFB43FA981B_StaticFields
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
	Dictionary_2_t9776DA3ABBB725666FB82482260516F85F74330F* ___FormattersByPolicy_9;
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

// Sirenix.Serialization.ComplexTypeSerializer`1<ChestData>

// Sirenix.Serialization.EnumSerializer`1<Cell>

// Sirenix.Serialization.EnumSerializer`1<Cell>

// Sirenix.Serialization.EnumSerializer`1<Currency>

// Sirenix.Serialization.EnumSerializer`1<Currency>

// Sirenix.Serialization.EnumSerializer`1<MineType>

// Sirenix.Serialization.EnumSerializer`1<MineType>

// Sirenix.Serialization.EnumSerializer`1<ShaftType>

// Sirenix.Serialization.EnumSerializer`1<ShaftType>

// Sirenix.Serialization.BooleanSerializer

// Sirenix.Serialization.BooleanSerializer

// Sirenix.Serialization.DoubleSerializer

// Sirenix.Serialization.DoubleSerializer

// Sirenix.Serialization.Int32Serializer

// Sirenix.Serialization.Int32Serializer
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Sirenix.Serialization.EnumSerializer`1<Cell>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumSerializer_1__ctor_mF6866775A607693B23C928E140BFEB1F0F6E759B_gshared (EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ReflectionFormatter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionFormatter_1__ctor_mBEB4F353923A667045D79ACE70460FF2968B5EDE_gshared (ReflectionFormatter_1_tB6DAF53F6F410C9664F5960209ABDD85E507E2D8* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared (ComplexTypeSerializer_1_tCFADED5CEF4AAA38D0FB34727CB6436B605B38A8* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.MultiDimensionalArrayFormatter`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiDimensionalArrayFormatter_2__ctor_mD833E61358B3C40EEED9E8967B19F84C894F8F0F_gshared (MultiDimensionalArrayFormatter_2_t38BF2BEBFF8D70E832A7AFAA4F7E371B4922709C* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.EnumSerializer`1<Currency>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumSerializer_1__ctor_mE85E9EC7EC37C61EE9B1330BFA305A65E2BEF270_gshared (EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.EnumSerializer`1<MineType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumSerializer_1__ctor_mC55F71F323A7411FC7CEE7961ABC42F5BA9AEEEE_gshared (EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.EnumSerializer`1<ShaftType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumSerializer_1__ctor_m0B2FE83AAAD41FB2D6815311619C8455CEF47833_gshared (EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096* __this, const RuntimeMethod* method) ;

// System.Void Sirenix.Serialization.BooleanSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanSerializer__ctor_m88A837E4C477BB0AF23DA82F4609AD8868F8556D (BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.EnumSerializer`1<Cell>::.ctor()
inline void EnumSerializer_1__ctor_mF6866775A607693B23C928E140BFEB1F0F6E759B (EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED*, const RuntimeMethod*))EnumSerializer_1__ctor_mF6866775A607693B23C928E140BFEB1F0F6E759B_gshared)(__this, method);
}
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
// System.Void ChestData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChestData__ctor_mA3C9238D3C9D877C6485A834F43249538A77A2F9 (ChestData_tB7D26CC2219E5602EC73760AA942E994E7DB475D* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.ComplexTypeSerializer`1<ChestData>::.ctor()
inline void ComplexTypeSerializer_1__ctor_m97087A53982403D4B41A788858BDEFA1B619D621 (ComplexTypeSerializer_1_tCAFCFE2BB7B9DB60C5FD13E8F92FBAFB43FA981B* __this, const RuntimeMethod* method)
{
	((  void (*) (ComplexTypeSerializer_1_tCAFCFE2BB7B9DB60C5FD13E8F92FBAFB43FA981B*, const RuntimeMethod*))ComplexTypeSerializer_1__ctor_mAA16309B355AE0A4CA59971202DA063826030EBA_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<Currency>::.ctor()
inline void EnumSerializer_1__ctor_mE85E9EC7EC37C61EE9B1330BFA305A65E2BEF270 (EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0*, const RuntimeMethod*))EnumSerializer_1__ctor_mE85E9EC7EC37C61EE9B1330BFA305A65E2BEF270_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.DoubleSerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoubleSerializer__ctor_m2674C1856F9EDFC0EC978464ECABC84758A38927 (DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.Int32Serializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Int32Serializer__ctor_m4597E47DF915AB38A814DDD497B71E3DBC4AF02C (Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* __this, const RuntimeMethod* method) ;
// System.Void Sirenix.Serialization.EnumSerializer`1<MineType>::.ctor()
inline void EnumSerializer_1__ctor_mC55F71F323A7411FC7CEE7961ABC42F5BA9AEEEE (EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7*, const RuntimeMethod*))EnumSerializer_1__ctor_mC55F71F323A7411FC7CEE7961ABC42F5BA9AEEEE_gshared)(__this, method);
}
// System.Void Sirenix.Serialization.EnumSerializer`1<ShaftType>::.ctor()
inline void EnumSerializer_1__ctor_m0B2FE83AAAD41FB2D6815311619C8455CEF47833 (EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096* __this, const RuntimeMethod* method)
{
	((  void (*) (EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096*, const RuntimeMethod*))EnumSerializer_1__ctor_m0B2FE83AAAD41FB2D6815311619C8455CEF47833_gshared)(__this, method);
}
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChestData_tB7D26CC2219E5602EC73760AA942E994E7DB475D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_m33FA7E3D45B09DB4A83396329EEF3382F208BD46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_m97087A53982403D4B41A788858BDEFA1B619D621_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1__ctor_mA7E5B0B24309BFE20A1155BB67A6F5DF0339D8EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComplexTypeSerializer_1_tCAFCFE2BB7B9DB60C5FD13E8F92FBAFB43FA981B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_m0B2FE83AAAD41FB2D6815311619C8455CEF47833_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_mC55F71F323A7411FC7CEE7961ABC42F5BA9AEEEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_mE85E9EC7EC37C61EE9B1330BFA305A65E2BEF270_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1__ctor_mF6866775A607693B23C928E140BFEB1F0F6E759B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED_il2cpp_TypeInfo_var);
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
	bool V_1 = false;
	Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	Currency_t1280D343A7BB30C73CA2D0C51225F94CFF067BC5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	double V_4 = 0.0;
	int32_t V_5 = 0;
	MineType_t9BB2AEF3E6BDE22949C94F1C5D494C44F9383990 V_6;
	memset((&V_6), 0, sizeof(V_6));
	ShaftType_t248D87AA71B953822864D29DAE784E9BA081AA19 V_7;
	memset((&V_7), 0, sizeof(V_7));
	BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* G_B2_0 = NULL;
	BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* G_B1_0 = NULL;
	EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED* G_B4_0 = NULL;
	EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED* G_B3_0 = NULL;
	EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0* G_B6_0 = NULL;
	EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0* G_B5_0 = NULL;
	DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D* G_B8_0 = NULL;
	DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D* G_B7_0 = NULL;
	Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* G_B10_0 = NULL;
	Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* G_B9_0 = NULL;
	EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7* G_B12_0 = NULL;
	EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7* G_B11_0 = NULL;
	EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096* G_B14_0 = NULL;
	EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096* G_B13_0 = NULL;
	{
		V_0 = (bool)0;
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* L_0 = (BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7*)il2cpp_codegen_object_new(BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BooleanSerializer__ctor_m88A837E4C477BB0AF23DA82F4609AD8868F8556D(L_0, NULL);
		bool L_1 = V_0;
		G_B1_0 = L_0;
		if (!L_1)
		{
			G_B2_0 = L_0;
			goto IL_0026;
		}
	}
	{
		BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* L_2 = G_B1_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<System.Boolean>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_2, (RuntimeObject*)NULL);
		BooleanSerializer_t61B89D25049F9415FACD9B5B528D0609B1FC49B7* L_4 = L_2;
		NullCheck(L_4);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<System.Boolean>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_4, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B2_0 = L_4;
	}

IL_0026:
	{
		il2cpp_codegen_initobj((&V_2), sizeof(Cell_t88832599049D1ADACE41CE1CF9C147304CF76D5A));
		EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED* L_5 = (EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED*)il2cpp_codegen_object_new(EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EnumSerializer_1__ctor_mF6866775A607693B23C928E140BFEB1F0F6E759B(L_5, EnumSerializer_1__ctor_mF6866775A607693B23C928E140BFEB1F0F6E759B_RuntimeMethod_var);
		bool L_6 = V_0;
		G_B3_0 = L_5;
		if (!L_6)
		{
			G_B4_0 = L_5;
			goto IL_004b;
		}
	}
	{
		EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED* L_7 = G_B3_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<Cell>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_7, (RuntimeObject*)NULL);
		EnumSerializer_1_tC245930842D580BB46C3782A9DB4C9B9998191ED* L_9 = L_7;
		NullCheck(L_9);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<Cell>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_9, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B4_0 = L_9;
	}

IL_004b:
	{
		CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F* L_10 = (CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F*)il2cpp_codegen_object_new(CellData_tD53F977F3CB8C8590BBCD43A3ED6DB743D49D09F_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		CellData__ctor_m96A52AEA79C7AEBD19464949AEA58DC17D22A834(L_10, NULL);
		ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB* L_11 = (ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB*)il2cpp_codegen_object_new(ReflectionFormatter_1_t75291047683CF7F792EA849363E5EFBF64963DEB_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		ReflectionFormatter_1__ctor_m367E05F1A7DAC7798595E41F666FD0E65357E1B8(L_11, ReflectionFormatter_1__ctor_m367E05F1A7DAC7798595E41F666FD0E65357E1B8_RuntimeMethod_var);
		ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29* L_12 = (ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t45DFFF2A3D3067B50403257A02EA072269814D29_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		ComplexTypeSerializer_1__ctor_m33FA7E3D45B09DB4A83396329EEF3382F208BD46(L_12, ComplexTypeSerializer_1__ctor_m33FA7E3D45B09DB4A83396329EEF3382F208BD46_RuntimeMethod_var);
		MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012* L_13 = (MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012*)il2cpp_codegen_object_new(MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D(L_13, MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D_RuntimeMethod_var);
		MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012* L_14 = (MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012*)il2cpp_codegen_object_new(MultiDimensionalArrayFormatter_2_t65EBCEF412D4D3CDCF9835E2436F872DB0FA7012_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D(L_14, MultiDimensionalArrayFormatter_2__ctor_m4F3D4016535412994195C11A984B1E3B6A413A3D_RuntimeMethod_var);
		ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8* L_15 = (ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8*)il2cpp_codegen_object_new(ReflectionFormatter_1_tA3E7E6D80C6E646175459E06736B8AE0C9CF63D8_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		ReflectionFormatter_1__ctor_m1C60BB8482FA8292579BCA021C38A4EC7CA5DEA0(L_15, ReflectionFormatter_1__ctor_m1C60BB8482FA8292579BCA021C38A4EC7CA5DEA0_RuntimeMethod_var);
		ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502* L_16 = (ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_t96E14CF5934939A2DD6FF66853C4D2B1649EB502_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		ComplexTypeSerializer_1__ctor_mA7E5B0B24309BFE20A1155BB67A6F5DF0339D8EC(L_16, ComplexTypeSerializer_1__ctor_mA7E5B0B24309BFE20A1155BB67A6F5DF0339D8EC_RuntimeMethod_var);
		ChestData_tB7D26CC2219E5602EC73760AA942E994E7DB475D* L_17 = (ChestData_tB7D26CC2219E5602EC73760AA942E994E7DB475D*)il2cpp_codegen_object_new(ChestData_tB7D26CC2219E5602EC73760AA942E994E7DB475D_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		ChestData__ctor_mA3C9238D3C9D877C6485A834F43249538A77A2F9(L_17, NULL);
		ComplexTypeSerializer_1_tCAFCFE2BB7B9DB60C5FD13E8F92FBAFB43FA981B* L_18 = (ComplexTypeSerializer_1_tCAFCFE2BB7B9DB60C5FD13E8F92FBAFB43FA981B*)il2cpp_codegen_object_new(ComplexTypeSerializer_1_tCAFCFE2BB7B9DB60C5FD13E8F92FBAFB43FA981B_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		ComplexTypeSerializer_1__ctor_m97087A53982403D4B41A788858BDEFA1B619D621(L_18, ComplexTypeSerializer_1__ctor_m97087A53982403D4B41A788858BDEFA1B619D621_RuntimeMethod_var);
		il2cpp_codegen_initobj((&V_3), sizeof(Currency_t1280D343A7BB30C73CA2D0C51225F94CFF067BC5));
		EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0* L_19 = (EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0*)il2cpp_codegen_object_new(EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		EnumSerializer_1__ctor_mE85E9EC7EC37C61EE9B1330BFA305A65E2BEF270(L_19, EnumSerializer_1__ctor_mE85E9EC7EC37C61EE9B1330BFA305A65E2BEF270_RuntimeMethod_var);
		bool L_20 = V_0;
		G_B5_0 = L_19;
		if (!L_20)
		{
			G_B6_0 = L_19;
			goto IL_00a6;
		}
	}
	{
		EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0* L_21 = G_B5_0;
		NullCheck(L_21);
		RuntimeObject* L_22;
		L_22 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<Currency>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_21, (RuntimeObject*)NULL);
		EnumSerializer_1_t41C0D07C6E7CE42FFCE0F0A303E9247FCA577EA0* L_23 = L_21;
		NullCheck(L_23);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<Currency>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_23, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B6_0 = L_23;
	}

IL_00a6:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(double));
		DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D* L_24 = (DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D*)il2cpp_codegen_object_new(DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		DoubleSerializer__ctor_m2674C1856F9EDFC0EC978464ECABC84758A38927(L_24, NULL);
		bool L_25 = V_0;
		G_B7_0 = L_24;
		if (!L_25)
		{
			G_B8_0 = L_24;
			goto IL_00cb;
		}
	}
	{
		DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D* L_26 = G_B7_0;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<System.Double>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_26, (RuntimeObject*)NULL);
		DoubleSerializer_tD3464237049E852C7C1A27DBFC65AC4CD2D3EF0D* L_28 = L_26;
		NullCheck(L_28);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<System.Double>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_28, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B8_0 = L_28;
	}

IL_00cb:
	{
		il2cpp_codegen_initobj((&V_5), sizeof(int32_t));
		Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* L_29 = (Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2*)il2cpp_codegen_object_new(Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Int32Serializer__ctor_m4597E47DF915AB38A814DDD497B71E3DBC4AF02C(L_29, NULL);
		bool L_30 = V_0;
		G_B9_0 = L_29;
		if (!L_30)
		{
			G_B10_0 = L_29;
			goto IL_00f0;
		}
	}
	{
		Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* L_31 = G_B9_0;
		NullCheck(L_31);
		RuntimeObject* L_32;
		L_32 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<System.Int32>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_31, (RuntimeObject*)NULL);
		Int32Serializer_t4DA95590D0E6D580831B388948749EFE8D4F3BA2* L_33 = L_31;
		NullCheck(L_33);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<System.Int32>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_33, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B10_0 = L_33;
	}

IL_00f0:
	{
		il2cpp_codegen_initobj((&V_6), sizeof(MineType_t9BB2AEF3E6BDE22949C94F1C5D494C44F9383990));
		EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7* L_34 = (EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7*)il2cpp_codegen_object_new(EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		EnumSerializer_1__ctor_mC55F71F323A7411FC7CEE7961ABC42F5BA9AEEEE(L_34, EnumSerializer_1__ctor_mC55F71F323A7411FC7CEE7961ABC42F5BA9AEEEE_RuntimeMethod_var);
		bool L_35 = V_0;
		G_B11_0 = L_34;
		if (!L_35)
		{
			G_B12_0 = L_34;
			goto IL_0115;
		}
	}
	{
		EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7* L_36 = G_B11_0;
		NullCheck(L_36);
		RuntimeObject* L_37;
		L_37 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<MineType>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_36, (RuntimeObject*)NULL);
		EnumSerializer_1_tAB4DDE1A69F8F1EF504A92A3FC216CA504CBAED7* L_38 = L_36;
		NullCheck(L_38);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<MineType>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_38, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B12_0 = L_38;
	}

IL_0115:
	{
		il2cpp_codegen_initobj((&V_7), sizeof(ShaftType_t248D87AA71B953822864D29DAE784E9BA081AA19));
		EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096* L_39 = (EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096*)il2cpp_codegen_object_new(EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096_il2cpp_TypeInfo_var);
		NullCheck(L_39);
		EnumSerializer_1__ctor_m0B2FE83AAAD41FB2D6815311619C8455CEF47833(L_39, EnumSerializer_1__ctor_m0B2FE83AAAD41FB2D6815311619C8455CEF47833_RuntimeMethod_var);
		bool L_40 = V_0;
		G_B13_0 = L_39;
		if (!L_40)
		{
			G_B14_0 = L_39;
			goto IL_013a;
		}
	}
	{
		EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096* L_41 = G_B13_0;
		NullCheck(L_41);
		RuntimeObject* L_42;
		L_42 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.Object Sirenix.Serialization.Serializer`1<ShaftType>::ReadValueWeak(Sirenix.Serialization.IDataReader) */, L_41, (RuntimeObject*)NULL);
		EnumSerializer_1_t22A7A3499D9072C1F5F5C84D10BA5AD3C6C5D096* L_43 = L_41;
		NullCheck(L_43);
		VirtualActionInvoker3< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Void Sirenix.Serialization.Serializer`1<ShaftType>::WriteValueWeak(System.String,System.Object,Sirenix.Serialization.IDataWriter) */, L_43, (String_t*)NULL, NULL, (RuntimeObject*)NULL);
		G_B14_0 = L_43;
	}

IL_013a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
