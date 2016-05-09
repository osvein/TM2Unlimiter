#pragma once

namespace ManiaPlanet
{

    class CSystemFidParameters
    {
    public:
        virtual                 ~CSystemFidParameters       () {}

    private:
        struct Range
        {
        private:
            byte                    m_Offset;
            byte                    m_Length;
        };

        struct SParam
        {
        public:
            virtual                 ~SParam                     () {}
            virtual bool            IsNameless                  () { return false; }
            virtual SParam*         Clone                       () { return NULL; }
            virtual void            Assign                      ( SParam* pOther ) {}
            virtual bool            Compare                     ( SParam* pOther ) { return false; }

        private:
            uint                    m_uiRangeIdx;
            uint*                   m_pClassIds;
            uint                    m_fieldC;
        };

        struct SParams
        {
        private:
            List < Range >          m_Ranges;
            List < SParam >         m_SParams;
        };

        SParams                 m_Params;
        uint                    m_field1C;
        uint                    m_field20;
        uint                    m_field24;
        uint                    m_bParamlessClassID;
        uint                    m_uiNumParamsWithClassID;
    };

}
