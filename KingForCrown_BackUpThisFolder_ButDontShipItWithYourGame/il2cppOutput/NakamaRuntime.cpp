#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Action`1<System.ArraySegment`1<System.Byte>>
struct Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341;
// System.Action`1<Nakama.ApiResponseException>
struct Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57;
// System.Action`1<Satori.ApiResponseException>
struct Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Collections.Concurrent.ConcurrentQueue`1<System.Object>
struct ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4;
// System.Collections.Concurrent.ConcurrentQueue`1<Nakama.UnitySocket/QueuedEvent>
struct ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IEnumerable`1<System.Delegate>
struct IEnumerable_1_tAF3C8B37028E582F90B53E0593D7286ABE98D722;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<System.Action`1<System.ArraySegment`1<System.Byte>>>
struct List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD;
// System.Collections.Generic.List`1<System.Action`1<System.Exception>>
struct List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B;
// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987;
// System.Collections.Generic.List`1<System.Delegate>
struct List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Concurrent.ConcurrentQueue`1/Segment<Nakama.UnitySocket/QueuedEvent>
struct Segment_t06400A46D331C5F2D16588E4058BB5577BC3190F;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Action`1<System.ArraySegment`1<System.Byte>>[]
struct Action_1U5BU5D_t458348C817B8B16D94B555FB46E6D422F61D4509;
// System.Action`1<System.Exception>[]
struct Action_1U5BU5D_tA772FD993F895B85D1946F0EEC61AA07D262940A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// Nakama.ApiResponseException
struct ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778;
// Satori.ApiResponseException
struct ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Nakama.IClient
struct IClient_t8C2AA6A3395CCC13679F2588465BCD772A798056;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Nakama.IHttpAdapter
struct IHttpAdapter_t2E02000DB458D96F8C8408E26686DB57CE2C66AA;
// Satori.IHttpAdapter
struct IHttpAdapter_t10504924E04DB6EEEE37E19B2469EC6BB7C1CD06;
// Nakama.ILogger
struct ILogger_tBBA17A49CF37F6EC51EDDFCB68D81F367A130B60;
// Satori.ILogger
struct ILogger_tA9E31741A831019C3A0534FA0F67C2DE3E1CEF69;
// Nakama.ISocket
struct ISocket_t763D24D9130B90B98FF43CCB0EB64BF977EC476F;
// Nakama.ISocketAdapter
struct ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// Nakama.TransientExceptionDelegate
struct TransientExceptionDelegate_tA589716C350AFC6B17EC66A6E8B557CFBD3EA4B2;
// Satori.TransientExceptionDelegate
struct TransientExceptionDelegate_t3ADA17DE1C1448D07A628AF3A2C052024FD9EDF4;
// Nakama.UnityLogger
struct UnityLogger_tDFCF6C76D6DE673B2A2280E79135615A68B1CF7F;
// Satori.UnityLogger
struct UnityLogger_tB95C84B26A7D8AFE44EE3F90F92CF11A3F142BBE;
// Nakama.UnitySocket
struct UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// Nakama.UnityWebRequestAdapter
struct UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5;
// Satori.UnityWebRequestAdapter
struct UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Net.WebSockets.WebSocket
struct WebSocket_tE3DEAFF0F68BD5AF9A526D29D56B6E5C6E24C3A1;
// Nakama.WebSocketAdapter
struct WebSocketAdapter_tB5C81C24B1A1C8ED427C4B39B8DE7ED08863DE25;
// Nakama.Ninja.WebSockets.WebSocketClientOptions
struct WebSocketClientOptions_t4A802FB4AEE27C7E8CB3DBC14524C461A72B3BA8;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Nakama.UnitySocket/QueuedEvent
struct QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96;
// Nakama.UnityWebRequestAdapter/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1;
// Nakama.UnityWebRequestAdapter/<SendRequest>d__13
struct U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4;
// Satori.UnityWebRequestAdapter/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB;
// Satori.UnityWebRequestAdapter/<SendRequest>d__13
struct U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransientExceptionDelegate_t3ADA17DE1C1448D07A628AF3A2C052024FD9EDF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransientExceptionDelegate_tA589716C350AFC6B17EC66A6E8B557CFBD3EA4B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocketAdapter_tB5C81C24B1A1C8ED427C4B39B8DE7ED08863DE25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral436D29F585D04E99C8BDA7892CDA7F6D3B24273E;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral60A2E461CC4A1D49199A67B5216F128319CE63CC;
IL2CPP_EXTERN_C String_t* _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E;
IL2CPP_EXTERN_C String_t* _stringLiteral8403A75C8AB8D2EA626A68805D4899A4642CC58A;
IL2CPP_EXTERN_C String_t* _stringLiteralB8D68C347BF0905FAB725410B45508F4498A632C;
IL2CPP_EXTERN_C String_t* _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_TryDequeue_mCB098074098793FA7C70AF042FFDB0EC0A21BA85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1__ctor_mC82F40BB25934DA94D1E6296A7DC1C65B3B50C91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentQueue_1_get_Count_m68292054681BFD8AB17212D36AA1565081BBC57A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBF837C8A5A22A2AE1729D287C09D1B7E008F18C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m93F9D5EA5AF8D14E337A8055B8E7FDB79F9790C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA1330C05253ED37E0C7AFFD9EA30F321AAFBC3F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A_m4F4A6BAC160BAE9A699ACA4685E0C1B59E5AC879_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m8B812FD73A169490EC3DC3E664BC0C0AF43EA837_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m477F4748E5FB2D53C6E4340D0C6CADE185D601F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m58FD66BF861A4EF4585560E578CE7F69E584BAAD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m4BBC6B293C501EA8816E21154FB90BF73A0D2138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonParser_FromJson_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m713DA0B5D590140E311DDBF744A7B74D8BD902AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1B1CFA01EF737C227B602FC08785E906120EE689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8BEEFA11FE572870F5555EBF77F617A19A1636CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD05EBAF1C4695257FED714354A99F3E5639EF58D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m615AA219CC63423AA974DFA3A72B89A864A77AB0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mF5622D7DFF37D99BB0DD9DD4D3427E986D0B4B19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m478FE5B1E47738C25AF072D3C4B9E690915A0507_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4FC6DF66E30AA0C84514272B2C219CCA1B8CFA80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m649E3C8001595F910FD26E44FFE630A9D7994459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetCanceled_m6006097B7F4BFE9EC38D1F8781F207240B439FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendRequestU3Ed__13_System_Collections_IEnumerator_Reset_m2C8A90B2090FE54DE852D2F2F3200D04BA32B4E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendRequestU3Ed__13_System_Collections_IEnumerator_Reset_m7A518C2AFF5C499469326FE0B8891153CF61D370_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__0_m3561DBF18284A4A9BE215CB9811B16C2947F7649_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__0_m63688AEF63A70DF09FF6567E44C655D89D5E8B79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__1_mA0E6FE83CEC1B20512AA59173607A2D9C7A24BAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__1_mDE79D447FF245DD36675DC2730FA842EE6E823AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__2_m0B9B95492AF41076BC99A760CC926958CEE894A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__2_m4727581D51659109F4C90BFD412CCDEEAD101490_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySocket_OnClosed_m88007E818C14A40F4A15610400FFD96F5C2C5700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySocket_OnConnected_m93F0EE2364425B1459637AC5A91859A9BF48B318_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySocket_OnReceivedError_m28F6CCF9792CF24E0A81993DC146B8E8FC316190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySocket_OnReceived_m10B22C5100B7E6076CF0316D27D5254F3FD88A5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequestAdapter_IsTransientException_m356C17CED4C846991ABE86DB75B9C6EDC450083B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityWebRequestAdapter_IsTransientException_m62264F2CD79DD6CD15E5F0894AB46ABE908F5BBE_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t4E5FE3EF5ACB683BD128CD019DAAC329BC8B4503 
{
};

// System.Collections.Concurrent.ConcurrentQueue`1<Nakama.UnitySocket/QueuedEvent>
struct ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5  : public RuntimeObject
{
	// System.Object System.Collections.Concurrent.ConcurrentQueue`1::_crossSegmentLock
	RuntimeObject* ____crossSegmentLock_2;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_tail
	Segment_t06400A46D331C5F2D16588E4058BB5577BC3190F* ____tail_3;
	// System.Collections.Concurrent.ConcurrentQueue`1/Segment<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentQueue`1::_head
	Segment_t06400A46D331C5F2D16588E4058BB5577BC3190F* ____head_4;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Action`1<System.ArraySegment`1<System.Byte>>>
struct List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_t458348C817B8B16D94B555FB46E6D422F61D4509* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Action`1<System.Exception>>
struct List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Action_1U5BU5D_tA772FD993F895B85D1946F0EEC61AA07D262940A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Delegate>
struct List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ____task_0;
};

// Nakama.ClientExtensions
struct ClientExtensions_tD2EE9B4BDBDE18EDEF107A4DC9B7B1E02741C15B  : public RuntimeObject
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// Nakama.UnityLogger
struct UnityLogger_tDFCF6C76D6DE673B2A2280E79135615A68B1CF7F  : public RuntimeObject
{
};

// Satori.UnityLogger
struct UnityLogger_tB95C84B26A7D8AFE44EE3F90F92CF11A3F142BBE  : public RuntimeObject
{
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
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

// Nakama.UnitySocket/QueuedEvent
struct QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerable`1<System.Delegate> Nakama.UnitySocket/QueuedEvent::_listeners
	RuntimeObject* ____listeners_0;
	// System.Object[] Nakama.UnitySocket/QueuedEvent::_eventArgs
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____eventArgs_1;
};

// Nakama.UnityWebRequestAdapter/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Nakama.UnityWebRequestAdapter/<>c__DisplayClass11_0::tcs
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___tcs_0;
};

// Nakama.UnityWebRequestAdapter/<SendRequest>d__13
struct U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4  : public RuntimeObject
{
	// System.Int32 Nakama.UnityWebRequestAdapter/<SendRequest>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Nakama.UnityWebRequestAdapter/<SendRequest>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest Nakama.UnityWebRequestAdapter/<SendRequest>d__13::www
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www_2;
	// System.Action`1<Nakama.ApiResponseException> Nakama.UnityWebRequestAdapter/<SendRequest>d__13::errback
	Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57* ___errback_3;
	// System.Action`1<System.String> Nakama.UnityWebRequestAdapter/<SendRequest>d__13::callback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback_4;
};

// Satori.UnityWebRequestAdapter/<>c__DisplayClass11_0
struct U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Satori.UnityWebRequestAdapter/<>c__DisplayClass11_0::tcs
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___tcs_0;
};

// Satori.UnityWebRequestAdapter/<SendRequest>d__13
struct U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762  : public RuntimeObject
{
	// System.Int32 Satori.UnityWebRequestAdapter/<SendRequest>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Satori.UnityWebRequestAdapter/<SendRequest>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.Networking.UnityWebRequest Satori.UnityWebRequestAdapter/<SendRequest>d__13::www
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___www_2;
	// System.Action`1<Satori.ApiResponseException> Satori.UnityWebRequestAdapter/<SendRequest>d__13::errback
	Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C* ___errback_3;
	// System.Action`1<System.String> Satori.UnityWebRequestAdapter/<SendRequest>d__13::callback
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___callback_4;
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Delegate>
struct Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Delegate_t* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
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

// System.Nullable`1<System.Threading.CancellationToken>
struct Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___value_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
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

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// Nakama.WebSocketAdapter
struct WebSocketAdapter_tB5C81C24B1A1C8ED427C4B39B8DE7ED08863DE25  : public RuntimeObject
{
	// System.Action Nakama.WebSocketAdapter::Connected
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Connected_3;
	// System.Action Nakama.WebSocketAdapter::Closed
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Closed_4;
	// System.Action`1<System.Exception> Nakama.WebSocketAdapter::ReceivedError
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___ReceivedError_5;
	// System.Action`1<System.ArraySegment`1<System.Byte>> Nakama.WebSocketAdapter::Received
	Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* ___Received_6;
	// System.Boolean Nakama.WebSocketAdapter::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_7;
	// System.Boolean Nakama.WebSocketAdapter::<IsConnecting>k__BackingField
	bool ___U3CIsConnectingU3Ek__BackingField_8;
	// System.Int32 Nakama.WebSocketAdapter::_maxMessageReadSize
	int32_t ____maxMessageReadSize_9;
	// Nakama.Ninja.WebSockets.WebSocketClientOptions Nakama.WebSocketAdapter::_options
	WebSocketClientOptions_t4A802FB4AEE27C7E8CB3DBC14524C461A72B3BA8* ____options_10;
	// System.TimeSpan Nakama.WebSocketAdapter::_sendTimeoutSec
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____sendTimeoutSec_11;
	// System.Threading.CancellationTokenSource Nakama.WebSocketAdapter::_cancellationSource
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____cancellationSource_12;
	// System.Net.WebSockets.WebSocket Nakama.WebSocketAdapter::_webSocket
	WebSocket_tE3DEAFF0F68BD5AF9A526D29D56B6E5C6E24C3A1* ____webSocket_13;
	// System.Uri Nakama.WebSocketAdapter::_uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____uri_14;
	// Nakama.ILogger Nakama.WebSocketAdapter::_logger
	RuntimeObject* ____logger_15;
};

// Nakama.ApiResponseException
struct ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778  : public Exception_t
{
	// System.Int64 Nakama.ApiResponseException::<StatusCode>k__BackingField
	int64_t ___U3CStatusCodeU3Ek__BackingField_18;
	// System.Int32 Nakama.ApiResponseException::<GrpcStatusCode>k__BackingField
	int32_t ___U3CGrpcStatusCodeU3Ek__BackingField_19;
};

// Satori.ApiResponseException
struct ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF  : public Exception_t
{
	// System.Int64 Satori.ApiResponseException::<StatusCode>k__BackingField
	int64_t ___U3CStatusCodeU3Ek__BackingField_18;
	// System.Int32 Satori.ApiResponseException::<GrpcStatusCode>k__BackingField
	int32_t ___U3CGrpcStatusCodeU3Ek__BackingField_19;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974  : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.DownloadHandlerBuffer::m_NativeData
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_pinvoke : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandlerBuffer
struct DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_marshaled_com : public DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_NativeData_1;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A  : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6
{
	// Unity.Collections.NativeArray`1<System.Byte> UnityEngine.Networking.UploadHandlerRaw::m_Payload
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_pinvoke : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_marshaled_com : public UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_Payload_1;
};

// System.Action`1<System.ArraySegment`1<System.Byte>>
struct Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341  : public MulticastDelegate_t
{
};

// System.Action`1<Nakama.ApiResponseException>
struct Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57  : public MulticastDelegate_t
{
};

// System.Action`1<Satori.ApiResponseException>
struct Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C  : public MulticastDelegate_t
{
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Nakama.TransientExceptionDelegate
struct TransientExceptionDelegate_tA589716C350AFC6B17EC66A6E8B557CFBD3EA4B2  : public MulticastDelegate_t
{
};

// Satori.TransientExceptionDelegate
struct TransientExceptionDelegate_t3ADA17DE1C1448D07A628AF3A2C052024FD9EDF4  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Nakama.UnitySocket
struct UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Concurrent.ConcurrentQueue`1<Nakama.UnitySocket/QueuedEvent> Nakama.UnitySocket::_eventQueue
	ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* ____eventQueue_4;
	// System.Collections.Generic.List`1<System.Action> Nakama.UnitySocket::_connectedHandlers
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ____connectedHandlers_5;
	// System.Collections.Generic.List`1<System.Action> Nakama.UnitySocket::_closedHandlers
	List_1_tDB72209F35D56F62A287633F9450978E90B90987* ____closedHandlers_6;
	// System.Collections.Generic.List`1<System.Action`1<System.Exception>> Nakama.UnitySocket::_errorHandlers
	List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B* ____errorHandlers_7;
	// System.Collections.Generic.List`1<System.Action`1<System.ArraySegment`1<System.Byte>>> Nakama.UnitySocket::_receivedHandlers
	List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD* ____receivedHandlers_8;
	// Nakama.ISocketAdapter Nakama.UnitySocket::_socketAdapter
	RuntimeObject* ____socketAdapter_9;
};

// Nakama.UnityWebRequestAdapter
struct UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Nakama.ILogger Nakama.UnityWebRequestAdapter::<Logger>k__BackingField
	RuntimeObject* ___U3CLoggerU3Ek__BackingField_4;
};

// Satori.UnityWebRequestAdapter
struct UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Satori.ILogger Satori.UnityWebRequestAdapter::<Logger>k__BackingField
	RuntimeObject* ___U3CLoggerU3Ek__BackingField_4;
};

// <Module>

// <Module>

// System.Collections.Concurrent.ConcurrentQueue`1<Nakama.UnitySocket/QueuedEvent>

// System.Collections.Concurrent.ConcurrentQueue`1<Nakama.UnitySocket/QueuedEvent>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.Collections.Generic.Dictionary`2<System.String,System.Object>

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.EmptyArray`1<System.Object>

// System.Collections.Generic.List`1<System.Action`1<System.ArraySegment`1<System.Byte>>>
struct List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Action_1U5BU5D_t458348C817B8B16D94B555FB46E6D422F61D4509* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Action`1<System.ArraySegment`1<System.Byte>>>

// System.Collections.Generic.List`1<System.Action`1<System.Exception>>
struct List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Action_1U5BU5D_tA772FD993F895B85D1946F0EEC61AA07D262940A* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Action`1<System.Exception>>

// System.Collections.Generic.List`1<System.Action>
struct List_1_tDB72209F35D56F62A287633F9450978E90B90987_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Action>

// System.Collections.Generic.List`1<System.Delegate>
struct List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Delegate>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.String>

// System.Threading.Tasks.TaskCompletionSource`1<System.String>

// Nakama.ClientExtensions

// Nakama.ClientExtensions

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Nakama.UnityLogger

// Nakama.UnityLogger

// Satori.UnityLogger

// Satori.UnityLogger

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.Uri

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Nakama.UnitySocket/QueuedEvent

// Nakama.UnitySocket/QueuedEvent

// Nakama.UnityWebRequestAdapter/<>c__DisplayClass11_0

// Nakama.UnityWebRequestAdapter/<>c__DisplayClass11_0

// Nakama.UnityWebRequestAdapter/<SendRequest>d__13

// Nakama.UnityWebRequestAdapter/<SendRequest>d__13

// Satori.UnityWebRequestAdapter/<>c__DisplayClass11_0

// Satori.UnityWebRequestAdapter/<>c__DisplayClass11_0

// Satori.UnityWebRequestAdapter/<SendRequest>d__13

// Satori.UnityWebRequestAdapter/<SendRequest>d__13

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// System.Collections.Generic.List`1/Enumerator<System.Delegate>

// System.Collections.Generic.List`1/Enumerator<System.Delegate>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Byte>

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.String>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// System.Nullable`1<System.Threading.CancellationToken>

// System.Nullable`1<System.Threading.CancellationToken>

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// System.Threading.CancellationTokenRegistration

// System.Threading.CancellationTokenRegistration

// UnityEngine.Networking.CertificateHandler

// UnityEngine.Networking.CertificateHandler

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Delegate

// System.Delegate

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// Nakama.WebSocketAdapter

// Nakama.WebSocketAdapter

// Nakama.ApiResponseException

// Nakama.ApiResponseException

// Satori.ApiResponseException

// Satori.ApiResponseException

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.Networking.DownloadHandlerBuffer

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.MulticastDelegate

// System.MulticastDelegate

// System.SystemException

// System.SystemException

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UploadHandlerRaw

// UnityEngine.Networking.UploadHandlerRaw

// System.Action`1<System.ArraySegment`1<System.Byte>>

// System.Action`1<System.ArraySegment`1<System.Byte>>

// System.Action`1<Nakama.ApiResponseException>

// System.Action`1<Nakama.ApiResponseException>

// System.Action`1<Satori.ApiResponseException>

// System.Action`1<Satori.ApiResponseException>

// System.Action`1<System.Exception>

// System.Action`1<System.Exception>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action`1<System.String>

// System.Action`1<System.String>

// System.Action

// System.Action

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.NotSupportedException

// System.NotSupportedException

// Nakama.TransientExceptionDelegate

// Nakama.TransientExceptionDelegate

// Satori.TransientExceptionDelegate

// Satori.TransientExceptionDelegate

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Nakama.UnitySocket

// Nakama.UnitySocket

// Nakama.UnityWebRequestAdapter
struct UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_StaticFields
{
	// System.Object Nakama.UnityWebRequestAdapter::Lock
	RuntimeObject* ___Lock_5;
	// Nakama.UnityWebRequestAdapter Nakama.UnityWebRequestAdapter::_instance
	UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* ____instance_6;
};

// Nakama.UnityWebRequestAdapter

// Satori.UnityWebRequestAdapter
struct UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_StaticFields
{
	// System.Object Satori.UnityWebRequestAdapter::Lock
	RuntimeObject* ___Lock_5;
	// Satori.UnityWebRequestAdapter Satori.UnityWebRequestAdapter::_instance
	UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* ____instance_6;
};

// Satori.UnityWebRequestAdapter
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Threading.CancellationToken>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_gshared_inline (Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Threading.CancellationToken>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_gshared_inline (Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// T Nakama.TinyJson.JsonParser::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonParser_FromJson_TisRuntimeObject_m312940565E0D0B2510CEDD5E62BBFC096188B1C7_gshared (String_t* ___0_json, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2F501C85F4BAD84573D1479FD2D3D94F6CB8687A_gshared (Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::TryDequeue(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConcurrentQueue_1_get_Count_mA93A5A146DE4520B153BECFFAF36279EB29FA21E_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared (ConcurrentQueue_1_t38466BAF2E0933882FAC022407D638F7900CEED4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7 (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarningFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC (String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Satori.TransientExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransientExceptionDelegate__ctor_m3C0CC5F912F7D91C97528C12AC4EA39A480895CF (TransientExceptionDelegate_t3ADA17DE1C1448D07A628AF3A2C052024FD9EDF4* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Satori.UnityWebRequestAdapter>()
inline UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* GameObject_GetComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m4BBC6B293C501EA8816E21154FB90BF73A0D2138 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<Satori.UnityWebRequestAdapter>()
inline UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* GameObject_AddComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m477F4748E5FB2D53C6E4340D0C6CADE185D601F3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Satori.UnityWebRequestAdapter/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mE68DE5D02B992B31971E79842CFC9BE4B11B085B (U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest Satori.UnityWebRequestAdapter::BuildRequest(System.String,System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAdapter_BuildRequest_mBBE6AB61FBAA4E56EEB319A26C2E22A3CC13D4BB (String_t* ___0_method, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_uri, RuntimeObject* ___2_headers, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_body, int32_t ___4_timeout, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<System.Threading.CancellationToken>::get_HasValue()
inline bool Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_inline (Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39*, const RuntimeMethod*))Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_gshared_inline)(__this, method);
}
// T System.Nullable`1<System.Threading.CancellationToken>::GetValueOrDefault()
inline CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_inline (Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39* __this, const RuntimeMethod* method)
{
	return ((  CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED (*) (Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_gshared_inline)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationToken_Register_m0D080EBDFC1F9651EE5BCBEF183925CF23CA638D (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_callback, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action`1<Satori.ApiResponseException>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m024E412A963F00E58753D97C3BEA8D3CA0D1788A (Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.IEnumerator Satori.UnityWebRequestAdapter::SendRequest(UnityEngine.Networking.UnityWebRequest,System.Action`1<System.String>,System.Action`1<Satori.ApiResponseException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityWebRequestAdapter_SendRequest_m884548E8095A4106754EB96FCB7C9C26745EDFC2 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_callback, Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C* ___2_errback, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___0_a, String_t* ___1_b, int32_t ___2_comparisonType, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::.ctor(System.Uri,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest__ctor_m357B5E7078790E0CEF7259D76512B031F37F2DEA (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_uri, String_t* ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7 (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.DownloadHandlerBuffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::set_downloadHandler(UnityEngine.Networking.DownloadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Delete(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Delete_m12A4359EAE4CFB483BE19DF14585BC4B8667AD66 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_uri, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m7FA8B6B3BC1B5ABDC661DFA6D047108FCBB77C11 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_uri, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, String_t* ___0_name, String_t* ___1_value, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Networking.UnityWebRequest::set_timeout(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Satori.UnityWebRequestAdapter/<SendRequest>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestU3Ed__13__ctor_mD9D60F67627B7CCB042964ECB0A8006F13B9AA6D (U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Int64 Satori.ApiResponseException::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ApiResponseException_get_StatusCode_m29C1611A7B8F8DE677AFBE081EB39DC24C16CBD0_inline (ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.String>::TrySetCanceled()
inline bool TaskCompletionSource_1_TrySetCanceled_m6006097B7F4BFE9EC38D1F8781F207240B439FCD (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175_gshared)(__this, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.String>::TrySetResult(TResult)
inline bool TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, String_t* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, String_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_gshared)(__this, ___0_result, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.String>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_gshared)(__this, ___0_exception, method);
}
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Boolean Satori.UnityWebRequestAdapter::IsNetworkError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestAdapter_IsNetworkError_mF6854B8CF483A1B817CC06F8FBA4252E5E51C61C (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void Satori.ApiResponseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiResponseException__ctor_m49CF9BC7FF90E943C2004EADF3352EF94C6E555C (ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* __this, String_t* ___0_content, const RuntimeMethod* method) ;
// System.Void System.Action`1<Satori.ApiResponseException>::Invoke(T)
inline void Action_1_Invoke_m772A17792A4E6874B5A6E5F9D021B27EEA368B85_inline (Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C* __this, ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C*, ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Boolean Satori.UnityWebRequestAdapter::IsHttpError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestAdapter_IsHttpError_m822D512906296EDB77051C85271B77579B237FAE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) ;
// System.Int64 UnityEngine.Networking.UnityWebRequest::get_responseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Void Satori.ApiResponseException::.ctor(System.Int64,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiResponseException__ctor_m4ADE1AAC1B79F55F403FED5799A313DD5B5D0A79 (ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* __this, int64_t ___0_statusCode, String_t* ___1_content, int32_t ___2_grpcCode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.UnityWebRequest::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// T Nakama.TinyJson.JsonParser::FromJson<System.Collections.Generic.Dictionary`2<System.String,System.Object>>(System.String)
inline Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* JsonParser_FromJson_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m713DA0B5D590140E311DDBF744A7B74D8BD902AB (String_t* ___0_json, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* (*) (String_t*, const RuntimeMethod*))JsonParser_FromJson_TisRuntimeObject_m312940565E0D0B2510CEDD5E62BBFC096188B1C7_gshared)(___0_json, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Object>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,System.Object>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// Satori.UnityWebRequestAdapter Satori.UnityWebRequestAdapter::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* UnityWebRequestAdapter_get_Instance_m6B08EF01104682F85DEBFE027E65F48C93A7B5AC (const RuntimeMethod* method) ;
// System.Void Satori.HttpAdapterUtil::CopyResponseError(Satori.IHttpAdapter,System.Object,Satori.ApiResponseException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpAdapterUtil_CopyResponseError_m8781F831733CCCEE866E8179596BB7A256A32C30 (RuntimeObject* ___0_adapter, RuntimeObject* ___1_err, ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* ___2_e, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.String>::Invoke(T)
inline void Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* __this, String_t* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*, String_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Nakama.WebSocketAdapter::.ctor(System.Int32,System.Int32,System.Int32,Nakama.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocketAdapter__ctor_m3BE4D2C49B40F914D7E0FCD7ECE45DE33ED7990E (WebSocketAdapter_tB5C81C24B1A1C8ED427C4B39B8DE7ED08863DE25* __this, int32_t ___0_keepAliveIntervalSec, int32_t ___1_sendTimeoutSec, int32_t ___2_maxMessageReadSize, RuntimeObject* ___3_logger, const RuntimeMethod* method) ;
// Nakama.UnitySocket Nakama.UnitySocket::Create(Nakama.ISocketAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* UnitySocket_Create_mED3DBA5706A198CC94DECC442ADD14E37FA73835 (RuntimeObject* ___0_adapter, const RuntimeMethod* method) ;
// Nakama.ISocket Nakama.Socket::From(Nakama.IClient,Nakama.ISocketAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Socket_From_m39B919A9B4FC38B7560607133A363905D125F3A4 (RuntimeObject* ___0_client, RuntimeObject* ___1_adapter, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Action>::Add(T)
inline void List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action>::Remove(T)
inline bool List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Exception>>::Add(T)
inline void List_1_Add_m1B1CFA01EF737C227B602FC08785E906120EE689_inline (List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B* __this, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B*, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.Exception>>::Remove(T)
inline bool List_1_Remove_mF5622D7DFF37D99BB0DD9DD4D3427E986D0B4B19 (List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B* __this, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B*, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.ArraySegment`1<System.Byte>>>::Add(T)
inline void List_1_Add_m8BEEFA11FE572870F5555EBF77F617A19A1636CE_inline (List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD* __this, Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD*, Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Action`1<System.ArraySegment`1<System.Byte>>>::Remove(T)
inline bool List_1_Remove_m615AA219CC63423AA974DFA3A72B89A864A77AB0 (List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD* __this, Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD*, Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___0_item, method);
}
// T UnityEngine.GameObject::AddComponent<Nakama.UnitySocket>()
inline UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* GameObject_AddComponent_TisUnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A_m4F4A6BAC160BAE9A699ACA4685E0C1B59E5AC879 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Action`1<System.ArraySegment`1<System.Byte>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2F501C85F4BAD84573D1479FD2D3D94F6CB8687A (Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2F501C85F4BAD84573D1479FD2D3D94F6CB8687A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void System.Action`1<System.Exception>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// T[] System.Array::Empty<System.Object>()
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
// System.Void Nakama.UnitySocket/QueuedEvent::.ctor(System.Collections.Generic.IEnumerable`1<System.Delegate>,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueuedEvent__ctor_m67F386BFCC4D46533308F827C53C956FAD3B5203 (QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* __this, RuntimeObject* ___0_listeners, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_eventArgs, const RuntimeMethod* method) ;
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Nakama.UnitySocket/QueuedEvent>::Enqueue(T)
inline void ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518 (ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* __this, QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5*, QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96*, const RuntimeMethod*))ConcurrentQueue_1_Enqueue_m6E14BFDDF046BB59B8EEF4A398D5AB7F4720D0A4_gshared)(__this, ___0_item, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline)(__this, method);
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline)(__this, method);
}
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, const RuntimeMethod*))ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline)(__this, method);
}
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[])
inline void ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_gshared)(__this, ___0_array, method);
}
// System.Boolean System.Collections.Concurrent.ConcurrentQueue`1<Nakama.UnitySocket/QueuedEvent>::TryDequeue(T&)
inline bool ConcurrentQueue_1_TryDequeue_mCB098074098793FA7C70AF042FFDB0EC0A21BA85 (ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* __this, QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96** ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5*, QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96**, const RuntimeMethod*))ConcurrentQueue_1_TryDequeue_m04C6B697D83A4AA4BAD38344201C140ED7DC5CAA_gshared)(__this, ___0_result, method);
}
// System.Void Nakama.UnitySocket/QueuedEvent::Dispatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueuedEvent_Dispatch_m47B3CB1E4C6639FD33EC75D1F8F43267C5D5840F (QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Concurrent.ConcurrentQueue`1<Nakama.UnitySocket/QueuedEvent>::get_Count()
inline int32_t ConcurrentQueue_1_get_Count_m68292054681BFD8AB17212D36AA1565081BBC57A (ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5*, const RuntimeMethod*))ConcurrentQueue_1_get_Count_mA93A5A146DE4520B153BECFFAF36279EB29FA21E_gshared)(__this, method);
}
// System.Void System.Collections.Concurrent.ConcurrentQueue`1<Nakama.UnitySocket/QueuedEvent>::.ctor()
inline void ConcurrentQueue_1__ctor_mC82F40BB25934DA94D1E6296A7DC1C65B3B50C91 (ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* __this, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5*, const RuntimeMethod*))ConcurrentQueue_1__ctor_m45A2A2E43BA42D4368773A687E7BB6CBCD510345_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action>::.ctor()
inline void List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212 (List_1_tDB72209F35D56F62A287633F9450978E90B90987* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDB72209F35D56F62A287633F9450978E90B90987*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.Exception>>::.ctor()
inline void List_1__ctor_m478FE5B1E47738C25AF072D3C4B9E690915A0507 (List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Action`1<System.ArraySegment`1<System.Byte>>>::.ctor()
inline void List_1__ctor_m649E3C8001595F910FD26E44FFE630A9D7994459 (List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Delegate>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m4FC6DF66E30AA0C84514272B2C219CCA1B8CFA80 (List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Delegate>::GetEnumerator()
inline Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C List_1_GetEnumerator_mD05EBAF1C4695257FED714354A99F3E5639EF58D (List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C (*) (List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Delegate>::Dispose()
inline void Enumerator_Dispose_mBF837C8A5A22A2AE1729D287C09D1B7E008F18C8 (Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Delegate>::get_Current()
inline Delegate_t* Enumerator_get_Current_mA1330C05253ED37E0C7AFFD9EA30F321AAFBC3F4_inline (Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C* __this, const RuntimeMethod* method)
{
	return ((  Delegate_t* (*) (Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Object System.Delegate::DynamicInvoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Delegate_DynamicInvoke_mAB44A4F7796295BBE4432D07985FFC3EA805D4A4 (Delegate_t* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Delegate>::MoveNext()
inline bool Enumerator_MoveNext_m93F9D5EA5AF8D14E337A8055B8E7FDB79F9790C2 (Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Nakama.TransientExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransientExceptionDelegate__ctor_mAE7829A376CC3E74709A13C0CF5B2C297D150A74 (TransientExceptionDelegate_tA589716C350AFC6B17EC66A6E8B557CFBD3EA4B2* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Nakama.UnityWebRequestAdapter>()
inline UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* GameObject_GetComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m58FD66BF861A4EF4585560E578CE7F69E584BAAD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<Nakama.UnityWebRequestAdapter>()
inline UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* GameObject_AddComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m8B812FD73A169490EC3DC3E664BC0C0AF43EA837 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Nakama.UnityWebRequestAdapter/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m9806FD8D2006A976C0E26DD2132C98B5891EF2B5 (U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* __this, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest Nakama.UnityWebRequestAdapter::BuildRequest(System.String,System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAdapter_BuildRequest_mB75791D08AF34B6B29EE0CA918EA94C1937305A8 (String_t* ___0_method, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_uri, RuntimeObject* ___2_headers, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_body, int32_t ___4_timeout, const RuntimeMethod* method) ;
// System.Void System.Action`1<Nakama.ApiResponseException>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m71F00F3635EA178623A24C5AA8A14118D3F0CD7C (Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Collections.IEnumerator Nakama.UnityWebRequestAdapter::SendRequest(UnityEngine.Networking.UnityWebRequest,System.Action`1<System.String>,System.Action`1<Nakama.ApiResponseException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityWebRequestAdapter_SendRequest_m28A25693150F7A56C79617955DE65585EC705D76 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_callback, Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57* ___2_errback, const RuntimeMethod* method) ;
// System.Void Nakama.UnityWebRequestAdapter/<SendRequest>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestU3Ed__13__ctor_mE21D67A8EF0328B373F38109265C38C12E5366FC (U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Int64 Nakama.ApiResponseException::get_StatusCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ApiResponseException_get_StatusCode_m22DE448A20447A65F45862BEE454A8DDFC2182A8_inline (ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* __this, const RuntimeMethod* method) ;
// System.Boolean Nakama.UnityWebRequestAdapter::IsNetworkError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestAdapter_IsNetworkError_m874E54E71D71BD52C464B24BC7C3C0A6C722C2C0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) ;
// System.Void Nakama.ApiResponseException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiResponseException__ctor_mF592121C7A254EFE05FBA5DDE769B4FB45E61842 (ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* __this, String_t* ___0_content, const RuntimeMethod* method) ;
// System.Void System.Action`1<Nakama.ApiResponseException>::Invoke(T)
inline void Action_1_Invoke_m95112E3D0378B5AC13A9522D9D6EC9E9A62475B0_inline (Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57* __this, ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57*, ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Boolean Nakama.UnityWebRequestAdapter::IsHttpError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestAdapter_IsHttpError_m4582FF555D98A3882C11A55E00B8BFFD621BADB2 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) ;
// System.Void Nakama.ApiResponseException::.ctor(System.Int64,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApiResponseException__ctor_m67D95BFF838C1770F311CAF866D6EEF7F133B7DC (ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* __this, int64_t ___0_statusCode, String_t* ___1_content, int32_t ___2_grpcCode, const RuntimeMethod* method) ;
// Nakama.UnityWebRequestAdapter Nakama.UnityWebRequestAdapter::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* UnityWebRequestAdapter_get_Instance_m183996BCB77A17E8AF249E22935DB18FEC7755FF (const RuntimeMethod* method) ;
// System.Void Nakama.IHttpAdapterUtil::CopyResponseError(Nakama.IHttpAdapter,System.Object,Nakama.ApiResponseException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IHttpAdapterUtil_CopyResponseError_mEEEAB81A49121D3A9E105BD3B7BF9E5C25CD0A30 (RuntimeObject* ___0_adapter, RuntimeObject* ___1_err, ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* ___2_e, const RuntimeMethod* method) ;
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
// System.Void Satori.UnityLogger::DebugFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_DebugFormat_mEE61F7A51C791C54AFEA6E1FAD9A9A586F5CA296 (UnityLogger_tB95C84B26A7D8AFE44EE3F90F92CF11A3F142BBE* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void DebugFormat(string format, params object[] args) => Debug.LogFormat(format, args);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(L_0, L_1, NULL);
		return;
	}
}
// System.Void Satori.UnityLogger::ErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_ErrorFormat_m91B06C09BDB02070CAC0804AE8561071BEA01839 (UnityLogger_tB95C84B26A7D8AFE44EE3F90F92CF11A3F142BBE* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void ErrorFormat(string format, params object[] args) => Debug.LogErrorFormat(format, args);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(L_0, L_1, NULL);
		return;
	}
}
// System.Void Satori.UnityLogger::InfoFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_InfoFormat_m914212BD916245ACF184699709CD0E48BA7F156D (UnityLogger_tB95C84B26A7D8AFE44EE3F90F92CF11A3F142BBE* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void InfoFormat(string format, params object[] args) => Debug.LogFormat(format, args);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(L_0, L_1, NULL);
		return;
	}
}
// System.Void Satori.UnityLogger::WarnFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_WarnFormat_m66574C578E8D065DA17F8B9F58E97609BA928631 (UnityLogger_tB95C84B26A7D8AFE44EE3F90F92CF11A3F142BBE* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void WarnFormat(string format, params object[] args) => Debug.LogWarningFormat(format, args);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(L_0, L_1, NULL);
		return;
	}
}
// System.Void Satori.UnityLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger__ctor_mE1AC9E7BE78539F621DB363BC699B214C3958FAA (UnityLogger_tB95C84B26A7D8AFE44EE3F90F92CF11A3F142BBE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Satori.ILogger Satori.UnityWebRequestAdapter::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityWebRequestAdapter_get_Logger_m0A8E50619D4A85DAD304A0D0D9C16D74ECD832D1 (UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* __this, const RuntimeMethod* method) 
{
	{
		// public ILogger Logger { get; set; }
		RuntimeObject* L_0 = __this->___U3CLoggerU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Satori.UnityWebRequestAdapter::set_Logger(Satori.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAdapter_set_Logger_mFCB70D2A142329992CC6DB4E04D9A340E3D34CE1 (UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ILogger Logger { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CLoggerU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoggerU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Satori.TransientExceptionDelegate Satori.UnityWebRequestAdapter::get_TransientExceptionDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransientExceptionDelegate_t3ADA17DE1C1448D07A628AF3A2C052024FD9EDF4* UnityWebRequestAdapter_get_TransientExceptionDelegate_mBC78ED1DE0C6AD92258E0E60A8B285BD97BAA9A3 (UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransientExceptionDelegate_t3ADA17DE1C1448D07A628AF3A2C052024FD9EDF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAdapter_IsTransientException_m62264F2CD79DD6CD15E5F0894AB46ABE908F5BBE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TransientExceptionDelegate TransientExceptionDelegate => IsTransientException;
		TransientExceptionDelegate_t3ADA17DE1C1448D07A628AF3A2C052024FD9EDF4* L_0 = (TransientExceptionDelegate_t3ADA17DE1C1448D07A628AF3A2C052024FD9EDF4*)il2cpp_codegen_object_new(TransientExceptionDelegate_t3ADA17DE1C1448D07A628AF3A2C052024FD9EDF4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TransientExceptionDelegate__ctor_m3C0CC5F912F7D91C97528C12AC4EA39A480895CF(L_0, NULL, (intptr_t)((void*)UnityWebRequestAdapter_IsTransientException_m62264F2CD79DD6CD15E5F0894AB46ABE908F5BBE_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// Satori.UnityWebRequestAdapter Satori.UnityWebRequestAdapter::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* UnityWebRequestAdapter_get_Instance_m6B08EF01104682F85DEBFE027E65F48C93A7B5AC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m477F4748E5FB2D53C6E4340D0C6CADE185D601F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m4BBC6B293C501EA8816E21154FB90BF73A0D2138_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8403A75C8AB8D2EA626A68805D4899A4642CC58A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8D68C347BF0905FAB725410B45508F4498A632C);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* V_3 = NULL;
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var))->___Lock_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0072:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_007b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_007b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (_instance != null) return _instance;
				il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
				UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* L_4 = ((UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var))->____instance_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_5)
				{
					goto IL_0025_1;
				}
			}
			{
				// if (_instance != null) return _instance;
				il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
				UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* L_6 = ((UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var))->____instance_6;
				V_3 = L_6;
				goto IL_007c;
			}

IL_0025_1:
			{
				// var go = GameObject.Find("/[Nakama]");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralB8D68C347BF0905FAB725410B45508F4498A632C, NULL);
				V_2 = L_7;
				// if (go == null)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_9)
				{
					goto IL_0044_1;
				}
			}
			{
				// go = new GameObject("[Nakama]");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_10, _stringLiteral8403A75C8AB8D2EA626A68805D4899A4642CC58A, NULL);
				V_2 = L_10;
			}

IL_0044_1:
			{
				// if (go.GetComponent<UnityWebRequestAdapter>() == null)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
				NullCheck(L_11);
				UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* L_12;
				L_12 = GameObject_GetComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m4BBC6B293C501EA8816E21154FB90BF73A0D2138(L_11, GameObject_GetComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m4BBC6B293C501EA8816E21154FB90BF73A0D2138_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_13)
				{
					goto IL_0059_1;
				}
			}
			{
				// go.AddComponent<UnityWebRequestAdapter>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_2;
				NullCheck(L_14);
				UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* L_15;
				L_15 = GameObject_AddComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m477F4748E5FB2D53C6E4340D0C6CADE185D601F3(L_14, GameObject_AddComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m477F4748E5FB2D53C6E4340D0C6CADE185D601F3_RuntimeMethod_var);
			}

IL_0059_1:
			{
				// DontDestroyOnLoad(go);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_16, NULL);
				// _instance = go.GetComponent<UnityWebRequestAdapter>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_2;
				NullCheck(L_17);
				UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* L_18;
				L_18 = GameObject_GetComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m4BBC6B293C501EA8816E21154FB90BF73A0D2138(L_17, GameObject_GetComponent_TisUnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_m4BBC6B293C501EA8816E21154FB90BF73A0D2138_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
				((UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var))->____instance_6 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&((UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var))->____instance_6), (void*)L_18);
				// return _instance;
				UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* L_19 = ((UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var))->____instance_6;
				V_3 = L_19;
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// }
		UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* L_20 = V_3;
		return L_20;
	}
}
// System.Void Satori.UnityWebRequestAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAdapter__ctor_mFB07F93CCF23E1C9CE00535E70217233CA103121 (UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* __this, const RuntimeMethod* method) 
{
	{
		// private UnityWebRequestAdapter()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Satori.UnityWebRequestAdapter::SendAsync(System.String,System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Byte[],System.Int32,System.Nullable`1<System.Threading.CancellationToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* UnityWebRequestAdapter_SendAsync_mB4E42C0F136DAFB877676A531F11144FA38E8512 (UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* __this, String_t* ___0_method, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_uri, RuntimeObject* ___2_headers, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_body, int32_t ___4_timeout, Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39 ___5_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__0_m3561DBF18284A4A9BE215CB9811B16C2947F7649_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__1_mDE79D447FF245DD36675DC2730FA842EE6E823AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__2_m4727581D51659109F4C90BFD412CCDEEAD101490_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* L_0 = (U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass11_0__ctor_mE68DE5D02B992B31971E79842CFC9BE4B11B085B(L_0, NULL);
		V_0 = L_0;
		// var www = BuildRequest(method, uri, headers, body, timeout);
		String_t* L_1 = ___0_method;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = ___1_uri;
		RuntimeObject* L_3 = ___2_headers;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_body;
		int32_t L_5 = ___4_timeout;
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6;
		L_6 = UnityWebRequestAdapter_BuildRequest_mBBE6AB61FBAA4E56EEB319A26C2E22A3CC13D4BB(L_1, L_2, L_3, L_4, L_5, NULL);
		V_1 = L_6;
		// var tcs = new TaskCompletionSource<string>();
		U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* L_7 = V_0;
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_8 = (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)il2cpp_codegen_object_new(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1(L_8, TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___tcs_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___tcs_0), (void*)L_8);
		// cancellationToken?.Register(() => tcs.TrySetCanceled());
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_inline((&___5_cancellationToken), Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10;
		L_10 = Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_inline((&___5_cancellationToken), Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_RuntimeMethod_var);
		V_2 = L_10;
		U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* L_11 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__0_m3561DBF18284A4A9BE215CB9811B16C2947F7649_RuntimeMethod_var), NULL);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13;
		L_13 = CancellationToken_Register_m0D080EBDFC1F9651EE5BCBEF183925CF23CA638D((&V_2), L_12, NULL);
	}

IL_0043:
	{
		// StartCoroutine(SendRequest(www, resp => tcs.TrySetResult(resp), err => tcs.TrySetException(err)));
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = V_1;
		U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* L_15 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_16 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__1_mDE79D447FF245DD36675DC2730FA842EE6E823AA_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* L_17 = V_0;
		Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C* L_18 = (Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C*)il2cpp_codegen_object_new(Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_m024E412A963F00E58753D97C3BEA8D3CA0D1788A(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__2_m4727581D51659109F4C90BFD412CCDEEAD101490_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
		RuntimeObject* L_19;
		L_19 = UnityWebRequestAdapter_SendRequest_m884548E8095A4106754EB96FCB7C9C26745EDFC2(L_14, L_16, L_18, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_19, NULL);
		// return tcs.Task;
		U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* L_21 = V_0;
		NullCheck(L_21);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_22 = L_21->___tcs_0;
		NullCheck(L_22);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_23;
		L_23 = TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline(L_22, TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		return L_23;
	}
}
// UnityEngine.Networking.UnityWebRequest Satori.UnityWebRequestAdapter::BuildRequest(System.String,System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAdapter_BuildRequest_mBBE6AB61FBAA4E56EEB319A26C2E22A3CC13D4BB (String_t* ___0_method, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_uri, RuntimeObject* ___2_headers, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_body, int32_t ___4_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (string.Equals(method, "POST", StringComparison.OrdinalIgnoreCase) ||
		//     string.Equals(method, "PUT", StringComparison.OrdinalIgnoreCase))
		String_t* L_0 = ___0_method;
		bool L_1;
		L_1 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, 5, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___0_method;
		bool L_3;
		L_3 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_2, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, 5, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}

IL_001c:
	{
		// www = new UnityWebRequest(uri, method)
		// {
		//     uploadHandler = new UploadHandlerRaw(body),
		//     downloadHandler = new DownloadHandlerBuffer()
		// };
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = ___1_uri;
		String_t* L_5 = ___0_method;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityWebRequest__ctor_m357B5E7078790E0CEF7259D76512B031F37F2DEA(L_6, L_4, L_5, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___3_body;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_9 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_9, L_8, NULL);
		NullCheck(L_7);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_7, L_9, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = L_7;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_11 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_11, NULL);
		NullCheck(L_10);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_10, L_11, NULL);
		V_0 = L_10;
		goto IL_005b;
	}

IL_003d:
	{
		// else if (string.Equals(method, "DELETE", StringComparison.OrdinalIgnoreCase))
		String_t* L_12 = ___0_method;
		bool L_13;
		L_13 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_12, _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38, 5, NULL);
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		// www = UnityWebRequest.Delete(uri);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_14 = ___1_uri;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15;
		L_15 = UnityWebRequest_Delete_m12A4359EAE4CFB483BE19DF14585BC4B8667AD66(L_14, NULL);
		V_0 = L_15;
		goto IL_005b;
	}

IL_0054:
	{
		// www = UnityWebRequest.Get(uri);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_16 = ___1_uri;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17;
		L_17 = UnityWebRequest_Get_m7FA8B6B3BC1B5ABDC661DFA6D047108FCBB77C11(L_16, NULL);
		V_0 = L_17;
	}

IL_005b:
	{
		// www.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = V_0;
		NullCheck(L_18);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_18, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// foreach (var kv in headers)
		RuntimeObject* L_19 = ___2_headers;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_19);
		V_1 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_21 = V_1;
					if (!L_21)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_22 = V_1;
					NullCheck(L_22);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
				}

IL_00a2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008f_1;
			}

IL_0074_1:
			{
				// foreach (var kv in headers)
				RuntimeObject* L_23 = V_1;
				NullCheck(L_23);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_24;
				L_24 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_23);
				V_2 = L_24;
				// www.SetRequestHeader(kv.Key, kv.Value);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_25 = V_0;
				String_t* L_26;
				L_26 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_27;
				L_27 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_25);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_25, L_26, L_27, NULL);
			}

IL_008f_1:
			{
				// foreach (var kv in headers)
				RuntimeObject* L_28 = V_1;
				NullCheck(L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				if (L_29)
				{
					goto IL_0074_1;
				}
			}
			{
				goto IL_00a3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		// www.timeout = timeout;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_30 = V_0;
		int32_t L_31 = ___4_timeout;
		NullCheck(L_30);
		UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_30, L_31, NULL);
		// return www;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_32 = V_0;
		return L_32;
	}
}
// System.Collections.IEnumerator Satori.UnityWebRequestAdapter::SendRequest(UnityEngine.Networking.UnityWebRequest,System.Action`1<System.String>,System.Action`1<Satori.ApiResponseException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityWebRequestAdapter_SendRequest_m884548E8095A4106754EB96FCB7C9C26745EDFC2 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_callback, Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C* ___2_errback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* L_0 = (U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762*)il2cpp_codegen_object_new(U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendRequestU3Ed__13__ctor_mD9D60F67627B7CCB042964ECB0A8006F13B9AA6D(L_0, 0, NULL);
		U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* L_1 = L_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___0_www;
		NullCheck(L_1);
		L_1->___www_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___www_2), (void*)L_2);
		U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* L_3 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___1_callback;
		NullCheck(L_3);
		L_3->___callback_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_4), (void*)L_4);
		U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* L_5 = L_3;
		Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C* L_6 = ___2_errback;
		NullCheck(L_5);
		L_5->___errback_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___errback_3), (void*)L_6);
		return L_5;
	}
}
// System.Boolean Satori.UnityWebRequestAdapter::IsHttpError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestAdapter_IsHttpError_m822D512906296EDB77051C85271B77579B237FAE (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) 
{
	{
		// return www.result == UnityWebRequest.Result.ProtocolError;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___0_www;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
	}
}
// System.Boolean Satori.UnityWebRequestAdapter::IsNetworkError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestAdapter_IsNetworkError_mF6854B8CF483A1B817CC06F8FBA4252E5E51C61C (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) 
{
	{
		// return www.result == UnityWebRequest.Result.ConnectionError;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___0_www;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean Satori.UnityWebRequestAdapter::IsTransientException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestAdapter_IsTransientException_m62264F2CD79DD6CD15E5F0894AB46ABE908F5BBE (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* V_0 = NULL;
	{
		// return e is ApiResponseException apiException && (apiException.StatusCode >= 500 || apiException.StatusCode == -1);
		Exception_t* L_0 = ___0_e;
		V_0 = ((ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF*)IsInstSealed((RuntimeObject*)L_0, ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF_il2cpp_TypeInfo_var));
		ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* L_2 = V_0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = ApiResponseException_get_StatusCode_m29C1611A7B8F8DE677AFBE081EB39DC24C16CBD0_inline(L_2, NULL);
		if ((((int64_t)L_3) >= ((int64_t)((int64_t)((int32_t)500)))))
		{
			goto IL_0023;
		}
	}
	{
		ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = ApiResponseException_get_StatusCode_m29C1611A7B8F8DE677AFBE081EB39DC24C16CBD0_inline(L_4, NULL);
		return (bool)((((int64_t)L_5) == ((int64_t)((int64_t)(-1))))? 1 : 0);
	}

IL_0023:
	{
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Void Satori.UnityWebRequestAdapter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAdapter__cctor_mE8CD922C750078699FE6D05E5668AFE578D8CFA9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var))->___Lock_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var))->___Lock_5), (void*)L_0);
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
// System.Void Satori.UnityWebRequestAdapter/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_mE68DE5D02B992B31971E79842CFC9BE4B11B085B (U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Satori.UnityWebRequestAdapter/<>c__DisplayClass11_0::<SendAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__0_m3561DBF18284A4A9BE215CB9811B16C2947F7649 (U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetCanceled_m6006097B7F4BFE9EC38D1F8781F207240B439FCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cancellationToken?.Register(() => tcs.TrySetCanceled());
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_0 = __this->___tcs_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = TaskCompletionSource_1_TrySetCanceled_m6006097B7F4BFE9EC38D1F8781F207240B439FCD(L_0, TaskCompletionSource_1_TrySetCanceled_m6006097B7F4BFE9EC38D1F8781F207240B439FCD_RuntimeMethod_var);
		return;
	}
}
// System.Void Satori.UnityWebRequestAdapter/<>c__DisplayClass11_0::<SendAsync>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__1_mDE79D447FF245DD36675DC2730FA842EE6E823AA (U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* __this, String_t* ___0_resp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(SendRequest(www, resp => tcs.TrySetResult(resp), err => tcs.TrySetException(err)));
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_0 = __this->___tcs_0;
		String_t* L_1 = ___0_resp;
		NullCheck(L_0);
		bool L_2;
		L_2 = TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176(L_0, L_1, TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var);
		return;
	}
}
// System.Void Satori.UnityWebRequestAdapter/<>c__DisplayClass11_0::<SendAsync>b__2(Satori.ApiResponseException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__2_m4727581D51659109F4C90BFD412CCDEEAD101490 (U3CU3Ec__DisplayClass11_0_t81624F9CA76FA859CF526614C6318331570B00FB* __this, ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* ___0_err, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(SendRequest(www, resp => tcs.TrySetResult(resp), err => tcs.TrySetException(err)));
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_0 = __this->___tcs_0;
		ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* L_1 = ___0_err;
		NullCheck(L_0);
		bool L_2;
		L_2 = TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C(L_0, L_1, TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var);
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
// System.Void Satori.UnityWebRequestAdapter/<SendRequest>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestU3Ed__13__ctor_mD9D60F67627B7CCB042964ECB0A8006F13B9AA6D (U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Satori.UnityWebRequestAdapter/<SendRequest>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestU3Ed__13_System_IDisposable_Dispose_mD3B43A466BE8946C049A9724C77CB0706D330AD4 (U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Satori.UnityWebRequestAdapter/<SendRequest>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendRequestU3Ed__13_MoveNext_mD3D828CA8AD594FC4461FE7B0EC021255E8D04C3 (U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonParser_FromJson_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m713DA0B5D590140E311DDBF744A7B74D8BD902AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A2E461CC4A1D49199A67B5216F128319CE63CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_1 = NULL;
	ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* G_B13_0 = NULL;
	int32_t G_B16_0 = 0;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B21_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B20_0 = NULL;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* G_B23_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B23_1 = NULL;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* G_B22_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B22_1 = NULL;
	String_t* G_B24_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B24_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return www.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = __this->___www_2;
		NullCheck(L_3);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_4;
		L_4 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0031:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (IsNetworkError(www))
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___www_2;
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = UnityWebRequestAdapter_IsNetworkError_mF6854B8CF483A1B817CC06F8FBA4252E5E51C61C(L_5, NULL);
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		// errback(new ApiResponseException(www.error));
		Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C* L_7 = __this->___errback_3;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___www_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_8, NULL);
		ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* L_10 = (ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF*)il2cpp_codegen_object_new(ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ApiResponseException__ctor_m49CF9BC7FF90E943C2004EADF3352EF94C6E555C(L_10, L_9, NULL);
		NullCheck(L_7);
		Action_1_Invoke_m772A17792A4E6874B5A6E5F9D021B27EEA368B85_inline(L_7, L_10, NULL);
		goto IL_01a6;
	}

IL_0065:
	{
		// else if (IsHttpError(www))
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___www_2;
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = UnityWebRequestAdapter_IsHttpError_m822D512906296EDB77051C85271B77579B237FAE(L_11, NULL);
		if (!L_12)
		{
			goto IL_017e;
		}
	}
	{
		// if (www.responseCode >= 500)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___www_2;
		NullCheck(L_13);
		int64_t L_14;
		L_14 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_13, NULL);
		if ((((int64_t)L_14) < ((int64_t)((int64_t)((int32_t)500)))))
		{
			goto IL_00c3;
		}
	}
	{
		// errback(new ApiResponseException((int) www.responseCode, www.downloadHandler.text, -1));
		Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C* L_15 = __this->___errback_3;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16 = __this->___www_2;
		NullCheck(L_16);
		int64_t L_17;
		L_17 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_16, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = __this->___www_2;
		NullCheck(L_18);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_19;
		L_19 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_19, NULL);
		ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* L_21 = (ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF*)il2cpp_codegen_object_new(ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ApiResponseException__ctor_m4ADE1AAC1B79F55F403FED5799A313DD5B5D0A79(L_21, ((int64_t)((int32_t)L_17)), L_20, (-1), NULL);
		NullCheck(L_15);
		Action_1_Invoke_m772A17792A4E6874B5A6E5F9D021B27EEA368B85_inline(L_15, L_21, NULL);
		// www.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___www_2;
		NullCheck(L_22);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_22, NULL);
		// yield break;
		return (bool)0;
	}

IL_00c3:
	{
		// var decoded = www.downloadHandler.text.FromJson<Dictionary<string, object>>();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = __this->___www_2;
		NullCheck(L_23);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_24;
		L_24 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_24, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_26;
		L_26 = JsonParser_FromJson_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m713DA0B5D590140E311DDBF744A7B74D8BD902AB(L_25, JsonParser_FromJson_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m713DA0B5D590140E311DDBF744A7B74D8BD902AB_RuntimeMethod_var);
		V_1 = L_26;
		// var e = new ApiResponseException(www.downloadHandler.text);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27 = __this->___www_2;
		NullCheck(L_27);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_28;
		L_28 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_27, NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_28, NULL);
		ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* L_30 = (ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF*)il2cpp_codegen_object_new(ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		ApiResponseException__ctor_m49CF9BC7FF90E943C2004EADF3352EF94C6E555C(L_30, L_29, NULL);
		V_2 = L_30;
		// if (decoded != null)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_31 = V_1;
		if (!L_31)
		{
			goto IL_0170;
		}
	}
	{
		// var msg = decoded.ContainsKey("message") ? decoded["message"].ToString() : string.Empty;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_32 = V_1;
		NullCheck(L_32);
		bool L_33;
		L_33 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_32, _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_0106;
		}
	}
	{
		String_t* L_34 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B13_0 = L_34;
		goto IL_0116;
	}

IL_0106:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_35 = V_1;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_35, _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		G_B13_0 = L_37;
	}

IL_0116:
	{
		V_3 = G_B13_0;
		// var grpcCode = decoded.ContainsKey("code") ? (int) decoded["code"] : -1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_38 = V_1;
		NullCheck(L_38);
		bool L_39;
		L_39 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_38, _stringLiteral60A2E461CC4A1D49199A67B5216F128319CE63CC, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0127;
		}
	}
	{
		G_B16_0 = (-1);
		goto IL_0137;
	}

IL_0127:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_40 = V_1;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_40, _stringLiteral60A2E461CC4A1D49199A67B5216F128319CE63CC, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		G_B16_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_41, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_0137:
	{
		V_4 = G_B16_0;
		// e = new ApiResponseException(www.responseCode, msg, grpcCode);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_42 = __this->___www_2;
		NullCheck(L_42);
		int64_t L_43;
		L_43 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_42, NULL);
		String_t* L_44 = V_3;
		int32_t L_45 = V_4;
		ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* L_46 = (ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF*)il2cpp_codegen_object_new(ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		ApiResponseException__ctor_m4ADE1AAC1B79F55F403FED5799A313DD5B5D0A79(L_46, L_43, L_44, L_45, NULL);
		V_2 = L_46;
		// if (decoded.ContainsKey("error"))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_47 = V_1;
		NullCheck(L_47);
		bool L_48;
		L_48 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_47, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_48)
		{
			goto IL_0170;
		}
	}
	{
		// HttpAdapterUtil.CopyResponseError(Instance, decoded["error"], e);
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE_il2cpp_TypeInfo_var);
		UnityWebRequestAdapter_t7F16CC8EA88F9A024F7E3323F596645729D056CE* L_49;
		L_49 = UnityWebRequestAdapter_get_Instance_m6B08EF01104682F85DEBFE027E65F48C93A7B5AC(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_50 = V_1;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_50, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* L_52 = V_2;
		HttpAdapterUtil_CopyResponseError_m8781F831733CCCEE866E8179596BB7A256A32C30(L_49, L_51, L_52, NULL);
	}

IL_0170:
	{
		// errback(e);
		Action_1_t374BB75C4AF2F1A841B99E695F70A08DE824173C* L_53 = __this->___errback_3;
		ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* L_54 = V_2;
		NullCheck(L_53);
		Action_1_Invoke_m772A17792A4E6874B5A6E5F9D021B27EEA368B85_inline(L_53, L_54, NULL);
		goto IL_01a6;
	}

IL_017e:
	{
		// callback?.Invoke(www.downloadHandler?.text);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_55 = __this->___callback_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_56 = L_55;
		G_B20_0 = L_56;
		if (L_56)
		{
			G_B21_0 = L_56;
			goto IL_018a;
		}
	}
	{
		goto IL_01a6;
	}

IL_018a:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_57 = __this->___www_2;
		NullCheck(L_57);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_58;
		L_58 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_57, NULL);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_59 = L_58;
		G_B22_0 = L_59;
		G_B22_1 = G_B21_0;
		if (L_59)
		{
			G_B23_0 = L_59;
			G_B23_1 = G_B21_0;
			goto IL_019c;
		}
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B22_1;
		goto IL_01a1;
	}

IL_019c:
	{
		NullCheck(G_B23_0);
		String_t* L_60;
		L_60 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(G_B23_0, NULL);
		G_B24_0 = L_60;
		G_B24_1 = G_B23_1;
	}

IL_01a1:
	{
		NullCheck(G_B24_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B24_1, G_B24_0, NULL);
	}

IL_01a6:
	{
		// www.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_61 = __this->___www_2;
		NullCheck(L_61);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_61, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Satori.UnityWebRequestAdapter/<SendRequest>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendRequestU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9B57C6CEE65DF7F75DC5330FB535B27F936BEAFF (U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Satori.UnityWebRequestAdapter/<SendRequest>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestU3Ed__13_System_Collections_IEnumerator_Reset_m2C8A90B2090FE54DE852D2F2F3200D04BA32B4E9 (U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendRequestU3Ed__13_System_Collections_IEnumerator_Reset_m2C8A90B2090FE54DE852D2F2F3200D04BA32B4E9_RuntimeMethod_var)));
	}
}
// System.Object Satori.UnityWebRequestAdapter/<SendRequest>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendRequestU3Ed__13_System_Collections_IEnumerator_get_Current_m7FBFF746112A9404E7B6465667B8F3C887C59831 (U3CSendRequestU3Ed__13_t1D9B50DAA735498FE6F2CDEAB906B2A32A3DE762* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// Nakama.ISocket Nakama.ClientExtensions::NewSocket(Nakama.IClient,System.Boolean,Nakama.ISocketAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ClientExtensions_NewSocket_m73E8823110577CC8B302A549777E46106DC87F2C (RuntimeObject* ___0_client, bool ___1_useMainThread, RuntimeObject* ___2_defaultAdapter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocketAdapter_tB5C81C24B1A1C8ED427C4B39B8DE7ED08863DE25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	RuntimeObject* G_B5_0 = NULL;
	{
		// threadedAdapter = defaultAdapter ?? new WebSocketAdapter();
		RuntimeObject* L_0 = ___2_defaultAdapter;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		WebSocketAdapter_tB5C81C24B1A1C8ED427C4B39B8DE7ED08863DE25* L_2 = (WebSocketAdapter_tB5C81C24B1A1C8ED427C4B39B8DE7ED08863DE25*)il2cpp_codegen_object_new(WebSocketAdapter_tB5C81C24B1A1C8ED427C4B39B8DE7ED08863DE25_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebSocketAdapter__ctor_m3BE4D2C49B40F914D7E0FCD7ECE45DE33ED7990E(L_2, ((int32_t)15), ((int32_t)10), ((int32_t)262144), (RuntimeObject*)NULL, NULL);
		G_B2_0 = ((RuntimeObject*)(L_2));
	}

IL_0014:
	{
		V_0 = G_B2_0;
		// var adapter = useMainThread ? UnitySocket.Create(threadedAdapter) : threadedAdapter;
		bool L_3 = ___1_useMainThread;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		G_B5_0 = L_4;
		goto IL_0023;
	}

IL_001b:
	{
		RuntimeObject* L_5 = V_0;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_6;
		L_6 = UnitySocket_Create_mED3DBA5706A198CC94DECC442ADD14E37FA73835(L_5, NULL);
		V_2 = L_6;
		RuntimeObject* L_7 = V_2;
		G_B5_0 = L_7;
	}

IL_0023:
	{
		V_1 = G_B5_0;
		// var socket = Socket.From(client, adapter);
		RuntimeObject* L_8 = ___0_client;
		RuntimeObject* L_9 = V_1;
		RuntimeObject* L_10;
		L_10 = Socket_From_m39B919A9B4FC38B7560607133A363905D125F3A4(L_8, L_9, NULL);
		// return socket;
		return L_10;
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
// System.Void Nakama.UnityLogger::DebugFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_DebugFormat_m84313477DD4B51652D976069F88F50CD8C7362CC (UnityLogger_tDFCF6C76D6DE673B2A2280E79135615A68B1CF7F* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void DebugFormat(string format, params object[] args) => Debug.LogFormat(format, args);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(L_0, L_1, NULL);
		return;
	}
}
// System.Void Nakama.UnityLogger::ErrorFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_ErrorFormat_m3A0820A56B8E9DAB3E5CCA91296EDD5CB4A4A7B7 (UnityLogger_tDFCF6C76D6DE673B2A2280E79135615A68B1CF7F* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void ErrorFormat(string format, params object[] args) => Debug.LogErrorFormat(format, args);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogErrorFormat_m96690322C941D23A125E5769C9803606859A707C(L_0, L_1, NULL);
		return;
	}
}
// System.Void Nakama.UnityLogger::InfoFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_InfoFormat_mD2027071606DCC50F030C4CD7B0EE969F7A5145B (UnityLogger_tDFCF6C76D6DE673B2A2280E79135615A68B1CF7F* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void InfoFormat(string format, params object[] args) => Debug.LogFormat(format, args);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogFormat_mD555556327B42AA3482D077EFAEB16B0AFDF72C7(L_0, L_1, NULL);
		return;
	}
}
// System.Void Nakama.UnityLogger::WarnFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger_WarnFormat_m31A9AF57FA19A6B7C52AE0594A085C9A24083B80 (UnityLogger_tDFCF6C76D6DE673B2A2280E79135615A68B1CF7F* __this, String_t* ___0_format, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_args, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public void WarnFormat(string format, params object[] args) => Debug.LogWarningFormat(format, args);
		String_t* L_0 = ___0_format;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_args;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_mD8224DEBCB6050F4E2BF55151F0C6A29B87DEFBC(L_0, L_1, NULL);
		return;
	}
}
// System.Void Nakama.UnityLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLogger__ctor_m322C4D23C069CBBD2DAE11D65D4A57376CEF7650 (UnityLogger_tDFCF6C76D6DE673B2A2280E79135615A68B1CF7F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Nakama.UnitySocket::Nakama.ISocketAdapter.add_Connected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_Nakama_ISocketAdapter_add_Connected_mFF08927E330E62299E582DE41F16EDC9C5F30AD3 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add => _connectedHandlers.Add(value);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = __this->____connectedHandlers_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_value;
		NullCheck(L_0);
		List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_0, L_1, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnitySocket::Nakama.ISocketAdapter.remove_Connected(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_Nakama_ISocketAdapter_remove_Connected_mBE0FA0E7B78406AF72490DA407352D3420C9F398 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => _connectedHandlers.Remove(value);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = __this->____connectedHandlers_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822(L_0, L_1, List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnitySocket::Nakama.ISocketAdapter.add_Closed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_Nakama_ISocketAdapter_add_Closed_m8EADBE00E9924505368B5998040FB181653FD91D (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add => _closedHandlers.Add(value);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = __this->____closedHandlers_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_value;
		NullCheck(L_0);
		List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_inline(L_0, L_1, List_1_Add_m5B99D67CB378BFA8A1142343F9DB44D94322EAD3_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnitySocket::Nakama.ISocketAdapter.remove_Closed(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_Nakama_ISocketAdapter_remove_Closed_mB133E4ED25B4F2013957785D114A77DD0E25B98C (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => _closedHandlers.Remove(value);
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_0 = __this->____closedHandlers_6;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822(L_0, L_1, List_1_Remove_m2F58C9F48DA11B2DF2D297626E97A25B1050D822_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnitySocket::Nakama.ISocketAdapter.add_ReceivedError(System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_Nakama_ISocketAdapter_add_ReceivedError_mB50817A14E282201912AEDDCAA957C6163EFC94E (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m1B1CFA01EF737C227B602FC08785E906120EE689_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add => _errorHandlers.Add(value);
		List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B* L_0 = __this->____errorHandlers_7;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_1 = ___0_value;
		NullCheck(L_0);
		List_1_Add_m1B1CFA01EF737C227B602FC08785E906120EE689_inline(L_0, L_1, List_1_Add_m1B1CFA01EF737C227B602FC08785E906120EE689_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnitySocket::Nakama.ISocketAdapter.remove_ReceivedError(System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_Nakama_ISocketAdapter_remove_ReceivedError_mF84CA3BAA4838E4FB829BBE606C982A6CF1E6062 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mF5622D7DFF37D99BB0DD9DD4D3427E986D0B4B19_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => _errorHandlers.Remove(value);
		List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B* L_0 = __this->____errorHandlers_7;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mF5622D7DFF37D99BB0DD9DD4D3427E986D0B4B19(L_0, L_1, List_1_Remove_mF5622D7DFF37D99BB0DD9DD4D3427E986D0B4B19_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnitySocket::Nakama.ISocketAdapter.add_Received(System.Action`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_Nakama_ISocketAdapter_add_Received_m21A6E667DB141FF1A52E261C05F399DB02F93FE6 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8BEEFA11FE572870F5555EBF77F617A19A1636CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// add => _receivedHandlers.Add(value);
		List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD* L_0 = __this->____receivedHandlers_8;
		Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* L_1 = ___0_value;
		NullCheck(L_0);
		List_1_Add_m8BEEFA11FE572870F5555EBF77F617A19A1636CE_inline(L_0, L_1, List_1_Add_m8BEEFA11FE572870F5555EBF77F617A19A1636CE_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnitySocket::Nakama.ISocketAdapter.remove_Received(System.Action`1<System.ArraySegment`1<System.Byte>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_Nakama_ISocketAdapter_remove_Received_m01509DEE1CAB74330E1168801A0C5610B2588413 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m615AA219CC63423AA974DFA3A72B89A864A77AB0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => _receivedHandlers.Remove(value);
		List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD* L_0 = __this->____receivedHandlers_8;
		Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m615AA219CC63423AA974DFA3A72B89A864A77AB0(L_0, L_1, List_1_Remove_m615AA219CC63423AA974DFA3A72B89A864A77AB0_RuntimeMethod_var);
		return;
	}
}
// System.Boolean Nakama.UnitySocket::Nakama.ISocketAdapter.get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitySocket_Nakama_ISocketAdapter_get_IsConnected_m1E42DF7269303F2FD92AF44B8A0E91B98F603DF7 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool ISocketAdapter.IsConnected => _socketAdapter.IsConnected;
		RuntimeObject* L_0 = __this->____socketAdapter_9;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(8 /* System.Boolean Nakama.ISocketAdapter::get_IsConnected() */, ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Nakama.UnitySocket::Nakama.ISocketAdapter.get_IsConnecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnitySocket_Nakama_ISocketAdapter_get_IsConnecting_mAC8CD8CFACCA036DAE262D025434A0AFA7A1C5EF (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool ISocketAdapter.IsConnecting => _socketAdapter.IsConnecting;
		RuntimeObject* L_0 = __this->____socketAdapter_9;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(9 /* System.Boolean Nakama.ISocketAdapter::get_IsConnecting() */, ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// Nakama.UnitySocket Nakama.UnitySocket::Create(Nakama.ISocketAdapter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* UnitySocket_Create_mED3DBA5706A198CC94DECC442ADD14E37FA73835 (RuntimeObject* ___0_adapter, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A_m4F4A6BAC160BAE9A699ACA4685E0C1B59E5AC879_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySocket_OnClosed_m88007E818C14A40F4A15610400FFD96F5C2C5700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySocket_OnConnected_m93F0EE2364425B1459637AC5A91859A9BF48B318_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySocket_OnReceivedError_m28F6CCF9792CF24E0A81993DC146B8E8FC316190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySocket_OnReceived_m10B22C5100B7E6076CF0316D27D5254F3FD88A5F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral436D29F585D04E99C8BDA7892CDA7F6D3B24273E);
		s_Il2CppMethodInitialized = true;
	}
	UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* V_0 = NULL;
	{
		// var adapterGO = new GameObject("[Nakama Socket]");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral436D29F585D04E99C8BDA7892CDA7F6D3B24273E, NULL);
		// DontDestroyOnLoad(adapterGO);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = L_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_1, NULL);
		// var unityAdapter = adapterGO.AddComponent<UnitySocket>();
		NullCheck(L_1);
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_2;
		L_2 = GameObject_AddComponent_TisUnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A_m4F4A6BAC160BAE9A699ACA4685E0C1B59E5AC879(L_1, GameObject_AddComponent_TisUnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A_m4F4A6BAC160BAE9A699ACA4685E0C1B59E5AC879_RuntimeMethod_var);
		V_0 = L_2;
		// unityAdapter._socketAdapter = adapter;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_3 = V_0;
		RuntimeObject* L_4 = ___0_adapter;
		NullCheck(L_3);
		L_3->____socketAdapter_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->____socketAdapter_9), (void*)L_4);
		// unityAdapter._socketAdapter.Closed += unityAdapter.OnClosed;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->____socketAdapter_9;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_7 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_8, L_7, (intptr_t)((void*)UnitySocket_OnClosed_m88007E818C14A40F4A15610400FFD96F5C2C5700_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(2 /* System.Void Nakama.ISocketAdapter::add_Closed(System.Action) */, ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var, L_6, L_8);
		// unityAdapter._socketAdapter.Connected += unityAdapter.OnConnected;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = L_9->____socketAdapter_9;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_11 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, L_11, (intptr_t)((void*)UnitySocket_OnConnected_m93F0EE2364425B1459637AC5A91859A9BF48B318_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void Nakama.ISocketAdapter::add_Connected(System.Action) */, ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var, L_10, L_12);
		// unityAdapter._socketAdapter.Received += unityAdapter.OnReceived;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_13 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->____socketAdapter_9;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_15 = V_0;
		Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* L_16 = (Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341*)il2cpp_codegen_object_new(Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m2F501C85F4BAD84573D1479FD2D3D94F6CB8687A(L_16, L_15, (intptr_t)((void*)UnitySocket_OnReceived_m10B22C5100B7E6076CF0316D27D5254F3FD88A5F_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< Action_1_t189B149227C4EB1A8EEBCBA074BF4012E9F88341* >::Invoke(6 /* System.Void Nakama.ISocketAdapter::add_Received(System.Action`1<System.ArraySegment`1<System.Byte>>) */, ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var, L_14, L_16);
		// unityAdapter._socketAdapter.ReceivedError += unityAdapter.OnReceivedError;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_17 = V_0;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->____socketAdapter_9;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_19 = V_0;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_20 = (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*)il2cpp_codegen_object_new(Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Action_1__ctor_m55F05090D04B2CE985AB61F6DB2C073AECD12A2E(L_20, L_19, (intptr_t)((void*)UnitySocket_OnReceivedError_m28F6CCF9792CF24E0A81993DC146B8E8FC316190_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* >::Invoke(4 /* System.Void Nakama.ISocketAdapter::add_ReceivedError(System.Action`1<System.Exception>) */, ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var, L_18, L_20);
		// return unityAdapter;
		UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* L_21 = V_0;
		return L_21;
	}
}
// System.Threading.Tasks.Task Nakama.UnitySocket::Nakama.ISocketAdapter.CloseAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnitySocket_Nakama_ISocketAdapter_CloseAsync_m5EEF800B2BA7774D217480BE11138C832F890E9A (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Task ISocketAdapter.CloseAsync() => _socketAdapter.CloseAsync();
		RuntimeObject* L_0 = __this->____socketAdapter_9;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = InterfaceFuncInvoker0< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* >::Invoke(10 /* System.Threading.Tasks.Task Nakama.ISocketAdapter::CloseAsync() */, ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Threading.Tasks.Task Nakama.UnitySocket::Nakama.ISocketAdapter.ConnectAsync(System.Uri,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnitySocket_Nakama_ISocketAdapter_ConnectAsync_m7CBF9316D2447FF5198BE6BA59ED0E22E347BE2C (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___0_uri, int32_t ___1_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Task ISocketAdapter.ConnectAsync(Uri uri, int timeout) => _socketAdapter.ConnectAsync(uri, timeout);
		RuntimeObject* L_0 = __this->____socketAdapter_9;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___0_uri;
		int32_t L_2 = ___1_timeout;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3;
		L_3 = InterfaceFuncInvoker2< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*, int32_t >::Invoke(11 /* System.Threading.Tasks.Task Nakama.ISocketAdapter::ConnectAsync(System.Uri,System.Int32) */, ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Threading.Tasks.Task Nakama.UnitySocket::Nakama.ISocketAdapter.SendAsync(System.ArraySegment`1<System.Byte>,System.Boolean,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnitySocket_Nakama_ISocketAdapter_SendAsync_mBA5DCC694C847CDCF8364F5C5F6293C9298CE502 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_buffer, bool ___1_reliable, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_canceller, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _socketAdapter.SendAsync(buffer, reliable, canceller);
		RuntimeObject* L_0 = __this->____socketAdapter_9;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_1 = ___0_buffer;
		bool L_2 = ___1_reliable;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_canceller;
		NullCheck(L_0);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = InterfaceFuncInvoker3< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, bool, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(12 /* System.Threading.Tasks.Task Nakama.ISocketAdapter::SendAsync(System.ArraySegment`1<System.Byte>,System.Boolean,System.Threading.CancellationToken) */, ISocketAdapter_t0877705B708F691AE80CE46C3A638AF0DABA1BE1_il2cpp_TypeInfo_var, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Void Nakama.UnitySocket::OnClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_OnClosed_m88007E818C14A40F4A15610400FFD96F5C2C5700 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnClosed() => _eventQueue.Enqueue(new QueuedEvent(_closedHandlers));
		ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* L_0 = __this->____eventQueue_4;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_1 = __this->____closedHandlers_6;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* L_3 = (QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96*)il2cpp_codegen_object_new(QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		QueuedEvent__ctor_m67F386BFCC4D46533308F827C53C956FAD3B5203(L_3, L_1, L_2, NULL);
		NullCheck(L_0);
		ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518(L_0, L_3, ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnitySocket::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_OnConnected_m93F0EE2364425B1459637AC5A91859A9BF48B318 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnConnected() => _eventQueue.Enqueue(new QueuedEvent(_connectedHandlers));
		ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* L_0 = __this->____eventQueue_4;
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_1 = __this->____connectedHandlers_5;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2;
		L_2 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_RuntimeMethod_var);
		QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* L_3 = (QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96*)il2cpp_codegen_object_new(QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		QueuedEvent__ctor_m67F386BFCC4D46533308F827C53C956FAD3B5203(L_3, L_1, L_2, NULL);
		NullCheck(L_0);
		ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518(L_0, L_3, ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnitySocket::OnReceivedError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_OnReceivedError_m28F6CCF9792CF24E0A81993DC146B8E8FC316190 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, Exception_t* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnReceivedError(Exception obj) => _eventQueue.Enqueue(new QueuedEvent(_errorHandlers, obj));
		ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* L_0 = __this->____eventQueue_4;
		List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B* L_1 = __this->____errorHandlers_7;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = L_2;
		Exception_t* L_4 = ___0_obj;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_4);
		QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* L_5 = (QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96*)il2cpp_codegen_object_new(QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		QueuedEvent__ctor_m67F386BFCC4D46533308F827C53C956FAD3B5203(L_5, L_1, L_3, NULL);
		NullCheck(L_0);
		ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518(L_0, L_5, ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnitySocket::OnReceived(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_OnReceived_m10B22C5100B7E6076CF0316D27D5254F3FD88A5F (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// var copy = new byte[obj.Count];
		int32_t L_0;
		L_0 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_obj), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		// var j = 0;
		V_1 = 0;
		// for (var i = obj.Offset; i < obj.Offset + obj.Count; i++)
		int32_t L_2;
		L_2 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___0_obj), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		V_2 = L_2;
		goto IL_002d;
	}

IL_0019:
	{
		// copy[j] = obj.Array[i];
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		int32_t L_4 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___0_obj), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		uint8_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (uint8_t)L_8);
		// j++;
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		// for (var i = obj.Offset; i < obj.Offset + obj.Count; i++)
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		// for (var i = obj.Offset; i < obj.Offset + obj.Count; i++)
		int32_t L_11 = V_2;
		int32_t L_12;
		L_12 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___0_obj), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		int32_t L_13;
		L_13 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_obj), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)il2cpp_codegen_add(L_12, L_13)))))
		{
			goto IL_0019;
		}
	}
	{
		// _eventQueue.Enqueue(new QueuedEvent(_receivedHandlers, new ArraySegment<byte>(copy)));
		ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* L_14 = __this->____eventQueue_4;
		List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD* L_15 = __this->____receivedHandlers_8;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = V_0;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_19;
		memset((&L_19), 0, sizeof(L_19));
		ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86((&L_19), L_18, /*hidden argument*/ArraySegment_1__ctor_m8A879E5F534A391C62D3D65CDF9B8F0A7E1AED86_RuntimeMethod_var);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_20 = L_19;
		RuntimeObject* L_21 = Box(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_21);
		QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* L_22 = (QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96*)il2cpp_codegen_object_new(QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		QueuedEvent__ctor_m67F386BFCC4D46533308F827C53C956FAD3B5203(L_22, L_15, L_17, NULL);
		NullCheck(L_14);
		ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518(L_14, L_22, ConcurrentQueue_1_Enqueue_m0E5094D8F444782F387BF942AB7A882228D1A518_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Nakama.UnitySocket::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket_Update_mE1BE8A370F959AFC2367F44E409507E61A9E7F9F (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_TryDequeue_mCB098074098793FA7C70AF042FFDB0EC0A21BA85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_get_Count_m68292054681BFD8AB17212D36AA1565081BBC57A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* V_0 = NULL;
	{
		goto IL_0017;
	}

IL_0002:
	{
		// if (_eventQueue.TryDequeue(out evt))
		ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* L_0 = __this->____eventQueue_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = ConcurrentQueue_1_TryDequeue_mCB098074098793FA7C70AF042FFDB0EC0A21BA85(L_0, (&V_0), ConcurrentQueue_1_TryDequeue_mCB098074098793FA7C70AF042FFDB0EC0A21BA85_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// evt.Dispatch();
		QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* L_2 = V_0;
		NullCheck(L_2);
		QueuedEvent_Dispatch_m47B3CB1E4C6639FD33EC75D1F8F43267C5D5840F(L_2, NULL);
	}

IL_0017:
	{
		// while (_eventQueue.Count > 0)
		ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* L_3 = __this->____eventQueue_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ConcurrentQueue_1_get_Count_m68292054681BFD8AB17212D36AA1565081BBC57A(L_3, ConcurrentQueue_1_get_Count_m68292054681BFD8AB17212D36AA1565081BBC57A_RuntimeMethod_var);
		if ((((int32_t)L_4) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Nakama.UnitySocket::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySocket__ctor_m42729ED59EB260C6AA6070D6ECC80E225F572FC0 (UnitySocket_tC2B6EBFC1D975A2CC1809ABB7E86D20BA3A2E38A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1__ctor_mC82F40BB25934DA94D1E6296A7DC1C65B3B50C91_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m478FE5B1E47738C25AF072D3C4B9E690915A0507_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m649E3C8001595F910FD26E44FFE630A9D7994459_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly ConcurrentQueue<QueuedEvent> _eventQueue = new ConcurrentQueue<QueuedEvent>();
		ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5* L_0 = (ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5*)il2cpp_codegen_object_new(ConcurrentQueue_1_tDF310577C91249C8C22B60962BBB73D843AC26F5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConcurrentQueue_1__ctor_mC82F40BB25934DA94D1E6296A7DC1C65B3B50C91(L_0, ConcurrentQueue_1__ctor_mC82F40BB25934DA94D1E6296A7DC1C65B3B50C91_RuntimeMethod_var);
		__this->____eventQueue_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eventQueue_4), (void*)L_0);
		// private readonly List<Action> _connectedHandlers = new List<Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_1 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_1, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->____connectedHandlers_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____connectedHandlers_5), (void*)L_1);
		// private readonly List<Action> _closedHandlers = new List<Action>();
		List_1_tDB72209F35D56F62A287633F9450978E90B90987* L_2 = (List_1_tDB72209F35D56F62A287633F9450978E90B90987*)il2cpp_codegen_object_new(List_1_tDB72209F35D56F62A287633F9450978E90B90987_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212(L_2, List_1__ctor_mBFD6DF02E045EDF3C322E2112C922457016C8212_RuntimeMethod_var);
		__this->____closedHandlers_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____closedHandlers_6), (void*)L_2);
		// private readonly List<Action<Exception>> _errorHandlers = new List<Action<Exception>>();
		List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B* L_3 = (List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B*)il2cpp_codegen_object_new(List_1_tD1E7A265399D5C026A19DAAA65FC7DA9E763966B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m478FE5B1E47738C25AF072D3C4B9E690915A0507(L_3, List_1__ctor_m478FE5B1E47738C25AF072D3C4B9E690915A0507_RuntimeMethod_var);
		__this->____errorHandlers_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____errorHandlers_7), (void*)L_3);
		// private readonly List<Action<ArraySegment<byte>>> _receivedHandlers = new List<Action<ArraySegment<byte>>>();
		List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD* L_4 = (List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD*)il2cpp_codegen_object_new(List_1_t1B2F722C16A721FFEAC8C28713E5EE6E451110AD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m649E3C8001595F910FD26E44FFE630A9D7994459(L_4, List_1__ctor_m649E3C8001595F910FD26E44FFE630A9D7994459_RuntimeMethod_var);
		__this->____receivedHandlers_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____receivedHandlers_8), (void*)L_4);
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
// System.Void Nakama.UnitySocket/QueuedEvent::.ctor(System.Collections.Generic.IEnumerable`1<System.Delegate>,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueuedEvent__ctor_m67F386BFCC4D46533308F827C53C956FAD3B5203 (QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* __this, RuntimeObject* ___0_listeners, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_eventArgs, const RuntimeMethod* method) 
{
	{
		// public QueuedEvent(IEnumerable<Delegate> listeners, params object[] eventArgs)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _listeners = listeners;
		RuntimeObject* L_0 = ___0_listeners;
		__this->____listeners_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____listeners_0), (void*)L_0);
		// _eventArgs = eventArgs;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = ___1_eventArgs;
		__this->____eventArgs_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____eventArgs_1), (void*)L_1);
		// }
		return;
	}
}
// System.Void Nakama.UnitySocket/QueuedEvent::Dispatch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QueuedEvent_Dispatch_m47B3CB1E4C6639FD33EC75D1F8F43267C5D5840F (QueuedEvent_t8D6F3A196F9404C57AF42B5A63FA88595A24BD96* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBF837C8A5A22A2AE1729D287C09D1B7E008F18C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m93F9D5EA5AF8D14E337A8055B8E7FDB79F9790C2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA1330C05253ED37E0C7AFFD9EA30F321AAFBC3F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mD05EBAF1C4695257FED714354A99F3E5639EF58D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4FC6DF66E30AA0C84514272B2C219CCA1B8CFA80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var listenersCopy = new List<Delegate>(_listeners);
		RuntimeObject* L_0 = __this->____listeners_0;
		List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1* L_1 = (List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1*)il2cpp_codegen_object_new(List_1_t39DA5CC3BB487F9D40C1A8A45C1CD179EC3C5FC1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m4FC6DF66E30AA0C84514272B2C219CCA1B8CFA80(L_1, L_0, List_1__ctor_m4FC6DF66E30AA0C84514272B2C219CCA1B8CFA80_RuntimeMethod_var);
		// foreach (var listener in listenersCopy)
		NullCheck(L_1);
		Enumerator_tC3B9F9F96759E73C9E123988DC0E2880470D105C L_2;
		L_2 = List_1_GetEnumerator_mD05EBAF1C4695257FED714354A99F3E5639EF58D(L_1, List_1_GetEnumerator_mD05EBAF1C4695257FED714354A99F3E5639EF58D_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mBF837C8A5A22A2AE1729D287C09D1B7E008F18C8((&V_0), Enumerator_Dispose_mBF837C8A5A22A2AE1729D287C09D1B7E008F18C8_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0026_1;
			}

IL_0013_1:
			{
				// foreach (var listener in listenersCopy)
				Delegate_t* L_3;
				L_3 = Enumerator_get_Current_mA1330C05253ED37E0C7AFFD9EA30F321AAFBC3F4_inline((&V_0), Enumerator_get_Current_mA1330C05253ED37E0C7AFFD9EA30F321AAFBC3F4_RuntimeMethod_var);
				// listener.DynamicInvoke(_eventArgs);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____eventArgs_1;
				NullCheck(L_3);
				RuntimeObject* L_5;
				L_5 = Delegate_DynamicInvoke_mAB44A4F7796295BBE4432D07985FFC3EA805D4A4(L_3, L_4, NULL);
			}

IL_0026_1:
			{
				// foreach (var listener in listenersCopy)
				bool L_6;
				L_6 = Enumerator_MoveNext_m93F9D5EA5AF8D14E337A8055B8E7FDB79F9790C2((&V_0), Enumerator_MoveNext_m93F9D5EA5AF8D14E337A8055B8E7FDB79F9790C2_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0013_1;
				}
			}
			{
				goto IL_003f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003f:
	{
		// }
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
// Nakama.ILogger Nakama.UnityWebRequestAdapter::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityWebRequestAdapter_get_Logger_m633B9B2600A0B766CF56B601C0E7EAC303A5D1AF (UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* __this, const RuntimeMethod* method) 
{
	{
		// public ILogger Logger { get; set; }
		RuntimeObject* L_0 = __this->___U3CLoggerU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Nakama.UnityWebRequestAdapter::set_Logger(Nakama.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAdapter_set_Logger_m0BACA622A1A748E7BC8C2D90585D8AA7EB7EF44B (UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public ILogger Logger { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CLoggerU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoggerU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Nakama.TransientExceptionDelegate Nakama.UnityWebRequestAdapter::get_TransientExceptionDelegate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransientExceptionDelegate_tA589716C350AFC6B17EC66A6E8B557CFBD3EA4B2* UnityWebRequestAdapter_get_TransientExceptionDelegate_mBF14D4BD1F6F65DD9BCAFF59BFA02DD0FD54EB6D (UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransientExceptionDelegate_tA589716C350AFC6B17EC66A6E8B557CFBD3EA4B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAdapter_IsTransientException_m356C17CED4C846991ABE86DB75B9C6EDC450083B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TransientExceptionDelegate TransientExceptionDelegate => IsTransientException;
		TransientExceptionDelegate_tA589716C350AFC6B17EC66A6E8B557CFBD3EA4B2* L_0 = (TransientExceptionDelegate_tA589716C350AFC6B17EC66A6E8B557CFBD3EA4B2*)il2cpp_codegen_object_new(TransientExceptionDelegate_tA589716C350AFC6B17EC66A6E8B557CFBD3EA4B2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		TransientExceptionDelegate__ctor_mAE7829A376CC3E74709A13C0CF5B2C297D150A74(L_0, NULL, (intptr_t)((void*)UnityWebRequestAdapter_IsTransientException_m356C17CED4C846991ABE86DB75B9C6EDC450083B_RuntimeMethod_var), NULL);
		return L_0;
	}
}
// Nakama.UnityWebRequestAdapter Nakama.UnityWebRequestAdapter::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* UnityWebRequestAdapter_get_Instance_m183996BCB77A17E8AF249E22935DB18FEC7755FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m8B812FD73A169490EC3DC3E664BC0C0AF43EA837_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m58FD66BF861A4EF4585560E578CE7F69E584BAAD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8403A75C8AB8D2EA626A68805D4899A4642CC58A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8D68C347BF0905FAB725410B45508F4498A632C);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* V_3 = NULL;
	{
		// lock (Lock)
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var))->___Lock_5;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0072:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_007b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_007b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				// if (_instance != null) return _instance;
				il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
				UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* L_4 = ((UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var))->____instance_6;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_5;
				L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_5)
				{
					goto IL_0025_1;
				}
			}
			{
				// if (_instance != null) return _instance;
				il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
				UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* L_6 = ((UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var))->____instance_6;
				V_3 = L_6;
				goto IL_007c;
			}

IL_0025_1:
			{
				// var go = GameObject.Find("/[Nakama]");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
				L_7 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralB8D68C347BF0905FAB725410B45508F4498A632C, NULL);
				V_2 = L_7;
				// if (go == null)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_9)
				{
					goto IL_0044_1;
				}
			}
			{
				// go = new GameObject("[Nakama]");
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_10, _stringLiteral8403A75C8AB8D2EA626A68805D4899A4642CC58A, NULL);
				V_2 = L_10;
			}

IL_0044_1:
			{
				// if (go.GetComponent<UnityWebRequestAdapter>() == null)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_2;
				NullCheck(L_11);
				UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* L_12;
				L_12 = GameObject_GetComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m58FD66BF861A4EF4585560E578CE7F69E584BAAD(L_11, GameObject_GetComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m58FD66BF861A4EF4585560E578CE7F69E584BAAD_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_13;
				L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_13)
				{
					goto IL_0059_1;
				}
			}
			{
				// go.AddComponent<UnityWebRequestAdapter>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_2;
				NullCheck(L_14);
				UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* L_15;
				L_15 = GameObject_AddComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m8B812FD73A169490EC3DC3E664BC0C0AF43EA837(L_14, GameObject_AddComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m8B812FD73A169490EC3DC3E664BC0C0AF43EA837_RuntimeMethod_var);
			}

IL_0059_1:
			{
				// DontDestroyOnLoad(go);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_16, NULL);
				// _instance = go.GetComponent<UnityWebRequestAdapter>();
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = V_2;
				NullCheck(L_17);
				UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* L_18;
				L_18 = GameObject_GetComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m58FD66BF861A4EF4585560E578CE7F69E584BAAD(L_17, GameObject_GetComponent_TisUnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_m58FD66BF861A4EF4585560E578CE7F69E584BAAD_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
				((UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var))->____instance_6 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(&((UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var))->____instance_6), (void*)L_18);
				// return _instance;
				UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* L_19 = ((UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var))->____instance_6;
				V_3 = L_19;
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// }
		UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* L_20 = V_3;
		return L_20;
	}
}
// System.Void Nakama.UnityWebRequestAdapter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAdapter__ctor_m546B21B4EB7BA683339146FA845CEFA518999567 (UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* __this, const RuntimeMethod* method) 
{
	{
		// private UnityWebRequestAdapter()
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.String> Nakama.UnityWebRequestAdapter::SendAsync(System.String,System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Byte[],System.Int32,System.Nullable`1<System.Threading.CancellationToken>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* UnityWebRequestAdapter_SendAsync_mF3B2FBC82794CD517B1E08FF3B58EECE463A5960 (UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* __this, String_t* ___0_method, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_uri, RuntimeObject* ___2_headers, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_body, int32_t ___4_timeout, Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39 ___5_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__0_m63688AEF63A70DF09FF6567E44C655D89D5E8B79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__1_mA0E6FE83CEC1B20512AA59173607A2D9C7A24BAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__2_m0B9B95492AF41076BC99A760CC926958CEE894A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* L_0 = (U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass11_0__ctor_m9806FD8D2006A976C0E26DD2132C98B5891EF2B5(L_0, NULL);
		V_0 = L_0;
		// var www = BuildRequest(method, uri, headers, body, timeout);
		String_t* L_1 = ___0_method;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2 = ___1_uri;
		RuntimeObject* L_3 = ___2_headers;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___3_body;
		int32_t L_5 = ___4_timeout;
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6;
		L_6 = UnityWebRequestAdapter_BuildRequest_mB75791D08AF34B6B29EE0CA918EA94C1937305A8(L_1, L_2, L_3, L_4, L_5, NULL);
		V_1 = L_6;
		// var tcs = new TaskCompletionSource<string>();
		U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* L_7 = V_0;
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_8 = (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)il2cpp_codegen_object_new(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1(L_8, TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->___tcs_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&L_7->___tcs_0), (void*)L_8);
		// cancellationToken?.Register(() => tcs.TrySetCanceled());
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_inline((&___5_cancellationToken), Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_10;
		L_10 = Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_inline((&___5_cancellationToken), Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_RuntimeMethod_var);
		V_2 = L_10;
		U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* L_11 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_12 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__0_m63688AEF63A70DF09FF6567E44C655D89D5E8B79_RuntimeMethod_var), NULL);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13;
		L_13 = CancellationToken_Register_m0D080EBDFC1F9651EE5BCBEF183925CF23CA638D((&V_2), L_12, NULL);
	}

IL_0043:
	{
		// StartCoroutine(SendRequest(www, resp => tcs.TrySetResult(resp), err => tcs.TrySetException(err)));
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_14 = V_1;
		U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* L_15 = V_0;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_16 = (Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A*)il2cpp_codegen_object_new(Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action_1__ctor_m9DC2953C55C4D7D4B7BEFE03D84DA1F9362D652C(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__1_mA0E6FE83CEC1B20512AA59173607A2D9C7A24BAA_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* L_17 = V_0;
		Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57* L_18 = (Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57*)il2cpp_codegen_object_new(Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Action_1__ctor_m71F00F3635EA178623A24C5AA8A14118D3F0CD7C(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__2_m0B9B95492AF41076BC99A760CC926958CEE894A4_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
		RuntimeObject* L_19;
		L_19 = UnityWebRequestAdapter_SendRequest_m28A25693150F7A56C79617955DE65585EC705D76(L_14, L_16, L_18, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_20;
		L_20 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_19, NULL);
		// return tcs.Task;
		U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* L_21 = V_0;
		NullCheck(L_21);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_22 = L_21->___tcs_0;
		NullCheck(L_22);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_23;
		L_23 = TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline(L_22, TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		return L_23;
	}
}
// UnityEngine.Networking.UnityWebRequest Nakama.UnityWebRequestAdapter::BuildRequest(System.String,System.Uri,System.Collections.Generic.IDictionary`2<System.String,System.String>,System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAdapter_BuildRequest_mB75791D08AF34B6B29EE0CA918EA94C1937305A8 (String_t* ___0_method, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___1_uri, RuntimeObject* ___2_headers, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_body, int32_t ___4_timeout, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (string.Equals(method, "POST", StringComparison.OrdinalIgnoreCase) ||
		//     string.Equals(method, "PUT", StringComparison.OrdinalIgnoreCase))
		String_t* L_0 = ___0_method;
		bool L_1;
		L_1 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, 5, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_2 = ___0_method;
		bool L_3;
		L_3 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_2, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, 5, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}

IL_001c:
	{
		// www = new UnityWebRequest(uri, method)
		// {
		//     uploadHandler = new UploadHandlerRaw(body),
		//     downloadHandler = new DownloadHandlerBuffer()
		// };
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = ___1_uri;
		String_t* L_5 = ___0_method;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_6 = (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F*)il2cpp_codegen_object_new(UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityWebRequest__ctor_m357B5E7078790E0CEF7259D76512B031F37F2DEA(L_6, L_4, L_5, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_7 = L_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___3_body;
		UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A* L_9 = (UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A*)il2cpp_codegen_object_new(UploadHandlerRaw_t0A24CF320CDF16F1BC6C5C086DE71A1908CBB91A_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UploadHandlerRaw__ctor_m168C957B67E29CB3072E3542044D37E2F16C42B7(L_9, L_8, NULL);
		NullCheck(L_7);
		UnityWebRequest_set_uploadHandler_m68F346550136DE178C79238944985892196027FE(L_7, L_9, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_10 = L_7;
		DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974* L_11 = (DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974*)il2cpp_codegen_object_new(DownloadHandlerBuffer_t34C626F6513FA9A44FDDDEE85455CF2CD9DA5974_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		DownloadHandlerBuffer__ctor_m5EE7C9E8AB468B2B937A7C9C66B4176A884147AF(L_11, NULL);
		NullCheck(L_10);
		UnityWebRequest_set_downloadHandler_m6CB94492012097DFC44E5773D1A627753788292F(L_10, L_11, NULL);
		V_0 = L_10;
		goto IL_005b;
	}

IL_003d:
	{
		// else if (string.Equals(method, "DELETE", StringComparison.OrdinalIgnoreCase))
		String_t* L_12 = ___0_method;
		bool L_13;
		L_13 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_12, _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38, 5, NULL);
		if (!L_13)
		{
			goto IL_0054;
		}
	}
	{
		// www = UnityWebRequest.Delete(uri);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_14 = ___1_uri;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15;
		L_15 = UnityWebRequest_Delete_m12A4359EAE4CFB483BE19DF14585BC4B8667AD66(L_14, NULL);
		V_0 = L_15;
		goto IL_005b;
	}

IL_0054:
	{
		// www = UnityWebRequest.Get(uri);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_16 = ___1_uri;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_17;
		L_17 = UnityWebRequest_Get_m7FA8B6B3BC1B5ABDC661DFA6D047108FCBB77C11(L_16, NULL);
		V_0 = L_17;
	}

IL_005b:
	{
		// www.SetRequestHeader("Content-Type", "application/json");
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = V_0;
		NullCheck(L_18);
		UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_18, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral64058CC688A96A90239811EF06C9D20DB0499C3E, NULL);
		// foreach (var kv in headers)
		RuntimeObject* L_19 = ___2_headers;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::GetEnumerator() */, IEnumerable_1_t3C6913E067AB1171D9894C79A396D8A8E90E311B_il2cpp_TypeInfo_var, L_19);
		V_1 = L_20;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0099:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_21 = V_1;
					if (!L_21)
					{
						goto IL_00a2;
					}
				}
				{
					RuntimeObject* L_22 = V_1;
					NullCheck(L_22);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
				}

IL_00a2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_008f_1;
			}

IL_0074_1:
			{
				// foreach (var kv in headers)
				RuntimeObject* L_23 = V_1;
				NullCheck(L_23);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_24;
				L_24 = InterfaceFuncInvoker0< KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Current() */, IEnumerator_1_t174BFB804F1D416642CD11B72858B43316D8B26D_il2cpp_TypeInfo_var, L_23);
				V_2 = L_24;
				// www.SetRequestHeader(kv.Key, kv.Value);
				UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_25 = V_0;
				String_t* L_26;
				L_26 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_2), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_27;
				L_27 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_2), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_25);
				UnityWebRequest_SetRequestHeader_m099734EB787B7269B62AB2236A5A4F7D35AF8BC5(L_25, L_26, L_27, NULL);
			}

IL_008f_1:
			{
				// foreach (var kv in headers)
				RuntimeObject* L_28 = V_1;
				NullCheck(L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				if (L_29)
				{
					goto IL_0074_1;
				}
			}
			{
				goto IL_00a3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a3:
	{
		// www.timeout = timeout;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_30 = V_0;
		int32_t L_31 = ___4_timeout;
		NullCheck(L_30);
		UnityWebRequest_set_timeout_mE9C8169FA8CF1BE17E3D9FDACDC6E1A9508DF618(L_30, L_31, NULL);
		// return www;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_32 = V_0;
		return L_32;
	}
}
// System.Collections.IEnumerator Nakama.UnityWebRequestAdapter::SendRequest(UnityEngine.Networking.UnityWebRequest,System.Action`1<System.String>,System.Action`1<Nakama.ApiResponseException>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityWebRequestAdapter_SendRequest_m28A25693150F7A56C79617955DE65585EC705D76 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___1_callback, Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57* ___2_errback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* L_0 = (U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4*)il2cpp_codegen_object_new(U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendRequestU3Ed__13__ctor_mE21D67A8EF0328B373F38109265C38C12E5366FC(L_0, 0, NULL);
		U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* L_1 = L_0;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2 = ___0_www;
		NullCheck(L_1);
		L_1->___www_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___www_2), (void*)L_2);
		U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* L_3 = L_1;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_4 = ___1_callback;
		NullCheck(L_3);
		L_3->___callback_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___callback_4), (void*)L_4);
		U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* L_5 = L_3;
		Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57* L_6 = ___2_errback;
		NullCheck(L_5);
		L_5->___errback_3 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___errback_3), (void*)L_6);
		return L_5;
	}
}
// System.Boolean Nakama.UnityWebRequestAdapter::IsHttpError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestAdapter_IsHttpError_m4582FF555D98A3882C11A55E00B8BFFD621BADB2 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) 
{
	{
		// return www.result == UnityWebRequest.Result.ProtocolError;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___0_www;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
	}
}
// System.Boolean Nakama.UnityWebRequestAdapter::IsNetworkError(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestAdapter_IsNetworkError_m874E54E71D71BD52C464B24BC7C3C0A6C722C2C0 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_www, const RuntimeMethod* method) 
{
	{
		// return www.result == UnityWebRequest.Result.ConnectionError;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___0_www;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean Nakama.UnityWebRequestAdapter::IsTransientException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestAdapter_IsTransientException_m356C17CED4C846991ABE86DB75B9C6EDC450083B (Exception_t* ___0_e, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* V_0 = NULL;
	{
		// return e is ApiResponseException apiException && (apiException.StatusCode >= 500 || apiException.StatusCode == -1);
		Exception_t* L_0 = ___0_e;
		V_0 = ((ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778*)IsInstSealed((RuntimeObject*)L_0, ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778_il2cpp_TypeInfo_var));
		ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* L_2 = V_0;
		NullCheck(L_2);
		int64_t L_3;
		L_3 = ApiResponseException_get_StatusCode_m22DE448A20447A65F45862BEE454A8DDFC2182A8_inline(L_2, NULL);
		if ((((int64_t)L_3) >= ((int64_t)((int64_t)((int32_t)500)))))
		{
			goto IL_0023;
		}
	}
	{
		ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* L_4 = V_0;
		NullCheck(L_4);
		int64_t L_5;
		L_5 = ApiResponseException_get_StatusCode_m22DE448A20447A65F45862BEE454A8DDFC2182A8_inline(L_4, NULL);
		return (bool)((((int64_t)L_5) == ((int64_t)((int64_t)(-1))))? 1 : 0);
	}

IL_0023:
	{
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Void Nakama.UnityWebRequestAdapter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequestAdapter__cctor_m0A174CF76F535D961ECE84281155F0021D20E561 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly object Lock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var))->___Lock_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_StaticFields*)il2cpp_codegen_static_fields_for(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var))->___Lock_5), (void*)L_0);
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
// System.Void Nakama.UnityWebRequestAdapter/<>c__DisplayClass11_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0__ctor_m9806FD8D2006A976C0E26DD2132C98B5891EF2B5 (U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Nakama.UnityWebRequestAdapter/<>c__DisplayClass11_0::<SendAsync>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__0_m63688AEF63A70DF09FF6567E44C655D89D5E8B79 (U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetCanceled_m6006097B7F4BFE9EC38D1F8781F207240B439FCD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cancellationToken?.Register(() => tcs.TrySetCanceled());
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_0 = __this->___tcs_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = TaskCompletionSource_1_TrySetCanceled_m6006097B7F4BFE9EC38D1F8781F207240B439FCD(L_0, TaskCompletionSource_1_TrySetCanceled_m6006097B7F4BFE9EC38D1F8781F207240B439FCD_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnityWebRequestAdapter/<>c__DisplayClass11_0::<SendAsync>b__1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__1_mA0E6FE83CEC1B20512AA59173607A2D9C7A24BAA (U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* __this, String_t* ___0_resp, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(SendRequest(www, resp => tcs.TrySetResult(resp), err => tcs.TrySetException(err)));
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_0 = __this->___tcs_0;
		String_t* L_1 = ___0_resp;
		NullCheck(L_0);
		bool L_2;
		L_2 = TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176(L_0, L_1, TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var);
		return;
	}
}
// System.Void Nakama.UnityWebRequestAdapter/<>c__DisplayClass11_0::<SendAsync>b__2(Nakama.ApiResponseException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass11_0_U3CSendAsyncU3Eb__2_m0B9B95492AF41076BC99A760CC926958CEE894A4 (U3CU3Ec__DisplayClass11_0_t9C4440952E3AF9877CBCFA08E41ED36C33CF0CD1* __this, ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* ___0_err, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine(SendRequest(www, resp => tcs.TrySetResult(resp), err => tcs.TrySetException(err)));
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_0 = __this->___tcs_0;
		ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* L_1 = ___0_err;
		NullCheck(L_0);
		bool L_2;
		L_2 = TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C(L_0, L_1, TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var);
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
// System.Void Nakama.UnityWebRequestAdapter/<SendRequest>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestU3Ed__13__ctor_mE21D67A8EF0328B373F38109265C38C12E5366FC (U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Nakama.UnityWebRequestAdapter/<SendRequest>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestU3Ed__13_System_IDisposable_Dispose_mEB471B89C3BC06E772A2E349F03B9D90F89D1870 (U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Nakama.UnityWebRequestAdapter/<SendRequest>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendRequestU3Ed__13_MoveNext_mF3C2629C4ACD784D3F9DBDBEFC432E31A5E2BF89 (U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonParser_FromJson_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m713DA0B5D590140E311DDBF744A7B74D8BD902AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60A2E461CC4A1D49199A67B5216F128319CE63CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_1 = NULL;
	ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* G_B13_0 = NULL;
	int32_t G_B16_0 = 0;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B21_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B20_0 = NULL;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* G_B23_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B23_1 = NULL;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* G_B22_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B22_1 = NULL;
	String_t* G_B24_0 = NULL;
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* G_B24_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return www.SendWebRequest();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = __this->___www_2;
		NullCheck(L_3);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_4;
		L_4 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0031:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (IsNetworkError(www))
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = __this->___www_2;
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = UnityWebRequestAdapter_IsNetworkError_m874E54E71D71BD52C464B24BC7C3C0A6C722C2C0(L_5, NULL);
		if (!L_6)
		{
			goto IL_0065;
		}
	}
	{
		// errback(new ApiResponseException(www.error));
		Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57* L_7 = __this->___errback_3;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_8 = __this->___www_2;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_8, NULL);
		ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* L_10 = (ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778*)il2cpp_codegen_object_new(ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		ApiResponseException__ctor_mF592121C7A254EFE05FBA5DDE769B4FB45E61842(L_10, L_9, NULL);
		NullCheck(L_7);
		Action_1_Invoke_m95112E3D0378B5AC13A9522D9D6EC9E9A62475B0_inline(L_7, L_10, NULL);
		goto IL_01a6;
	}

IL_0065:
	{
		// else if (IsHttpError(www))
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_11 = __this->___www_2;
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = UnityWebRequestAdapter_IsHttpError_m4582FF555D98A3882C11A55E00B8BFFD621BADB2(L_11, NULL);
		if (!L_12)
		{
			goto IL_017e;
		}
	}
	{
		// if (www.responseCode >= 500)
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = __this->___www_2;
		NullCheck(L_13);
		int64_t L_14;
		L_14 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_13, NULL);
		if ((((int64_t)L_14) < ((int64_t)((int64_t)((int32_t)500)))))
		{
			goto IL_00c3;
		}
	}
	{
		// errback(new ApiResponseException((int) www.responseCode, www.downloadHandler.text, -1));
		Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57* L_15 = __this->___errback_3;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_16 = __this->___www_2;
		NullCheck(L_16);
		int64_t L_17;
		L_17 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_16, NULL);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_18 = __this->___www_2;
		NullCheck(L_18);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_19;
		L_19 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_18, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_19, NULL);
		ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* L_21 = (ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778*)il2cpp_codegen_object_new(ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		ApiResponseException__ctor_m67D95BFF838C1770F311CAF866D6EEF7F133B7DC(L_21, ((int64_t)((int32_t)L_17)), L_20, (-1), NULL);
		NullCheck(L_15);
		Action_1_Invoke_m95112E3D0378B5AC13A9522D9D6EC9E9A62475B0_inline(L_15, L_21, NULL);
		// www.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_22 = __this->___www_2;
		NullCheck(L_22);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_22, NULL);
		// yield break;
		return (bool)0;
	}

IL_00c3:
	{
		// var decoded = www.downloadHandler.text.FromJson<Dictionary<string, object>>();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_23 = __this->___www_2;
		NullCheck(L_23);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_24;
		L_24 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_24, NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_26;
		L_26 = JsonParser_FromJson_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m713DA0B5D590140E311DDBF744A7B74D8BD902AB(L_25, JsonParser_FromJson_TisDictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_m713DA0B5D590140E311DDBF744A7B74D8BD902AB_RuntimeMethod_var);
		V_1 = L_26;
		// var e = new ApiResponseException(www.downloadHandler.text);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_27 = __this->___www_2;
		NullCheck(L_27);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_28;
		L_28 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_27, NULL);
		NullCheck(L_28);
		String_t* L_29;
		L_29 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_28, NULL);
		ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* L_30 = (ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778*)il2cpp_codegen_object_new(ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		ApiResponseException__ctor_mF592121C7A254EFE05FBA5DDE769B4FB45E61842(L_30, L_29, NULL);
		V_2 = L_30;
		// if (decoded != null)
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_31 = V_1;
		if (!L_31)
		{
			goto IL_0170;
		}
	}
	{
		// var msg = decoded.ContainsKey("message") ? decoded["message"].ToString() : string.Empty;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_32 = V_1;
		NullCheck(L_32);
		bool L_33;
		L_33 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_32, _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (L_33)
		{
			goto IL_0106;
		}
	}
	{
		String_t* L_34 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B13_0 = L_34;
		goto IL_0116;
	}

IL_0106:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_35 = V_1;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_35, _stringLiteralD559C6D97E819D8E4EF7ACDC34C4E8D3DD314964, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_36);
		G_B13_0 = L_37;
	}

IL_0116:
	{
		V_3 = G_B13_0;
		// var grpcCode = decoded.ContainsKey("code") ? (int) decoded["code"] : -1;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_38 = V_1;
		NullCheck(L_38);
		bool L_39;
		L_39 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_38, _stringLiteral60A2E461CC4A1D49199A67B5216F128319CE63CC, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (L_39)
		{
			goto IL_0127;
		}
	}
	{
		G_B16_0 = (-1);
		goto IL_0137;
	}

IL_0127:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_40 = V_1;
		NullCheck(L_40);
		RuntimeObject* L_41;
		L_41 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_40, _stringLiteral60A2E461CC4A1D49199A67B5216F128319CE63CC, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		G_B16_0 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_41, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))));
	}

IL_0137:
	{
		V_4 = G_B16_0;
		// e = new ApiResponseException(www.responseCode, msg, grpcCode);
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_42 = __this->___www_2;
		NullCheck(L_42);
		int64_t L_43;
		L_43 = UnityWebRequest_get_responseCode_m012C177F61435D5D120A21D7A03FFF7B0F8B904B(L_42, NULL);
		String_t* L_44 = V_3;
		int32_t L_45 = V_4;
		ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* L_46 = (ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778*)il2cpp_codegen_object_new(ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		ApiResponseException__ctor_m67D95BFF838C1770F311CAF866D6EEF7F133B7DC(L_46, L_43, L_44, L_45, NULL);
		V_2 = L_46;
		// if (decoded.ContainsKey("error"))
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_47 = V_1;
		NullCheck(L_47);
		bool L_48;
		L_48 = Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC(L_47, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, Dictionary_2_ContainsKey_m1A594D39FA446EBD9EA6FFBA95D3AB82D16565CC_RuntimeMethod_var);
		if (!L_48)
		{
			goto IL_0170;
		}
	}
	{
		// IHttpAdapterUtil.CopyResponseError(Instance, decoded["error"], e);
		il2cpp_codegen_runtime_class_init_inline(UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5_il2cpp_TypeInfo_var);
		UnityWebRequestAdapter_t18B3AFFECA25CF42B9B78CE2595E07F0A04DE2B5* L_49;
		L_49 = UnityWebRequestAdapter_get_Instance_m183996BCB77A17E8AF249E22935DB18FEC7755FF(NULL);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_50 = V_1;
		NullCheck(L_50);
		RuntimeObject* L_51;
		L_51 = Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5(L_50, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2, Dictionary_2_get_Item_m371FC5B3D39406E297F2626B159BA1A3E32917B5_RuntimeMethod_var);
		ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* L_52 = V_2;
		IHttpAdapterUtil_CopyResponseError_mEEEAB81A49121D3A9E105BD3B7BF9E5C25CD0A30(L_49, L_51, L_52, NULL);
	}

IL_0170:
	{
		// errback(e);
		Action_1_t2BDF00EF5A58FA628B7CD0DEA81D0465AAD9FC57* L_53 = __this->___errback_3;
		ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* L_54 = V_2;
		NullCheck(L_53);
		Action_1_Invoke_m95112E3D0378B5AC13A9522D9D6EC9E9A62475B0_inline(L_53, L_54, NULL);
		goto IL_01a6;
	}

IL_017e:
	{
		// callback?.Invoke(www.downloadHandler?.text);
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_55 = __this->___callback_4;
		Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* L_56 = L_55;
		G_B20_0 = L_56;
		if (L_56)
		{
			G_B21_0 = L_56;
			goto IL_018a;
		}
	}
	{
		goto IL_01a6;
	}

IL_018a:
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_57 = __this->___www_2;
		NullCheck(L_57);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_58;
		L_58 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_57, NULL);
		DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_59 = L_58;
		G_B22_0 = L_59;
		G_B22_1 = G_B21_0;
		if (L_59)
		{
			G_B23_0 = L_59;
			G_B23_1 = G_B21_0;
			goto IL_019c;
		}
	}
	{
		G_B24_0 = ((String_t*)(NULL));
		G_B24_1 = G_B22_1;
		goto IL_01a1;
	}

IL_019c:
	{
		NullCheck(G_B23_0);
		String_t* L_60;
		L_60 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(G_B23_0, NULL);
		G_B24_0 = L_60;
		G_B24_1 = G_B23_1;
	}

IL_01a1:
	{
		NullCheck(G_B24_1);
		Action_1_Invoke_m690438AAE38F9762172E3AE0A33D0B42ACD35790_inline(G_B24_1, G_B24_0, NULL);
	}

IL_01a6:
	{
		// www.Dispose();
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_61 = __this->___www_2;
		NullCheck(L_61);
		UnityWebRequest_Dispose_m9F43494C0FEA530A97D3F2AF3D425CCC7670753A(L_61, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Nakama.UnityWebRequestAdapter/<SendRequest>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendRequestU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m77B645523172D542493CD7C09D4D5B42FA7A6D29 (U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Nakama.UnityWebRequestAdapter/<SendRequest>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendRequestU3Ed__13_System_Collections_IEnumerator_Reset_m7A518C2AFF5C499469326FE0B8891153CF61D370 (U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendRequestU3Ed__13_System_Collections_IEnumerator_Reset_m7A518C2AFF5C499469326FE0B8891153CF61D370_RuntimeMethod_var)));
	}
}
// System.Object Nakama.UnityWebRequestAdapter/<SendRequest>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendRequestU3Ed__13_System_Collections_IEnumerator_get_Current_m6C13E1F9EFF7C037381169AE73CE1BDDB13AD93C (U3CSendRequestU3Ed__13_tA817198DC05B2E22553D28C77A5CC5F0CC2D1FE4* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ApiResponseException_get_StatusCode_m29C1611A7B8F8DE677AFBE081EB39DC24C16CBD0_inline (ApiResponseException_tB860A6715826153005AC5DA41232FE1E57F1F8FF* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ApiResponseException_get_StatusCode_m22DE448A20447A65F45862BEE454A8DDFC2182A8_inline (ApiResponseException_t72A73FC0660460DFB5DBA7085BFE6C6FB566F778* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->___U3CStatusCodeU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m79EFE86EEEE618A93CEB6654D0224C7D8FE32285_gshared_inline (Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED Nullable_1_GetValueOrDefault_m885FD08989672CFFB406C3F2DE32C0BC79932584_gshared_inline (Nullable_1_t47611DBBED2A3B44FCD188A4F5C79BE48A7BEB39* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
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
		NullCheck(L_4);
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
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_gshared_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method) 
{
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
