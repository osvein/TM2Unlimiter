        enum { CLASSID = 0x03104000 };

        static CGameManialinkFrame* CreateInstance ();

        List < nodptr<class CGameManialinkControl> >& GetControls                             () const;
        void                    SetControls                             ( List < nodptr<class CGameManialinkControl> >& value );

        class CGameManialinkControl* GetFirstChild                           ( StringA strControlId );
