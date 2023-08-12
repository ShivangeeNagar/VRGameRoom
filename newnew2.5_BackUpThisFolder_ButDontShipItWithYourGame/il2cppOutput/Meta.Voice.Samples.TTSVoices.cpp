﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
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

// System.Action`1<System.String>
struct Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A;
// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState>
struct Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest>
struct Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7;
// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest>
struct Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7;
// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]>
struct Dictionary_2_t04BB274E1321E9A9FFE2C45EF5DC62AA12E85365;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<Meta.WitAi.TTS.Data.TTSVoiceSettings,System.String>
struct Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerable`1<Meta.WitAi.TTS.Data.TTSVoiceSettings>
struct IEnumerable_1_t54DDC7F8D239FDFAC0164F7E832AFF5D1AA01315;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16;
// System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData>
struct Queue_1_t2A12F01CB1AC7149016A706092FDCF89FF442C32;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C;
// UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData>
struct UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323;
// UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityAction_3_t7698A32015283934D80453E38C30F692144896EE;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257;
// UnityEngine.Events.UnityEvent`2<System.Object,System.Object>
struct UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961;
// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_2_t238B45F9BAE8CA548BCC98EA142DE7E2AFFFD0F6;
// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4;
// UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityEvent_3_tEBA25FAAFB3D97F887F6EA8BCCD0C3AC003CC6C5;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Meta.WitAi.TTS.Interfaces.ISpeakerTextPostprocessor[]
struct ISpeakerTextPostprocessorU5BU5D_t919A2F14D8EBF001F3075D4DCA605C58DF428091;
// Meta.WitAi.TTS.Interfaces.ISpeakerTextPreprocessor[]
struct ISpeakerTextPreprocessorU5BU5D_tC5EAB6FDE45C009C2F01A3A532F50B81382AB1EB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// Meta.WitAi.TTS.Data.TTSClipData[]
struct TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260;
// Meta.WitAi.TTS.Data.TTSVoiceSettings[]
struct TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C;
// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings[]
struct TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler
struct ITTSDiskCacheHandler_t0A73366FD24988504FF06F8EEEA876709A5CB265;
// Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler
struct ITTSRuntimeCacheHandler_t85007853B91C81D5DA90A8DBD155232D55159759;
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Security.Cryptography.SHA256
struct SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// Meta.Voice.Samples.TTSVoices.SimpleDropdownIndexEvent
struct SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4;
// Meta.Voice.Samples.TTSVoices.SimpleDropdownList
struct SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0;
// Meta.Voice.Samples.TTSVoices.SimpleDropdownOptionEvent
struct SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// Meta.Voice.Samples.TTSVoices.TTSCacheToggle
struct TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2;
// Meta.WitAi.TTS.Data.TTSClipData
struct TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827;
// Meta.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2;
// Meta.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80;
// Meta.WitAi.TTS.Events.TTSDownloadEvents
struct TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089;
// Meta.Voice.Samples.TTSVoices.TTSErrorText
struct TTSErrorText_tEF1225E1F00339CE3DF6ECFA747C0A4125285A57;
// Meta.WitAi.TTS.TTSService
struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D;
// Meta.WitAi.TTS.Events.TTSServiceEvents
struct TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF;
// Meta.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent
struct TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent
struct TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents
struct TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent
struct TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816;
// Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect
struct TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F;
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent
struct TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8;
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents
struct TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB;
// Meta.Voice.Samples.TTSVoices.TTSSpeakerInput
struct TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1;
// Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver
struct TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852;
// Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel
struct TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6;
// Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect
struct TTSSpeakerVoiceSelect_tE5FA7686BB6F84C8BD5484B3F01D8E9B9343B2EA;
// Meta.WitAi.TTS.Events.TTSStreamEvents
struct TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6;
// Meta.WitAi.TTS.Samples.TTSStreamToggle
struct TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541;
// Meta.WitAi.TTS.Data.TTSVoiceSettings
struct TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326;
// Meta.WitAi.TTS.Integrations.TTSWit
struct TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3;
// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings
struct TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// Meta.WitAi.Speech.VoiceAudioEvent
struct VoiceAudioEvent_tF6F18C0901743D9DFA43B5AF962276F94BDB5BC2;
// Meta.WitAi.Speech.VoiceTextEvent
struct VoiceTextEvent_tF3A2C1C0EED74C908709D81B85D5D75DA5055AE3;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// Meta.WitAi.Data.Configuration.WitConfiguration
struct WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26;
// Meta.Voice.Samples.TTSVoices.SimpleDropdownList/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2;
// Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect/<>c
struct U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSClipLoadState_t928859B4715B204E4587876D365E9F9BD5A8D434_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_3_t7698A32015283934D80453E38C30F692144896EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral08F515B752A94768A8E2F90C4FE0C80E6306E9C7;
IL2CPP_EXTERN_C String_t* _stringLiteral0E657498FE6D59EC617FD1A9A43B8842B3AC2A2B;
IL2CPP_EXTERN_C String_t* _stringLiteral1DD4247700D8DA1628CF353DE03AFD2F2B5E72F0;
IL2CPP_EXTERN_C String_t* _stringLiteral203F8D131739E2E64DF6727859AD01C35434C806;
IL2CPP_EXTERN_C String_t* _stringLiteral21F757F14E42FBF08EE929CA9553D0A4D99D872F;
IL2CPP_EXTERN_C String_t* _stringLiteral220FFCFB26879FFBD1E43E9BE7142C54F910664F;
IL2CPP_EXTERN_C String_t* _stringLiteral29DD95531FCE94DCE288DF8BD4349F991A445F02;
IL2CPP_EXTERN_C String_t* _stringLiteral3536D53A7F6B00FB1FB84E80311171453C089207;
IL2CPP_EXTERN_C String_t* _stringLiteral37F1A9A7FE05682454D09EFCFDFD609CC741FDF6;
IL2CPP_EXTERN_C String_t* _stringLiteral3A288AE409C72DF6180874DE1C9F5E1111381EAB;
IL2CPP_EXTERN_C String_t* _stringLiteral4F22F766AC65E7365424282740A30377DC4E9373;
IL2CPP_EXTERN_C String_t* _stringLiteral57D3ED8BE577695284D8CC64B5963CE729A2AC73;
IL2CPP_EXTERN_C String_t* _stringLiteral589152A17B980BEDD1E3F78BD3654C0416FC537A;
IL2CPP_EXTERN_C String_t* _stringLiteral61DA4D5915811D66FC38EA55968C4AB41AA73567;
IL2CPP_EXTERN_C String_t* _stringLiteral628B97230E437D62DCE566B236D12A27494265C0;
IL2CPP_EXTERN_C String_t* _stringLiteral64166266357184DBF49249DB44B305CE9EEEF412;
IL2CPP_EXTERN_C String_t* _stringLiteral679513EC4E90D625778BAA843C750CC0324EC6CB;
IL2CPP_EXTERN_C String_t* _stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF;
IL2CPP_EXTERN_C String_t* _stringLiteral77235CB916AB2431DB5346DEF4FF7A991FCFF985;
IL2CPP_EXTERN_C String_t* _stringLiteral882642A946376317C440C0D2EB39A525B3661A3E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1;
IL2CPP_EXTERN_C String_t* _stringLiteral8F452B16FE033167C9440B8AD90C5CEDC621CE4A;
IL2CPP_EXTERN_C String_t* _stringLiteral90CFB24A8A6FFED4771072425BA58300FFC78AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral9CB4F5B1B1CE2EA4649FBDAC8E0BCF83EE037A2E;
IL2CPP_EXTERN_C String_t* _stringLiteral9D2DD953E76E3BB7861D88804220B987EC03943A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3AD182841E93DDA05D60317291F6D8E110DB6FD;
IL2CPP_EXTERN_C String_t* _stringLiteralA6DD5ADB1FE5A21684D5BE097E8A28132252DACE;
IL2CPP_EXTERN_C String_t* _stringLiteralAA5E057E9C43D8BE035AEBD4EDE90FC16636B277;
IL2CPP_EXTERN_C String_t* _stringLiteralB456441A7334E6FEDE1B36067697C51F5A24C562;
IL2CPP_EXTERN_C String_t* _stringLiteralC2F3971B635F7A2E2F1CBE7E1E410007CC664C28;
IL2CPP_EXTERN_C String_t* _stringLiteralC5160044B15138CBCE598E03DF1FF3B68044322F;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108;
IL2CPP_EXTERN_C String_t* _stringLiteralDD9902D77E29AEEC96CA66C59F05A832FB1C2A3D;
IL2CPP_EXTERN_C String_t* _stringLiteralE03532E38678A4177DA43BAF386D35BC5FD878C9;
IL2CPP_EXTERN_C String_t* _stringLiteralE0F64BF80841FAD774677819BC76FBBF8CF6B3CE;
IL2CPP_EXTERN_C String_t* _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044;
IL2CPP_EXTERN_C String_t* _stringLiteralE8B77FFA6B004EBE6AD02387BCBFBFA47562B049;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF1DC9E9FEC9B79CC7D646A53828FF444E8C5FD7D;
IL2CPP_EXTERN_C String_t* _stringLiteralF2BFE99CEEAFC3185FB96F1D7A879D72BD0EB5D2;
IL2CPP_EXTERN_C String_t* _stringLiteralF3267F0CD56D3C5A8F52B40628A4EC5E976FD0A9;
IL2CPP_EXTERN_C String_t* _stringLiteralFF6793CB3E3C8D71301211AFD6561E98BE1F3914;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_TisString_t_mC816B03756BE32978550701D59ED4E834E2CDD79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m7D05BF9C5E180D119F8C0ADDD73AB5E310DC40FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mE63BB344FF4C93D97507F9F1735DDF5C6B9649A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m556D29BA383A85A4891FDD34755EF247E773EC19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C_m9BC08D961B7518884DCDED31193371C4A6E80C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0B0674E845F360FA8837AEA0100C3500E3E4FE47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m39B04D6D8912800A28246D96534198D1769E6F3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4551F4DE4ED2A15E985982AD4322456CE52C5E2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m65AE17095CE4D86EB192E9A0B4EDC6612E12BAFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisTTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2_m2477C39A615A4CDD3ABFC9ED12942142B0AFF8F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisTTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3_m3C12AE92A29CB1DEAE91844F7B8D913063815673_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SimpleDropdownList_OnToggleClick_m9D0D277AFD7E4384155B42A5F13A565F1BDD52C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSCacheToggle_ToggleCache_m67DE451B749C34117D3D9F41CC167D77C0CC0709_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSSpeakerEffectSelect_OnCharacterSelected_mBEF5CCF5460E529305A8A90459420C8414A493D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSSpeakerEffectSelect_OnEnvironmentSelected_m34FAEBB70FAB35F5A41F1539EC1F174A80A99C9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSSpeakerInput_SpeakClick_mD3D0235CB17AD239B957A0C55B927CF144EF697E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSSpeakerInput_StopClick_mE666C6B5F891B0EF82AADBF24185E0AD0A453C63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSSpeakerVoiceSelect_OnOptionSelected_mA5CFFB431269E022EEBA5F3A6C3FD79520A6DF47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TTSStreamToggle_ToggleStreaming_mF9AD2439F527B001223BF1E6D79319D1906D393C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRefreshDropdownU3Eb__5_0_m9FD8E91371F40B668F75F1FC2CC732501B92936D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CLoadCellU3Eb__0_mB8FFDA29946E559426C5DBC0AE46C5B9CA9DBF18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_mD81513B3123F689887508A7179B564B88D802BC1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_AddListener_m0A90A9E0FA1EF9AFF8EAFF74E89B0A118A761DB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_3_RemoveListener_m5F6AFF91C1A30E809C301299664292AD7F19906B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260;
struct TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tC0F1C4E84D689CDF75B3409939CE9DADF5CE05D8 
{
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

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ToggleU5BU5D_t73C98F6CC63F9D7C0B8A26533CE6D7E218D00098* ___s_emptyArray_5;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// Meta.WitAi.TTS.Data.TTSClipData
struct TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.Data.TTSClipData::textToSpeak
	String_t* ___textToSpeak_0;
	// System.String Meta.WitAi.TTS.Data.TTSClipData::clipID
	String_t* ___clipID_1;
	// UnityEngine.AudioType Meta.WitAi.TTS.Data.TTSClipData::audioType
	int32_t ___audioType_2;
	// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Data.TTSClipData::voiceSettings
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSettings_3;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Data.TTSClipData::diskCacheSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ___diskCacheSettings_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Meta.WitAi.TTS.Data.TTSClipData::queryParameters
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___queryParameters_5;
	// UnityEngine.AudioClip Meta.WitAi.TTS.Data.TTSClipData::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_6;
	// Meta.WitAi.TTS.Data.TTSClipLoadState Meta.WitAi.TTS.Data.TTSClipData::loadState
	int32_t ___loadState_7;
	// System.Single Meta.WitAi.TTS.Data.TTSClipData::loadProgress
	float ___loadProgress_8;
	// System.Action`2<Meta.WitAi.TTS.Data.TTSClipData,Meta.WitAi.TTS.Data.TTSClipLoadState> Meta.WitAi.TTS.Data.TTSClipData::onStateChange
	Action_2_tA8AAF96FAF4A6358E7130C80F784D938CD1CE694* ___onStateChange_9;
	// System.Action`1<System.String> Meta.WitAi.TTS.Data.TTSClipData::onPlaybackReady
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onPlaybackReady_10;
	// System.Action`1<System.String> Meta.WitAi.TTS.Data.TTSClipData::onDownloadComplete
	Action_1_t3CB5D1A819C3ED3F99E9E39F890F18633253949A* ___onDownloadComplete_11;
};

// Meta.WitAi.TTS.Data.TTSDiskCacheSettings
struct TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80  : public RuntimeObject
{
	// Meta.WitAi.TTS.Data.TTSDiskCacheLocation Meta.WitAi.TTS.Data.TTSDiskCacheSettings::DiskCacheLocation
	int32_t ___DiskCacheLocation_0;
	// System.Boolean Meta.WitAi.TTS.Data.TTSDiskCacheSettings::StreamFromDisk
	bool ___StreamFromDisk_1;
	// System.Single Meta.WitAi.TTS.Data.TTSDiskCacheSettings::StreamBufferLength
	float ___StreamBufferLength_2;
};

// Meta.WitAi.TTS.Data.TTSVoiceSettings
struct TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326  : public RuntimeObject
{
	// System.String Meta.WitAi.TTS.Data.TTSVoiceSettings::SettingsId
	String_t* ___SettingsId_0;
	// System.String Meta.WitAi.TTS.Data.TTSVoiceSettings::PrependedText
	String_t* ___PrependedText_1;
	// System.String Meta.WitAi.TTS.Data.TTSVoiceSettings::AppendedText
	String_t* ___AppendedText_2;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Meta.WitAi.Speech.VoiceSpeechEvents
struct VoiceSpeechEvents_tFA5D7C4456E0DB68D17633C92373A8ECD77ED087  : public RuntimeObject
{
	// Meta.WitAi.Speech.VoiceTextEvent Meta.WitAi.Speech.VoiceSpeechEvents::OnTextPlaybackStart
	VoiceTextEvent_tF3A2C1C0EED74C908709D81B85D5D75DA5055AE3* ___OnTextPlaybackStart_0;
	// Meta.WitAi.Speech.VoiceTextEvent Meta.WitAi.Speech.VoiceSpeechEvents::OnTextPlaybackCancelled
	VoiceTextEvent_tF3A2C1C0EED74C908709D81B85D5D75DA5055AE3* ___OnTextPlaybackCancelled_1;
	// Meta.WitAi.Speech.VoiceTextEvent Meta.WitAi.Speech.VoiceSpeechEvents::OnTextPlaybackFinished
	VoiceTextEvent_tF3A2C1C0EED74C908709D81B85D5D75DA5055AE3* ___OnTextPlaybackFinished_2;
	// Meta.WitAi.Speech.VoiceAudioEvent Meta.WitAi.Speech.VoiceSpeechEvents::OnAudioClipPlaybackReady
	VoiceAudioEvent_tF6F18C0901743D9DFA43B5AF962276F94BDB5BC2* ___OnAudioClipPlaybackReady_3;
	// Meta.WitAi.Speech.VoiceAudioEvent Meta.WitAi.Speech.VoiceSpeechEvents::OnAudioClipPlaybackStart
	VoiceAudioEvent_tF6F18C0901743D9DFA43B5AF962276F94BDB5BC2* ___OnAudioClipPlaybackStart_4;
	// Meta.WitAi.Speech.VoiceAudioEvent Meta.WitAi.Speech.VoiceSpeechEvents::OnAudioClipPlaybackCancelled
	VoiceAudioEvent_tF6F18C0901743D9DFA43B5AF962276F94BDB5BC2* ___OnAudioClipPlaybackCancelled_5;
	// Meta.WitAi.Speech.VoiceAudioEvent Meta.WitAi.Speech.VoiceSpeechEvents::OnAudioClipPlaybackFinished
	VoiceAudioEvent_tF6F18C0901743D9DFA43B5AF962276F94BDB5BC2* ___OnAudioClipPlaybackFinished_6;
};

// Meta.Voice.Samples.TTSVoices.SimpleDropdownList/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2  : public RuntimeObject
{
	// Meta.Voice.Samples.TTSVoices.SimpleDropdownList Meta.Voice.Samples.TTSVoices.SimpleDropdownList/<>c__DisplayClass31_0::<>4__this
	SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* ___U3CU3E4__this_0;
	// System.Int32 Meta.Voice.Samples.TTSVoices.SimpleDropdownList/<>c__DisplayClass31_0::index
	int32_t ___index_1;
};

// Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect/<>c
struct U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997  : public RuntimeObject
{
};

struct U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_StaticFields
{
	// Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect/<>c Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect/<>c::<>9
	U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997* ___U3CU3E9_0;
	// System.Func`2<Meta.WitAi.TTS.Data.TTSVoiceSettings,System.String> Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect/<>c::<>9__5_0
	Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310* ___U3CU3E9__5_0_1;
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

// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
struct Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____current_3;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData>
struct UnityEvent_2_t238B45F9BAE8CA548BCC98EA142DE7E2AFFFD0F6  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityEvent_3_tEBA25FAAFB3D97F887F6EA8BCCD0C3AC003CC6C5  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents
struct TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0  : public VoiceSpeechEvents_tFA5D7C4456E0DB68D17633C92373A8ECD77ED087
{
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::_onLoadBegin
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ____onLoadBegin_7;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::_onLoadAbort
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ____onLoadAbort_8;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::_onLoadFailed
	TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* ____onLoadFailed_9;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::_onLoadSuccess
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ____onLoadSuccess_10;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::_onPlaybackReady
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ____onPlaybackReady_11;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::_onPlaybackStart
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ____onPlaybackStart_12;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::_onPlaybackCancelled
	TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* ____onPlaybackCancelled_13;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::_onPlaybackClipUpdated
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ____onPlaybackClipUpdated_14;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::_onPlaybackComplete
	TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* ____onPlaybackComplete_15;
};

// Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8 
{
	// Meta.WitAi.Data.Configuration.WitConfiguration Meta.WitAi.TTS.Integrations.TTSWitRequestSettings::configuration
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration_0;
	// Meta.WitAi.Requests.TTSWitAudioType Meta.WitAi.TTS.Integrations.TTSWitRequestSettings::audioType
	int32_t ___audioType_1;
	// System.Boolean Meta.WitAi.TTS.Integrations.TTSWitRequestSettings::audioStream
	bool ___audioStream_2;
	// System.Single Meta.WitAi.TTS.Integrations.TTSWitRequestSettings::audioStreamReadyDuration
	float ___audioStreamReadyDuration_3;
	// System.Single Meta.WitAi.TTS.Integrations.TTSWitRequestSettings::audioStreamChunkLength
	float ___audioStreamChunkLength_4;
	// System.Int32 Meta.WitAi.TTS.Integrations.TTSWitRequestSettings::audioStreamPreloadCount
	int32_t ___audioStreamPreloadCount_5;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_pinvoke
{
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration_0;
	int32_t ___audioType_1;
	int32_t ___audioStream_2;
	float ___audioStreamReadyDuration_3;
	float ___audioStreamChunkLength_4;
	int32_t ___audioStreamPreloadCount_5;
};
// Native definition for COM marshalling of Meta.WitAi.TTS.Integrations.TTSWitRequestSettings
struct TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8_marshaled_com
{
	WitConfiguration_t85BCD6C826D35078E90334092184A53D1B69C72E* ___configuration_0;
	int32_t ___audioType_1;
	int32_t ___audioStream_2;
	float ___audioStreamReadyDuration_3;
	float ___audioStreamChunkLength_4;
	int32_t ___audioStreamPreloadCount_5;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

// Meta.Voice.Samples.TTSVoices.SimpleDropdownIndexEvent
struct SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// Meta.Voice.Samples.TTSVoices.SimpleDropdownOptionEvent
struct SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136  : public UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent
struct TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4  : public UnityEvent_2_t238B45F9BAE8CA548BCC98EA142DE7E2AFFFD0F6
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent
struct TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816  : public UnityEvent_3_tEBA25FAAFB3D97F887F6EA8BCCD0C3AC003CC6C5
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents
struct TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB  : public TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0
{
	// UnityEngine.Events.UnityEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::_onPlaybackQueueBegin
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onPlaybackQueueBegin_16;
	// UnityEngine.Events.UnityEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::_onPlaybackQueueComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ____onPlaybackQueueComplete_17;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataQueued
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataQueued_18;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadBegin
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadBegin_19;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadBegin
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataLoadBegin_20;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadAbort
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadAbort_21;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadAbort
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataLoadAbort_22;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadFailed
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadFailed_23;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadFailed
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataLoadFailed_24;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipLoadSuccess
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnClipLoadSuccess_25;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataLoadSuccess
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataLoadSuccess_26;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackReady
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataPlaybackReady_27;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnStartSpeaking
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnStartSpeaking_28;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackStart
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataPlaybackStart_29;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnCancelledSpeaking
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnCancelledSpeaking_30;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackCancelled
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataPlaybackCancelled_31;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnFinishedSpeaking
	TTSSpeakerEvent_tB871834D286B7848990EA0743E4228B98B45D4E8* ___OnFinishedSpeaking_32;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipDataEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::OnClipDataPlaybackFinished
	TTSSpeakerClipDataEvent_t53C6F01B3868E06E1956FA6534AACE46AA2CE3E0* ___OnClipDataPlaybackFinished_33;
};

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData
struct TTSSpeakerRequestData_tC8EE29BD26949294C51A3C5D52E534BA19675AC0 
{
	// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData::ClipData
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___ClipData_0;
	// System.DateTime Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData::StartTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___StartTime_1;
	// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData::StopQueueOnLoad
	bool ___StopQueueOnLoad_2;
	// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData::PlaybackEvents
	TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* ___PlaybackEvents_3;
};
// Native definition for P/Invoke marshalling of Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData
struct TTSSpeakerRequestData_tC8EE29BD26949294C51A3C5D52E534BA19675AC0_marshaled_pinvoke
{
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___ClipData_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___StartTime_1;
	int32_t ___StopQueueOnLoad_2;
	TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* ___PlaybackEvents_3;
};
// Native definition for COM marshalling of Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData
struct TTSSpeakerRequestData_tC8EE29BD26949294C51A3C5D52E534BA19675AC0_marshaled_com
{
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___ClipData_0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___StartTime_1;
	int32_t ___StopQueueOnLoad_2;
	TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* ___PlaybackEvents_3;
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// System.Func`2<Meta.WitAi.TTS.Data.TTSVoiceSettings,System.String>
struct Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData>
struct UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String>
struct UnityAction_3_t7698A32015283934D80453E38C30F692144896EE  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// Meta.Voice.Samples.TTSVoices.SimpleDropdownList
struct SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_dropdownToggle
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____dropdownToggle_4;
	// UnityEngine.Transform Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_dropdownButtonArrowImage
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____dropdownButtonArrowImage_5;
	// System.String Meta.Voice.Samples.TTSVoices.SimpleDropdownList::DropdownToggleUnselectedText
	String_t* ___DropdownToggleUnselectedText_6;
	// UnityEngine.CanvasGroup Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_dropdownListPopup
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ____dropdownListPopup_7;
	// UnityEngine.UI.ScrollRect Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_dropdownListScrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ____dropdownListScrollRect_8;
	// UnityEngine.UI.Toggle Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_dropdownListCellPrefab
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____dropdownListCellPrefab_9;
	// System.Single Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_dropdownCellTextPadding
	float ____dropdownCellTextPadding_10;
	// System.String[] Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_options
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____options_11;
	// System.Int32 Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_selectedOptionIndex
	int32_t ____selectedOptionIndex_12;
	// Meta.Voice.Samples.TTSVoices.SimpleDropdownIndexEvent Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_onIndexSelected
	SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* ____onIndexSelected_13;
	// Meta.Voice.Samples.TTSVoices.SimpleDropdownOptionEvent Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_onOptionSelected
	SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* ____onOptionSelected_14;
	// System.Boolean Meta.Voice.Samples.TTSVoices.SimpleDropdownList::<IsShowing>k__BackingField
	bool ___U3CIsShowingU3Ek__BackingField_15;
	// System.Collections.Generic.List`1<UnityEngine.UI.Toggle> Meta.Voice.Samples.TTSVoices.SimpleDropdownList::_cells
	List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* ____cells_16;
};

// Meta.Voice.Samples.TTSVoices.TTSCacheToggle
struct TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.TTS.Integrations.TTSDiskCache Meta.Voice.Samples.TTSVoices.TTSCacheToggle::_diskCache
	TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* ____diskCache_4;
	// UnityEngine.UI.Text Meta.Voice.Samples.TTSVoices.TTSCacheToggle::_cacheLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____cacheLabel_5;
	// UnityEngine.UI.Button Meta.Voice.Samples.TTSVoices.TTSCacheToggle::_button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____button_6;
	// Meta.WitAi.TTS.Data.TTSDiskCacheLocation Meta.Voice.Samples.TTSVoices.TTSCacheToggle::_cacheLocation
	int32_t ____cacheLocation_7;
};

// Meta.WitAi.TTS.Integrations.TTSDiskCache
struct TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Meta.WitAi.TTS.Integrations.TTSDiskCache::_diskPath
	String_t* ____diskPath_4;
	// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Integrations.TTSDiskCache::_defaultSettings
	TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* ____defaultSettings_5;
	// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSDiskCache::_events
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ____events_6;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest> Meta.WitAi.TTS.Integrations.TTSDiskCache::_streamRequests
	Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* ____streamRequests_7;
};

// Meta.Voice.Samples.TTSVoices.TTSErrorText
struct TTSErrorText_tEF1225E1F00339CE3DF6ECFA747C0A4125285A57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Meta.Voice.Samples.TTSVoices.TTSErrorText::_errorLabel
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____errorLabel_4;
	// System.String Meta.Voice.Samples.TTSVoices.TTSErrorText::_error
	String_t* ____error_5;
};

// Meta.WitAi.TTS.TTSService
struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.TTS.Events.TTSServiceEvents Meta.WitAi.TTS.TTSService::_events
	TTSServiceEvents_t5769AE38018E87D8F9DCB9F19D4C85FC5AA295BF* ____events_5;
	// System.Boolean Meta.WitAi.TTS.TTSService::_delegates
	bool ____delegates_6;
	// System.Security.Cryptography.SHA256 Meta.WitAi.TTS.TTSService::CLIP_HASH
	SHA256_t6FEDD761EE6301127DAAF13320E8FD63296837F9* ___CLIP_HASH_8;
};

struct TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D_StaticFields
{
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::_instance
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ____instance_4;
};

// Meta.WitAi.TTS.Utilities.TTSSpeaker
struct TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents Meta.WitAi.TTS.Utilities.TTSSpeaker::_events
	TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* ____events_4;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::PrependedText
	String_t* ___PrependedText_5;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::AppendedText
	String_t* ___AppendedText_6;
	// UnityEngine.AudioSource Meta.WitAi.TTS.Utilities.TTSSpeaker::AudioSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___AudioSource_7;
	// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::_cloneAudioSource
	bool ____cloneAudioSource_8;
	// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.Utilities.TTSSpeaker::_ttsService
	TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* ____ttsService_9;
	// System.String Meta.WitAi.TTS.Utilities.TTSSpeaker::presetVoiceID
	String_t* ___presetVoiceID_10;
	// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings Meta.WitAi.TTS.Utilities.TTSSpeaker::customWitVoiceSettings
	TTSWitVoiceSettings_tA58275B53D3A2B6F140D79B235C53396D1E9AA29* ___customWitVoiceSettings_11;
	// Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData Meta.WitAi.TTS.Utilities.TTSSpeaker::_speakingRequest
	TTSSpeakerRequestData_tC8EE29BD26949294C51A3C5D52E534BA19675AC0 ____speakingRequest_12;
	// System.Collections.Generic.Queue`1<Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData> Meta.WitAi.TTS.Utilities.TTSSpeaker::_queuedRequests
	Queue_1_t2A12F01CB1AC7149016A706092FDCF89FF442C32* ____queuedRequests_13;
	// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::_hasQueue
	bool ____hasQueue_14;
	// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::_willHaveQueue
	bool ____willHaveQueue_15;
	// Meta.WitAi.TTS.Interfaces.ISpeakerTextPreprocessor[] Meta.WitAi.TTS.Utilities.TTSSpeaker::_textPreprocessors
	ISpeakerTextPreprocessorU5BU5D_tC5EAB6FDE45C009C2F01A3A532F50B81382AB1EB* ____textPreprocessors_16;
	// Meta.WitAi.TTS.Interfaces.ISpeakerTextPostprocessor[] Meta.WitAi.TTS.Utilities.TTSSpeaker::_textPostprocessors
	ISpeakerTextPostprocessorU5BU5D_t919A2F14D8EBF001F3075D4DCA605C58DF428091* ____textPostprocessors_17;
	// UnityEngine.Coroutine Meta.WitAi.TTS.Utilities.TTSSpeaker::_waitForCompletion
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ____waitForCompletion_18;
};

// Meta.Voice.Samples.TTSVoices.TTSSpeakerInput
struct TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::_speaker
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ____speaker_4;
	// UnityEngine.UI.InputField Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::_input
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ____input_5;
	// UnityEngine.UI.Button Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::_stopButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____stopButton_6;
	// UnityEngine.UI.Button Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::_speakButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____speakButton_7;
	// UnityEngine.UI.Toggle Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::_queueButton
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ____queueButton_8;
	// System.String Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::_dateId
	String_t* ____dateId_9;
	// System.String[] Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::_queuedText
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____queuedText_10;
	// System.String Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::_voice
	String_t* ____voice_11;
	// System.Boolean Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::_loading
	bool ____loading_12;
	// System.Boolean Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::_speaking
	bool ____speaking_13;
};

// Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver
struct TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::_speaker
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ____speaker_4;
};

// Meta.WitAi.TTS.Samples.TTSStreamToggle
struct TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Meta.WitAi.TTS.Integrations.TTSWit Meta.WitAi.TTS.Samples.TTSStreamToggle::_service
	TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* ____service_4;
	// UnityEngine.UI.Text Meta.WitAi.TTS.Samples.TTSStreamToggle::_label
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____label_5;
	// UnityEngine.UI.Button Meta.WitAi.TTS.Samples.TTSStreamToggle::_button
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____button_6;
	// System.Boolean Meta.WitAi.TTS.Samples.TTSStreamToggle::_streamEnabled
	bool ____streamEnabled_7;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t812C011901E6101F2A0FFC34C66AC5F65C0DEC26* ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_40;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect
struct TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F  : public TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852
{
	// Meta.Voice.Samples.TTSVoices.SimpleDropdownList Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::_characterDropdown
	SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* ____characterDropdown_5;
	// Meta.Voice.Samples.TTSVoices.SimpleDropdownList Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::_environmentDropdown
	SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* ____environmentDropdown_6;
};

struct TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_StaticFields
{
	// System.String[] Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::CHARACTER_IDS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___CHARACTER_IDS_8;
	// System.String[] Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::ENVIRONMENT_IDS
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___ENVIRONMENT_IDS_9;
};

// Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel
struct TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6  : public TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852
{
	// UnityEngine.UI.Text Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::_label
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ____label_5;
};

// Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect
struct TTSSpeakerVoiceSelect_tE5FA7686BB6F84C8BD5484B3F01D8E9B9343B2EA  : public TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852
{
	// Meta.Voice.Samples.TTSVoices.SimpleDropdownList Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect::_dropdown
	SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* ____dropdown_5;
};

// Meta.WitAi.TTS.Integrations.TTSWit
struct TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3  : public TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D
{
	// Meta.WitAi.TTS.Interfaces.ITTSRuntimeCacheHandler Meta.WitAi.TTS.Integrations.TTSWit::_runtimeCache
	RuntimeObject* ____runtimeCache_9;
	// Meta.WitAi.TTS.Interfaces.ITTSDiskCacheHandler Meta.WitAi.TTS.Integrations.TTSWit::_diskCache
	RuntimeObject* ____diskCache_10;
	// System.Boolean Meta.WitAi.TTS.Integrations.TTSWit::_wasCached
	bool ____wasCached_11;
	// Meta.WitAi.TTS.Integrations.TTSWitRequestSettings Meta.WitAi.TTS.Integrations.TTSWit::RequestSettings
	TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8 ___RequestSettings_12;
	// Meta.WitAi.TTS.Events.TTSStreamEvents Meta.WitAi.TTS.Integrations.TTSWit::<WebStreamEvents>k__BackingField
	TTSStreamEvents_t2D1DD89F7FFCBF9EA64C9F0758C1D1C7523EEFE6* ___U3CWebStreamEventsU3Ek__BackingField_13;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.VRequest> Meta.WitAi.TTS.Integrations.TTSWit::_webStreams
	Dictionary_2_t88B2413F532D0B8B703FABE569EBFFBB3C85DCA7* ____webStreams_14;
	// Meta.WitAi.TTS.Events.TTSDownloadEvents Meta.WitAi.TTS.Integrations.TTSWit::<WebDownloadEvents>k__BackingField
	TTSDownloadEvents_tB819CF70F58DFFD1D1DA2E8DA6749442251EC089* ___U3CWebDownloadEventsU3Ek__BackingField_15;
	// System.Collections.Generic.Dictionary`2<System.String,Meta.WitAi.Requests.WitVRequest> Meta.WitAi.TTS.Integrations.TTSWit::_webDownloads
	Dictionary_2_tB905E171CAD951F64829BD67F3D88CE1402F54A7* ____webDownloads_16;
	// Meta.WitAi.TTS.Integrations.TTSWitVoiceSettings[] Meta.WitAi.TTS.Integrations.TTSWit::_presetVoiceSettings
	TTSWitVoiceSettingsU5BU5D_tDFE65CA13F997DF3C056E13DED47708E78375B31* ____presetVoiceSettings_17;
};

struct TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.Type,System.Reflection.FieldInfo[]> Meta.WitAi.TTS.Integrations.TTSWit::_settingsFields
	Dictionary_2_t04BB274E1321E9A9FFE2C45EF5DC62AA12E85365* ____settingsFields_20;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_24;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_25;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_26;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_27;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_28;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_29;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_30;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_31;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_32;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_33;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_34;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_35;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_36;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_38;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_39;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_40;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_41;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_42;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_43;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_44;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_45;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_46;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_47;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_48;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_49;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_50;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_51;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_52;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_53;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_54;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_55;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_56;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_57;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_60;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_61;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_62;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_63;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_64;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_65;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_66;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_67;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_68;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_69;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_70;
	// System.Boolean UnityEngine.UI.InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_71;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_74;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDeviceEvaluated
	bool ___s_IsQuestDeviceEvaluated_22;
	// System.Boolean UnityEngine.UI.InputField::s_IsQuestDevice
	bool ___s_IsQuestDevice_23;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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
// Meta.WitAi.TTS.Data.TTSClipData[]
struct TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* m_Items[1];

	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Meta.WitAi.TTS.Data.TTSVoiceSettings[]
struct TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C  : public RuntimeArray
{
	ALIGN_FIELD (8) TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* m_Items[1];

	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* value)
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


// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, RuntimeObject* ___arg00, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___arg00, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_mD81513B3123F689887508A7179B564B88D802BC1_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared (UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mA0AAA8732CC80C1BD1A6ACE2B9EDCD66F6335E99_gshared (UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_AddListener_mCA408D528B5F443A450B843EA891C625CE4D9E38_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared (UnityEvent_2_t77BDA795C84FBEFE9D3AE3DCA619B97A9F423961* __this, UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_3_RemoveListener_mF76CFCB8F0AA943AAF6D0801A4817F4554AE6F96_gshared (UnityEvent_3_t55868EB0205828F99945BD02DAAB68E6953E61D4* __this, UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared (UnityEvent_1_t3CE03B42D5873C0C0E0692BEE72E1E6D5399F205* __this, UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* ___call0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// TSource[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Meta.WitAi.TTS.Integrations.TTSWit>()
inline TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* Object_FindObjectOfType_TisTTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3_m3C12AE92A29CB1DEAE91844F7B8D913063815673 (const RuntimeMethod* method)
{
	return ((  TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void Meta.WitAi.VLog::E(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_E_m063A8F2A17CA4676719A7D14D1AB8BD0663E9137 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Samples.TTSStreamToggle::RefreshStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamToggle_RefreshStreaming_mD7BC3C8F5C6FF3D832F467E2DC609E87DBB170AD (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Samples.TTSStreamToggle::GetStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSStreamToggle_GetStreaming_m59E7F98425F4D37BCB52C170FD24F4493CB00836 (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Samples.TTSStreamToggle::SetStreaming(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamToggle_SetStreaming_m37A151ACFBC4475D010C008CC935D461733393EF (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, bool ___toStreaming0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, const RuntimeMethod*))UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, const RuntimeMethod*))UnityEvent_1__ctor_m8D77F4F05F69D0E52E8A445322811EEC25987525_gshared)(__this, method);
}
// System.Int32 Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_SelectedOptionIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::SetShowing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_SetShowing_m2650CEFA4E365F1E1095C348A05E3ECDE59FE93C (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, bool ___toShowing0, const RuntimeMethod* method) ;
// System.String[] Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SimpleDropdownList_get_Options_m8C256A47A77425B00F22897B821B134CF69FC469_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::LoadDropdown(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_LoadDropdown_m91E693F7D95E40E7C9B9DA2373ABA1B8DD5D66C3 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___newOptions0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::SelectOption(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_SelectOption_mA5F53939B401FA0B647B3E90C6587B9EB98BB350 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, int32_t ___newIndex0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130 (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_gshared)(__this, ___call0, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetEnumerator()
inline Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C List_1_GetEnumerator_m39B04D6D8912800A28246D96534198D1769E6F3B (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::Dispose()
inline void Enumerator_Dispose_m7D05BF9C5E180D119F8C0ADDD73AB5E310DC40FC (Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::get_Current()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* Enumerator_get_Current_m556D29BA383A85A4891FDD34755EF247E773EC19_inline (Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>::MoveNext()
inline bool Enumerator_MoveNext_mE63BB344FF4C93D97507F9F1735DDF5C6B9649A5 (Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
inline int32_t List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mCD6FC6BB14BA9EF1A4B314841EB4D40675E3C1DB_gshared)(___original0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
inline void List_1_set_Item_m65AE17095CE4D86EB192E9A0B4EDC6612E12BAFF (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, int32_t ___index0, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, int32_t, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
inline void List_1_Add_m0B0674E845F360FA8837AEA0100C3500E3E4FE47_inline (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.RectTransform::SetInsetAndSizeFromParentEdge(UnityEngine.RectTransform/Edge,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_SetInsetAndSizeFromParentEdge_m2912DB22DFC20304AE5AFFB30E8C1EF903CC44E6 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, int32_t ___edge0, float ___inset1, float ___size2, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mFC306FF738AD4E5EFF59A093DF06A089B2D11D11 (U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEventBase::RemoveAllListeners()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076 (UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::SetSizeWithCurrentAnchors(UnityEngine.RectTransform/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, int32_t ___axis0, float ___size1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) ;
// System.String Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_SelectedOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleDropdownList_get_SelectedOption_m3A8660C621D90A0C0FC1A840796ADE8B496A013B (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// Meta.Voice.Samples.TTSVoices.SimpleDropdownOptionEvent Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_OnOptionSelected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* SimpleDropdownList_get_OnOptionSelected_mADDBCAA813F0EF270BA7DC7F51F9D2BDE1EE5B07_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(T0)
inline void UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15 (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, String_t* ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m6CDC8B0639CE8935E2E13D10B2C8E500968130B6_gshared)(__this, ___arg00, method);
}
// Meta.Voice.Samples.TTSVoices.SimpleDropdownIndexEvent Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_OnIndexSelected()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* SimpleDropdownList_get_OnIndexSelected_mE6218F6853FFB695DF9F0A50BA17B9FB2F3BC6F9_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
inline void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared)(__this, ___arg00, method);
}
// System.Boolean Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_IsShowing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleDropdownList_get_IsShowing_mA9154827A1A8A57D138152248E48C27FC50482C3_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) ;
// System.Int32 Meta.Voice.Samples.TTSVoices.SimpleDropdownList::GetOptionIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleDropdownList_GetOptionIndex_m9D252E33C1952E7FF7A1D2B9827363515F337782 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, String_t* ___option0, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::set_IsShowing(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleDropdownList_set_IsShowing_m4C2B9A11463599AE733F90DCCA96E3855FD8BD28_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownIndexEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownIndexEvent__ctor_mF01F1CA3AC43D07062645A1BA2F7A34DE389BE92 (SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownOptionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownOptionEvent__ctor_m8D5EA72642785B06FF1737B93276B35A7F057C4E (SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
inline void List_1__ctor_m4551F4DE4ED2A15E985982AD4322456CE52C5E2B (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::OnCellClick(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_OnCellClick_m5C27C6B990B89B56E40C204AA24D1F8FAD2C280D (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, int32_t ___index0, bool ___toSelected1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Meta.WitAi.TTS.Integrations.TTSDiskCache>()
inline TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* Object_FindObjectOfType_TisTTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2_m2477C39A615A4CDD3ABFC9ED12942142B0AFF8F5 (const RuntimeMethod* method)
{
	return ((  TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSCacheToggle::RefreshLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_RefreshLocation_m5ABFA71003BFD23EB82B16E093A92419A02D9100 (TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSDiskCacheSettings Meta.WitAi.TTS.Integrations.TTSDiskCache::get_DiskCacheDefaultSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* TTSDiskCache_get_DiskCacheDefaultSettings_mFEB9E0BFBDC93DAFBACF81CCBD7750AA73E11971_inline (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSDiskCacheLocation Meta.Voice.Samples.TTSVoices.TTSCacheToggle::GetCurrentCacheLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSCacheToggle_GetCurrentCacheLocation_mAD2743BFC902A725EDD460F11BE377F6D27C1559 (TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.TTSService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* TTSService_get_Instance_m302BC58D897A3FE13CB1021D6043E32C92891287 (const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.TTSService::UnloadAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11 (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.TTSErrorText::RefreshText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSErrorText_RefreshText_mB75949593712E69E372AFAB69BEDEE4F9E46F343 (TTSErrorText_tEF1225E1F00339CE3DF6ECFA747C0A4125285A57* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnEnable_m67A866C6E03A2551CB684228F32E442943470B1D (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::RefreshDropdowns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect_RefreshDropdowns_mB7AA259D607E6BADE3A4AA7B5C7731667B7869EF (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Int32>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_gshared)(__this, ___call0, method);
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnDisable_m8223FD25C61D833215A08D731A2052BB9C3C85C6 (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_mD81513B3123F689887508A7179B564B88D802BC1 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*, const RuntimeMethod*))UnityEvent_1_RemoveListener_mD81513B3123F689887508A7179B564B88D802BC1_gshared)(__this, ___call0, method);
}
// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::get_Speaker()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.VLog::W(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VLog_W_m878B376CCE791D170CA238533BBD3778475A8594 (RuntimeObject* ___log0, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::RefreshDropdown(System.String,Meta.Voice.Samples.TTSVoices.SimpleDropdownList,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect_RefreshDropdown_m3A819523B0586F8B6FC71CBEFE54851644793FA1 (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, String_t* ___id0, SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* ___dropdown1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___options2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::RefreshSsml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect_RefreshSsml_mFD13A96EB9CFBB55BD4218740C1DA48147060752 (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Insert(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29 (StringBuilder_t* __this, int32_t ___index0, String_t* ___value1, const RuntimeMethod* method) ;
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD (String_t* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver__ctor_m574D474AF5D2E22801DB44ADFB67675619CE56F2 (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::RefreshButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_RefreshButtons_mDCD62195B23D2A7F1EA7EAE8B4256D121D309C19 (TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.UI.InputField::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// System.String Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::FormatText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSSpeakerInput_FormatText_m0E76262A3E12FF0351B49261A92216B25796734A (TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1* __this, String_t* ___text0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::SpeakQueued(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_SpeakQueued_mD0D8D308BD6058209262E1F6A444A9D173BBB7AC (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___textToSpeak0, const RuntimeMethod* method) ;
// System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Speak(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeaker_Speak_m0ABA1A70FAF37002E979AF866EDB7BE48C79CACD (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, String_t* ___textToSpeak0, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.String System.DateTime::ToLongDateString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToLongDateString_m67CEA1EFB9FB11CC683C3779FECDD815EB94EF2C (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToShortTimeString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToShortTimeString_m39FA3D20BF7F8EC6D85FBFB0254D960B7A60160F (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsLoading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsLoading_m4B50BF1337FACC7883D39285F73921155CDC5203 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.Boolean Meta.WitAi.TTS.Utilities.TTSSpeaker::get_IsSpeaking()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<Meta.WitAi.TTS.Utilities.TTSSpeaker>()
inline TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* GameObject_GetComponentInChildren_TisTTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C_m9BC08D961B7518884DCDED31193371C4A6E80C7C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// Meta.WitAi.TTS.Utilities.TTSSpeakerEvents Meta.WitAi.TTS.Utilities.TTSSpeaker::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::get_OnPlaybackQueueBegin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TTSSpeakerEvents_get_OnPlaybackQueueBegin_m9A821A546C84C87619D861C1EB14F68BF51FE668_inline (TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Events.UnityEvent Meta.WitAi.TTS.Utilities.TTSSpeakerEvents::get_OnPlaybackQueueComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TTSSpeakerEvents_get_OnPlaybackQueueComplete_m49DBBD8760B392FE4FA99584CCA319C8075A78F9_inline (TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::get_OnLoadBegin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnLoadBegin_m00ECA69A4107190599DC2F4602C7C3CE82F4AB1E_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11 (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData>::AddListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E (UnityEvent_2_t238B45F9BAE8CA548BCC98EA142DE7E2AFFFD0F6* __this, UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t238B45F9BAE8CA548BCC98EA142DE7E2AFFFD0F6*, UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*, const RuntimeMethod*))UnityEvent_2_AddListener_mDFE9269B80D7B70296A328376452DFA83905E153_gshared)(__this, ___call0, method);
}
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::get_OnLoadAbort()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnLoadAbort_m9F721A78555178436EE909A408DC0AA2FF728CDB_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::get_OnLoadFailed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* TTSSpeakerClipEvents_get_OnLoadFailed_m482A9ECDFC1A89B032B1528A1D4284293C38BEA4_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`3<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_3__ctor_m0A23D0C0CA3CD138205DC28A0A0C5996D8617A9C (UnityAction_3_t7698A32015283934D80453E38C30F692144896EE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_3_t7698A32015283934D80453E38C30F692144896EE*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_3__ctor_mA0AAA8732CC80C1BD1A6ACE2B9EDCD66F6335E99_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String>::AddListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
inline void UnityEvent_3_AddListener_m0A90A9E0FA1EF9AFF8EAFF74E89B0A118A761DB9 (UnityEvent_3_tEBA25FAAFB3D97F887F6EA8BCCD0C3AC003CC6C5* __this, UnityAction_3_t7698A32015283934D80453E38C30F692144896EE* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tEBA25FAAFB3D97F887F6EA8BCCD0C3AC003CC6C5*, UnityAction_3_t7698A32015283934D80453E38C30F692144896EE*, const RuntimeMethod*))UnityEvent_3_AddListener_mCA408D528B5F443A450B843EA891C625CE4D9E38_gshared)(__this, ___call0, method);
}
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::get_OnLoadSuccess()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnLoadSuccess_mAC8C73EAE0A405426ADF54B9444D7D1337A9A8B7_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::get_OnPlaybackReady()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnPlaybackReady_mB9DF72BEEE97937DDDD261945DD7C5DE9DCD83A0_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::get_OnPlaybackStart()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnPlaybackStart_m0E4327A77B8D6167579A23652AD7768212EEBD02_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipMessageEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::get_OnPlaybackCancelled()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* TTSSpeakerClipEvents_get_OnPlaybackCancelled_mDA23D82C97696B8A4749E0910037C2987A6F6716_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvent Meta.WitAi.TTS.Utilities.TTSSpeakerClipEvents::get_OnPlaybackComplete()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnPlaybackComplete_m5C9CF1AD6EAEAE4358AC003AA8554BA118061D7B_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`2<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData>::RemoveListener(UnityEngine.Events.UnityAction`2<T0,T1>)
inline void UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115 (UnityEvent_2_t238B45F9BAE8CA548BCC98EA142DE7E2AFFFD0F6* __this, UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_2_t238B45F9BAE8CA548BCC98EA142DE7E2AFFFD0F6*, UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*, const RuntimeMethod*))UnityEvent_2_RemoveListener_m9C8E93B029B8AEF7A7BAD316FCE909A0E8053930_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`3<Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String>::RemoveListener(UnityEngine.Events.UnityAction`3<T0,T1,T2>)
inline void UnityEvent_3_RemoveListener_m5F6AFF91C1A30E809C301299664292AD7F19906B (UnityEvent_3_tEBA25FAAFB3D97F887F6EA8BCCD0C3AC003CC6C5* __this, UnityAction_3_t7698A32015283934D80453E38C30F692144896EE* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_3_tEBA25FAAFB3D97F887F6EA8BCCD0C3AC003CC6C5*, UnityAction_3_t7698A32015283934D80453E38C30F692144896EE*, const RuntimeMethod*))UnityEvent_3_RemoveListener_mF76CFCB8F0AA943AAF6D0801A4817F4554AE6F96_gshared)(__this, ___call0, method);
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::RefreshLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSClipData Meta.WitAi.TTS.Utilities.TTSSpeaker::get_SpeakingClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSClipData[] Meta.WitAi.TTS.Utilities.TTSSpeaker::get_QueuedClips()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* TTSSpeaker_get_QueuedClips_mCC42DCD1509635A8F13236DA8E44E8A962999157 (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_Awake_m6BC36A41DC69BB913953BE26D2EA7E4EF17C4FF4 (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect::RefreshDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerVoiceSelect_RefreshDropdown_mE4101C8CD21E0CA050FA6E0412CC23805560DB93 (TTSSpeakerVoiceSelect_tE5FA7686BB6F84C8BD5484B3F01D8E9B9343B2EA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71 (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_AddListener_m055233246714700E4BDAA62635BC0AA49E8165CC_gshared)(__this, ___call0, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257* __this, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tC9859540CF1468306CAB6D758C0A0D95DBCEC257*, UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*, const RuntimeMethod*))UnityEvent_1_RemoveListener_m904FA6BDD0D33FDF8650EF816FF5C131867E693E_gshared)(__this, ___call0, method);
}
// Meta.WitAi.TTS.Data.TTSVoiceSettings Meta.WitAi.TTS.Utilities.TTSSpeaker::get_VoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* TTSSpeaker_get_VoiceSettings_mD13F2686E89EB574B33A0D6A4588124587B86E9B (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::SelectOption(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_SelectOption_m2A8BA6CEA069B28C8E2D1C1D80C43387E10F9AA9 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, String_t* ___option0, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.TTSService Meta.WitAi.TTS.Utilities.TTSSpeaker::get_TTSService()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* TTSSpeaker_get_TTSService_mFE8C4675E340AE01CEBB795FC68501969DCBF39D (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) ;
// Meta.WitAi.TTS.Data.TTSVoiceSettings[] Meta.WitAi.TTS.TTSService::GetAllPresetVoiceSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* TTSService_GetAllPresetVoiceSettings_m6B04A3111ADEAB06A759E04934A950970F4C54FF (TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<Meta.WitAi.TTS.Data.TTSVoiceSettings,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m6BDD584F47E1317FC4304F0BDA716F872CA65A59 (Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<Meta.WitAi.TTS.Data.TTSVoiceSettings,System.String>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_TisString_t_mC816B03756BE32978550701D59ED4E834E2CDD79 (RuntimeObject* ___source0, Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m960CFE6ABFCB6C2399B69DEDFB27765D1FCE57A6_gshared)(___source0, ___selector1, method);
}
// TSource[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<TSource>)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m6B1F26FB2B3EA7B18B82FC81035440AAAEFCE924_gshared)(___source0, method);
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m648D68F3574109B746E2F5C8A67788886B9BD25C (U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void Meta.WitAi.TTS.Samples.TTSStreamToggle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamToggle_OnEnable_mD47CF48C7197E808B5EA6B0DC3CFC40C1DB3344B (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisTTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3_m3C12AE92A29CB1DEAE91844F7B8D913063815673_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamToggle_ToggleStreaming_mF9AD2439F527B001223BF1E6D79319D1906D393C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral589152A17B980BEDD1E3F78BD3654C0416FC537A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_service == null)
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_0 = __this->____service_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _service = GameObject.FindObjectOfType<TTSWit>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_2;
		L_2 = Object_FindObjectOfType_TisTTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3_m3C12AE92A29CB1DEAE91844F7B8D913063815673(Object_FindObjectOfType_TisTTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3_m3C12AE92A29CB1DEAE91844F7B8D913063815673_RuntimeMethod_var);
		__this->____service_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____service_4), (void*)L_2);
	}

IL_0019:
	{
		// if (_service == null)
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_3 = __this->____service_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// VLog.E("TTS Stream Toggle - Cannot work without a TTSWit reference");
		VLog_E_m063A8F2A17CA4676719A7D14D1AB8BD0663E9137(_stringLiteral589152A17B980BEDD1E3F78BD3654C0416FC537A, NULL);
	}

IL_0031:
	{
		// RefreshStreaming();
		TTSStreamToggle_RefreshStreaming_mD7BC3C8F5C6FF3D832F467E2DC609E87DBB170AD(__this, NULL);
		// _button.onClick.AddListener(ToggleStreaming);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = __this->____button_6;
		NullCheck(L_5);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_6;
		L_6 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_5, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_7, __this, (intptr_t)((void*)TTSStreamToggle_ToggleStreaming_mF9AD2439F527B001223BF1E6D79319D1906D393C_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSStreamToggle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamToggle_OnDisable_m5B0010A3CE5757447A356D43FAB0D1A034C16A1A (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSStreamToggle_ToggleStreaming_mF9AD2439F527B001223BF1E6D79319D1906D393C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _button.onClick.RemoveListener(ToggleStreaming);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____button_6;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)TTSStreamToggle_ToggleStreaming_mF9AD2439F527B001223BF1E6D79319D1906D393C_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSStreamToggle::RefreshStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamToggle_RefreshStreaming_mD7BC3C8F5C6FF3D832F467E2DC609E87DBB170AD (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08F515B752A94768A8E2F90C4FE0C80E6306E9C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8B77FFA6B004EBE6AD02387BCBFBFA47562B049);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_2 = NULL;
	{
		// _streamEnabled = GetStreaming();
		bool L_0;
		L_0 = TTSStreamToggle_GetStreaming_m59E7F98425F4D37BCB52C170FD24F4493CB00836(__this, NULL);
		__this->____streamEnabled_7 = L_0;
		// _label.text = $"Streaming: {(_streamEnabled ? "ON" : "OFF")}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____label_5;
		bool L_2 = __this->____streamEnabled_7;
		G_B1_0 = _stringLiteral08F515B752A94768A8E2F90C4FE0C80E6306E9C7;
		G_B1_1 = L_1;
		if (L_2)
		{
			G_B2_0 = _stringLiteral08F515B752A94768A8E2F90C4FE0C80E6306E9C7;
			G_B2_1 = L_1;
			goto IL_0026;
		}
	}
	{
		G_B3_0 = _stringLiteralE8B77FFA6B004EBE6AD02387BCBFBFA47562B049;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002b;
	}

IL_0026:
	{
		G_B3_0 = _stringLiteralE1A8B7ACF9F6A6C8DA34C480CF0726A9E97A6044;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002b:
	{
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_1, G_B3_0, NULL);
		NullCheck(G_B3_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B3_2, L_3);
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSStreamToggle::ToggleStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamToggle_ToggleStreaming_mF9AD2439F527B001223BF1E6D79319D1906D393C (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, const RuntimeMethod* method) 
{
	{
		// SetStreaming(!_streamEnabled);
		bool L_0 = __this->____streamEnabled_7;
		TTSStreamToggle_SetStreaming_m37A151ACFBC4475D010C008CC935D461733393EF(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), NULL);
		// RefreshStreaming();
		TTSStreamToggle_RefreshStreaming_mD7BC3C8F5C6FF3D832F467E2DC609E87DBB170AD(__this, NULL);
		// }
		return;
	}
}
// System.Boolean Meta.WitAi.TTS.Samples.TTSStreamToggle::GetStreaming()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TTSStreamToggle_GetStreaming_m59E7F98425F4D37BCB52C170FD24F4493CB00836 (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _service && _service.RequestSettings.audioStream;
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_0 = __this->____service_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_2 = __this->____service_4;
		NullCheck(L_2);
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_3 = (&L_2->___RequestSettings_12);
		bool L_4 = L_3->___audioStream_2;
		return L_4;
	}

IL_001e:
	{
		return (bool)0;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSStreamToggle::SetStreaming(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamToggle_SetStreaming_m37A151ACFBC4475D010C008CC935D461733393EF (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, bool ___toStreaming0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_service != null)
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_0 = __this->____service_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// _service.RequestSettings.audioStream = toStreaming;
		TTSWit_tC112A26D217C48EABDB9AC695D5B3EF2A4AAF0A3* L_2 = __this->____service_4;
		NullCheck(L_2);
		TTSWitRequestSettings_t14A6582B43FD91EF0C80DD34697ED1DB888A89B8* L_3 = (&L_2->___RequestSettings_12);
		bool L_4 = ___toStreaming0;
		L_3->___audioStream_2 = L_4;
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSStreamToggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamToggle_Update_m5CE3E3BA3447B1A99226F93C0724BE954F6437D5 (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, const RuntimeMethod* method) 
{
	{
		// if (_streamEnabled != GetStreaming())
		bool L_0 = __this->____streamEnabled_7;
		bool L_1;
		L_1 = TTSStreamToggle_GetStreaming_m59E7F98425F4D37BCB52C170FD24F4493CB00836(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		// RefreshStreaming();
		TTSStreamToggle_RefreshStreaming_mD7BC3C8F5C6FF3D832F467E2DC609E87DBB170AD(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Meta.WitAi.TTS.Samples.TTSStreamToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSStreamToggle__ctor_m236DAFB6B37BDA3D8422C3D461C545C1AF35E1E4 (TTSStreamToggle_t07E87418EE258AB0574647E15A8A7FB78B613541* __this, const RuntimeMethod* method) 
{
	{
		// private bool _streamEnabled = true;
		__this->____streamEnabled_7 = (bool)1;
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
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownIndexEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownIndexEvent__ctor_mF01F1CA3AC43D07062645A1BA2F7A34DE389BE92 (SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684(__this, UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
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
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownOptionEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownOptionEvent__ctor_m8D5EA72642785B06FF1737B93276B35A7F057C4E (SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6(__this, UnityEvent_1__ctor_m0F7D790DACD6F3D18E865D01FE4427603C1B0CC6_RuntimeMethod_var);
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
// System.String[] Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SimpleDropdownList_get_Options_m8C256A47A77425B00F22897B821B134CF69FC469 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// public string[] Options => _options;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____options_11;
		return L_0;
	}
}
// System.Int32 Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_SelectedOptionIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// public int SelectedOptionIndex => _selectedOptionIndex;
		int32_t L_0 = __this->____selectedOptionIndex_12;
		return L_0;
	}
}
// System.String Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_SelectedOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SimpleDropdownList_get_SelectedOption_m3A8660C621D90A0C0FC1A840796ADE8B496A013B (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// if (_options != null && SelectedOptionIndex >= 0 && SelectedOptionIndex < _options.Length)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____options_11;
		if (!L_0)
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_1;
		L_1 = SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728_inline(__this, NULL);
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_2;
		L_2 = SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728_inline(__this, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->____options_11;
		NullCheck(L_3);
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))
		{
			goto IL_002f;
		}
	}
	{
		// return _options[SelectedOptionIndex];
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->____options_11;
		int32_t L_5;
		L_5 = SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728_inline(__this, NULL);
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		return L_7;
	}

IL_002f:
	{
		// return null;
		return (String_t*)NULL;
	}
}
// Meta.Voice.Samples.TTSVoices.SimpleDropdownIndexEvent Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_OnIndexSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* SimpleDropdownList_get_OnIndexSelected_mE6218F6853FFB695DF9F0A50BA17B9FB2F3BC6F9 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// public SimpleDropdownIndexEvent OnIndexSelected => _onIndexSelected;
		SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* L_0 = __this->____onIndexSelected_13;
		return L_0;
	}
}
// Meta.Voice.Samples.TTSVoices.SimpleDropdownOptionEvent Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_OnOptionSelected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* SimpleDropdownList_get_OnOptionSelected_mADDBCAA813F0EF270BA7DC7F51F9D2BDE1EE5B07 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// public SimpleDropdownOptionEvent OnOptionSelected => _onOptionSelected;
		SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* L_0 = __this->____onOptionSelected_14;
		return L_0;
	}
}
// System.Boolean Meta.Voice.Samples.TTSVoices.SimpleDropdownList::get_IsShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SimpleDropdownList_get_IsShowing_mA9154827A1A8A57D138152248E48C27FC50482C3 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->___U3CIsShowingU3Ek__BackingField_15;
		return L_0;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::set_IsShowing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_set_IsShowing_m4C2B9A11463599AE733F90DCCA96E3855FD8BD28 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsShowingU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_Awake_mF1D5F2829886393BD9BA6525DD3C17983E09015C (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61DA4D5915811D66FC38EA55968C4AB41AA73567);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_dropdownListCellPrefab == null)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->____dropdownListCellPrefab_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_004e;
		}
	}
	{
		// _dropdownListCellPrefab = _dropdownListScrollRect.content.GetComponentInChildren<Toggle>();
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_2 = __this->____dropdownListScrollRect_8;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_2, NULL);
		NullCheck(L_3);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4;
		L_4 = Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C(L_3, Component_GetComponentInChildren_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m90D2C4B376A07542F929EE9E44801C73D517332C_RuntimeMethod_var);
		__this->____dropdownListCellPrefab_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dropdownListCellPrefab_9), (void*)L_4);
		// if (_dropdownListCellPrefab != null)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_5 = __this->____dropdownListCellPrefab_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		// _dropdownListCellPrefab.gameObject.SetActive(false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_7 = __this->____dropdownListCellPrefab_9;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		return;
	}

IL_0044:
	{
		// Debug.LogError("No Dropdown Cell Prefab Found");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral61DA4D5915811D66FC38EA55968C4AB41AA73567, NULL);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_Start_mA92BE27B7220433E89701D0C6970FBD8CBEF041A (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// SetShowing(false);
		SimpleDropdownList_SetShowing_m2650CEFA4E365F1E1095C348A05E3ECDE59FE93C(__this, (bool)0, NULL);
		// if (_options != null && _options.Length > 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____options_11;
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->____options_11;
		NullCheck(L_1);
		if (!(((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0024;
		}
	}
	{
		// LoadDropdown(Options);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = SimpleDropdownList_get_Options_m8C256A47A77425B00F22897B821B134CF69FC469_inline(__this, NULL);
		SimpleDropdownList_LoadDropdown_m91E693F7D95E40E7C9B9DA2373ABA1B8DD5D66C3(__this, L_2, NULL);
	}

IL_0024:
	{
		// int index = _selectedOptionIndex;
		int32_t L_3 = __this->____selectedOptionIndex_12;
		V_0 = L_3;
		// _selectedOptionIndex = index - 1;
		int32_t L_4 = V_0;
		__this->____selectedOptionIndex_12 = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		// SelectOption(index);
		int32_t L_5 = V_0;
		SimpleDropdownList_SelectOption_mA5F53939B401FA0B647B3E90C6587B9EB98BB350(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_OnEnable_m1D04D214CAA1A308559E90192247B76096821883 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDropdownList_OnToggleClick_m9D0D277AFD7E4384155B42A5F13A565F1BDD52C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _dropdownToggle.onValueChanged.AddListener(OnToggleClick);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->____dropdownToggle_4;
		NullCheck(L_0);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)SimpleDropdownList_OnToggleClick_m9D0D277AFD7E4384155B42A5F13A565F1BDD52C4_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_1, L_2, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_OnDisable_m6AE0571E4CFDB14261BB56B21F8E5EE271C90CAD (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDropdownList_OnToggleClick_m9D0D277AFD7E4384155B42A5F13A565F1BDD52C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _dropdownToggle.onValueChanged.RemoveListener(OnToggleClick);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->____dropdownToggle_4;
		NullCheck(L_0);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_1 = L_0->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_2 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_2, __this, (intptr_t)((void*)SimpleDropdownList_OnToggleClick_m9D0D277AFD7E4384155B42A5F13A565F1BDD52C4_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130(L_1, L_2, UnityEvent_1_RemoveListener_m5F1198F13FB2222BE8AABD6454B4D21086D0A130_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::LoadDropdown(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_LoadDropdown_m91E693F7D95E40E7C9B9DA2373ABA1B8DD5D66C3 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___newOptions0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m7D05BF9C5E180D119F8C0ADDD73AB5E310DC40FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mE63BB344FF4C93D97507F9F1735DDF5C6B9649A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m556D29BA383A85A4891FDD34755EF247E773EC19_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0B0674E845F360FA8837AEA0100C3500E3E4FE47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m39B04D6D8912800A28246D96534198D1769E6F3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m65AE17095CE4D86EB192E9A0B4EDC6612E12BAFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64166266357184DBF49249DB44B305CE9EEEF412);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* V_4 = NULL;
	int32_t G_B9_0 = 0;
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* G_B13_0 = NULL;
	{
		// _options = newOptions;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___newOptions0;
		__this->____options_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____options_11), (void*)L_0);
		// foreach (var cell in _cells)
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_1 = __this->____cells_16;
		NullCheck(L_1);
		Enumerator_tD1A6FAE24BB3FADF5C13A3B90441126C2C0EA93C L_2;
		L_2 = List_1_GetEnumerator_m39B04D6D8912800A28246D96534198D1769E6F3B(L_1, List_1_GetEnumerator_m39B04D6D8912800A28246D96534198D1769E6F3B_RuntimeMethod_var);
		V_2 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0032:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m7D05BF9C5E180D119F8C0ADDD73AB5E310DC40FC((&V_2), Enumerator_Dispose_m7D05BF9C5E180D119F8C0ADDD73AB5E310DC40FC_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0027_1;
			}

IL_0015_1:
			{
				// foreach (var cell in _cells)
				Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3;
				L_3 = Enumerator_get_Current_m556D29BA383A85A4891FDD34755EF247E773EC19_inline((&V_2), Enumerator_get_Current_m556D29BA383A85A4891FDD34755EF247E773EC19_RuntimeMethod_var);
				// cell.gameObject.SetActive(false);
				NullCheck(L_3);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
				L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
				NullCheck(L_4);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
			}

IL_0027_1:
			{
				// foreach (var cell in _cells)
				bool L_5;
				L_5 = Enumerator_MoveNext_mE63BB344FF4C93D97507F9F1735DDF5C6B9649A5((&V_2), Enumerator_MoveNext_mE63BB344FF4C93D97507F9F1735DDF5C6B9649A5_RuntimeMethod_var);
				if (L_5)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		// float height = 0f;
		V_0 = (0.0f);
		// int total = _options == null ? 0 : _options.Length;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = __this->____options_11;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = __this->____options_11;
		NullCheck(L_7);
		G_B9_0 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
		goto IL_0059;
	}

IL_0058:
	{
		G_B9_0 = 0;
	}

IL_0059:
	{
		V_1 = G_B9_0;
		// for (int c = 0; c < total; c++)
		V_3 = 0;
		goto IL_0132;
	}

IL_0061:
	{
		// Toggle cell = c < _cells.Count ? _cells[c] : null;
		int32_t L_8 = V_3;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_9 = __this->____cells_16;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_9, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0072;
		}
	}
	{
		G_B13_0 = ((Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*)(NULL));
		goto IL_007e;
	}

IL_0072:
	{
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_11 = __this->____cells_16;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_13;
		L_13 = List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA(L_11, L_12, List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		G_B13_0 = L_13;
	}

IL_007e:
	{
		V_4 = G_B13_0;
		// if (cell == null)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_14 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_010e;
		}
	}
	{
		// cell = Instantiate(_dropdownListCellPrefab.gameObject).GetComponent<Toggle>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_16 = __this->____dropdownListCellPrefab_9;
		NullCheck(L_16);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D(L_17, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_mC898F7E3D9541F17BD8B79579FDD431C0651E12D_RuntimeMethod_var);
		NullCheck(L_18);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_19;
		L_19 = GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17(L_18, GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		V_4 = L_19;
		// cell.name = $"{_dropdownListCellPrefab.gameObject.name}_CELL_{c:000}";
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_20 = V_4;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_21 = __this->____dropdownListCellPrefab_9;
		NullCheck(L_21);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_21, NULL);
		NullCheck(L_22);
		String_t* L_23;
		L_23 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_22, NULL);
		int32_t L_24 = V_3;
		int32_t L_25 = L_24;
		RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
		String_t* L_27;
		L_27 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral64166266357184DBF49249DB44B305CE9EEEF412, L_23, L_26, NULL);
		NullCheck(L_20);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_20, L_27, NULL);
		// cell.transform.SetParent(_dropdownListScrollRect.content, false);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_28 = V_4;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_28, NULL);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_30 = __this->____dropdownListScrollRect_8;
		NullCheck(L_30);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_31;
		L_31 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_30, NULL);
		NullCheck(L_29);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_29, L_31, (bool)0, NULL);
		// if (c < _cells.Count)
		int32_t L_32 = V_3;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_33 = __this->____cells_16;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_33, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		if ((((int32_t)L_32) >= ((int32_t)L_34)))
		{
			goto IL_0101;
		}
	}
	{
		// _cells[c] = cell;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_35 = __this->____cells_16;
		int32_t L_36 = V_3;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_37 = V_4;
		NullCheck(L_35);
		List_1_set_Item_m65AE17095CE4D86EB192E9A0B4EDC6612E12BAFF(L_35, L_36, L_37, List_1_set_Item_m65AE17095CE4D86EB192E9A0B4EDC6612E12BAFF_RuntimeMethod_var);
		goto IL_010e;
	}

IL_0101:
	{
		// _cells.Add(cell);
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_38 = __this->____cells_16;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_39 = V_4;
		NullCheck(L_38);
		List_1_Add_m0B0674E845F360FA8837AEA0100C3500E3E4FE47_inline(L_38, L_39, List_1_Add_m0B0674E845F360FA8837AEA0100C3500E3E4FE47_RuntimeMethod_var);
	}

IL_010e:
	{
		// cell.gameObject.SetActive(true);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_40 = V_4;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)1, NULL);
		// LoadCell(cell, c, _options[c], ref height);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_42 = V_4;
		int32_t L_43 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = __this->____options_11;
		int32_t L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		String_t* L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		VirtualActionInvoker4< Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F*, int32_t, String_t*, float* >::Invoke(8 /* System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::LoadCell(UnityEngine.UI.Toggle,System.Int32,System.String,System.Single&) */, __this, L_42, L_43, L_47, (&V_0));
		// for (int c = 0; c < total; c++)
		int32_t L_48 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
	}

IL_0132:
	{
		// for (int c = 0; c < total; c++)
		int32_t L_49 = V_3;
		int32_t L_50 = V_1;
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0061;
		}
	}
	{
		// _dropdownListScrollRect.content.SetInsetAndSizeFromParentEdge(RectTransform.Edge.Top, 0f, height);
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_51 = __this->____dropdownListScrollRect_8;
		NullCheck(L_51);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_52;
		L_52 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_51, NULL);
		float L_53 = V_0;
		NullCheck(L_52);
		RectTransform_SetInsetAndSizeFromParentEdge_m2912DB22DFC20304AE5AFFB30E8C1EF903CC44E6(L_52, 2, (0.0f), L_53, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::LoadCell(UnityEngine.UI.Toggle,System.Int32,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_LoadCell_m6B960488C2DB42DAF7FA841914C1EA945569B63D (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___cell0, int32_t ___index1, String_t* ___option2, float* ___y3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CLoadCellU3Eb__0_mB8FFDA29946E559426C5DBC0AE46C5B9CA9DBF18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2* V_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	float V_3 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	{
		U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2* L_0 = (U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass31_0__ctor_mFC306FF738AD4E5EFF59A093DF06A089B2D11D11(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2* L_2 = V_0;
		int32_t L_3 = ___index1;
		NullCheck(L_2);
		L_2->___index_1 = L_3;
		// Text cellText = cell.GetComponentInChildren<Text>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = ___cell0;
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_4, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		V_1 = L_5;
		// if (cellText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		// cellText.text = option;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = V_1;
		String_t* L_9 = ___option2;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
	}

IL_002b:
	{
		// cell.onValueChanged.RemoveAllListeners();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_10 = ___cell0;
		NullCheck(L_10);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_11 = L_10->___onValueChanged_23;
		NullCheck(L_11);
		UnityEventBase_RemoveAllListeners_m6E68297189537543B0C72FE38804646CA204D076(L_11, NULL);
		// cell.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_12 = ___cell0;
		NullCheck(L_12);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_12, (bool)0, NULL);
		// cell.onValueChanged.AddListener((isSelected) => OnCellClick(index, isSelected));
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_13 = ___cell0;
		NullCheck(L_13);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_14 = L_13->___onValueChanged_23;
		U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2* L_15 = V_0;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_16 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3CLoadCellU3Eb__0_mB8FFDA29946E559426C5DBC0AE46C5B9CA9DBF18_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_14, L_16, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// RectTransform cellRect = cell.GetComponent<RectTransform>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_17 = ___cell0;
		NullCheck(L_17);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_17, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		V_2 = L_18;
		// cellRect.anchorMin = new Vector2(0f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_19, L_20, NULL);
		// cellRect.anchorMax = new Vector2(1f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_21, L_22, NULL);
		// cellRect.pivot = new Vector2(0.5f, 1f);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23 = V_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_24), (0.5f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_23);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_23, L_24, NULL);
		// cellRect.SetSizeWithCurrentAnchors(RectTransform.Axis.Horizontal, _dropdownListScrollRect.content.rect.width);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_25 = V_2;
		ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* L_26 = __this->____dropdownListScrollRect_8;
		NullCheck(L_26);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27;
		L_27 = ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline(L_26, NULL);
		NullCheck(L_27);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
		L_28 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_27, NULL);
		V_4 = L_28;
		float L_29;
		L_29 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_4), NULL);
		NullCheck(L_25);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_25, 0, L_29, NULL);
		// cellRect.anchoredPosition = new Vector2(0f, -y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_30 = V_2;
		float* L_31 = ___y3;
		float L_32 = *((float*)L_31);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_33), (0.0f), ((-L_32)), /*hidden argument*/NULL);
		NullCheck(L_30);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_30, L_33, NULL);
		// float height = cellRect.rect.height;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34 = V_2;
		NullCheck(L_34);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_35;
		L_35 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_34, NULL);
		V_4 = L_35;
		float L_36;
		L_36 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		V_3 = L_36;
		// if (cellText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_37 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_38)
		{
			goto IL_0128;
		}
	}
	{
		// float textMargin = Mathf.Max(0f, height - cellText.rectTransform.rect.height);
		float L_39 = V_3;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = V_1;
		NullCheck(L_40);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_41;
		L_41 = Graphic_get_rectTransform_mF4752E8934267D630810E84CE02CDFB81EB1FD6D(L_40, NULL);
		NullCheck(L_41);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_42;
		L_42 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_41, NULL);
		V_4 = L_42;
		float L_43;
		L_43 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_4), NULL);
		float L_44;
		L_44 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((0.0f), ((float)il2cpp_codegen_subtract(L_39, L_43)), NULL);
		V_5 = L_44;
		// height = Mathf.CeilToInt(cellText.preferredHeight + _dropdownCellTextPadding + textMargin);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_45 = V_1;
		NullCheck(L_45);
		float L_46;
		L_46 = VirtualFuncInvoker0< float >::Invoke(82 /* System.Single UnityEngine.UI.Text::get_preferredHeight() */, L_45);
		float L_47 = __this->____dropdownCellTextPadding_10;
		float L_48 = V_5;
		int32_t L_49;
		L_49 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(L_46, L_47)), L_48)), NULL);
		V_3 = ((float)L_49);
		// cellRect.SetSizeWithCurrentAnchors(RectTransform.Axis.Vertical, height);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50 = V_2;
		float L_51 = V_3;
		NullCheck(L_50);
		RectTransform_SetSizeWithCurrentAnchors_m53A04549B7687A1DEA2C7484E56D89809390CE44(L_50, 1, L_51, NULL);
	}

IL_0128:
	{
		// y += height;
		float* L_52 = ___y3;
		float* L_53 = ___y3;
		float L_54 = *((float*)L_53);
		float L_55 = V_3;
		*((float*)L_52) = (float)((float)il2cpp_codegen_add(L_54, L_55));
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::SelectOption(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_SelectOption_mA5F53939B401FA0B647B3E90C6587B9EB98BB350 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, int32_t ___newIndex0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t G_B9_0 = 0;
	SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* G_B14_0 = NULL;
	SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* G_B13_0 = NULL;
	SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* G_B17_0 = NULL;
	SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* G_B16_0 = NULL;
	{
		// if (newIndex == SelectedOptionIndex)
		int32_t L_0 = ___newIndex0;
		int32_t L_1;
		L_1 = SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728_inline(__this, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// _selectedOptionIndex = newIndex;
		int32_t L_2 = ___newIndex0;
		__this->____selectedOptionIndex_12 = L_2;
		// string optionText = SelectedOption;
		String_t* L_3;
		L_3 = SimpleDropdownList_get_SelectedOption_m3A8660C621D90A0C0FC1A840796ADE8B496A013B(__this, NULL);
		V_0 = L_3;
		// Text buttonText = _dropdownToggle.GetComponentInChildren<Text>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->____dropdownToggle_4;
		NullCheck(L_4);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259(L_4, Component_GetComponentInChildren_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_m1D5533D50D961602AC2CD364E03388FFE2985259_RuntimeMethod_var);
		V_1 = L_5;
		// if (buttonText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004a;
		}
	}
	{
		// if (string.IsNullOrEmpty(optionText))
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_8, NULL);
		if (!L_9)
		{
			goto IL_0043;
		}
	}
	{
		// buttonText.text = DropdownToggleUnselectedText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = V_1;
		String_t* L_11 = __this->___DropdownToggleUnselectedText_6;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		goto IL_004a;
	}

IL_0043:
	{
		// buttonText.text = optionText;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = V_1;
		String_t* L_13 = V_0;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_13);
	}

IL_004a:
	{
		// int total = _cells == null ? 0 : _cells.Count;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_14 = __this->____cells_16;
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_15 = __this->____cells_16;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_inline(L_15, List_1_get_Count_mC7FDDBE151C77EA1C39BC5B5EFB333C2F89D1205_RuntimeMethod_var);
		G_B9_0 = L_16;
		goto IL_0060;
	}

IL_005f:
	{
		G_B9_0 = 0;
	}

IL_0060:
	{
		V_2 = G_B9_0;
		// for (int i = 0; i < total; i++)
		V_3 = 0;
		goto IL_00a0;
	}

IL_0065:
	{
		// _cells[i].isOn = i == SelectedOptionIndex;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_17 = __this->____cells_16;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_19;
		L_19 = List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA(L_17, L_18, List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		int32_t L_20 = V_3;
		int32_t L_21;
		L_21 = SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728_inline(__this, NULL);
		NullCheck(L_19);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_19, (bool)((((int32_t)L_20) == ((int32_t)L_21))? 1 : 0), NULL);
		// _cells[i].interactable = i != SelectedOptionIndex;
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_22 = __this->____cells_16;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_24;
		L_24 = List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA(L_22, L_23, List_1_get_Item_m67FC1BEECCBA686AC1C471B2D968592193F6DCFA_RuntimeMethod_var);
		int32_t L_25 = V_3;
		int32_t L_26;
		L_26 = SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728_inline(__this, NULL);
		NullCheck(L_24);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_24, (bool)((((int32_t)((((int32_t)L_25) == ((int32_t)L_26))? 1 : 0)) == ((int32_t)0))? 1 : 0), NULL);
		// for (int i = 0; i < total; i++)
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a0:
	{
		// for (int i = 0; i < total; i++)
		int32_t L_28 = V_3;
		int32_t L_29 = V_2;
		if ((((int32_t)L_28) < ((int32_t)L_29)))
		{
			goto IL_0065;
		}
	}
	{
		// OnOptionSelected?.Invoke(optionText);
		SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* L_30;
		L_30 = SimpleDropdownList_get_OnOptionSelected_mADDBCAA813F0EF270BA7DC7F51F9D2BDE1EE5B07_inline(__this, NULL);
		SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* L_31 = L_30;
		G_B13_0 = L_31;
		if (L_31)
		{
			G_B14_0 = L_31;
			goto IL_00b0;
		}
	}
	{
		goto IL_00b6;
	}

IL_00b0:
	{
		String_t* L_32 = V_0;
		NullCheck(G_B14_0);
		UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15(G_B14_0, L_32, UnityEvent_1_Invoke_mA633B48B5D287DA856FB954AC3E4012487E63C15_RuntimeMethod_var);
	}

IL_00b6:
	{
		// OnIndexSelected?.Invoke(SelectedOptionIndex);
		SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* L_33;
		L_33 = SimpleDropdownList_get_OnIndexSelected_mE6218F6853FFB695DF9F0A50BA17B9FB2F3BC6F9_inline(__this, NULL);
		SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* L_34 = L_33;
		G_B16_0 = L_34;
		if (L_34)
		{
			G_B17_0 = L_34;
			goto IL_00c2;
		}
	}
	{
		goto IL_00cd;
	}

IL_00c2:
	{
		int32_t L_35;
		L_35 = SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728_inline(__this, NULL);
		NullCheck(G_B17_0);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(G_B17_0, L_35, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
	}

IL_00cd:
	{
		// if (IsShowing)
		bool L_36;
		L_36 = SimpleDropdownList_get_IsShowing_mA9154827A1A8A57D138152248E48C27FC50482C3_inline(__this, NULL);
		if (!L_36)
		{
			goto IL_00dc;
		}
	}
	{
		// SetShowing(false);
		SimpleDropdownList_SetShowing_m2650CEFA4E365F1E1095C348A05E3ECDE59FE93C(__this, (bool)0, NULL);
	}

IL_00dc:
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::SelectOption(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_SelectOption_m2A8BA6CEA069B28C8E2D1C1D80C43387E10F9AA9 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, String_t* ___option0, const RuntimeMethod* method) 
{
	{
		// public void SelectOption(string option) => SelectOption(GetOptionIndex(option));
		String_t* L_0 = ___option0;
		int32_t L_1;
		L_1 = SimpleDropdownList_GetOptionIndex_m9D252E33C1952E7FF7A1D2B9827363515F337782(__this, L_0, NULL);
		SimpleDropdownList_SelectOption_mA5F53939B401FA0B647B3E90C6587B9EB98BB350(__this, L_1, NULL);
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::OnCellClick(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_OnCellClick_m5C27C6B990B89B56E40C204AA24D1F8FAD2C280D (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, int32_t ___index0, bool ___toSelected1, const RuntimeMethod* method) 
{
	{
		// if (toSelected && index != SelectedOptionIndex)
		bool L_0 = ___toSelected1;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___index0;
		int32_t L_2;
		L_2 = SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728_inline(__this, NULL);
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_0013;
		}
	}
	{
		// SelectOption(index);
		int32_t L_3 = ___index0;
		SimpleDropdownList_SelectOption_mA5F53939B401FA0B647B3E90C6587B9EB98BB350(__this, L_3, NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Int32 Meta.Voice.Samples.TTSVoices.SimpleDropdownList::GetOptionIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SimpleDropdownList_GetOptionIndex_m9D252E33C1952E7FF7A1D2B9827363515F337782 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, String_t* ___option0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// if (_options != null)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____options_11;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// for (int o = 0; o < _options.Length; o++)
		V_0 = 0;
		goto IL_0022;
	}

IL_000c:
	{
		// if (string.Equals(_options[o], option))
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->____options_11;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5 = ___option0;
		bool L_6;
		L_6 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		// return o;
		int32_t L_7 = V_0;
		return L_7;
	}

IL_001e:
	{
		// for (int o = 0; o < _options.Length; o++)
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0022:
	{
		// for (int o = 0; o < _options.Length; o++)
		int32_t L_9 = V_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = __this->____options_11;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_000c;
		}
	}

IL_002d:
	{
		// return -1;
		return (-1);
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::SetShowing(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_SetShowing_m2650CEFA4E365F1E1095C348A05E3ECDE59FE93C (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, bool ___toShowing0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral220FFCFB26879FFBD1E43E9BE7142C54F910664F);
		s_Il2CppMethodInitialized = true;
	}
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* G_B7_0 = NULL;
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* G_B6_0 = NULL;
	float G_B8_0 = 0.0f;
	CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* G_B8_1 = NULL;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B12_2 = NULL;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B11_2 = NULL;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	float G_B13_2 = 0.0f;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B13_3 = NULL;
	{
		// if (toShowing && (Options == null || Options.Length <= 0))
		bool L_0 = ___toShowing0;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = SimpleDropdownList_get_Options_m8C256A47A77425B00F22897B821B134CF69FC469_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2;
		L_2 = SimpleDropdownList_get_Options_m8C256A47A77425B00F22897B821B134CF69FC469_inline(__this, NULL);
		NullCheck(L_2);
		if ((((RuntimeArray*)L_2)->max_length))
		{
			goto IL_001f;
		}
	}

IL_0014:
	{
		// Debug.Log("SimpleDropdownList - Cannot show without any options");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral220FFCFB26879FFBD1E43E9BE7142C54F910664F, NULL);
		// return;
		return;
	}

IL_001f:
	{
		// IsShowing = toShowing;
		bool L_3 = ___toShowing0;
		SimpleDropdownList_set_IsShowing_m4C2B9A11463599AE733F90DCCA96E3855FD8BD28_inline(__this, L_3, NULL);
		// _dropdownToggle.isOn = IsShowing;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_4 = __this->____dropdownToggle_4;
		bool L_5;
		L_5 = SimpleDropdownList_get_IsShowing_mA9154827A1A8A57D138152248E48C27FC50482C3_inline(__this, NULL);
		NullCheck(L_4);
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_4, L_5, NULL);
		// if (_dropdownListPopup != null)
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_6 = __this->____dropdownListPopup_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0077;
		}
	}
	{
		// _dropdownListPopup.alpha = toShowing ? 1f : 0f;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_8 = __this->____dropdownListPopup_7;
		bool L_9 = ___toShowing0;
		G_B6_0 = L_8;
		if (L_9)
		{
			G_B7_0 = L_8;
			goto IL_0055;
		}
	}
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B6_0;
		goto IL_005a;
	}

IL_0055:
	{
		G_B8_0 = (1.0f);
		G_B8_1 = G_B7_0;
	}

IL_005a:
	{
		NullCheck(G_B8_1);
		CanvasGroup_set_alpha_m5C06839316D948BB4F75ED72C87FA1F1A20C333F(G_B8_1, G_B8_0, NULL);
		// _dropdownListPopup.interactable = toShowing;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_10 = __this->____dropdownListPopup_7;
		bool L_11 = ___toShowing0;
		NullCheck(L_10);
		CanvasGroup_set_interactable_m86928BB0894EF3F06BC7BE63594272FBA0DAC757(L_10, L_11, NULL);
		// _dropdownListPopup.blocksRaycasts = toShowing;
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_12 = __this->____dropdownListPopup_7;
		bool L_13 = ___toShowing0;
		NullCheck(L_12);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_12, L_13, NULL);
	}

IL_0077:
	{
		// if (_dropdownButtonArrowImage != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->____dropdownButtonArrowImage_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00b3;
		}
	}
	{
		// _dropdownButtonArrowImage.localRotation = Quaternion.Euler(0f, 0f, IsShowing ? 0f : 180f);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->____dropdownButtonArrowImage_5;
		bool L_17;
		L_17 = SimpleDropdownList_get_IsShowing_mA9154827A1A8A57D138152248E48C27FC50482C3_inline(__this, NULL);
		G_B11_0 = (0.0f);
		G_B11_1 = (0.0f);
		G_B11_2 = L_16;
		if (L_17)
		{
			G_B12_0 = (0.0f);
			G_B12_1 = (0.0f);
			G_B12_2 = L_16;
			goto IL_00a4;
		}
	}
	{
		G_B13_0 = (180.0f);
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00a9;
	}

IL_00a4:
	{
		G_B13_0 = (0.0f);
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00a9:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(G_B13_2, G_B13_1, G_B13_0, NULL);
		NullCheck(G_B13_3);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(G_B13_3, L_18, NULL);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::OnToggleClick(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList_OnToggleClick_m9D0D277AFD7E4384155B42A5F13A565F1BDD52C4 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, bool ___toToggle0, const RuntimeMethod* method) 
{
	{
		// if (toToggle != IsShowing)
		bool L_0 = ___toToggle0;
		bool L_1;
		L_1 = SimpleDropdownList_get_IsShowing_mA9154827A1A8A57D138152248E48C27FC50482C3_inline(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0010;
		}
	}
	{
		// SetShowing(toToggle);
		bool L_2 = ___toToggle0;
		SimpleDropdownList_SetShowing_m2650CEFA4E365F1E1095C348A05E3ECDE59FE93C(__this, L_2, NULL);
	}

IL_0010:
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleDropdownList__ctor_mD23FB697BC821F27F9D3796F823EB15517DC4E74 (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4551F4DE4ED2A15E985982AD4322456CE52C5E2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string DropdownToggleUnselectedText = "...";
		__this->___DropdownToggleUnselectedText_6 = _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DropdownToggleUnselectedText_6), (void*)_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		// private float _dropdownCellTextPadding = 2f;
		__this->____dropdownCellTextPadding_10 = (2.0f);
		// private int _selectedOptionIndex = -1;
		__this->____selectedOptionIndex_12 = (-1);
		// private SimpleDropdownIndexEvent _onIndexSelected = new SimpleDropdownIndexEvent();
		SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* L_0 = (SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4*)il2cpp_codegen_object_new(SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SimpleDropdownIndexEvent__ctor_mF01F1CA3AC43D07062645A1BA2F7A34DE389BE92(L_0, NULL);
		__this->____onIndexSelected_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onIndexSelected_13), (void*)L_0);
		// private SimpleDropdownOptionEvent _onOptionSelected = new SimpleDropdownOptionEvent();
		SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* L_1 = (SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136*)il2cpp_codegen_object_new(SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SimpleDropdownOptionEvent__ctor_m8D5EA72642785B06FF1737B93276B35A7F057C4E(L_1, NULL);
		__this->____onOptionSelected_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____onOptionSelected_14), (void*)L_1);
		// private List<Toggle> _cells = new List<Toggle>();
		List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16* L_2 = (List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16*)il2cpp_codegen_object_new(List_1_t2442BD257DAE679440EEB79FE0D4679F4C55DA16_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m4551F4DE4ED2A15E985982AD4322456CE52C5E2B(L_2, List_1__ctor_m4551F4DE4ED2A15E985982AD4322456CE52C5E2B_RuntimeMethod_var);
		__this->____cells_16 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cells_16), (void*)L_2);
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
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mFC306FF738AD4E5EFF59A093DF06A089B2D11D11 (U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.SimpleDropdownList/<>c__DisplayClass31_0::<LoadCell>b__0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CLoadCellU3Eb__0_mB8FFDA29946E559426C5DBC0AE46C5B9CA9DBF18 (U3CU3Ec__DisplayClass31_0_t95E7A2DDF329A96C8D2CA2105AE4169BA3DFF3D2* __this, bool ___isSelected0, const RuntimeMethod* method) 
{
	{
		// cell.onValueChanged.AddListener((isSelected) => OnCellClick(index, isSelected));
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_0 = __this->___U3CU3E4__this_0;
		int32_t L_1 = __this->___index_1;
		bool L_2 = ___isSelected0;
		NullCheck(L_0);
		SimpleDropdownList_OnCellClick_m5C27C6B990B89B56E40C204AA24D1F8FAD2C280D(L_0, L_1, L_2, NULL);
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
// System.Void Meta.Voice.Samples.TTSVoices.TTSCacheToggle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_OnEnable_mA837BFE7640EFC0429D130B6F7618A04C53C900A (TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisTTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2_m2477C39A615A4CDD3ABFC9ED12942142B0AFF8F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSCacheToggle_ToggleCache_m67DE451B749C34117D3D9F41CC167D77C0CC0709_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_diskCache == null)
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_0 = __this->____diskCache_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// _diskCache = GameObject.FindObjectOfType<TTSDiskCache>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_2;
		L_2 = Object_FindObjectOfType_TisTTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2_m2477C39A615A4CDD3ABFC9ED12942142B0AFF8F5(Object_FindObjectOfType_TisTTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2_m2477C39A615A4CDD3ABFC9ED12942142B0AFF8F5_RuntimeMethod_var);
		__this->____diskCache_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____diskCache_4), (void*)L_2);
	}

IL_0019:
	{
		// RefreshLocation();
		TTSCacheToggle_RefreshLocation_m5ABFA71003BFD23EB82B16E093A92419A02D9100(__this, NULL);
		// _button.onClick.AddListener(ToggleCache);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____button_6;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)TTSCacheToggle_ToggleCache_m67DE451B749C34117D3D9F41CC167D77C0CC0709_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// }
		return;
	}
}
// Meta.WitAi.TTS.Data.TTSDiskCacheLocation Meta.Voice.Samples.TTSVoices.TTSCacheToggle::GetCurrentCacheLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TTSCacheToggle_GetCurrentCacheLocation_mAD2743BFC902A725EDD460F11BE377F6D27C1559 (TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private TTSDiskCacheLocation GetCurrentCacheLocation() => _diskCache == null ? TTSDiskCacheLocation.Stream : _diskCache.DiskCacheDefaultSettings.DiskCacheLocation;
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_0 = __this->____diskCache_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_2 = __this->____diskCache_4;
		NullCheck(L_2);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_3;
		L_3 = TTSDiskCache_get_DiskCacheDefaultSettings_mFEB9E0BFBDC93DAFBACF81CCBD7750AA73E11971_inline(L_2, NULL);
		NullCheck(L_3);
		int32_t L_4 = L_3->___DiskCacheLocation_0;
		return L_4;
	}

IL_001f:
	{
		return (int32_t)(0);
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSCacheToggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_Update_m2CF3784406234E8ED8FB164CFA5050D458BFF4F9 (TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2* __this, const RuntimeMethod* method) 
{
	{
		// if (_cacheLocation != GetCurrentCacheLocation())
		int32_t L_0 = __this->____cacheLocation_7;
		int32_t L_1;
		L_1 = TTSCacheToggle_GetCurrentCacheLocation_mAD2743BFC902A725EDD460F11BE377F6D27C1559(__this, NULL);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0014;
		}
	}
	{
		// RefreshLocation();
		TTSCacheToggle_RefreshLocation_m5ABFA71003BFD23EB82B16E093A92419A02D9100(__this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSCacheToggle::RefreshLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_RefreshLocation_m5ABFA71003BFD23EB82B16E093A92419A02D9100 (TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA5E057E9C43D8BE035AEBD4EDE90FC16636B277);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cacheLocation = GetCurrentCacheLocation();
		int32_t L_0;
		L_0 = TTSCacheToggle_GetCurrentCacheLocation_mAD2743BFC902A725EDD460F11BE377F6D27C1559(__this, NULL);
		__this->____cacheLocation_7 = L_0;
		// _cacheLabel.text = $"Disk Cache: {_cacheLocation}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->____cacheLabel_5;
		int32_t L_2 = __this->____cacheLocation_7;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(TTSDiskCacheLocation_tA6189D41C84585DC07F3145C5739F6CA8FE100AC_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5;
		L_5 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralAA5E057E9C43D8BE035AEBD4EDE90FC16636B277, L_4, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSCacheToggle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_OnDisable_mBFE39FFCEE55899615CE0BBB33A5F39B257281B8 (TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSCacheToggle_ToggleCache_m67DE451B749C34117D3D9F41CC167D77C0CC0709_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _button.onClick.RemoveListener(ToggleCache);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____button_6;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)TTSCacheToggle_ToggleCache_m67DE451B749C34117D3D9F41CC167D77C0CC0709_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSCacheToggle::ToggleCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle_ToggleCache_m67DE451B749C34117D3D9F41CC167D77C0CC0709 (TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// TTSDiskCacheLocation cacheLocation = GetCurrentCacheLocation();
		int32_t L_0;
		L_0 = TTSCacheToggle_GetCurrentCacheLocation_mAD2743BFC902A725EDD460F11BE377F6D27C1559(__this, NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_002b;
			}
			case 2:
			{
				goto IL_0027;
			}
			case 3:
			{
				goto IL_0023;
			}
		}
	}
	{
		goto IL_002b;
	}

IL_001f:
	{
		// cacheLocation = TTSDiskCacheLocation.Temporary;
		V_0 = 3;
		// break;
		goto IL_002d;
	}

IL_0023:
	{
		// cacheLocation = TTSDiskCacheLocation.Persistent;
		V_0 = 2;
		// break;
		goto IL_002d;
	}

IL_0027:
	{
		// cacheLocation = TTSDiskCacheLocation.Preload;
		V_0 = 1;
		// break;
		goto IL_002d;
	}

IL_002b:
	{
		// cacheLocation = TTSDiskCacheLocation.Stream;
		V_0 = 0;
	}

IL_002d:
	{
		// _diskCache.DiskCacheDefaultSettings.DiskCacheLocation = cacheLocation;
		TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* L_2 = __this->____diskCache_4;
		NullCheck(L_2);
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_3;
		L_3 = TTSDiskCache_get_DiskCacheDefaultSettings_mFEB9E0BFBDC93DAFBACF81CCBD7750AA73E11971_inline(L_2, NULL);
		int32_t L_4 = V_0;
		NullCheck(L_3);
		L_3->___DiskCacheLocation_0 = L_4;
		// TTSService.Instance.UnloadAll();
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_5;
		L_5 = TTSService_get_Instance_m302BC58D897A3FE13CB1021D6043E32C92891287(NULL);
		NullCheck(L_5);
		TTSService_UnloadAll_m68FE5D7047E13F422277A0D374BC8640FB8EDC11(L_5, NULL);
		// RefreshLocation();
		TTSCacheToggle_RefreshLocation_m5ABFA71003BFD23EB82B16E093A92419A02D9100(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSCacheToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSCacheToggle__ctor_mBF8AE9E865AB1B51EE406FDACD16810F6B8AA230 (TTSCacheToggle_tAEAAE0875062CA28C3E35E5A0E5FA2CA98E134D2* __this, const RuntimeMethod* method) 
{
	{
		// private TTSDiskCacheLocation _cacheLocation = (TTSDiskCacheLocation) (-1);
		__this->____cacheLocation_7 = (-1);
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
// System.Void Meta.Voice.Samples.TTSVoices.TTSErrorText::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSErrorText_OnEnable_m28ADB311AD9BCA99E164CFE6F23F17689ECB6683 (TTSErrorText_tEF1225E1F00339CE3DF6ECFA747C0A4125285A57* __this, const RuntimeMethod* method) 
{
	{
		// RefreshText();
		TTSErrorText_RefreshText_mB75949593712E69E372AFAB69BEDEE4F9E46F343(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSErrorText::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSErrorText_Update_mA737F200FFCB7DD8ED29E87428806E9F5D5BF4BF (TTSErrorText_tEF1225E1F00339CE3DF6ECFA747C0A4125285A57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB456441A7334E6FEDE1B36067697C51F5A24C562);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* G_B3_0 = NULL;
	{
		// string invalidError = TTSService.Instance == null ? "No TTS Service Found" : TTSService.Instance.GetInvalidError();
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_0;
		L_0 = TTSService_get_Instance_m302BC58D897A3FE13CB1021D6043E32C92891287(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_2;
		L_2 = TTSService_get_Instance_m302BC58D897A3FE13CB1021D6043E32C92891287(NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String Meta.WitAi.TTS.TTSService::GetInvalidError() */, L_2);
		G_B3_0 = L_3;
		goto IL_001e;
	}

IL_0019:
	{
		G_B3_0 = _stringLiteralB456441A7334E6FEDE1B36067697C51F5A24C562;
	}

IL_001e:
	{
		V_0 = G_B3_0;
		// if (!string.Equals(invalidError, _error))
		String_t* L_4 = V_0;
		String_t* L_5 = __this->____error_5;
		bool L_6;
		L_6 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(L_4, L_5, NULL);
		if (L_6)
		{
			goto IL_003a;
		}
	}
	{
		// _error = invalidError;
		String_t* L_7 = V_0;
		__this->____error_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____error_5), (void*)L_7);
		// RefreshText();
		TTSErrorText_RefreshText_mB75949593712E69E372AFAB69BEDEE4F9E46F343(__this, NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSErrorText::RefreshText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSErrorText_RefreshText_mB75949593712E69E372AFAB69BEDEE4F9E46F343 (TTSErrorText_tEF1225E1F00339CE3DF6ECFA747C0A4125285A57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (string.IsNullOrEmpty(_error))
		String_t* L_0 = __this->____error_5;
		bool L_1;
		L_1 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// _errorLabel.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->____errorLabel_4;
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		return;
	}

IL_001e:
	{
		// _errorLabel.text = $"Error: {_error}";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->____errorLabel_4;
		String_t* L_5 = __this->____error_5;
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral73ED92A2DE5120A5716646E377BB552B3B4E51AF, L_5, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSErrorText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSErrorText__ctor_mEAB317C8B51F667FFAC353D7ED403063155DBA04 (TTSErrorText_tEF1225E1F00339CE3DF6ECFA747C0A4125285A57* __this, const RuntimeMethod* method) 
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
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect_OnEnable_m63728EDAB19AAD78AC73FD45185146CEE68E3007 (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerEffectSelect_OnCharacterSelected_mBEF5CCF5460E529305A8A90459420C8414A493D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerEffectSelect_OnEnvironmentSelected_m34FAEBB70FAB35F5A41F1539EC1F174A80A99C9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		TTSSpeakerObserver_OnEnable_m67A866C6E03A2551CB684228F32E442943470B1D(__this, NULL);
		// RefreshDropdowns();
		TTSSpeakerEffectSelect_RefreshDropdowns_mB7AA259D607E6BADE3A4AA7B5C7731667B7869EF(__this, NULL);
		// _characterDropdown.OnIndexSelected.AddListener(OnCharacterSelected);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_0 = __this->____characterDropdown_5;
		NullCheck(L_0);
		SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* L_1;
		L_1 = SimpleDropdownList_get_OnIndexSelected_mE6218F6853FFB695DF9F0A50BA17B9FB2F3BC6F9_inline(L_0, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_2 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_2, __this, (intptr_t)((void*)TTSSpeakerEffectSelect_OnCharacterSelected_mBEF5CCF5460E529305A8A90459420C8414A493D5_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_1, L_2, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// _environmentDropdown.OnIndexSelected.AddListener(OnEnvironmentSelected);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_3 = __this->____environmentDropdown_6;
		NullCheck(L_3);
		SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* L_4;
		L_4 = SimpleDropdownList_get_OnIndexSelected_mE6218F6853FFB695DF9F0A50BA17B9FB2F3BC6F9_inline(L_3, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_5 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_5, __this, (intptr_t)((void*)TTSSpeakerEffectSelect_OnEnvironmentSelected_m34FAEBB70FAB35F5A41F1539EC1F174A80A99C9A_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE(L_4, L_5, UnityEvent_1_AddListener_m846E66E06483E90ED947176C8DB2BE23495A93AE_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect_OnDisable_mC862E281190FF478A4626B0095DAC6514490E8BA (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerEffectSelect_OnCharacterSelected_mBEF5CCF5460E529305A8A90459420C8414A493D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerEffectSelect_OnEnvironmentSelected_m34FAEBB70FAB35F5A41F1539EC1F174A80A99C9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_mD81513B3123F689887508A7179B564B88D802BC1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		TTSSpeakerObserver_OnDisable_m8223FD25C61D833215A08D731A2052BB9C3C85C6(__this, NULL);
		// _characterDropdown.OnIndexSelected.RemoveListener(OnCharacterSelected);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_0 = __this->____characterDropdown_5;
		NullCheck(L_0);
		SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* L_1;
		L_1 = SimpleDropdownList_get_OnIndexSelected_mE6218F6853FFB695DF9F0A50BA17B9FB2F3BC6F9_inline(L_0, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_2 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_2, __this, (intptr_t)((void*)TTSSpeakerEffectSelect_OnCharacterSelected_mBEF5CCF5460E529305A8A90459420C8414A493D5_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_mD81513B3123F689887508A7179B564B88D802BC1(L_1, L_2, UnityEvent_1_RemoveListener_mD81513B3123F689887508A7179B564B88D802BC1_RuntimeMethod_var);
		// _environmentDropdown.OnIndexSelected.RemoveListener(OnEnvironmentSelected);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_3 = __this->____environmentDropdown_6;
		NullCheck(L_3);
		SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* L_4;
		L_4 = SimpleDropdownList_get_OnIndexSelected_mE6218F6853FFB695DF9F0A50BA17B9FB2F3BC6F9_inline(L_3, NULL);
		UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60* L_5 = (UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60*)il2cpp_codegen_object_new(UnityAction_1_tA5B7125BEF9EB3092B91D1E2AA64249C44903A60_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction_1__ctor_m48C26C8BF8CF832FAFF2818DC9246BACBC3CCF2B(L_5, __this, (intptr_t)((void*)TTSSpeakerEffectSelect_OnEnvironmentSelected_m34FAEBB70FAB35F5A41F1539EC1F174A80A99C9A_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_1_RemoveListener_mD81513B3123F689887508A7179B564B88D802BC1(L_4, L_5, UnityEvent_1_RemoveListener_mD81513B3123F689887508A7179B564B88D802BC1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::RefreshDropdowns()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect_RefreshDropdowns_mB7AA259D607E6BADE3A4AA7B5C7731667B7869EF (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral203F8D131739E2E64DF6727859AD01C35434C806);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5160044B15138CBCE598E03DF1FF3B68044322F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3267F0CD56D3C5A8F52B40628A4EC5E976FD0A9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Speaker)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0;
		L_0 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// VLog.W("No speaker found");
		VLog_W_m878B376CCE791D170CA238533BBD3778475A8594(_stringLiteral203F8D131739E2E64DF6727859AD01C35434C806, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// RefreshDropdown("character", _characterDropdown, CHARACTER_IDS);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_2 = __this->____characterDropdown_5;
		il2cpp_codegen_runtime_class_init_inline(TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ((TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_StaticFields*)il2cpp_codegen_static_fields_for(TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_il2cpp_TypeInfo_var))->___CHARACTER_IDS_8;
		TTSSpeakerEffectSelect_RefreshDropdown_m3A819523B0586F8B6FC71CBEFE54851644793FA1(__this, _stringLiteralF3267F0CD56D3C5A8F52B40628A4EC5E976FD0A9, L_2, L_3, NULL);
		// RefreshDropdown("environments", _environmentDropdown, ENVIRONMENT_IDS);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_4 = __this->____environmentDropdown_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ((TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_StaticFields*)il2cpp_codegen_static_fields_for(TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_il2cpp_TypeInfo_var))->___ENVIRONMENT_IDS_9;
		TTSSpeakerEffectSelect_RefreshDropdown_m3A819523B0586F8B6FC71CBEFE54851644793FA1(__this, _stringLiteralC5160044B15138CBCE598E03DF1FF3B68044322F, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::RefreshDropdown(System.String,Meta.Voice.Samples.TTSVoices.SimpleDropdownList,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect_RefreshDropdown_m3A819523B0586F8B6FC71CBEFE54851644793FA1 (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, String_t* ___id0, SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* ___dropdown1, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E657498FE6D59EC617FD1A9A43B8842B3AC2A2B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DD4247700D8DA1628CF353DE03AFD2F2B5E72F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral679513EC4E90D625778BAA843C750CC0324EC6CB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!dropdown)
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_0 = ___dropdown1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		// VLog.W($"No {id} dropdown found");
		String_t* L_2 = ___id0;
		String_t* L_3;
		L_3 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral679513EC4E90D625778BAA843C750CC0324EC6CB, L_2, _stringLiteral0E657498FE6D59EC617FD1A9A43B8842B3AC2A2B, NULL);
		VLog_W_m878B376CCE791D170CA238533BBD3778475A8594(L_3, NULL);
		// return;
		return;
	}

IL_001e:
	{
		// if (options == null || options.Length == 0)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = ___options2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = ___options2;
		NullCheck(L_5);
		if ((((RuntimeArray*)L_5)->max_length))
		{
			goto IL_003b;
		}
	}

IL_0025:
	{
		// VLog.W($"No {id} options found");
		String_t* L_6 = ___id0;
		String_t* L_7;
		L_7 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral679513EC4E90D625778BAA843C750CC0324EC6CB, L_6, _stringLiteral1DD4247700D8DA1628CF353DE03AFD2F2B5E72F0, NULL);
		VLog_W_m878B376CCE791D170CA238533BBD3778475A8594(L_7, NULL);
		// return;
		return;
	}

IL_003b:
	{
		// dropdown.LoadDropdown(options);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_8 = ___dropdown1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = ___options2;
		NullCheck(L_8);
		SimpleDropdownList_LoadDropdown_m91E693F7D95E40E7C9B9DA2373ABA1B8DD5D66C3(L_8, L_9, NULL);
		// dropdown.SelectOption(0);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_10 = ___dropdown1;
		NullCheck(L_10);
		SimpleDropdownList_SelectOption_mA5F53939B401FA0B647B3E90C6587B9EB98BB350(L_10, 0, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::OnCharacterSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect_OnCharacterSelected_mBEF5CCF5460E529305A8A90459420C8414A493D5 (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, int32_t ___newIndex0, const RuntimeMethod* method) 
{
	{
		// RefreshSsml();
		TTSSpeakerEffectSelect_RefreshSsml_mFD13A96EB9CFBB55BD4218740C1DA48147060752(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::OnEnvironmentSelected(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect_OnEnvironmentSelected_m34FAEBB70FAB35F5A41F1539EC1F174A80A99C9A (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, int32_t ___newIndex0, const RuntimeMethod* method) 
{
	{
		// RefreshSsml();
		TTSSpeakerEffectSelect_RefreshSsml_mFD13A96EB9CFBB55BD4218740C1DA48147060752(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::RefreshSsml()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect_RefreshSsml_mFD13A96EB9CFBB55BD4218740C1DA48147060752 (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral203F8D131739E2E64DF6727859AD01C35434C806);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37F1A9A7FE05682454D09EFCFDFD609CC741FDF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6DD5ADB1FE5A21684D5BE097E8A28132252DACE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2F3971B635F7A2E2F1CBE7E1E410007CC664C28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD9902D77E29AEEC96CA66C59F05A832FB1C2A3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE03532E38678A4177DA43BAF386D35BC5FD878C9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2BFE99CEEAFC3185FB96F1D7A879D72BD0EB5D2);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (!Speaker)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0;
		L_0 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// VLog.W("No speaker found");
		VLog_W_m878B376CCE791D170CA238533BBD3778475A8594(_stringLiteral203F8D131739E2E64DF6727859AD01C35434C806, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// StringBuilder prepend = new StringBuilder();
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		V_0 = L_2;
		// StringBuilder append = new StringBuilder();
		StringBuilder_t* L_3 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_3, NULL);
		V_1 = L_3;
		// prepend.Append("<speak>");
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteral37F1A9A7FE05682454D09EFCFDFD609CC741FDF6, NULL);
		// append.Append("</speak>");
		StringBuilder_t* L_6 = V_1;
		NullCheck(L_6);
		StringBuilder_t* L_7;
		L_7 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_6, _stringLiteralA6DD5ADB1FE5A21684D5BE097E8A28132252DACE, NULL);
		// string characterId = _characterDropdown.SelectedOption;
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_8 = __this->____characterDropdown_5;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = SimpleDropdownList_get_SelectedOption_m3A8660C621D90A0C0FC1A840796ADE8B496A013B(L_8, NULL);
		V_2 = L_9;
		// if (string.Equals(characterId, NONE_ID))
		String_t* L_10 = V_2;
		bool L_11;
		L_11 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(L_10, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108, NULL);
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		// characterId = null;
		V_2 = (String_t*)NULL;
	}

IL_0057:
	{
		// string environmentId = _environmentDropdown.SelectedOption;
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_12 = __this->____environmentDropdown_6;
		NullCheck(L_12);
		String_t* L_13;
		L_13 = SimpleDropdownList_get_SelectedOption_m3A8660C621D90A0C0FC1A840796ADE8B496A013B(L_12, NULL);
		V_3 = L_13;
		// if (string.Equals(environmentId, NONE_ID))
		String_t* L_14 = V_3;
		bool L_15;
		L_15 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(L_14, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108, NULL);
		if (!L_15)
		{
			goto IL_0072;
		}
	}
	{
		// environmentId = null;
		V_3 = (String_t*)NULL;
	}

IL_0072:
	{
		// bool hasCharacter = !string.IsNullOrEmpty(characterId);
		String_t* L_16 = V_2;
		bool L_17;
		L_17 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_16, NULL);
		V_4 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		// bool hasEnvironment = !string.IsNullOrEmpty(environmentId);
		String_t* L_18 = V_3;
		bool L_19;
		L_19 = String_IsNullOrEmpty_m54CF0907E7C4F3AFB2E796A13DC751ECBB8DB64A(L_18, NULL);
		V_5 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		// if (hasCharacter || hasEnvironment)
		bool L_20 = V_4;
		bool L_21 = V_5;
		if (!((int32_t)((int32_t)L_20|(int32_t)L_21)))
		{
			goto IL_00f4;
		}
	}
	{
		// prepend.Append("<sfx");
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteralF2BFE99CEEAFC3185FB96F1D7A879D72BD0EB5D2, NULL);
		// append.Insert(0, "</sfx>");
		StringBuilder_t* L_24 = V_1;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Insert_mEA426100381DD65FB6A891BA28B5F1208BEDDD29(L_24, 0, _stringLiteralDD9902D77E29AEEC96CA66C59F05A832FB1C2A3D, NULL);
		// if (hasCharacter)
		bool L_26 = V_4;
		if (!L_26)
		{
			goto IL_00c8;
		}
	}
	{
		// prepend.Append($" character=\"{characterId.ToLower()}\"");
		StringBuilder_t* L_27 = V_0;
		String_t* L_28 = V_2;
		NullCheck(L_28);
		String_t* L_29;
		L_29 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_28, NULL);
		String_t* L_30;
		L_30 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralE03532E38678A4177DA43BAF386D35BC5FD878C9, L_29, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		NullCheck(L_27);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_27, L_30, NULL);
	}

IL_00c8:
	{
		// if (hasEnvironment)
		bool L_32 = V_5;
		if (!L_32)
		{
			goto IL_00e8;
		}
	}
	{
		// prepend.Append($" environment=\"{environmentId.ToLower()}\"");
		StringBuilder_t* L_33 = V_0;
		String_t* L_34 = V_3;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = String_ToLower_m6191ABA3DC514ED47C10BDA23FD0DDCEAE7ACFBD(L_34, NULL);
		String_t* L_36;
		L_36 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralC2F3971B635F7A2E2F1CBE7E1E410007CC664C28, L_35, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, NULL);
		NullCheck(L_33);
		StringBuilder_t* L_37;
		L_37 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_33, L_36, NULL);
	}

IL_00e8:
	{
		// prepend.Append(">");
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_38, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
	}

IL_00f4:
	{
		// Speaker.PrependedText = prepend.ToString();
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_40;
		L_40 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		StringBuilder_t* L_41 = V_0;
		NullCheck(L_41);
		String_t* L_42;
		L_42 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_41);
		NullCheck(L_40);
		L_40->___PrependedText_5 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&L_40->___PrependedText_5), (void*)L_42);
		// Speaker.AppendedText = append.ToString();
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_43;
		L_43 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		StringBuilder_t* L_44 = V_1;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_44);
		NullCheck(L_43);
		L_43->___AppendedText_6 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&L_43->___AppendedText_6), (void*)L_45);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect__ctor_m80AF467E6579C47D680E1EA9D48886182F215D5D (TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F* __this, const RuntimeMethod* method) 
{
	{
		TTSSpeakerObserver__ctor_m574D474AF5D2E22801DB44ADFB67675619CE56F2(__this, NULL);
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerEffectSelect__cctor_m5D935D53C74FBC507B4D21ABAF86F5736F90B59F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral21F757F14E42FBF08EE929CA9553D0A4D99D872F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F22F766AC65E7365424282740A30377DC4E9373);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57D3ED8BE577695284D8CC64B5963CE729A2AC73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral882642A946376317C440C0D2EB39A525B3661A3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F452B16FE033167C9440B8AD90C5CEDC621CE4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D2DD953E76E3BB7861D88804220B987EC03943A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3AD182841E93DDA05D60317291F6D8E110DB6FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1DC9E9FEC9B79CC7D646A53828FF444E8C5FD7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF6793CB3E3C8D71301211AFD6561E98BE1F3914);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly string[] CHARACTER_IDS = new [] {NONE_ID, "CHIPMUNK", "MONSTER", "ROBOT", "DAEMON"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral882642A946376317C440C0D2EB39A525B3661A3E);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral882642A946376317C440C0D2EB39A525B3661A3E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral4F22F766AC65E7365424282740A30377DC4E9373);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4F22F766AC65E7365424282740A30377DC4E9373);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralFF6793CB3E3C8D71301211AFD6561E98BE1F3914);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralFF6793CB3E3C8D71301211AFD6561E98BE1F3914);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral9D2DD953E76E3BB7861D88804220B987EC03943A);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral9D2DD953E76E3BB7861D88804220B987EC03943A);
		((TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_StaticFields*)il2cpp_codegen_static_fields_for(TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_il2cpp_TypeInfo_var))->___CHARACTER_IDS_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_StaticFields*)il2cpp_codegen_static_fields_for(TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_il2cpp_TypeInfo_var))->___CHARACTER_IDS_8), (void*)L_5);
		// private static readonly string[] ENVIRONMENT_IDS = new [] {NONE_ID, "REVERB", "ROOM", "PHONE", "PA", "CATHEDRAL"};
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD4FF15F0C367172440AA7A961D856E09E93C8108);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralF1DC9E9FEC9B79CC7D646A53828FF444E8C5FD7D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralF1DC9E9FEC9B79CC7D646A53828FF444E8C5FD7D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral21F757F14E42FBF08EE929CA9553D0A4D99D872F);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral21F757F14E42FBF08EE929CA9553D0A4D99D872F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral8F452B16FE033167C9440B8AD90C5CEDC621CE4A);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral8F452B16FE033167C9440B8AD90C5CEDC621CE4A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral57D3ED8BE577695284D8CC64B5963CE729A2AC73);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral57D3ED8BE577695284D8CC64B5963CE729A2AC73);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralA3AD182841E93DDA05D60317291F6D8E110DB6FD);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralA3AD182841E93DDA05D60317291F6D8E110DB6FD);
		((TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_StaticFields*)il2cpp_codegen_static_fields_for(TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_il2cpp_TypeInfo_var))->___ENVIRONMENT_IDS_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&((TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_StaticFields*)il2cpp_codegen_static_fields_for(TTSSpeakerEffectSelect_tE268D4B50EC87B6176838C2F7038348CDD38D10F_il2cpp_TypeInfo_var))->___ENVIRONMENT_IDS_9), (void*)L_12);
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
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_OnEnable_mEFD630E173B128345FB6383CDB5CD34E74867B8D (TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerInput_SpeakClick_mD3D0235CB17AD239B957A0C55B927CF144EF697E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerInput_StopClick_mE666C6B5F891B0EF82AADBF24185E0AD0A453C63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RefreshButtons();
		TTSSpeakerInput_RefreshButtons_mDCD62195B23D2A7F1EA7EAE8B4256D121D309C19(__this, NULL);
		// _stopButton.onClick.AddListener(StopClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____stopButton_6;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)TTSSpeakerInput_StopClick_mE666C6B5F891B0EF82AADBF24185E0AD0A453C63_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		// _speakButton.onClick.AddListener(SpeakClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____speakButton_7;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)TTSSpeakerInput_SpeakClick_mD3D0235CB17AD239B957A0C55B927CF144EF697E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::StopClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_StopClick_mE666C6B5F891B0EF82AADBF24185E0AD0A453C63 (TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1* __this, const RuntimeMethod* method) 
{
	{
		// private void StopClick() => _speaker.Stop();
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0 = __this->____speaker_4;
		NullCheck(L_0);
		VirtualActionInvoker0::Invoke(19 /* System.Void Meta.WitAi.TTS.Utilities.TTSSpeaker::Stop() */, L_0);
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::SpeakClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_SpeakClick_mD3D0235CB17AD239B957A0C55B927CF144EF697E (TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// if (_queueButton != null && _queueButton.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->____queueButton_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0063;
		}
	}
	{
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->____queueButton_8;
		NullCheck(L_2);
		bool L_3;
		L_3 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0063;
		}
	}
	{
		// _speaker.SpeakQueued(FormatText(_input.text));
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_4 = __this->____speaker_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_5 = __this->____input_5;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_5, NULL);
		String_t* L_7;
		L_7 = TTSSpeakerInput_FormatText_m0E76262A3E12FF0351B49261A92216B25796734A(__this, L_6, NULL);
		NullCheck(L_4);
		TTSSpeaker_SpeakQueued_mD0D8D308BD6058209262E1F6A444A9D173BBB7AC(L_4, L_7, NULL);
		// foreach (var text in _queuedText)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = __this->____queuedText_10;
		V_0 = L_8;
		V_1 = 0;
		goto IL_005c;
	}

IL_0042:
	{
		// foreach (var text in _queuedText)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_2 = L_12;
		// _speaker.SpeakQueued(FormatText(text));
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_13 = __this->____speaker_4;
		String_t* L_14 = V_2;
		String_t* L_15;
		L_15 = TTSSpeakerInput_FormatText_m0E76262A3E12FF0351B49261A92216B25796734A(__this, L_14, NULL);
		NullCheck(L_13);
		TTSSpeaker_SpeakQueued_mD0D8D308BD6058209262E1F6A444A9D173BBB7AC(L_13, L_15, NULL);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005c:
	{
		// foreach (var text in _queuedText)
		int32_t L_17 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0042;
		}
	}
	{
		return;
	}

IL_0063:
	{
		// _speaker.Speak(FormatText(_input.text));
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_19 = __this->____speaker_4;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_20 = __this->____input_5;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline(L_20, NULL);
		String_t* L_22;
		L_22 = TTSSpeakerInput_FormatText_m0E76262A3E12FF0351B49261A92216B25796734A(__this, L_21, NULL);
		NullCheck(L_19);
		TTSSpeaker_Speak_m0ABA1A70FAF37002E979AF866EDB7BE48C79CACD(L_19, L_22, NULL);
		// }
		return;
	}
}
// System.String Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::FormatText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TTSSpeakerInput_FormatText_m0E76262A3E12FF0351B49261A92216B25796734A (TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	String_t* V_2 = NULL;
	{
		// string result = text;
		String_t* L_0 = ___text0;
		V_0 = L_0;
		// if (result.Contains(_dateId))
		String_t* L_1 = V_0;
		String_t* L_2 = __this->____dateId_9;
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		// DateTime now = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_4;
		L_4 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_1 = L_4;
		// string dateString = $"{now.ToLongDateString()} at {now.ToShortTimeString()}";
		String_t* L_5;
		L_5 = DateTime_ToLongDateString_m67CEA1EFB9FB11CC683C3779FECDD815EB94EF2C((&V_1), NULL);
		String_t* L_6;
		L_6 = DateTime_ToShortTimeString_m39FA3D20BF7F8EC6D85FBFB0254D960B7A60160F((&V_1), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_5, _stringLiteral8E9055ADBCF112D9A1559D59E64A664BCE8DCAD1, L_6, NULL);
		V_2 = L_7;
		// result = text.Replace(_dateId, dateString);
		String_t* L_8 = ___text0;
		String_t* L_9 = __this->____dateId_9;
		String_t* L_10 = V_2;
		NullCheck(L_8);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_8, L_9, L_10, NULL);
		V_0 = L_11;
	}

IL_003d:
	{
		// return result;
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_OnDisable_m618C077A54CE5805A9E5F44EFE1C9F4646ECFF44 (TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerInput_SpeakClick_mD3D0235CB17AD239B957A0C55B927CF144EF697E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerInput_StopClick_mE666C6B5F891B0EF82AADBF24185E0AD0A453C63_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _stopButton.onClick.RemoveListener(StopClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____stopButton_6;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)TTSSpeakerInput_StopClick_mE666C6B5F891B0EF82AADBF24185E0AD0A453C63_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		// _speakButton.onClick.RemoveListener(SpeakClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_3 = __this->____speakButton_7;
		NullCheck(L_3);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_4;
		L_4 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)TTSSpeakerInput_SpeakClick_mD3D0235CB17AD239B957A0C55B927CF144EF697E_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_Update_m9DCBC9878E5B737B0373250B1A205FC4327C47C1 (TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral29DD95531FCE94DCE288DF8BD4349F991A445F02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77235CB916AB2431DB5346DEF4FF7A991FCFF985);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!string.Equals(_voice, _speaker.presetVoiceID))
		String_t* L_0 = __this->____voice_11;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_1 = __this->____speaker_4;
		NullCheck(L_1);
		String_t* L_2 = L_1->___presetVoiceID_10;
		bool L_3;
		L_3 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(L_0, L_2, NULL);
		if (L_3)
		{
			goto IL_0053;
		}
	}
	{
		// _voice = _speaker.presetVoiceID;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_4 = __this->____speaker_4;
		NullCheck(L_4);
		String_t* L_5 = L_4->___presetVoiceID_10;
		__this->____voice_11 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____voice_11), (void*)L_5);
		// _input.placeholder.GetComponent<Text>().text = $"Write something to say in {_voice}'s voice";
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_6 = __this->____input_5;
		NullCheck(L_6);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_7;
		L_7 = InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline(L_6, NULL);
		NullCheck(L_7);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8;
		L_8 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_7, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		String_t* L_9 = __this->____voice_11;
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral77235CB916AB2431DB5346DEF4FF7A991FCFF985, L_9, _stringLiteral29DD95531FCE94DCE288DF8BD4349F991A445F02, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_10);
	}

IL_0053:
	{
		// if (_loading != _speaker.IsLoading)
		bool L_11 = __this->____loading_12;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_12 = __this->____speaker_4;
		NullCheck(L_12);
		bool L_13;
		L_13 = TTSSpeaker_get_IsLoading_m4B50BF1337FACC7883D39285F73921155CDC5203(L_12, NULL);
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_007d;
		}
	}
	{
		// _loading = _speaker.IsLoading;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_14 = __this->____speaker_4;
		NullCheck(L_14);
		bool L_15;
		L_15 = TTSSpeaker_get_IsLoading_m4B50BF1337FACC7883D39285F73921155CDC5203(L_14, NULL);
		__this->____loading_12 = L_15;
		// RefreshButtons();
		TTSSpeakerInput_RefreshButtons_mDCD62195B23D2A7F1EA7EAE8B4256D121D309C19(__this, NULL);
	}

IL_007d:
	{
		// if (_speaking != _speaker.IsSpeaking)
		bool L_16 = __this->____speaking_13;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_17 = __this->____speaker_4;
		NullCheck(L_17);
		bool L_18;
		L_18 = TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED(L_17, NULL);
		if ((((int32_t)L_16) == ((int32_t)L_18)))
		{
			goto IL_00a7;
		}
	}
	{
		// _speaking = _speaker.IsSpeaking;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_19 = __this->____speaker_4;
		NullCheck(L_19);
		bool L_20;
		L_20 = TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED(L_19, NULL);
		__this->____speaking_13 = L_20;
		// RefreshButtons();
		TTSSpeakerInput_RefreshButtons_mDCD62195B23D2A7F1EA7EAE8B4256D121D309C19(__this, NULL);
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::RefreshButtons()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput_RefreshButtons_mDCD62195B23D2A7F1EA7EAE8B4256D121D309C19 (TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1* __this, const RuntimeMethod* method) 
{
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B2_0 = NULL;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* G_B3_1 = NULL;
	{
		// _stopButton.interactable = _loading || _speaking;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____stopButton_6;
		bool L_1 = __this->____loading_12;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B2_0 = L_0;
			goto IL_0016;
		}
	}
	{
		bool L_2 = __this->____speaking_13;
		G_B3_0 = ((int32_t)(L_2));
		G_B3_1 = G_B1_0;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(G_B3_1, (bool)G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerInput__ctor_m207ECB64B0B90827BA7650A0C0196C91D9C59B73 (TTSSpeakerInput_tA5E238277E459E15B2E055959F90873CDB7D64F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0F64BF80841FAD774677819BC76FBBF8CF6B3CE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] private string _dateId = "[DATE]";
		__this->____dateId_9 = _stringLiteralE0F64BF80841FAD774677819BC76FBBF8CF6B3CE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dateId_9), (void*)_stringLiteralE0F64BF80841FAD774677819BC76FBBF8CF6B3CE);
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
// Meta.WitAi.TTS.Utilities.TTSSpeaker Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::get_Speaker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeaker Speaker => _speaker;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0 = __this->____speaker_4;
		return L_0;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_Awake_m6BC36A41DC69BB913953BE26D2EA7E4EF17C4FF4 (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C_m9BC08D961B7518884DCDED31193371C4A6E80C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_speaker == null)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0 = __this->____speaker_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// _speaker = gameObject.GetComponentInChildren<TTSSpeaker>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_3;
		L_3 = GameObject_GetComponentInChildren_TisTTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C_m9BC08D961B7518884DCDED31193371C4A6E80C7C(L_2, GameObject_GetComponentInChildren_TisTTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C_m9BC08D961B7518884DCDED31193371C4A6E80C7C_RuntimeMethod_var);
		__this->____speaker_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____speaker_4), (void*)L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnEnable_m67A866C6E03A2551CB684228F32E442943470B1D (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_t7698A32015283934D80453E38C30F692144896EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_AddListener_m0A90A9E0FA1EF9AFF8EAFF74E89B0A118A761DB9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_speaker == null)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0 = __this->____speaker_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
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
		// _speaker.Events.OnPlaybackQueueBegin.AddListener(OnPlaybackQueueBegin);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_2 = __this->____speaker_4;
		NullCheck(L_2);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_3;
		L_3 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_2, NULL);
		NullCheck(L_3);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4;
		L_4 = TTSSpeakerEvents_get_OnPlaybackQueueBegin_m9A821A546C84C87619D861C1EB14F68BF51FE668_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_4);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_4, L_5, NULL);
		// _speaker.Events.OnPlaybackQueueComplete.AddListener(OnPlaybackQueueComplete);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_6 = __this->____speaker_4;
		NullCheck(L_6);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_7;
		L_7 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_6, NULL);
		NullCheck(L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8;
		L_8 = TTSSpeakerEvents_get_OnPlaybackQueueComplete_m49DBBD8760B392FE4FA99584CCA319C8075A78F9_inline(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		NullCheck(L_8);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_8, L_9, NULL);
		// _speaker.Events.OnLoadBegin.AddListener(OnLoadBegin);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_10 = __this->____speaker_4;
		NullCheck(L_10);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_11;
		L_11 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_10, NULL);
		NullCheck(L_11);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_12;
		L_12 = TTSSpeakerClipEvents_get_OnLoadBegin_m00ECA69A4107190599DC2F4602C7C3CE82F4AB1E_inline(L_11, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_13 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_13, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		NullCheck(L_12);
		UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E(L_12, L_13, UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E_RuntimeMethod_var);
		// _speaker.Events.OnLoadAbort.AddListener(OnLoadAbort);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_14 = __this->____speaker_4;
		NullCheck(L_14);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_15;
		L_15 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_14, NULL);
		NullCheck(L_15);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_16;
		L_16 = TTSSpeakerClipEvents_get_OnLoadAbort_m9F721A78555178436EE909A408DC0AA2FF728CDB_inline(L_15, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_17 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_17, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 10)), NULL);
		NullCheck(L_16);
		UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E(L_16, L_17, UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E_RuntimeMethod_var);
		// _speaker.Events.OnLoadFailed.AddListener(OnLoadFailed);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_18 = __this->____speaker_4;
		NullCheck(L_18);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_19;
		L_19 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_18, NULL);
		NullCheck(L_19);
		TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* L_20;
		L_20 = TTSSpeakerClipEvents_get_OnLoadFailed_m482A9ECDFC1A89B032B1528A1D4284293C38BEA4_inline(L_19, NULL);
		UnityAction_3_t7698A32015283934D80453E38C30F692144896EE* L_21 = (UnityAction_3_t7698A32015283934D80453E38C30F692144896EE*)il2cpp_codegen_object_new(UnityAction_3_t7698A32015283934D80453E38C30F692144896EE_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction_3__ctor_m0A23D0C0CA3CD138205DC28A0A0C5996D8617A9C(L_21, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 11)), NULL);
		NullCheck(L_20);
		UnityEvent_3_AddListener_m0A90A9E0FA1EF9AFF8EAFF74E89B0A118A761DB9(L_20, L_21, UnityEvent_3_AddListener_m0A90A9E0FA1EF9AFF8EAFF74E89B0A118A761DB9_RuntimeMethod_var);
		// _speaker.Events.OnLoadSuccess.AddListener(OnLoadSuccess);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_22 = __this->____speaker_4;
		NullCheck(L_22);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_23;
		L_23 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_22, NULL);
		NullCheck(L_23);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_24;
		L_24 = TTSSpeakerClipEvents_get_OnLoadSuccess_mAC8C73EAE0A405426ADF54B9444D7D1337A9A8B7_inline(L_23, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_25 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_25, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 12)), NULL);
		NullCheck(L_24);
		UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E(L_24, L_25, UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E_RuntimeMethod_var);
		// _speaker.Events.OnPlaybackReady.AddListener(OnPlaybackReady);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_26 = __this->____speaker_4;
		NullCheck(L_26);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_27;
		L_27 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_26, NULL);
		NullCheck(L_27);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_28;
		L_28 = TTSSpeakerClipEvents_get_OnPlaybackReady_mB9DF72BEEE97937DDDD261945DD7C5DE9DCD83A0_inline(L_27, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_29 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_29, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		NullCheck(L_28);
		UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E(L_28, L_29, UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E_RuntimeMethod_var);
		// _speaker.Events.OnPlaybackStart.AddListener(OnPlaybackStart);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_30 = __this->____speaker_4;
		NullCheck(L_30);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_31;
		L_31 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_30, NULL);
		NullCheck(L_31);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_32;
		L_32 = TTSSpeakerClipEvents_get_OnPlaybackStart_m0E4327A77B8D6167579A23652AD7768212EEBD02_inline(L_31, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_33 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_33, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 14)), NULL);
		NullCheck(L_32);
		UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E(L_32, L_33, UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E_RuntimeMethod_var);
		// _speaker.Events.OnPlaybackCancelled.AddListener(OnPlaybackCancelled);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_34 = __this->____speaker_4;
		NullCheck(L_34);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_35;
		L_35 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_34, NULL);
		NullCheck(L_35);
		TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* L_36;
		L_36 = TTSSpeakerClipEvents_get_OnPlaybackCancelled_mDA23D82C97696B8A4749E0910037C2987A6F6716_inline(L_35, NULL);
		UnityAction_3_t7698A32015283934D80453E38C30F692144896EE* L_37 = (UnityAction_3_t7698A32015283934D80453E38C30F692144896EE*)il2cpp_codegen_object_new(UnityAction_3_t7698A32015283934D80453E38C30F692144896EE_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnityAction_3__ctor_m0A23D0C0CA3CD138205DC28A0A0C5996D8617A9C(L_37, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 15)), NULL);
		NullCheck(L_36);
		UnityEvent_3_AddListener_m0A90A9E0FA1EF9AFF8EAFF74E89B0A118A761DB9(L_36, L_37, UnityEvent_3_AddListener_m0A90A9E0FA1EF9AFF8EAFF74E89B0A118A761DB9_RuntimeMethod_var);
		// _speaker.Events.OnPlaybackComplete.AddListener(OnPlaybackComplete);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_38 = __this->____speaker_4;
		NullCheck(L_38);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_39;
		L_39 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_38, NULL);
		NullCheck(L_39);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_40;
		L_40 = TTSSpeakerClipEvents_get_OnPlaybackComplete_m5C9CF1AD6EAEAE4358AC003AA8554BA118061D7B_inline(L_39, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_41 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_41, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 16)), NULL);
		NullCheck(L_40);
		UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E(L_40, L_41, UnityEvent_2_AddListener_m94A8D1439EF9E2AF5354A01B8C7CC95DEA82B65E_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnDisable_m8223FD25C61D833215A08D731A2052BB9C3C85C6 (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_t7698A32015283934D80453E38C30F692144896EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_3_RemoveListener_m5F6AFF91C1A30E809C301299664292AD7F19906B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_speaker == null)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0 = __this->____speaker_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
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
		// _speaker.Events.OnPlaybackQueueBegin.RemoveListener(OnPlaybackQueueBegin);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_2 = __this->____speaker_4;
		NullCheck(L_2);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_3;
		L_3 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_2, NULL);
		NullCheck(L_3);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_4;
		L_4 = TTSSpeakerEvents_get_OnPlaybackQueueBegin_m9A821A546C84C87619D861C1EB14F68BF51FE668_inline(L_3, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 7)), NULL);
		NullCheck(L_4);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_4, L_5, NULL);
		// _speaker.Events.OnPlaybackQueueComplete.RemoveListener(OnPlaybackQueueComplete);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_6 = __this->____speaker_4;
		NullCheck(L_6);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_7;
		L_7 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_6, NULL);
		NullCheck(L_7);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_8;
		L_8 = TTSSpeakerEvents_get_OnPlaybackQueueComplete_m49DBBD8760B392FE4FA99584CCA319C8075A78F9_inline(L_7, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 8)), NULL);
		NullCheck(L_8);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_8, L_9, NULL);
		// _speaker.Events.OnLoadBegin.RemoveListener(OnLoadBegin);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_10 = __this->____speaker_4;
		NullCheck(L_10);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_11;
		L_11 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_10, NULL);
		NullCheck(L_11);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_12;
		L_12 = TTSSpeakerClipEvents_get_OnLoadBegin_m00ECA69A4107190599DC2F4602C7C3CE82F4AB1E_inline(L_11, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_13 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_13, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 9)), NULL);
		NullCheck(L_12);
		UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115(L_12, L_13, UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115_RuntimeMethod_var);
		// _speaker.Events.OnLoadAbort.RemoveListener(OnLoadAbort);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_14 = __this->____speaker_4;
		NullCheck(L_14);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_15;
		L_15 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_14, NULL);
		NullCheck(L_15);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_16;
		L_16 = TTSSpeakerClipEvents_get_OnLoadAbort_m9F721A78555178436EE909A408DC0AA2FF728CDB_inline(L_15, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_17 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_17, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 10)), NULL);
		NullCheck(L_16);
		UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115(L_16, L_17, UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115_RuntimeMethod_var);
		// _speaker.Events.OnLoadFailed.RemoveListener(OnLoadFailed);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_18 = __this->____speaker_4;
		NullCheck(L_18);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_19;
		L_19 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_18, NULL);
		NullCheck(L_19);
		TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* L_20;
		L_20 = TTSSpeakerClipEvents_get_OnLoadFailed_m482A9ECDFC1A89B032B1528A1D4284293C38BEA4_inline(L_19, NULL);
		UnityAction_3_t7698A32015283934D80453E38C30F692144896EE* L_21 = (UnityAction_3_t7698A32015283934D80453E38C30F692144896EE*)il2cpp_codegen_object_new(UnityAction_3_t7698A32015283934D80453E38C30F692144896EE_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		UnityAction_3__ctor_m0A23D0C0CA3CD138205DC28A0A0C5996D8617A9C(L_21, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 11)), NULL);
		NullCheck(L_20);
		UnityEvent_3_RemoveListener_m5F6AFF91C1A30E809C301299664292AD7F19906B(L_20, L_21, UnityEvent_3_RemoveListener_m5F6AFF91C1A30E809C301299664292AD7F19906B_RuntimeMethod_var);
		// _speaker.Events.OnLoadSuccess.RemoveListener(OnLoadSuccess);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_22 = __this->____speaker_4;
		NullCheck(L_22);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_23;
		L_23 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_22, NULL);
		NullCheck(L_23);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_24;
		L_24 = TTSSpeakerClipEvents_get_OnLoadSuccess_mAC8C73EAE0A405426ADF54B9444D7D1337A9A8B7_inline(L_23, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_25 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_25, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 12)), NULL);
		NullCheck(L_24);
		UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115(L_24, L_25, UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115_RuntimeMethod_var);
		// _speaker.Events.OnPlaybackReady.RemoveListener(OnPlaybackReady);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_26 = __this->____speaker_4;
		NullCheck(L_26);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_27;
		L_27 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_26, NULL);
		NullCheck(L_27);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_28;
		L_28 = TTSSpeakerClipEvents_get_OnPlaybackReady_mB9DF72BEEE97937DDDD261945DD7C5DE9DCD83A0_inline(L_27, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_29 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_29, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		NullCheck(L_28);
		UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115(L_28, L_29, UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115_RuntimeMethod_var);
		// _speaker.Events.OnPlaybackStart.RemoveListener(OnPlaybackStart);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_30 = __this->____speaker_4;
		NullCheck(L_30);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_31;
		L_31 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_30, NULL);
		NullCheck(L_31);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_32;
		L_32 = TTSSpeakerClipEvents_get_OnPlaybackStart_m0E4327A77B8D6167579A23652AD7768212EEBD02_inline(L_31, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_33 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_33, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 14)), NULL);
		NullCheck(L_32);
		UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115(L_32, L_33, UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115_RuntimeMethod_var);
		// _speaker.Events.OnPlaybackCancelled.RemoveListener(OnPlaybackCancelled);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_34 = __this->____speaker_4;
		NullCheck(L_34);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_35;
		L_35 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_34, NULL);
		NullCheck(L_35);
		TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* L_36;
		L_36 = TTSSpeakerClipEvents_get_OnPlaybackCancelled_mDA23D82C97696B8A4749E0910037C2987A6F6716_inline(L_35, NULL);
		UnityAction_3_t7698A32015283934D80453E38C30F692144896EE* L_37 = (UnityAction_3_t7698A32015283934D80453E38C30F692144896EE*)il2cpp_codegen_object_new(UnityAction_3_t7698A32015283934D80453E38C30F692144896EE_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		UnityAction_3__ctor_m0A23D0C0CA3CD138205DC28A0A0C5996D8617A9C(L_37, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 15)), NULL);
		NullCheck(L_36);
		UnityEvent_3_RemoveListener_m5F6AFF91C1A30E809C301299664292AD7F19906B(L_36, L_37, UnityEvent_3_RemoveListener_m5F6AFF91C1A30E809C301299664292AD7F19906B_RuntimeMethod_var);
		// _speaker.Events.OnPlaybackComplete.RemoveListener(OnPlaybackComplete);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_38 = __this->____speaker_4;
		NullCheck(L_38);
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_39;
		L_39 = TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline(L_38, NULL);
		NullCheck(L_39);
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_40;
		L_40 = TTSSpeakerClipEvents_get_OnPlaybackComplete_m5C9CF1AD6EAEAE4358AC003AA8554BA118061D7B_inline(L_39, NULL);
		UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5* L_41 = (UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5*)il2cpp_codegen_object_new(UnityAction_2_tFAC370B00555947EB691E2094E07BCB2E40FE7B5_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		UnityAction_2__ctor_m923B527A8738FB03CDBDB9E48A669BFF45F94C11(L_41, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 16)), NULL);
		NullCheck(L_40);
		UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115(L_40, L_41, UnityEvent_2_RemoveListener_m944D815EAD193E3E52847E33432AF8224B8D8115_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnPlaybackQueueBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnPlaybackQueueBegin_m210FF9BBD5867DA4FCA71ECE9CA5CC39034C7B7A (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnPlaybackQueueComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnPlaybackQueueComplete_m5D25D2FE1ADE22BF128FE222588BAC3FB68FA000 (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnLoadBegin(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnLoadBegin_m45C7EFF16DF4BDD0968AB541ACF3528BCAC5C75B (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnLoadAbort(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnLoadAbort_m9D61C103666B8FBC17681962B0FC822E65A9F4D0 (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnLoadFailed(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnLoadFailed_m059ED6306833182EE2976CF7BE9B750A63B1C45B (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, String_t* ___error2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnLoadSuccess(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnLoadSuccess_m0733CF81BC660CE935BB0DCA7DAA7C1B47D6ABA7 (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnPlaybackReady(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnPlaybackReady_m4584FEA199AB41E563AC629DBE52C668C55D44CB (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnPlaybackStart(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnPlaybackStart_m6245FC7824C3B6DF18A150EC14A3007ADEB05DDC (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnPlaybackCancelled(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnPlaybackCancelled_m36C13BC61EF47129B9339BE8CF197DBE56CF5B5D (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, String_t* ___reason2, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::OnPlaybackComplete(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver_OnPlaybackComplete_mFB1085BF84BC0019DC5B710451E0643277F1C68B (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerObserver__ctor_m574D474AF5D2E22801DB44ADFB67675619CE56F2 (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) 
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
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_OnEnable_m1D8012D097D0B5FABBFCFE160A624C02EBA92F01 (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, const RuntimeMethod* method) 
{
	{
		// base.OnEnable();
		TTSSpeakerObserver_OnEnable_m67A866C6E03A2551CB684228F32E442943470B1D(__this, NULL);
		// RefreshLabel();
		TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::OnLoadBegin(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_OnLoadBegin_m8D9C3CB1DA85C49AF676F1E2F853B02A2C5BB9AC (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// RefreshLabel();
		TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::OnLoadAbort(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_OnLoadAbort_m540274D22C07E0E9B97644114E64BEDCA342A0BD (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// RefreshLabel();
		TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::OnLoadFailed(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_OnLoadFailed_mFD9EF529508387015819E76837EEFBD2F3024440 (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, String_t* ___error2, const RuntimeMethod* method) 
{
	{
		// RefreshLabel();
		TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::OnLoadSuccess(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_OnLoadSuccess_m20CF6CA569FDDC73D6ED574E3718021E122F2B97 (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// RefreshLabel();
		TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::OnPlaybackReady(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_OnPlaybackReady_mFDCAF19CE1EFA353E815128275B0AE36C1EABEAB (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// RefreshLabel();
		TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::OnPlaybackStart(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_OnPlaybackStart_m9CB6806F94590BE419125FBB8E0D9DB82173CF73 (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// RefreshLabel();
		TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::OnPlaybackCancelled(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_OnPlaybackCancelled_mAC94A89A458E46DA948C7BDC42A1270AF519FCFB (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, String_t* ___reason2, const RuntimeMethod* method) 
{
	{
		// RefreshLabel();
		TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::OnPlaybackComplete(Meta.WitAi.TTS.Utilities.TTSSpeaker,Meta.WitAi.TTS.Data.TTSClipData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_OnPlaybackComplete_m11C5EACD8E415F3D0AB6CE45E13EEAC1D0BDDE6B (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* ___speaker0, TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* ___clipData1, const RuntimeMethod* method) 
{
	{
		// RefreshLabel();
		TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A(__this, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::RefreshLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel_RefreshLabel_m33204D50D058882BC3F6E035CFB9F6DE2816E13A (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSClipLoadState_t928859B4715B204E4587876D365E9F9BD5A8D434_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3536D53A7F6B00FB1FB84E80311171453C089207);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CB4F5B1B1CE2EA4649FBDAC8E0BCF83EE037A2E);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* V_2 = NULL;
	int32_t V_3 = 0;
	TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* V_4 = NULL;
	{
		// StringBuilder status = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		// int count = 1;
		V_1 = 1;
		// if (Speaker.IsSpeaking)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_1;
		L_1 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = TTSSpeaker_get_IsSpeaking_m53394B349AFA5CA163E029B9726BB5D120EB8EED(L_1, NULL);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		// status.Append($"Speaking[{count}]: '{Speaker.SpeakingClip.textToSpeak}'");
		StringBuilder_t* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_5);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_7;
		L_7 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		NullCheck(L_7);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_8;
		L_8 = TTSSpeaker_get_SpeakingClip_m222A968361BC058A0EE0BB58C09EFFD61EF56DFA(L_7, NULL);
		NullCheck(L_8);
		String_t* L_9 = L_8->___textToSpeak_0;
		String_t* L_10;
		L_10 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral3536D53A7F6B00FB1FB84E80311171453C089207, L_6, L_9, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_10, NULL);
		// status.AppendLine("\n");
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_12, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// count++;
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_004c:
	{
		// foreach (var clip in Speaker.QueuedClips)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_15;
		L_15 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		NullCheck(L_15);
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_16;
		L_16 = TTSSpeaker_get_QueuedClips_mCC42DCD1509635A8F13236DA8E44E8A962999157(L_15, NULL);
		V_2 = L_16;
		V_3 = 0;
		goto IL_00a5;
	}

IL_005c:
	{
		// foreach (var clip in Speaker.QueuedClips)
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_17 = V_2;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_4 = L_20;
		// status.Append($"{clip.loadState.ToString()}[{count}]: '{clip.textToSpeak}'");
		StringBuilder_t* L_21 = V_0;
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_22 = V_4;
		NullCheck(L_22);
		int32_t* L_23 = (&L_22->___loadState_7);
		Il2CppFakeBox<int32_t> L_24(TTSClipLoadState_t928859B4715B204E4587876D365E9F9BD5A8D434_il2cpp_TypeInfo_var, L_23);
		String_t* L_25;
		L_25 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_24), NULL);
		int32_t L_26 = V_1;
		int32_t L_27 = L_26;
		RuntimeObject* L_28 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_27);
		TTSClipData_t6E5451499F8FAE0DFD198CD51F544835F65F3827* L_29 = V_4;
		NullCheck(L_29);
		String_t* L_30 = L_29->___textToSpeak_0;
		String_t* L_31;
		L_31 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral9CB4F5B1B1CE2EA4649FBDAC8E0BCF83EE037A2E, L_25, L_28, L_30, NULL);
		NullCheck(L_21);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, L_31, NULL);
		// status.AppendLine("\n");
		StringBuilder_t* L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_33, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD, NULL);
		// count++;
		int32_t L_35 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_35, 1));
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00a5:
	{
		// foreach (var clip in Speaker.QueuedClips)
		int32_t L_37 = V_3;
		TTSClipDataU5BU5D_t2AE56AC2A4BB002E81CB8249EC540E8B9F043260* L_38 = V_2;
		NullCheck(L_38);
		if ((((int32_t)L_37) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_005c;
		}
	}
	{
		// _label.text = status.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_39 = __this->____label_5;
		StringBuilder_t* L_40 = V_0;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_40);
		NullCheck(L_39);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_39, L_41);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerStatusLabel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerStatusLabel__ctor_m029BAC8A1C23F9C9803A19E47491E344E4EEF1BB (TTSSpeakerStatusLabel_tCB93684808C984B9DFBE8D31D4B192CACF04A5E6* __this, const RuntimeMethod* method) 
{
	{
		TTSSpeakerObserver__ctor_m574D474AF5D2E22801DB44ADFB67675619CE56F2(__this, NULL);
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
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerVoiceSelect_Awake_m4A56B9295B7432BE38E1EF716FB49E35B9B3708E (TTSSpeakerVoiceSelect_tE5FA7686BB6F84C8BD5484B3F01D8E9B9343B2EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A288AE409C72DF6180874DE1C9F5E1111381EAB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		TTSSpeakerObserver_Awake_m6BC36A41DC69BB913953BE26D2EA7E4EF17C4FF4(__this, NULL);
		// _dropdown.DropdownToggleUnselectedText = "CUSTOM";
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_0 = __this->____dropdown_5;
		NullCheck(L_0);
		L_0->___DropdownToggleUnselectedText_6 = _stringLiteral3A288AE409C72DF6180874DE1C9F5E1111381EAB;
		Il2CppCodeGenWriteBarrier((void**)(&L_0->___DropdownToggleUnselectedText_6), (void*)_stringLiteral3A288AE409C72DF6180874DE1C9F5E1111381EAB);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerVoiceSelect_OnEnable_m1C520EB2D5FBAB3063206AC50FA2A0C15DBAED7B (TTSSpeakerVoiceSelect_tE5FA7686BB6F84C8BD5484B3F01D8E9B9343B2EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerVoiceSelect_OnOptionSelected_mA5CFFB431269E022EEBA5F3A6C3FD79520A6DF47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnEnable();
		TTSSpeakerObserver_OnEnable_m67A866C6E03A2551CB684228F32E442943470B1D(__this, NULL);
		// RefreshDropdown();
		TTSSpeakerVoiceSelect_RefreshDropdown_mE4101C8CD21E0CA050FA6E0412CC23805560DB93(__this, NULL);
		// _dropdown.OnOptionSelected.AddListener(OnOptionSelected);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_0 = __this->____dropdown_5;
		NullCheck(L_0);
		SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* L_1;
		L_1 = SimpleDropdownList_get_OnOptionSelected_mADDBCAA813F0EF270BA7DC7F51F9D2BDE1EE5B07_inline(L_0, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_2 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_2, __this, (intptr_t)((void*)TTSSpeakerVoiceSelect_OnOptionSelected_mA5CFFB431269E022EEBA5F3A6C3FD79520A6DF47_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F(L_1, L_2, UnityEvent_1_AddListener_mEC384A8CFC5D4D41B62B08248A738CF61B82172F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerVoiceSelect_OnDisable_m6A077135D04A7AAE015965D6841AE81EC4C86C8C (TTSSpeakerVoiceSelect_tE5FA7686BB6F84C8BD5484B3F01D8E9B9343B2EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TTSSpeakerVoiceSelect_OnOptionSelected_mA5CFFB431269E022EEBA5F3A6C3FD79520A6DF47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.OnDisable();
		TTSSpeakerObserver_OnDisable_m8223FD25C61D833215A08D731A2052BB9C3C85C6(__this, NULL);
		// _dropdown.OnOptionSelected.RemoveListener(OnOptionSelected);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_0 = __this->____dropdown_5;
		NullCheck(L_0);
		SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* L_1;
		L_1 = SimpleDropdownList_get_OnOptionSelected_mADDBCAA813F0EF270BA7DC7F51F9D2BDE1EE5B07_inline(L_0, NULL);
		UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B* L_2 = (UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B*)il2cpp_codegen_object_new(UnityAction_1_t690494F0E492A2098660E28B8EB7D71B2C69BE1B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction_1__ctor_mE6251CCFD943EB114960F556A546E2777B18AC71(L_2, __this, (intptr_t)((void*)TTSSpeakerVoiceSelect_OnOptionSelected_mA5CFFB431269E022EEBA5F3A6C3FD79520A6DF47_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F(L_1, L_2, UnityEvent_1_RemoveListener_m580353A1B030A82D1205B9BA94CF3484866C027F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerVoiceSelect_Update_m82962A77FCB50E80F98E6E0E5A7F9026AC561DE2 (TTSSpeakerVoiceSelect_tE5FA7686BB6F84C8BD5484B3F01D8E9B9343B2EA* __this, const RuntimeMethod* method) 
{
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* G_B2_0 = NULL;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* G_B1_0 = NULL;
	String_t* G_B5_0 = NULL;
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* G_B4_0 = NULL;
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* G_B3_0 = NULL;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* G_B8_0 = NULL;
	SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* G_B8_1 = NULL;
	TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* G_B7_0 = NULL;
	SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* G_B7_1 = NULL;
	String_t* G_B11_0 = NULL;
	SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* G_B11_1 = NULL;
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* G_B10_0 = NULL;
	SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* G_B10_1 = NULL;
	TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* G_B9_0 = NULL;
	SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* G_B9_1 = NULL;
	{
		// if (!string.Equals(Speaker?.VoiceSettings?.SettingsId, _dropdown.SelectedOption))
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0;
		L_0 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_2;
		L_2 = TTSSpeaker_get_VoiceSettings_mD13F2686E89EB574B33A0D6A4588124587B86E9B(G_B2_0, NULL);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_0019;
		}
	}
	{
		G_B5_0 = ((String_t*)(NULL));
		goto IL_001e;
	}

IL_0019:
	{
		NullCheck(G_B4_0);
		String_t* L_4 = G_B4_0->___SettingsId_0;
		G_B5_0 = L_4;
	}

IL_001e:
	{
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_5 = __this->____dropdown_5;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = SimpleDropdownList_get_SelectedOption_m3A8660C621D90A0C0FC1A840796ADE8B496A013B(L_5, NULL);
		bool L_7;
		L_7 = String_Equals_m7DE16FCF923076866D20D9053B774E67F2AF8D09(G_B5_0, L_6, NULL);
		if (L_7)
		{
			goto IL_0059;
		}
	}
	{
		// _dropdown.SelectOption(Speaker?.VoiceSettings?.SettingsId);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_8 = __this->____dropdown_5;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_9;
		L_9 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_10 = L_9;
		G_B7_0 = L_10;
		G_B7_1 = L_8;
		if (L_10)
		{
			G_B8_0 = L_10;
			G_B8_1 = L_8;
			goto IL_0043;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B7_1;
		goto IL_0054;
	}

IL_0043:
	{
		NullCheck(G_B8_0);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_11;
		L_11 = TTSSpeaker_get_VoiceSettings_mD13F2686E89EB574B33A0D6A4588124587B86E9B(G_B8_0, NULL);
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_12 = L_11;
		G_B9_0 = L_12;
		G_B9_1 = G_B8_1;
		if (L_12)
		{
			G_B10_0 = L_12;
			G_B10_1 = G_B8_1;
			goto IL_004f;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		goto IL_0054;
	}

IL_004f:
	{
		NullCheck(G_B10_0);
		String_t* L_13 = G_B10_0->___SettingsId_0;
		G_B11_0 = L_13;
		G_B11_1 = G_B10_1;
	}

IL_0054:
	{
		NullCheck(G_B11_1);
		SimpleDropdownList_SelectOption_m2A8BA6CEA069B28C8E2D1C1D80C43387E10F9AA9(G_B11_1, G_B11_0, NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect::RefreshDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerVoiceSelect_RefreshDropdown_mE4101C8CD21E0CA050FA6E0412CC23805560DB93 (TTSSpeakerVoiceSelect_tE5FA7686BB6F84C8BD5484B3F01D8E9B9343B2EA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_TisString_t_mC816B03756BE32978550701D59ED4E834E2CDD79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRefreshDropdownU3Eb__5_0_m9FD8E91371F40B668F75F1FC2CC732501B92936D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral203F8D131739E2E64DF6727859AD01C35434C806);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral628B97230E437D62DCE566B236D12A27494265C0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90CFB24A8A6FFED4771072425BA58300FFC78AA1);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310* G_B8_0 = NULL;
	TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* G_B8_1 = NULL;
	Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310* G_B7_0 = NULL;
	TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* G_B7_1 = NULL;
	{
		// if (!Speaker)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0;
		L_0 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// VLog.W("No speaker found");
		VLog_W_m878B376CCE791D170CA238533BBD3778475A8594(_stringLiteral203F8D131739E2E64DF6727859AD01C35434C806, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// if (!Speaker.TTSService)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_2;
		L_2 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		NullCheck(L_2);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_3;
		L_3 = TTSSpeaker_get_TTSService_mFE8C4675E340AE01CEBB795FC68501969DCBF39D(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (L_4)
		{
			goto IL_0035;
		}
	}
	{
		// VLog.W("No speaker service found");
		VLog_W_m878B376CCE791D170CA238533BBD3778475A8594(_stringLiteral628B97230E437D62DCE566B236D12A27494265C0, NULL);
		// return;
		return;
	}

IL_0035:
	{
		// if (!_dropdown)
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_5 = __this->____dropdown_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		if (L_6)
		{
			goto IL_004d;
		}
	}
	{
		// VLog.W("No dropdown found");
		VLog_W_m878B376CCE791D170CA238533BBD3778475A8594(_stringLiteral90CFB24A8A6FFED4771072425BA58300FFC78AA1, NULL);
		// return;
		return;
	}

IL_004d:
	{
		// string[] voiceNames = Speaker.TTSService.GetAllPresetVoiceSettings()
		//     .Select((voiceSetting) => voiceSetting.SettingsId).ToArray();
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_7;
		L_7 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		NullCheck(L_7);
		TTSService_t7DD4DD6DBB4E281054C4BBEF602772814245A57D* L_8;
		L_8 = TTSSpeaker_get_TTSService_mFE8C4675E340AE01CEBB795FC68501969DCBF39D(L_7, NULL);
		NullCheck(L_8);
		TTSVoiceSettingsU5BU5D_tE40613FD6BDBC81ED88596520FA5027F89DF435C* L_9;
		L_9 = TTSService_GetAllPresetVoiceSettings_m6B04A3111ADEAB06A759E04934A950970F4C54FF(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var);
		Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310* L_10 = ((U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310* L_11 = L_10;
		G_B7_0 = L_11;
		G_B7_1 = L_9;
		if (L_11)
		{
			G_B8_0 = L_11;
			G_B8_1 = L_9;
			goto IL_007c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var);
		U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997* L_12 = ((U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310* L_13 = (Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310*)il2cpp_codegen_object_new(Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m6BDD584F47E1317FC4304F0BDA716F872CA65A59(L_13, L_12, (intptr_t)((void*)U3CU3Ec_U3CRefreshDropdownU3Eb__5_0_m9FD8E91371F40B668F75F1FC2CC732501B92936D_RuntimeMethod_var), NULL);
		Func_2_tB9F36323B0B249980D24A8BFCECC63419CE93310* L_14 = L_13;
		((U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_14);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
	}

IL_007c:
	{
		RuntimeObject* L_15;
		L_15 = Enumerable_Select_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_TisString_t_mC816B03756BE32978550701D59ED4E834E2CDD79((RuntimeObject*)G_B8_1, G_B8_0, Enumerable_Select_TisTTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326_TisString_t_mC816B03756BE32978550701D59ED4E834E2CDD79_RuntimeMethod_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16;
		L_16 = Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC(L_15, Enumerable_ToArray_TisString_t_mCD2BC789CBFF834E06F00948FC47E15E720936DC_RuntimeMethod_var);
		V_0 = L_16;
		// _dropdown.LoadDropdown(voiceNames);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_17 = __this->____dropdown_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = V_0;
		NullCheck(L_17);
		SimpleDropdownList_LoadDropdown_m91E693F7D95E40E7C9B9DA2373ABA1B8DD5D66C3(L_17, L_18, NULL);
		// _dropdown.SelectOption(Speaker.presetVoiceID);
		SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* L_19 = __this->____dropdown_5;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_20;
		L_20 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		NullCheck(L_20);
		String_t* L_21 = L_20->___presetVoiceID_10;
		NullCheck(L_19);
		SimpleDropdownList_SelectOption_m2A8BA6CEA069B28C8E2D1C1D80C43387E10F9AA9(L_19, L_21, NULL);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect::OnOptionSelected(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerVoiceSelect_OnOptionSelected_mA5CFFB431269E022EEBA5F3A6C3FD79520A6DF47 (TTSSpeakerVoiceSelect_tE5FA7686BB6F84C8BD5484B3F01D8E9B9343B2EA* __this, String_t* ___newOption0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral203F8D131739E2E64DF6727859AD01C35434C806);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Speaker)
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0;
		L_0 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// VLog.W("No speaker found");
		VLog_W_m878B376CCE791D170CA238533BBD3778475A8594(_stringLiteral203F8D131739E2E64DF6727859AD01C35434C806, NULL);
		// return;
		return;
	}

IL_0018:
	{
		// Speaker.presetVoiceID = newOption;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_2;
		L_2 = TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline(__this, NULL);
		String_t* L_3 = ___newOption0;
		NullCheck(L_2);
		L_2->___presetVoiceID_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___presetVoiceID_10), (void*)L_3);
		// }
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TTSSpeakerVoiceSelect__ctor_m148E2C2697415CB98EADAAA3E1EDD897145A8250 (TTSSpeakerVoiceSelect_tE5FA7686BB6F84C8BD5484B3F01D8E9B9343B2EA* __this, const RuntimeMethod* method) 
{
	{
		TTSSpeakerObserver__ctor_m574D474AF5D2E22801DB44ADFB67675619CE56F2(__this, NULL);
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
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1CEF3F6FD281F1FA967BA9DCDE661137F1152B4B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997* L_0 = (U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997*)il2cpp_codegen_object_new(U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m648D68F3574109B746E2F5C8A67788886B9BD25C(L_0, NULL);
		((U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m648D68F3574109B746E2F5C8A67788886B9BD25C (U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.String Meta.Voice.Samples.TTSVoices.TTSSpeakerVoiceSelect/<>c::<RefreshDropdown>b__5_0(Meta.WitAi.TTS.Data.TTSVoiceSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CRefreshDropdownU3Eb__5_0_m9FD8E91371F40B668F75F1FC2CC732501B92936D (U3CU3Ec_t2E58EF076F7132C45802E8895E2DFE383518B997* __this, TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* ___voiceSetting0, const RuntimeMethod* method) 
{
	{
		// .Select((voiceSetting) => voiceSetting.SettingsId).ToArray();
		TTSVoiceSettings_tFC2FD981FC744E24B4D7186EFD0DC70FC5BE7326* L_0 = ___voiceSetting0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___SettingsId_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t SimpleDropdownList_get_SelectedOptionIndex_mAC46FA611DC681C7AB74420ED14E64DF06C5D728_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// public int SelectedOptionIndex => _selectedOptionIndex;
		int32_t L_0 = __this->____selectedOptionIndex_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ScrollRect_get_content_m7878BCA28A96B7FBA02DC466A1ED2C9E191C6996_inline (ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* __this, const RuntimeMethod* method) 
{
	{
		// public RectTransform content { get { return m_Content; } set { m_Content = value; } }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_Content_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* SimpleDropdownList_get_Options_m8C256A47A77425B00F22897B821B134CF69FC469_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// public string[] Options => _options;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->____options_11;
		return L_0;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* SimpleDropdownList_get_OnOptionSelected_mADDBCAA813F0EF270BA7DC7F51F9D2BDE1EE5B07_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// public SimpleDropdownOptionEvent OnOptionSelected => _onOptionSelected;
		SimpleDropdownOptionEvent_t3D9069AE12A8F9099B92599E2FEF928E2C613136* L_0 = __this->____onOptionSelected_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* SimpleDropdownList_get_OnIndexSelected_mE6218F6853FFB695DF9F0A50BA17B9FB2F3BC6F9_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// public SimpleDropdownIndexEvent OnIndexSelected => _onIndexSelected;
		SimpleDropdownIndexEvent_t547AA2E034A272E35FDF8A8F28C65DE9098F06A4* L_0 = __this->____onIndexSelected_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SimpleDropdownList_get_IsShowing_mA9154827A1A8A57D138152248E48C27FC50482C3_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = __this->___U3CIsShowingU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SimpleDropdownList_set_IsShowing_m4C2B9A11463599AE733F90DCCA96E3855FD8BD28_inline (SimpleDropdownList_tCB18F8983DE55A61F720D7922C2B4833DB8E2DE0* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing { get; private set; }
		bool L_0 = ___value0;
		__this->___U3CIsShowingU3Ek__BackingField_15 = L_0;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* TTSDiskCache_get_DiskCacheDefaultSettings_mFEB9E0BFBDC93DAFBACF81CCBD7750AA73E11971_inline (TTSDiskCache_tB8F8C36CFCA7AB614D88D68E90E3A47BF34CBAA2* __this, const RuntimeMethod* method) 
{
	{
		// public TTSDiskCacheSettings DiskCacheDefaultSettings => _defaultSettings;
		TTSDiskCacheSettings_tB9D20D402A7386227ADC2A29BA87AE6F1774EE80* L_0 = __this->____defaultSettings_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* TTSSpeakerObserver_get_Speaker_m73E79E0C6838FDE80076C087732F4A813B2FBE9C_inline (TTSSpeakerObserver_tC5354F46DC3D3FC4B6643014104C8775A3ED1852* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeaker Speaker => _speaker;
		TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* L_0 = __this->____speaker_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* InputField_get_text_m6E0796350FF559505E4DF17311803962699D6704_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// return m_Text;
		String_t* L_0 = __this->___m_Text_41;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* InputField_get_placeholder_m84C2F2E414B8A03B372C7CEB3C97A2AE72F3A39F_inline (InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* __this, const RuntimeMethod* method) 
{
	{
		// public Graphic placeholder { get { return m_Placeholder; } set { SetPropertyUtility.SetClass(ref m_Placeholder, value); } }
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->___m_Placeholder_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* TTSSpeaker_get_Events_m980602149D6FD801D8023A2B52B8456566C91891_inline (TTSSpeaker_tD5B4F9BF6B84E7144D7DBD08DF599AD60A4CCA9C* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerEvents Events => _events;
		TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* L_0 = __this->____events_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TTSSpeakerEvents_get_OnPlaybackQueueBegin_m9A821A546C84C87619D861C1EB14F68BF51FE668_inline (TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnPlaybackQueueBegin => _onPlaybackQueueBegin;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onPlaybackQueueBegin_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* TTSSpeakerEvents_get_OnPlaybackQueueComplete_m49DBBD8760B392FE4FA99584CCA319C8075A78F9_inline (TTSSpeakerEvents_t80895FED7384EDF060ADE4CA42FAEA800B0103FB* __this, const RuntimeMethod* method) 
{
	{
		// public UnityEvent OnPlaybackQueueComplete => _onPlaybackQueueComplete;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_0 = __this->____onPlaybackQueueComplete_17;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnLoadBegin_m00ECA69A4107190599DC2F4602C7C3CE82F4AB1E_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerClipEvent OnLoadBegin => _onLoadBegin;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_0 = __this->____onLoadBegin_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnLoadAbort_m9F721A78555178436EE909A408DC0AA2FF728CDB_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerClipEvent OnLoadAbort => _onLoadAbort;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_0 = __this->____onLoadAbort_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* TTSSpeakerClipEvents_get_OnLoadFailed_m482A9ECDFC1A89B032B1528A1D4284293C38BEA4_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerClipMessageEvent OnLoadFailed => _onLoadFailed;
		TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* L_0 = __this->____onLoadFailed_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnLoadSuccess_mAC8C73EAE0A405426ADF54B9444D7D1337A9A8B7_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerClipEvent OnLoadSuccess => _onLoadSuccess;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_0 = __this->____onLoadSuccess_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnPlaybackReady_mB9DF72BEEE97937DDDD261945DD7C5DE9DCD83A0_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerClipEvent OnPlaybackReady => _onPlaybackReady;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_0 = __this->____onPlaybackReady_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnPlaybackStart_m0E4327A77B8D6167579A23652AD7768212EEBD02_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerClipEvent OnPlaybackStart => _onPlaybackStart;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_0 = __this->____onPlaybackStart_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* TTSSpeakerClipEvents_get_OnPlaybackCancelled_mDA23D82C97696B8A4749E0910037C2987A6F6716_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerClipMessageEvent OnPlaybackCancelled => _onPlaybackCancelled;
		TTSSpeakerClipMessageEvent_tB9772EFDED46A09F0C237F1290A0F1FAD62DE816* L_0 = __this->____onPlaybackCancelled_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* TTSSpeakerClipEvents_get_OnPlaybackComplete_m5C9CF1AD6EAEAE4358AC003AA8554BA118061D7B_inline (TTSSpeakerClipEvents_t045FB9523655BE46A89DC0619DD2C9B48C0B9CA0* __this, const RuntimeMethod* method) 
{
	{
		// public TTSSpeakerClipEvent OnPlaybackComplete => _onPlaybackComplete;
		TTSSpeakerClipEvent_t2D22603C1E2FE653D96985A8D6DA473E9A9371F4* L_0 = __this->____onPlaybackComplete_15;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
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
