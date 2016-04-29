#pragma once

// ycapture.h : フィルタの情報定義

// ここは自分の製品に合わせて変更すること

// フィルタ名定義
#define NAME_CAPTURESOURCE L"theta_uvc_blender_mdk"

// originai
// {5C2CD55C-92AD-4999-8666-912BD3E70001}
//DEFINE_GUID(CLSID_CaptureSource,
//	0x5c2cd55c, 0x92ad, 0x4999, 0x86, 0x66, 0x91, 0x2b, 0xd3, 0xe7, 0x0, 0x1);
DEFINE_GUID(CLSID_CaptureSource,
	0xf679993d, 0x449c, 0x4fc0, 0xab, 0xf8, 0xeb, 0x5e, 0x3, 0x4c, 0x66, 0xd6);

// イベント・メモリマップドファイル名定義
// フィルタ側・送信側で同一の名前を使用すること

// 書き込みを示すイベント名
#define CS_EVENT_WRITE	L"theta_uvc_blender_mdk_Write"
// データ読み込みを示すミューテックス名
#define CS_EVENT_READ	L"theta_uvc_blender_mdk_Read"
// 共有データファイル名(メモリマップドファイル)
#define CS_SHARED_PATH	L"theta_uvc_blender_mdk_Data"
