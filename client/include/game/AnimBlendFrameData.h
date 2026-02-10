/*
    This is a visionvoice project file
    Developer: RealMamali <mohamadalinorouzi372@gmail.com>

    See more here https://github.com/Mamali/visionvoice

    Copyright (c) RealMamali 2026 All rights reserved
*/

#pragma once

#include "PluginBase.h"
#include "CVector.h"

class PLUGIN_API AnimBlendFrameData {
public:
    unsigned char  m_nFlags;
    CVector        m_vecOffset;
    class IFrame  *m_pIFrame;
    unsigned int   m_nNodeId;
};

VALIDATE_SIZE(AnimBlendFrameData, 0x18);
