/*
    This is a visionvoice project file
    Developer: RealMamali <mohamadalinorouzi372@gmail.com>

    See more here https://github.com/Mamali/visionvoice

    Copyright (c) RealMamali 2026 All rights reserved
*/

#pragma once

#include <Windows.h>

#include <util/Memory.hpp>

#pragma pack(push, 1)

struct ControlPacket
{
    UINT16 packet;
    UINT16 length;
    UINT8 data[];

    DWORD GetFullSize() const noexcept;
};

#pragma pack(pop)

using ControlPacketContainer = Memory::ObjectContainer<ControlPacket>;
using ControlPacketContainerPtr = Memory::ObjectContainerPtr<ControlPacket>;
#define MakeControlPacketContainer MakeObjectContainer(ControlPacket)
