        enum { CLASSID = 0x07023000 };

        static CControlEffectCombined* CreateInstance ();

        class CMwRefBuffer*     GetEffects                              () const;
        void                    SetEffects                              ( class CMwRefBuffer* value );

