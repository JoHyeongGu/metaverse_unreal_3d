# UE4 Style Guide() {

*Unreal Engine 4에 대한 일반적으로 합리적인 접근 방법*

[Airbnb Javascript Style Guide](https://github.com/airbnb/javascript)에 영향을 많이 받았습니다.

## 이 문서에 대한 링크

이 스타일 가이드의 모든 절은 쉬운 참조와 링크 모두를 위해 숫자가 메겨져 있습니다. 당신은 https://ue4.style 의 끝에 단순히 해시 태그와 절의 숫자를 더하는 것으로 직접 어떠한 절에 대한 링크를 할 수 있습니다.
예를 들면, 만일 당신이 누군가에게 스타일 가이드의 처음 원칙을 보내고자 한다면 '#0.1'을 붙이면 됩니다. 결과적으로는 http://ue4.style#0.1 이 될 것입니다. 

## 중요한 용어들

<a name="terms-level-map"></a>
##### Levels/Maps

'map' 단어는 일반적으로 평균적인 사람들이 부르는 'level'을 지시하게 됩니다. 이 용어에 대한 역사는 [여기](https://en.wikipedia.org/wiki/Level_(video_gaming))를 보도록 합니다.

<a name="terms-cases"></a>
##### Cases

당신이 어떤 것에 대한 명명을 할 수 있는 몇 가지 방법이 존재합니다. 여기에 몇몇 일반적인 명명 규칙들이 있습니다:

> ###### PascalCase
>
> 모든 단어가 대문자로 시작하고 공백을 가지지 않습니다, 즉 'DesertEagle', 'StyleGuide', 'ASeriesOfWords'가 됩니다.
> 
> ###### camelCase
>
> 처음 문자는 항상 소문자 이지만 뒤에 나오는 모든 단어들은 대문자로 시작합니다, 즉 `desertEagle`, `styleGuide`, `aSeriesOfWords`가 됩니다.
>
> ###### Snake_case
>
> 단어들은 마음대로 대문자 또는 소문자로 시작하지만 언더스코어에 의해 단어들을 나누게 됩니다, 즉 `desert_Eagle`, `Style_Guide`, `a_Series_of_Words`가 됩니다.


<a name="0"></a>
## 0. 원칙들

이러한 개념들은 [idomatic.js 스타일 가이드](https://github.com/rwaldron/idiomatic.js/)에서 각색하였습니다.

<a name="0.1"></a>
### 0.1 만일 당신의 UE4 프로젝트가 이미 스타일 가이드를 가지고 있다면, 기존의 스타일 가이드를 따라야 합니다. 기존의 스타일 가이드와 이 가이드 사이에서 어떠한 모순된 것이 존재한다면 이 가이드는 기존의 것으로 연기되어져야 합니다.

만일 당신이 기존의 스타일 가이드를 가진 팀에 속해 있거나 프로젝트를 작업 중이라면, 반드시 기존의 스타일 가이드를 존중해야만 합니다.

그렇지만 스타일 가이드들은 살아 있는 문서들이어서 만일 당신이 모든 사용에 향상이 되도록 변경하는 것이 필요하다고 느낀다면 기존의 스타일 가이드를 변경하도록 스타일을 제시해야만 합니다.

> #### "스타일을 쓰러지게 하는 논의들은 무의미합니다. 스타일 가이드가 존재해야만 하며, 당신은 이것을 따라야 합니다."
> [_Rebecca Murphey_](https://rmurphey.com)

<a name="0.2"></a>
### 0.2 어떠한 Unreal Engine 4 프로젝트 내의 모든 구조, 에셋들, 그리고 코드는 얼마나 많은 사람들이 기여하였는지와 상관없이 한 사람이 생성한 것처럼 보여져야 합니다.

한 프로젝트를 다른 것으로 이동하는 것은 스타일과 구조의 재교육이 발생되지 않아야만 합니다. 스타일 가이드를 따르는 것은 불필요한 짐작과 모호성을 없애줍니다.

또한 스타일에 대해 생각을 할 필요가 없도록 하는 것이 없이 단순하게 명령들을 따르도록 함에 따라 더 나은 생산성과 유지 보수를 하게 해줍니다. 이 스타일 가이드는 개인적으로 최상의 관례로 작성되었고, 이것은 이 스타일 가이드를 따르는 것으로 당신은 이슈들을 추적하는 어려움을 최소화 할 수 있다는 것을 의미합니다.

<a name="0.3"></a>
### 0.3 친구들은 친구들이 나쁜 스타일을 가지지 않도록 합니다.

만일 당신이 스타일 가이드에 반하거나 스타일 가이드가 없이 작업하는 누군가를 보게 된다면, 그것들을 수정해주도록 노력해야 합니다.

팀내에서 작업을 하거나 [Unreal Slackers](http://join.unrealslackers)과 같은 커뮤니티 내에서 활동할 때, 이것은 사람들이 일관될 때 도움을 위한 질문과 답변을 더욱 쉽게 해줍니다. 아무도 누군가의 블루프린트 스파게티를 풀거나 이해할 수 없는 이름들로 이루어진 에셋들을 처리를 도와주는 것을 좋아하지 않습니다. 

만일 당신이 다르지만 일관되고 온전한 스타일 가이드를 따르는 누군가의 작업을 도와주게 된다면, 당신은 이것에 맞추도록 하여야만 합니다. 만일 그것들이 어떠한 스타일 가이드도 따르지 않는다면, 그들을 직접 이 문서를 보도록 만드십시오.

<a name="0.4"></a>
### 0.4 스타일 가이드를 가지지 않은 팀은 팀으로서의 정신이 없습니다.

Unreal Engine 4 팀에 참가할 때 당신의 처음 질문 중 하나는 "스타일 가이드를 가지고 있습니까?"가 되어야만 합니다. 만일 대답이 아니라면, 당신은 그들이 팀으로 작업하는 능력에 대해 의심을 해야만 합니다.

<a name="toc"></a>
## 목차

> 1. [에셋 명명 규약들](#anc)
> 1. [디렉토리 구조](#structure)
> 1. [블루프린트들](#bp)

<a name="anc"></a>
<a name="1"></a>
## 1. 에셋 명명 규약들

명명 규약들은 법처럼 여겨야 합니다. 명명 규약을 따르는 프로젝트는 에셋 관리, 검색, 분석, 그리고 유지 보수가 믿을 수 없이 쉽게 해줍니다.

대부분의 것들은 일반적으로 언더스코어에 의해 따르게 되는 에셋 타입을 두문자의 접두사를 붙이게 됩니다.  

<a name="base-asset-name"></a>
<a name="1.1"></a>
### 1.1 베이스 에셋 이름 - `Prefix_BaseAssetName_Variant_Suffix` ![#](https://img.shields.io/badge/lint-partial_support-yellow.svg)

모든 에셋들은 베이스 에셋 이름을 가져야만 합니다. 베이스 에셋 이름은 연관된 에셋들의 논리적인 그룹을 표시합니다. 어떠한 논리적인 그룹의 일부인 에셋은 'Prefix_BaseAssetName_Variant_Suffix'의 표준을 따라야만 합니다.

'Prefix_BaseAssetName_Variant_Suffix' 형식을 유지하고 이것을 기억하고 사용하는 일반적인 감각은 일반적으로 좋은 에셋 이름들을 보장되게 합니다. 역기에 각 요소들을 따르는 몇몇 자세한 규칙들이 있습니다. 

'Prefix'와 'Suffix'들은 에셋 형식에 따라 다음의 [에셋 명명 수식어](#12-에셋-이름-수식어들) 테이블을 통해 결정됩니다.

'BaseAssetName'은 에셋들의 그룹의 문맥에 연관되는 짧고 인식하기 쉬운 이름으로 결정되어야 합니다. 예를 들어, Bob라는 이름의 캐릭터를 가진다면, 모든 Bob의 에셋들은 'BaseassetName'이 'Bob'가 되어야 합니다.

독특하고 에셋의 변형이 분명한 것들을 위해, 'Variant'는 에셋의 베이스 이름의 하위셋인 에셋들의 논리적 그룹핑을 표현하는 짧고 인지하기 쉬운 이름이어야 합니다. 예를 들어, 만일 Bob이 여러 스킨들을 가지고 이 스킨들은 여전히 BaseAssetName에 따라 Bob을 사용하지만 Variant를 알아 볼 수 있는 것을 포함합니다. 'Evil' 스킨은 Bob_Evil을 참조하도록 하고 'Retro' 스킨은 Bob_Retro를 참조하도록 합니다.

독특하지만 에셋들의 포괄적인 변형에 대해, 'Variant'는 '01'로 시작하는 두자리 숫자가 됩니다. 예를 들어, 당신이 환경 아티스트가 생성한 별 특징 없는 돌들을 가진다면, 그것들은 'Rock_01', 'Rock_02', 'Rock_03', 등등과 같은 이름이 될 것입니다. 특수한 용도 사용 제한을 제외하고, 당신은 3자리 변형 숫자들을 필요로 하지 않습니다. 만일 당신이 100개 이상의 에셋을 가진다면, 그것들의 베이스 이름들을 다르게 하거나 여러 변형 이름들을 사용하는 것으로 조직화 하는 것을 고려하여야 합니다. 

당신의 에셋 변형이 어떻게 만들어지는가에 따라, 당신은 변형 이름들을 연결할 수 있습니다. 예를 들어, 당신이 Arch Viz에 대한 바닥 에셋들을 생성한다면 당신은 'Floor_Marble_01', 'Floor_Maple_01', 'Floor_Tile_Squares_01'과 같은 연결된 변형들로 이루어진 'Flooring'의 베이스 이름을 사용하여야 합니다.

<a name="1.1-예제들"></a>
#### 1.1 예제들

##### 1.1e1 Bob

| Asset Type              | Asset Name                                                 |
| ----------------------- | ---------------------------------------------------------- |
| Skeletal Mesh           | SK_Bob                                                     |
| Material                | M_Bob                                                      |
| Texture (Diffuse/Albedo)| T_Bob_D                                                    |
| Texture (Normal)        | T_Bob_N                                                    |
| Texture (Evil Diffuse)  | T_Bob_Evil_D                                               |

##### 1.1e2 Rocks

| Asset Type              | Asset Name                                                 |
| ----------------------- | ---------------------------------------------------------- |
| Static Mesh (01)        | SM_Rock_01                                                  |
| Static Mesh (02)        | SM_Rock_02                                                  |
| Static Mesh (03)        | SM_Rock_03                                                  |
| Material                | M_Rock                                                     |
| Material Instance (Snow)| MI_Rock_Snow                                               |

<a name="1.2"></a>
### 1.2 에셋 이름 수식어들

에셋에 이름을 지을 때 아래의 테이블들을 사용하여 에셋의 [베이스 에셋 이름](#base-asset-name)을 사용하여 접두사와 접미사를 결정하도록 합니다.

#### Sections

> 1.2.1 [Most Common](#anc-common)

> 1.2.2 [Animations](#anc-animations)

> 1.2.3 [Artificial Intelligence](#anc-ai)

> 1.2.4 [Blueprints](#anc-bp)

> 1.2.5 [Materials](#anc-materials)

> 1.2.6 [Textures](#anc-textures)

> 1.2.7 [Miscellaneous](#anc-misc)

> 1.2.8 [Paper 2D](#anc-paper2d)

> 1.2.9 [Physics](#anc-physics)

> 1.2.10 [Sound](#anc-sound)

> 1.2.11 [User Interface](#anc-ui)

<a name="anc-common"></a>
<a name="1.2.1"></a>
#### 1.2.1 Most Common ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Level / Map             |            |            | [Maps라고 불리우는 폴더 내에 존재하여야만 합니다.](#2.4) |
| Level (Persistent)      |            | _P         |                                  |
| Level (Audio)           |            | _Audio     |                                  |
| Level (Lighting)        |            | _Lighting  |                                  |
| Level (Geometry)        |            | _Geo       |                                  |
| Level (Gameplay)        |            | _Gameplay  |                                  |
| Blueprint               | BP_        |            |                                  |
| Material                | M_         |            |                                  |
| Static Mesh             | S_ or SM_  |            | 하나만 선택합니다. SM_를 추천합니다.        |
| Skeletal Mesh           | SK_        |            |                                  |
| Texture                 | T_         | _?         | [Textures](#1.2.6)를 보도록 하십시오.    |
| Particle System         | PS_        |            |                                  |
| Widget Blueprint        | WB_ or WBP_|            | 하나만 선택합니다. WB_를 추천합니다.       |

<a name="anc-animations"></a>
<a name="1.2.2"></a>
#### 1.2.2 Animations ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Aim Offset              | AO_        |            |                                  |
| Aim Offset 1D           | AO_        |            |                                  |
| Animation Blueprint     | ABP_       |            |                                  |
| Animation Composite     | AC_        |            |                                  |
| Animation Montage       | AM_        |            |                                  |
| Animation Sequence      | A_ or AS_  |            | 하나만 선택합니다. AS_를 추천합니다.        |
| Blend Space             | BS_        |            |                                  |
| Blend Space 1D          | BS_        |            |                                  |
| Level Sequence          | LS_        |            |                                  |
| Morph Target            | MT_        |            |                                  |
| Paper Flipbook          | PFB_       |            |                                  |
| Rig                     | Rig_       |            |                                  |
| Skeletal Mesh           | SK_        |            |                                  |
| Skeleton                | SKEL_      |            |                                  |


<a name="anc-ai"></a>
<a name="1.2.3"></a>
### 1.2.3 Artificial Intelligence ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| AI Controller           | AIC_       |            |                                  |
| Behavior Tree           | BT_        |            |                                  |
| Blackboard              | BB_        |            |                                  |
| Decorator               | BTDecorator_ |          |                                  |
| Service                 | BTService_ |            |                                  |
| Task                    | BTTask_    |            |                                  |

<a name="anc-bp"></a>
<a name="1.2.4"></a>
### 1.2.4 Blueprints ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Blueprint               | BP_        |            |                                  |
| Blueprint Function Library | BPFL_   |            |                                  |
| Blueprint Interface     | BPI_       |            |                                  |
| Blueprint Macro Library | BPML_      |            | 가능하다면 매크로 라이브러리들을 사용하지 않도록 합니다. |
| Enumeration             | E          |            | 언더스코어를 사용하지 않습니다.                   |
| Structure               | F or S     |            | 언더스코어를 사용하지 않습니다.                   |
| Widget Blueprint        | WB_ or WBP_|            | 하나만 선택합니다. WB_를 추천합니다.       |

<a name="anc-materials"></a>
<a name="1.2.5"></a>
### 1.2.5 Materials ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Material                | M_         |            |                                  |
| Material (Post Process) | PP_        |            |                                  |
| Material Instance (Post Process) | PPI_        |            |                                  |
| Material Function       | MF_        |            |                                  |
| Material Instance       | MI_        |            |                                  |
| Material Parameter Collection | MPC_ |            |                                  |
| Subsurface Profile      | SP_ or SSP_|            | 하나만 선택합니다. SP_를 추천합니다.       |
| Physical Materials      | PM_        |            |                                  |

<a name="anc-textures"></a>
<a name="1.2.6"></a>
### 1.2.6 Textures ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Texture                 | T_         |            |                                  |
| Texture (Diffuse/Albedo/Base Color)| T_ | _D      |                                  |
| Texture (Normal)        | T_         | _N         |                                  |
| Texture (Roughness)     | T_         | _R         |                                  |
| Texture (Alpha/Opacity) | T_         | _A         |                                  |
| Texture (Ambient Occlusion) | T_     | _O or _AO  | 하나만 선택합니다. AO_를 추천합니다.        |
| Texture (Bump)          | T_         | _B         |                                  |
| Texture (Emissive)      | T_         | _E         |                                  |
| Texture (Mask)          | T_         | _M         |                                  |
| Texture (Specular)      | T_         | _S         |                                  |
| Texture (Packed)        | T_         | _*         | 아래의 [packing](#anc-textures-packing)에 대한 주의 사항을 보도록 하십시오. |
| Texture Cube            | TC_        |            |                                  |
| Media Texture           | MT_        |            |                                  |
| Render Target           | RT_ or RTT_|            | 하나만 선택합니다. RT_를 추천합니다.       |
| Cube Render Target      | RTC_       |            |                                  |
| Texture Light Profile   | TLP        |            |                                  |

<a name="anc-textures-packing"></a>
<a name="1.2.6.1"></a>
#### 1.2.6.1 Texture Packing ![#](https://img.shields.io/badge/lint-unsupported-red.svg)
이것은 한 텍스쳐에 여러 레이어들의 텍스쳐 데이터를 구성하는 일반적인 실행 방법입니다. 이것의 예제는 Emissive, Roughness, Ambient Occlusion을 모두 제각기 텍스쳐의 Red, Green, 그리고 Blue 채널에 구성하는 것입니다. 접미사를 결정하도록, 단순하게 위의 것들로부터 주어진 접미사 문자들을 연결하도록 합니다. 즉, '_ERO'가 됩니다. 

> 이것은 당신의 Diffuse/Albedo의 알파 채널에 Alpha/Opacity 레이어를 포함하도록 하는 일반적으로 용인되는 것이고 이것에 따라 '_D' 접미사에 부가적으로 'A'를 추가하는 것이 일반적인 관습입니다.

텍스쳐 (RGBA)에 데이터의 4 채널들을 구성하는 것은 알파 채널을 가지는 텍스쳐에 따라 Diffuse/Albedo의 알파 채널내에 Alpha/Opacity 마스크를 제외하는 것을 추천하지 않는데 하나가 없는 것 보다 부하가 발생하기 때문입니다.

<a name="anc-misc"></a>
<a name="1.2.7"></a>
### 1.2.7 Miscellaneous ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Animated Vector Field   | VFA_       |            |                                  |
| Camera Anim             | CA_        |            |                                  |
| Color Curve             | Curve_     | _Color     |                                  |
| Curve Table             | Curve_     | _Table     |                                  |
| Data Asset              | *_         |            | 접두사는 클래스에 기반하여 결정됩니다. |
| Data Table              | DT_        |            |                                  |
| Float Curve             | Curve_     | _Float     |                                  |
| Foliage Type            | FT_        |            |                                  |
| Force Feedback Effect   | FFE_       |            |                                  |
| Landscape Grass Type    | LG_        |            |                                  |
| Landscape Layer         | LL_        |            |                                  |
| Matinee Data            | Matinee_   |            |                                  |
| Media Player            | MP_        |            |                                  |
| Object Library          | OL_        |            |                                  |
| Redirector              |            |            | 이것들은 최대한 빨리 수정되어야만 합니다.   |
| Sprite Sheet            | SS_        |            |                                  |
| Static Vector Field     | VF_        |            |                                  |
| Touch Interface Setup   | TI_        |            |                                  |
| Vector Curve            | Curve_     | _Vector    |                                  |

<a name="anc-paper2d"></a>
<a name="1.2.8"></a>
### 1.2.8 Paper 2D ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Paper Flipbook          | PFB_       |            |                                  |
| Sprite                  | SPR_       |            |                                  |
| Sprite Atlas Group      | SPRG_      |            |                                  |
| Tile Map                | TM_        |            |                                  |
| Tile Set                | TS_        |            |                                  |

<a name="anc-physics"></a>
<a name="1.2.9"></a>
### 1.2.9 Physics ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Physical Material       | PM_        |            |                                  |
| Physics Asset           | PA_        |            |                                  |
| Destructible Mesh           | DM_        |            |                                  |

<a name="anc-sounds"></a>
<a name="1.2.10"></a>
### 1.2.10 Sounds ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Dialogue Voice          | DV_        |            |                                  |
| Dialogue Wave           | DW_        |            |                                  |
| Media Sound Wave        | MSW_       |            |                                  |
| Reverb Effect           | Reverb_    |            |                                  |
| Sound Attenuation       | ATT_       |            |                                  |
| Sound Class             |            |            | 접두사/접미사를 사용하지 않습니다. SoundClasses라고 불리우는 폴더에 넣어져야만 합니다. |
| Sound Concurrency       |            | _SC        | SoundClass 뒤에 이름이 있어야만 합니다. |
| Sound Cue               | A_         | _Cue       |                                  |
| Sound Mix               | Mix_       |            |                                  |
| Sound Wave              | A_         |            |                                  |

<a name="anc-ui"></a>
<a name="1.2.11"></a>
### 1.2.11 User Interface ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Font                    | Font_      |            |                                  |
| Slate Brush             | Brush_     |            |                                  |
| Slate Widget Style      | Style_     |            |                                  |
| Widget Blueprint        | WB_ or WBP_|            | 하나만 선택합니다. WB_를 추천합니다.       |

<a name="anc-effects"></a>
<a name="1.2.12"></a>
### 1.2.12 Effects ![#](https://img.shields.io/badge/lint-supported-green.svg)

| Asset Type              | Prefix     | Suffix     | Notes                            |
| ----------------------- | ---------- | ---------- | -------------------------------- |
| Particle System         | PS_        |            |                                  |
| Material (Post Process) | PP_        |            |                                  |

<a name="2"></a>
<a name="structure"></a>
## 2. Content Directory Structure ![#](https://img.shields.io/badge/lint-partial_support-yellow.svg)

에셋 이름들과 똑같이 중요한, 프로젝트의 디렉토리 구조 스타일은 법처럼 여겨져야만 합니다. 에셋 명명 규약들과 콘텐츠 디렉토리 구조는 긴밀한 관계가 유지되어지고, 둘 중 하나라도 위반된다면 불필요한 혼란 상태가 발생합니다.

UE4 프로젝트의 컨텐츠들을 구성하는 데에는 여러 가지 방법들이 존재합니다. 이 스타일에서, 우리는 또 다른 폴더들과 함께 그룹화된 에셋 종류들의 일반적인 구조 대신 에셋들과 함께 동작하는 Conent Browser의 필터링과 검색 기능들에 좀더 의존하여 특정한 종류의 에셋들을 검색할 수 있는 것을 사용합니다.

> 만일 당신이 위에서의 [명명 규약](#1.2)의 접두사를 사용한다면, 'Meshes', 'Textures', 그리고 'Materials'와 같이 비슷한 종류들의 에셋들을 포함하는 폴더를 사용하는 것은 Content Browser에서 필터링이 되어질 수 있는 것에 접두사에 의해 정렬이 또한 이루어지는 에셋 종류들대한 불필요한 실천방안이 됩니다. 

<a name="2e1"><a>
### 2e1 Example Project Content Structure
<pre>
|-- Content
    |-- <a href="#2.2">GenericShooter</a>
        |-- Art
        |   |-- Industrial
        |   |   |-- Ambient
        |   |   |-- Machinery
        |   |   |-- Pipes
        |   |-- Nature
        |   |   |-- Ambient
        |   |   |-- Foliage
        |   |   |-- Rocks
        |   |   |-- Trees
        |   |-- Office
        |-- Characters
        |   |-- Bob
        |   |-- Common
        |   |   |-- <a href="#2.7">Animations</a>
        |   |   |-- Audio
        |   |-- Jack
        |   |-- Steve
        |   |-- <a href="#2.1.3">Zoe</a>
        |-- <a href="#2.5">Core</a>
        |   |-- Characters
        |   |-- Engine
        |   |-- <a href="#2.1.2">GameModes</a>
        |   |-- Interactables
        |   |-- Pickups
        |   |-- Weapons
        |-- Effects
        |   |-- Electrical
        |   |-- Fire
        |   |-- Weather
        |-- <a href="#2.4">Maps</a>
        |   |-- Campaign1
        |   |-- Campaign2
        |-- <a href="#2.8">MaterialLibrary</a>
        |   |-- Debug
        |   |-- Metal
        |   |-- Paint
        |   |-- Utility
        |   |-- Weathering
        |-- Placeables
        |   |-- Pickups
        |-- Weapons
            |-- Common
            |-- Pistols
            |   |-- DesertEagle
            |   |-- RocketPistol
            |-- Rifles
</pre>

이러한 구조에 대한 이유들은 다음의 하위 절들에서 설명됩니다.

### Sections

> 2.1 [Folder Names](#structure-folder-names)

> 2.2 [Top-Level Folders](#structure-top-level)

> 2.3 [Developer Folders](#structure-developers)

> 2.4 [Maps](#structure-maps)

> 2.5 [Core](#structure-core)

> 2.6 [`Assets` and `AssetTypes`](#structure-assettypes)

> 2.7 [Large Sets](#structure-large-sets)

> 2.8 [Material Library](#structure-material-library)


<a name="2.1"></a>
<a name="structure-folder-names"><a>
### 2.1 Folder Names

이것들은 컨텐츠 구조에서 어떠한 폴더 명명에 대한 일반 적인 규칙들입니다.

<a name="2.1.1"></a>
#### 2.1.1 Always Use PascalCase[<sup>*</sup>](#terms-cases)

스페이스들을 사용하는 대신, 대분자로 이름이 시작되고 모든 다음의 단어들 또한 대문자로 시작되는 PascalCase를 사용합니다. 예를 들면, 'DesertEagle', 'RocketPistol', 그리고 'ASeriesOfWords'가 됩니다.  

[Cases](#terms-cases)를 보도록 합니다.

<a name="2.1.2"></a>
#### 2.1.2 Never Use Spaces ![#](https://img.shields.io/badge/lint-supported-green.svg)

[2.1.1](#2.1.1)를 다시 강조하면, 스페이스들을 사용하지 않습니다. 스페이스들은 다양한 엔지니어링 툴들과 배치 처리과정들에서 실패를 야기할 수 있습니다. 이상적으로 당신의 프로젝트의 루트 또한 스페이스를 포함하지 않도록 하고 프로젝트는 'C:\Users\My Name\My Documents\Unreal Projects' 대신 'D:\Project'와 같은 곳에 위치 시키도록 합니다.

<a name="2.1.3"></a>
#### 2.1.3 Never Use Unicode Characters And Other Symbols ![#](https://img.shields.io/badge/lint-supported-green.svg)

다신의 게임 캐릭터중 하나가 'Zoë'라는 이름을 가진다면, 이것의 폴더 이름은 'Zoe'가 돼야 합니다. 유니코드 문자들은 엔지니어링 툴과 UE4의 일부분에서 경로내의 유니코드 문자들을 지원하지 않으므로 [Spaces](#2.1.2) 보다 안 좋을 수 있습니다.

이것과 관련하여, 만일 당신의 프로젝트가 [unexplained issues](https://answers.unrealengine.com/questions/101207/undefined.html)를 가지고 당신의 컴퓨터의 유저 이름이 유니코드 문자를 가진다면 (즉, 당신의 이름이 `Zoë` 일 때), 당신의 `My documents` 폴더에 위차한 프로젝트는 이 이슈로부터 고통을 받게 될 것입니다. 종종 단순히 당신의 프로젝트를 `D:\Project`와 같은 곳으로 이동하는 것으로 이러한 불가사의한 문제들이 수정 될 수 있습니다. 

`@`, `-`, `_`, `,`, `*`, 그리고 `#`과 같이 `a-z`, `A-Z`, 그리고 `0-9` 이외의 다른 문자들을 사용하는 것 또한 다른 플랫폼들, 소스 콘트롤, 신통치 못한 엔지니어링 툴들에서 예상되지 않고 추적하기 힘든 문제들을 이끌어낼 수 있습니다.

<a name="2.2"></a>
<a name="structure-top-level"><a>
### 2.2 Use A Top Level Folder For Project Specific Assets ![#](https://img.shields.io/badge/lint-supported-green.svg)

프로젝트의 모든 에셋들은 프로젝트 이후에 이름이 지어진 폴더내에 존재하여야 합니다. 예를들면, 만일 당신의 프로젝트 이름이 'Generic Shooter'라면, 이것의 _모든_ 컨텐츠는 `Content/Genericshooter`내에 존재하여야만 합니다.

> `Developers` 폴더는 당신의 프로젝트에 의존하지 않고 그러므로 프로젝트에서 지정되지 않는 에셋들을 위한 것이 아닙니다. 이것에 대한 자세한 내용은 [Developers Folder](#2.3)를 보도록 하십시오.

이러한 접근 방법에 대한 여러 가지 이유를 설명합니다.

<a name="2.2.1"></a>
#### 2.2.1 No Global Assets

흔히 코드 스타일 가이드들에서 이것은 전역 이름공간을 오염시키지 않도록 작성되었고, 이것은 동일한 개념을 따르고 있습니다. 프로젝트 폴더 외부에 에셋들이 존재하도록 허용될 때, 이것은 흔히 에셋들을 조직화하지 못하는 나쁜 행동을 조장하는 폴더에 에셋들이 존재하지 않는 것에 따라 엄격한 구조 배치를 강제하는 것이 더욱 어려워질 수 있습니다.

모든 에셋은 목적을 가져야만 하고, 그렇지 않다면 이것은 프로젝트에 포함되어서는 안 됩니다. 만일 실험적인 에셋이고 프로젝트에서 사용되지 않는다면 [`Developer`](#2.3) 폴더에 놓도록 합니다.

<a name="2.2.2"></a>
#### 2.2.2 Reduce Migration Conflicts

여러 프로젝트들에 대한 작업을 할 때 일반적으로 팀에서 다른쪽에서도 유용하게 만들어진 에셋들을 한 프로젝트에서 다른 프로젝트에 복사하게 됩니다. 이러한 상황이 발생될 때, 가장 쉬운 방법은 Content Browser의 Migrate 기능을 사용하여 복사를 실행하는 것입니다. 이것은 선택된 에셋뿐만 아니라 의존성이 있는 모든 것들을 복사하게 될 것입니다.

이러한 의존성들은 당신에게 쉽게 문제를 발생할 수 있는 것입니다. 만일 두 프로젝트의 에셋들이 최상위 레벨 폴더를 가지지 않고 그것들인 비슷한 이름을 가지거나 이미 이전에 이전된 에셋들이라면, 새로운 이전은 뜻하지 않게 기존 에셋들의 변경사항들을 없애버릴 수 있습니다.

이것은 또한 Epic의 Marketplace 스태프가 제출되는 에셋들에 대해 동일한 정책을 강제하는 이유입니다.

이전 이후, 에셋들의 안전한 병합은 Content Browser내의 'Replace References' 툴을 사용하는 것으로 완료될 수 있습니다. 이것은 프로젝트의 최상위 폴더에 속하지 않은 에셋들의 명료성에 대기를 명확히 기다리도록 추가됩니다. 한번 에셋들이 병합되고 전체 이전되면, 당신의 Content 트리에 또다른 최상위 폴더가 존재해서는 안됩니다. 이 방법은 완전히 안전하게 이전하게 하도록 _100%_ 보장되는 방법입니다.

<a name="2.2.2e1"></a>
##### 2.2.2e1 Master Material Example

예를 들어, 당신이 한 프로젝트에서 또 다른 프로젝트에서 사용되도록 하고자 하는 마스터 메터리얼을 만든다고 하면 그 에셋은 이전되어야 합니다. 만일 이 에셋이 최상위 폴더에 내에 있지 않다면, 이것은 `Content/MaterialLibrary/M_Master`과 같이 이름이 지어질 것입니다. 만일 이전될 프로젝트가 기존에 마스터 메터리얼을 가지고 있지 않다면, 이것은 문제가 발생하지 않고 동작합니다.

하나 또는 모든 프로젝트들이 진행함에 따라 각각의 마스터 메터리얼들은 일반적인 개발 상황에 따라 프로젝트들에 특화되도록 맞춰져서 변경될 것입니다.

문제는 이때 발생하는데, 예를들어, 한 프로젝트의 아티스트가 스태틱 메쉬들의 멋진 일반적인 모듈식 집합을 생성하고 누군가 두번째 프로젝트에 스태틱 메쉬들의 집합을 포함하기를 원합니다. 만일 에셋들을 생성한 아티스트가 그들이 교육받은 것에 따라 `Content/MaterialLibrary/M_Master`에 기반한 메터리얼 인스턴스들을 사용하였다면, 이전이 실행되어질 때 이전에 이전된 `Content/MaterialLibrary/M_Master` 에셋에서 충돌이 발생할 상황이 발생됩니다.

이러한 문제는 예측하기 어렵고 설명하기 어려운 문제가 될 수 있습니다. 스태틱 메쉬들을 이전한 사람은 모든 프로젝트의 마스터 메터리얼의 개발에 친숙한 사람과 동일인이 아닐 수 있고, 그들은 마스터 메터리얼에 의존하는 메터리얼 인스턴스들에 의존하는지 의심스러운 스태틱 메쉬들을 알아차리지 못할 것입니다. 그렇지만 Migrate tool은 작업에 의존성의 모든 연결을 요구하여서, 다른 프로젝트에 이러한 에셋들을 복사할 때 `Content/MaterialLibrary/M_Master`를 가지도록 강제할 것이고 이것은 기존의 에셋을 덮어쓰게 될 것입니다. 

이 시점에서 만일 양쪽 모두에 대한 마스터 메터리얼들이 _어쨌든_ 호환되지 않는다면, 당신은 단순히 최상위 레벨 폴더에 저장된 에셋들만 아니라 프로젝트에 대한 가능한 모든 메터리얼 라이브러리들을 분석하거나 기존에 이전된 다른 의존성들을 분석해야 할 위험이 있습니다. 이것은 단순한 스태틱 메쉬들의 이전이 매우 추잡한 작업이 될 수 있게 됩니다.

<a name="2.2.3"></a>
#### 2.2.3 Samples, Templates, and Marketplace Content Are Risk-Free

[2.2.2](#2.2.2)에 대한 확장으로, 만일 팀 멤버가 예제 컨텐츠, 템플릿 파일들, 또는 Marketplace에서 가져오는 에셋들을 추가하기로 결정하였다면, 이러한 새로운 에셋들이 당신의 프로젝트의 최상위 폴더가 톡특하게 명명되지 않았을지라도 어쨌든간에 프로젝트와의 간섭이 이루어지지 않을 것을 보장하여야만 합니다.

You can not trust marketplace content to fully conform to the [top level folder rule](#2.2). There exist many assets that have the majority of their content in a top level folder but also have possibly modified Epic sample content as well as level files polluting the global `Content` folder.

When adhering to [2.2](#2.2), the worst marketplace conflict you can have is if two marketplace assets both have the same Epic sample content. If all your assets are in a project specific folder, including sample content you may have moved into your folder, your project will never break.

#### 2.2.4 DLC, Sub-Projects, and Patches Are Easily Maintained

만일 당신의 프로젝트가 DLC를 출시하거나 서로 이전되거나 빌드에서 단순 쿠킹이 되지 않는 여러 하위-프로젝트들을 가진다면, 이러한 프로젝트들과 연관된 에셋들은 자체적으로 분리된 최상위 컨텐츠 폴더를 가져야만 합니다. 이것은 주요 프로젝트 컨텐츠와 동떨어져 분리된 DLC를 쿠킹할 수 있게 합니다.
하위-프로젝트들은 또한 영향력이 최소화 하여 서로 이전될 수 있습니다. 만일 당신이 에셋의 메터리얼을 변경하거나 패치에서 특정한 에셋의 행동을 덮어쓴다면, 당신이 이러한 변경점들을 쉽게 patch 폴더에 넣을 수 있고 코어 프로젝트를 건드리지 않고 안전하게 작업할 수 있게 됩니다.  

<a name="2.3"></a>
<a name="structure-developers"></a>
### 2.3 Use Developers Folder For Local Testing ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

프로젝트의 개발 중, 이것은 팀멤버들이 코어 프로젝트에 대한 위험성 없이 자유롭게 실험할 수 있는 장소인 `sandbox`의 유형을 가지도록 합니다. 왜냐하면 개발은 계속 진행중이 될 것이고, 이러한 팀 멤버들은 프로젝트의 소스 컨트롤 서버에 그들의 에셋을 올리기를 원하게 됩니다. 모든 팀멤버들이 Developer 폴더들을 사용하기 요구하지 않지만, 누군가 소스 컨트롤에 제출된 에셋들을 가지고 일반적인 문제에 대해 실행해 보기를 원할 수 있습니다.

이것은 사용 준비가 되지 않은 에셋들을 잘못하여 사용하여 문제가 발생하였을 때 제거하기 쉽게 해줍니다. 예를 들면, 아티스트가 스태틱 메쉬들의 조립식 집합에 대해 반복하게 되고 그것들의 크기와 조정을 올바르게 작업하고 있습니다. 만일 월드 빌더가 주요 프로젝트 폴더에서 이러한 에셋들을 보게 된다면, 그들은 극단적으로 이러한 하위셋들이 제거/변화 되었는지 알지 못한채 모든 레벨에 사용하게 될 것 입니다. 이것은 팀에서 해결하려면 모두가 재작업해야할 수 있는 문제가 됩니다. 

만일 이러한 조립식 에셋들이 Developer 폴더에 위치한다면, 월드 빌더는 특별한 이유없이 이것을 사용하지 않을 것이고 전체적인 문제가 발생하지 않을 것입니다.
Content Browser는 Developer 에셋들이 일반적으로 사용이 불가능하도록 막는 Developer 폴더를 숨길 수 있는 View Options를 지정할 수 있습니다 (기본적으로 숨겨져 있습니다).

에셋들이 사용될 준비가 되었다면, 아티스트는 단순히 에셋들을 특정한 폴더로 이동하여 redirector들을 수정하면 됩니다. 이것은 근본적으로 실험에서 제품으로 에셋들을 '승진'시키는 것입니다.

<a name="2.4"></a>
<a name="structure-maps"></a>
### 2.4 All Map[<sup>*</sup>](#terms-level-map) Files Belong In A Folder Called Maps ![#](https://img.shields.io/badge/lint-supported-green.svg)

Map 파일들은 엄청나게 특별하고 특히 하위 레벨이나 스트리밍 레벨들을 가지고 작업된다면 모든 프로젝트에 대해 공통적으로 자체적인 맵 명명 시스틈을 가집니다.
특정한 프로젝트에 대해 맵 조직화 시스템이 어떻게 이루어졌는지와 상관없이, 모든 레벨들은 `/Content/Project/Maps`에 속해야 합니다.

큰 시간 절약과 일반적인 '삶의 질' 향상을 위해 이것이 어디에 있는지 설명할 필요 없이 특정한 맵을 열수 있는 것을 누군가에게 말할 수 있어야 합니다. 레벨들에 대해 일반적으로 `Maps/Campaign1/` 또는 'Maps/Arenas'와 같이 `Maps`의 하위 폴더들 내에 존재하도록 할 수 있지만, 여기서 가장 중요한 것은 그것들은 모두 `/Contelt/Project/Maps`내에 존재하여야만 한다는 것입니다.

이것은 또한 엔지니어들을 위해 쿠킹 작업을 단순하게 합니다. 빌드 과정에서 임의이 폴더들을 통한 논란이 되는 레벨들은 주의하지 않으면 극단적인 불만거리가 될 수 있습니다. 만일 팀의 맵들이 모두 한 위치에 있다면, 빌드에서 맵을 쿠킹하는 것이 쉬워집니다. 이것은 또한 QA 과정들과 같이 라이팅 빌드 스크립트들을 단순하게 해줍니다.   

<a name="2.5"></a>
<a name="structure-core"></a>
### 2.5 Use A `Core` Folder For Critical Blueprints And Other Assets ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

프로젝트의 작업에 대해 전적으로 근본이 되는 에셋들에 대해서는 `/Content/Project/Core` 폴더를 사용합니다. 예를 들어, 기본 `GameMode`, `Character`, `PlayerController`, `GameState`, `PlayerState`, 그리고 이것들에 대해 연관된 블루프린트들입니다.

이것은 다른 팀 멤버들에게 "여기를 건드리지 마세요"라는 메세지를 명확히 줄 수 있습니다. 엔지니어가 아닌 사람들은 `Core` 폴더에서 작업하려면 분명한 이유가 있어야만 합니다. 좋은 코드 구조 스타일에 따르면, 디자이너들은 기능들이 노출된 자식 클래스들을 조정하여 게임플레이를 만들어야만 합니다. 월드 빌더들은 베이스 클래스들의 잠재적인 남용 대신 디자인된 폴더들에서 블루프린트의 조립식을 사용하야만 합니다.

예를 들어 당신의 프로젝트가 레벨에 놓여질수 있는 습득물을 필요로 한다면, `Core/Pickups`에 습득물에 대한 기본 행동이 정의된 기본 Pickup 클래스가 존재하여야만 합니다. Health와 Ammo와 같은 특정한 습득물들은 `/Content/Project/Placeables/Pickups/`와 같은 폴더에 존재하여야 합니다. 게임 디자이너들은 이 폴더에서 습득물을 정의하고 조정할 수 있지만, 프로젝트 전반에 걸친 습득물들을 무심코 건드리도록 `Core/Pickups`를 건드려서는 안 되고 부탁하여야만 합니다.

<a name="2.6"></a>
<a name="structure-assettypes"></a>
### 2.6 Do Not Create Folders Called `Assets` or `AssetTypes` ![#](https://img.shields.io/badge/lint-supported-green.svg)

<a name="2.6.1"></a>
#### 2.6.1 Creating a folder named `Assets` is redundant. ![#](https://img.shields.io/badge/lint-supported-green.svg)

모든 에셋들은 그냥 에셋입니다.

<a name="2.6.2"></a>
#### 2.6.2 Creating a folder named `Meshes`, `Textures`, or `Materials` is redundant. ![#](https://img.shields.io/badge/lint-supported-green.svg)

모든 에셋 이름들은 내부적으로 그들의 에셋 종류를 가지고 명명됩니다. 이러한 폴더들은 단지 불필요한 정보이고 이러한 폴더를 사용하는 것은 빈번하게 교체되고 Content Browser가 제공하는 필터링 시스템을 사용하기 쉽게 만들게 됩니다.
All asset names are named with their asset type in mind. These folders offer only redundant information and 
the use of these folders can easily be replaced with the robust and easy to use filtering system the Content Browser provides.

`Environment/Rocks/`에서 스태틱 메쉬만을 보기를 원합니까? 단순히 Static Mesh 필터를 켜면 됩니다. 만일 모든 에셋들이 올바르게 명명되었다면, 그것들은 또한 접두사들에 상관없이 알파벳 순서로 저장되어질 것입니다. 스태틱 메쉬들와 스켈레탈 메쉬들을 모두 보기를 원한다면 두 개의 필터 모두 켜도록 하십시오. 이것은 Content Browser의 트리 뷰에서 두개의 폴더들을 `Control-Click`으로 선택하는 것으로 잠재적으로 필요한 것들만 남기고 제거하게 됩니다.

> 이것은 또한 작은 장점으로 에셋의 전체 경로 이름을 만들게 됩니다. 스태틱 메쉬들을 위한 `SM_` 접두사는 오직 3개의 문자고, 대조적으로 `Meshes/`는 7개의 문자입니다.

이것은 또한 `Materials` 폴더에 텍스쳐 또는 스태틱 메쉬를 넣는 것을 막을 수 있도록 합니다.

<a name="2.7"></a>
<a name="structure-large-sets"></a>
### 2.7 Very Large Asset Sets Get Their Own Folder Layout ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

이것은 [2.6](#2.6)에 대한 가상-예외로 볼 수 있습니다.

각 에셋이 특정한 목적을 가지는 파일들과 연관된 큰 볼륨을 가진 특정한 에셋 형식이 존재합니다. 두가지 가장 일반적인 것은 Animation과 Audio 에셋들입니다. 만일 이러한 것들에 모두 속하는 에셋들을 15개 이상 가진다면, 모아놓아야 합니다.

예를 들면, 여러 캐릭터들과 공유하는 에니메이션들은 `Characters/Common/Animations`에 놓여져야 하고 `Locomotion` 또는 `Cinematic`과 같은 하위 폴더들을 가지게 됩니다.

> 이것은 텍스쳐들과 메터리얼들과 같은 에셋들에는 적용하지 않습니다. 이것은 수많은 돌들이 있다면 많은 수의 텍스쳐를 가지는 `Rocks` 폴더를 만드는 것이 일반적이지만, 이러한 텍스쳐들은 일반적으로 특정한 돌들만 연관되어져 있고 적절히 명명되어져야 합니다. 이러한 텍스쳐들은 [Material Library](#2.8)의 일부분이어야 합니다. 

<a name="2.8"></a>
<a name="structure-material-library"></a>
### 2.8 `MaterialLibrary` ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

만약 당신의 프로젝트가 에셋들의 어떠한 하위 집합에 속하지 않는 마스터 메터리얼들, 레이어드 메터리얼들, 또는 재사용 형태의 메터리얼들 또는 텍스쳐들을 사용하도록 만든다면, 이러한 에셋들은 `Content/Project/MaterialLibrary`에 저장되어야만 합니다.

이것은 모든 'global' 메터리얼들이 갱신가능하고 접근하기 쉬운위치에 있도록 합니다.

> 이것은 또한 프로젝트 내에서 '메터리얼 인스턴스만 사용' 정책을 강제하기 매우 쉽게 해줍니다. 만일 모든 아티스트들과 에셋들이 메터리얼 인스턴스들만을 사용하여야만 한다면, 오직 일반적인 메터리얼 에셋들만이 이 폴더에 저장되어져야 합니다. 당신은 `MaterialLibrary`가 아닌 다른 폴더에서 베이스 메터리얼들을 검색하는 것으로 이것을 쉽게 파악할 수 있습니다.

`MaterialLibrary`는 순수한 메터리얼들로만 이루어지지 않습니다. 유용한 텍스쳐들, 메터리얼 함수들, 그리고 폴더들 내에서 계획된 목적으로 디자인된  저장된 부산물들을 공유합니다. 예를들면 일반 노이즈 텍스쳐는 `MaterialLibrary/Utility`에 저장되어져야만 합니다. 

어떠한 메터리얼들의 테스트 또는 디버깅은 `MaterialLibrary/Debug`에서 이루어져야 합니다. 이것은 디버그 메터리얼들이 출시 이전에 프로젝트에서 쉽게 제거될 수 있도록 하고 출시 에셋들이 참조에러가 발생했을 때 쉽게 파악할 수 있게 해줍니다.  

<a name="3"></a>
<a name="bp"></a>
## 3. Blueprints ![#](https://img.shields.io/badge/lint-partial_support-yellow.svg)

이 절은 Blueprint 클래스들과 그것들의 내부 구조들에 대해 초점을 맞출 것입니다. 가능하다면 [Epic's Coding Standard](https://docs.unrealengine.com/latest/INT/Programming/Development/CodingStandard)의 스타일 규칙들을 따르도록 합니다.

### Sections

> 3.1 [Compiling](#bp-compiling)

> 3.2 [Variables](#bp-vars)

<a name="3.1"></a>
<a name="bp-compiling"></a>
### 3.1 Compiling ![#](https://img.shields.io/badge/lint-supported-green.svg)

모든 블루프린트들은 경고와 오류들이 없이 컴파일되어져야 합니다. 매우 끔찍한 예상 밖의 행동들이 빠르게 전파될 수 있기에 당신은 즉시 경고들과 오류들을 수정해야만 합니다. 

소스 컨트롤에 깨진 블루프린트들을 제출하지 *마십시오*. 만일 그러한 것들을 소스 콘트롤에 저장해야 한다면, 대신 shelve 기능을 사용하도록 하십시오.

깨진 블루프린트들은 깨진 참조들, 예상되지 않은 행동, 쿠킹 실패, 그리고 빈번히 발생하는 불필요한 재컴파일과 같이 다른 상황들로 나타나는 문제들을 야기합니다. 깨진 블루프린트는 당신의 전체 게임이 깨지게 할 수 있는 힘을 가집니다.

<a name="3.2"></a>
<a name="bp-vars"></a>
### 3.2 Variables ![#](https://img.shields.io/badge/lint-partial_support-yellow.svg)

#### Sections

> 3.2.1 [Naming](#bp-vars)

> 3.2.2 [Editable](#bp-vars-editable)

> 3.2.3 [Categories](#bp-vars-categories)

> 3.2.4 [Access](#bp-vars-access)

> 3.2.5 [Advanced](#bp-vars-advanced)

> 3.2.6 [Transient](#bp-vars-transient)

> 3.2.7 [SaveGame](#bp-vars-savegame)

> 3.2.8 [Config](#bp-vars-config)

<a name="3.2.1"></a>
<a name="bp-var-naming"></a>
#### 3.2.1 Naming ![#](https://img.shields.io/badge/lint-partial_support-yellow.svg)

<a name="3.2.1.1"></a>
<a name="bp-var-naming-nouns"></a>
##### 3.2.1.1 Nouns ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

모든 불리언이 아닌 변수 이름들은 반드시 알아보기 쉽고, 모호하지 않고, 서술적인 명사들이어야 합니다.

<a name="3.2.1.2"></a>
<a name="bp-var-naming-case"></a>
##### 3.2.1.2 PascalCase ![#](https://img.shields.io/badge/lint-supported-green.svg)

모든 불리언이 아닌 변수들은 [pascalCase](#terms-cases)의 형태가 되어야 합니다.

<a name="3.2.1.2e"></a>
###### 3.2.1.2e Examples:

* `Score`
* `Kills`
* `TargetPlayer`
* `Range`
* `CrosshairColor`
* `AbilityID`

<a name="3.2.1.3"></a>
<a name="bp-var-bool-prefix"></a>
##### 3.2.1.3 Boolean `b` Prefix ![#](https://img.shields.io/badge/lint-supported-green.svg)

모든 불리언들은 PascalCase에서 이름이 지어져야 하지만, 소문자 `b`의 접두사를 가지게 됩니다.

예: `bDead`와 `bEvil`을 사용하고, `Dead`와 `Evil`을 **사용하지 않습니다**.

UE4 블루프린트 에디터는 변수의 유저 친화적 표시를 하여서 `b`가 포함되지 않은 것으로 표시합니다.

<a name="3.2.1.4"></a>
<a name="bp-var-bool-names"></a>
##### 3.2.1.4 Boolean Names ![#](https://img.shields.io/badge/lint-partial_support-yellow.svg)

<a name="3.2.1.4.1"></a>
###### 3.2.1.4.1 General And Independent State Information ![#](https://img.shields.io/badge/lint-supported-green.svg)

모든 불리언들은 일반 정보를 표시한다면 가능한 서술적인 형용사로 이름이 지어져야 합니다. `Is`와 같이, 질문처럼 변수를 관용어로 사용하는 단어를 포함하지 않습니다. 이것은 함수들에 대해서도 암묵적입니다.

예: `bDead`와 `bHostile`를 사용하고, `bIsDead`와 `bIsHostile`를 **사용하지 않습니다**.

`bRunning`과 같은 동사를 사용하지 않도록 노력합니다. 동사는 복잡한 상태들을 이끌어내는 경향이 있습니다.

<a name="3.2.1.4.2"></a>
###### 3.2.1.4.2 Complex States ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

복잡하거나 의존적인 상태를 표현하도록 불리언들을 사용하지 않습니다. 이것은 상태에 복잡도를 추가/제거되고 가독성이 어렵게 만듭니다. 대신 열거형을 사용하십시오.

예: 무기를 정의할 때, 무기가 장전과 장착이 동시에 발생되지 않는다면 `bReloading`과 `bEquipping`를 **사용하지 않습니다**. 대신 `EWeaponState`의 이름을 가진 열거형을 정의하고, `WeaponState`라고 이름 지어진 열거형의 변수를 사용하도록 합니다. 이것은 무기들에 새로운 상태를 추가하기 더욱 쉽게 만듭니다.  

예: `bWalking` 또는 `bSprinting`이 필요할 때 `bRunning`을 **사용하지 않습니다**. 이것은 상태의 이름들을 명확히 정의하는 열거형으로 정의하도록 합니다.

<a name="3.2.1.5"></a>
<a name="bp-vars-naming-context"></a>
##### 3.2.1.5 Considered Context ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

모든 변수들의 이름은 블루프린트에서 참조되는 모든 변수들이 항상 맥락을 가지게 될 것 처럼 그들의 맥락에서 불필요하지 않아야만 합니다. 

<a name="3.2.1.5e"></a>
###### 3.2.1.5e Examples:

`BP_Playercharacter`라고 불리우는 블루프린트를 고려해 보겠습니다.

**나쁜예제**

* `PlayerScore`
* `PlayerKills`
* `MyTargetPlayer`
* `MyCharacterName`
* `CharacterSkills`
* `ChosenCharacterSkin`

이러한 모든 변수들은 불필요하게 이름이 지어졌습니다. 이것은 이러한 변수들을 정의하는 `BP_PlayerCharacter`에 속하기 때문에 `BP_PlayerCharacter`를 대표하는 변수라는 것이 내제되어 있습니다.

**좋은예제**

* `Score`
* `Kills`
* `TargetPlayer`
* `Name`
* `Skills`
* `Skin`

<a name="3.2.1.6"></a>
<a name="bp-vars-naming-atomic"></a>
##### 3.2.1.6 Do _Not_ Include Atomic Type Names ![#](https://img.shields.io/badge/lint-supported-green.svg)

근본적인 또는 원시적인 변수들은 불리언들, 정수들, 실수들, 그리고 열거들과 같은 최대한 단순한 형태로 데이터를 표현하는 변수들입니다.

문자열들과 벡터들은 블루프린트들에서 동작할 때 방식에서 근본적인 변수형 고려되지만, 그것들은 기술적으로는 근본적인 변수형이 아닙니다.

> vector들이 세개의 float들로 구성되는 반면, vector들은 종종 rotator들과 동일하게, 온전한 것으로 다루어집니다.

> Text 변수들을 근본적인 형으로 고려하지 _마십시오_. 그것들은 지역화 기능성을 비밀리에 숨기고 있습니다. 캐릭터들의 문자열의 근변적인 형은 `String`이지, `Text`가 아닙니다.

근본적인 형의 변수들은 그들의 이름에서 형의 이름을 가지지 않도록 합니다.

예: `Scroe`, `Kills`, 그리고 `Description`을 사용하고, `ScoreFloat`, `FloatKills`, `DescriptionString`을 **사용하지 않습니다**.

이 규칙에 대한 단 한가지 예외는 측정되어져야하는 무언가의 '숫자'를 변수가 표현할 때 _그리고_ 가독성이 어려운 변수형 없는 이름을 사용할 때입니다.

예: 울타리 생성자는 말뚝들의 숫자 X를 생성할 필요가 있습니다. `Posts`는 `Post`라는 이름의 변수형의 배열들로 읽어질 수 있는 가능성이 있기 때문에 `Posts` 대신 `PostsCount` 또는 `NumPosts`에 X를 저장합니다.

<a name="3.2.1.7"></a>
<a name="bp-vars-naming-complex"></a>
##### 3.2.1.7 Do Include Non-Atomic Type Names ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

최소 연산 단위가 아니거나 복잡한 변수들은 최소 연산 단위 변수들의 집합에 따라 데이터를 표현하는 변수들입니다. Struct들,  Class들, Interface들, 그리고 `Text`와 `Name`과 같이 숨겨진 행동들로 이루어진 기본 요소들은 모두 이 규칙에 동일한 자격을 가지게 됩니다. 

> 최소 연산 단위 변수 형의 배열이 변수들의 리스트인 반면, 배열들은 변수형의 '최소단위'를 변경하지 않습니다.

이러한 변수들은 그들의 문맥을 고려할때까지 그들의 형 이름을 포함하여야만 합니다.

만일 클래스가 복잡한 변수의 인스턴스를 소유한다면, 즉, 만일 `BP_PlayerCharacter`가 `BP_Hat`를 소유한다면, 이것은 어떠한 이름의 변경점들 없이 변수형을 저장해야만 합니다.

예: `Hat`, `Flag` 그리고 `Ability`를 사용하고, `MyHat`, `MyFlag`, 그리고 `PlayerAbility`를 **사용하지 않습니다**.

만일 클래스가 복잡한 변수 표현들을 하는 값을 소유하지 않는다면, 당신은 변수형과 함께 이루어진 명사를 사용해야 합니다.

예: 만일 `BP_Turret`가 `BP_PlayerCharacter`를 타겟으로 하는 능력을 가진다면, 이것은 `BP_Turret`의 문맥에서 소유하지 않는 또다른 복잡한 변수를 참조하는 것이 명확하기 때문에 `TargetPlayer`를 타겟으로 저장합니다.

<a name="3.2.1.8"></a>
<a name="bp-vars-naming-arrays"></a>
##### 3.2.1.8 Arrays ![#](https://img.shields.io/badge/lint-partial_support-yellow.svg)

배열들은 아래와 같은 동일한 명명 규칙들을 따르지만, 복수형 명사로 이름지어져야 합니다.

예: `Targets`, `Hats`, 그리고 `EnemyPlayers`를 사용하고, `TargetList`, `HatArray`, `EnemyPlayerArray`를 **사용하지 않습니다**.

<a name="3.2.2"></a>
<a name="bp-vars-editable"></a>
#### 3.2.2 Editable Variables ![#](https://img.shields.io/badge/lint-partial_support-yellow.svg)

블루프린트의 구성 행동을 위하여 값이 변경되는 것이 안전한 모든 변수들은 `Editable`가 마크되어져야 합니다.

역으로, 변경에 안전하지 않거나 디자이너들에게 노출되지 않아야만 하는 모든 변수들은 엔지니어링 이유들에 따라 `Expose On Spawn`으로 마크되어져아만 하는 변수들이 아니면 editable가 마크되면 _안됩니다_. 

임의적으로 변수들을 `Editable`로 마크하지 않도록 합니다.

<a name="3.2.2.1"></a>
<a name="bp-vars-editable-tooltips"></a>
##### 3.2.2.1 Tooltips ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

`Expose On Spawn`으로 마크될 수 있어 editable로 마크된 것들을 포함한, 모든 `Editable` 변수들은 이 값이 변경이될 때 블루프린트의 행동에 어떠한 영향을 주는지에 대한 설명을 `Tooltip` 필드에 기술하여야 합니다. 

<a name="3.2.2.2"></a>
<a name="bp-vars-editable-ranges"></a>
##### 3.2.2.2 Slider And Value Ranges ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

모든 `Editable` 변수들은 설정되지 _않아야_ 하는 값이 있다면 슬라이더와 값 범위들을 사용해야만 합니다.

예: 펜스 기둥들을 생성하는 블루 프린트는 `PostsCount`라는 editable 변수를 가지고 값은 -1이 되지 않도록 해야만 합니다. range 필드의 최소값을 0으로 처리합니다.

만일 editable 변수가 Construction 스크립트에서 사용된다면, 이것은 누군가 큰 값을 지정하여 에디터가 크래시날 수 있는 문제가 발생하지 않도록 적절한 Slider Range가 정의되어져야만 합니다.

Value Range는 알 수 있는 값의 범위로 정의될 필요가 있습니다. 반면 Slider Range는 큰 숫자를 입력하여 문제가 발생하는 것을 막고, 정의되지 않은 Value Range로 유저가 여전히 유효하지만 '위험'하다고 여겨지는 Slider Range 밖의 값을 지정하는 것을 허용하게 됩니다. 

<a name="3.2.3"></a>
<a name="bp-vars-categories"></a>
#### 3.2.3 Categories ![#](https://img.shields.io/badge/lint-supported-green.svg)

만일 클래스가 작은 숫자의 변수들만을 가진다면, categories는 필요하지 않습니다.

만일 클래스가 보통의 값을 가진다면 (5-10), 모든 `Editable` 변수들은 기본이 아닌 category 할당을 해야만 합니다. 일반적인 category는 `Config` 입니다.

만일 클래스가 큰 값을 가진다면, 모든 `Editable` 변수들은 기본 category에 따른 `Config` 카테고리를 사용하여 하위 categories들로 분류되어야만 합니다. editable이 아닌 변수들은 그들의 사용법을 기술하는 서술 categories로 분류하여야 합니다.

> 당신은 파이프 캐릭터 `|`를 사용하여 하위분류들로 정의할 수 있습니다. 즉 `Config | Animations`가 됩니다.

예: 무기 클래스의 변수 집합은 다음과 같이 구성됩니다:
	|-- Config
	|	|-- Animations
	|	|-- Effects
	|	|-- Audio
	|	|-- Recoil
	|	|-- Timings
	|-- Animations
	|-- State
	|-- Visuals

<a name="3.2.4"></a>
<a name="bp-vars-access"></a>
#### 3.2.4 Variable Access Level ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

C++에서, 변수들은 접근 레벨의 개념을 가지고 있습니다. Public은 클래스 밖의 어떠한 코드에서도 변수에 접근할 수 있다는 것을 의미합니다. Protected는 오직 클래스와 자식 클래스들에서만 이 변수에 내부적으로 접근할 수 있다는 것을 의미합니다. Private는 자식 클래스들는 접근하지 못하고 오직 이 클래스에서만 이 변수에 접근할 수 있다는 것을 의미합니다.

블루프린트들은 현재 protected 접근의 개념을 정의하지 않고 있지 않습니다.

`Editable` 변수들은 public 변수들로 취급됩니다. non-editable 변수들은 protected 변수들로 취급됩니다.

<a name="3.2.4.1"></a>
<a name="bp-vars-access-private"></a>
##### 3.2.4.1 Private Variables ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

변수가 정의된 클래스 내에서만 접근 가능하고 자식 클래스들에서 접근하지 못하는 것을 알고 있지않은 한 변수를 private로 설정하지 마십시오. 변수들이 `protected`로 마크하는 것이 가능할 때까지, 자식 클래스의 사용 제한을 원하는 것을 완전히 알게 될 때 private를 보류하도록 합니다.

<a name="3.2.5"></a>
<a name="bp-vars-advanced"></a>
#### 3.2.5 Advanced Display ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

만일 변수가 editable이지만 종종 바뀌지 않은 경우라면, 이것을 `Advanced Display` 체크하도록 합니다. 이것은 변수가 더 보기 화살표를 클릭하지 않는한 변수를 숨기게 됩니다.
If a variable should be editable but often untouched, mark it as `Advanced Display`. This makes the variable hidden unless the advanced display arrow is clicked.

`Advanced Display` 옵션을 차기위해, 변수 정보 리스트에서 더 보기 화살표를 눌러 확인합니다.

<a name="3.2.6"></a>
<a name="bp-vars-transient"></a>
#### 3.2.6 Transient Variables ![#](https://img.shields.io/badge/lint-unsupported-red.svg)

모든 변수들이 editable이 아니고 초기 값이 0 또는 null을 가질 경우 `Transient`를 체크하여야 합니다.

Transient 변수들은 그들의 값이 저장되거나 로드될 필요가 없고 초기값이 0 또는 null을 가지는 변수들입니다. 이것은 다른 오브젝트들에 대한 참조와 실행 시간 동안 값을 알수 없는 액터에 대해 유용합니다.

이것은 변수들이 항상 0 또는 null로 초기화 하도록 강제하고, 에디터가 이것에 대한 참조를 저장하는 것을 막고, 블루프린트 클래스의 저장과 불러오기를 빠르게 합니다.

<a name="3.2.7"></a>
<a name="bp-vars-savegame"></a>
#### 3.2.7 SaveGame Variables ![#](https://img.shields.io/badge/lint-supported-green.svg)

`SaveGame`에서 상속된 클래스 내부에서만 변수들의 SaveGame 속성을 사용하도록 합니다. 이 속성은 `SaveGame` 클래스가 이 변수를 저장해야만 할 때 사용하도록 합니다.

`SaveGame`과 `Transient`를 서록 **섞지** 안도록 하는데, 이것은 어떠한 동작도 하지 않을 것입니다.

<a name="3.2.8"></a>
<a name="bp-vars-config"></a>
#### 3.2.8 Config Variables ![#](https://img.shields.io/badge/lint-supported-green.svg)

`Config Variable` 플래그를 사용하지 않습니다. 이것은 디자이너들이 블루프린트 행동을 조정하는 것을 더욱 어렵게 만듭니다. Config 변수들은 드물게 변경되는 변수들에 대해 C++에서만 사용되어져야 합니다. 그것들은 `Advanced Advanced Display` 변수들로 생각하면 됩니다. 

## Contributors

* [Michael Allar](http://allarsblog.com): [GitHub](https://github.com/Allar), [Twitter](https://twitter.com/michaelallar)

## License

Copyright (c) 2016 Gamemakin LLC

See [LICENSE](/LICENSE)

**[⬆ Back to Top](#목차)**


## Amendments

We encourage you to fork this guide and change the rules to fit your team's style guide. Below, you may list some amendments to the style guide. This allows you to periodically update your style guide without having to deal with merge conflicts.

# };
