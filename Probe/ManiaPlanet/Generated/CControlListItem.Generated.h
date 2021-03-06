        enum { CLASSID = 0x0700D000 };

        static CControlListItem* CreateInstance ();

        bool                    GetIsSelected                           () const;
        void                    SetIsSelected                           ( bool value );

        Vec2D                   GetMapCoordOrigin                       () const;
        void                    SetMapCoordOrigin                       ( Vec2D value );

        Vec2D                   GetMapCoordTarget                       () const;
        void                    SetMapCoordTarget                       ( Vec2D value );

        uint                    GetNat1                                 () const;
        void                    SetNat1                                 ( uint value );

        uint                    GetNat2                                 () const;
        void                    SetNat2                                 ( uint value );

        uint                    GetNat3                                 () const;
        void                    SetNat3                                 ( uint value );

        uint                    GetNat4                                 () const;
        void                    SetNat4                                 ( uint value );

        uint                    GetNat5                                 () const;
        void                    SetNat5                                 ( uint value );

        uint                    GetNat6                                 () const;
        void                    SetNat6                                 ( uint value );

        class CMwNod*           GetNod1                                 () const;
        void                    SetNod1                                 ( class CMwNod* value );

        class CMwNod*           GetNod2                                 () const;
        void                    SetNod2                                 ( class CMwNod* value );

        class CMwNod*           GetNod3                                 () const;
        void                    SetNod3                                 ( class CMwNod* value );

        float                   GetReal1                                () const;
        void                    SetReal1                                ( float value );

        float                   GetReal2                                () const;
        void                    SetReal2                                ( float value );

        float                   GetReal3                                () const;
        void                    SetReal3                                ( float value );

        StringA                 GetStr1                                 () const;
        void                    SetStr1                                 ( StringA value );

        StringA                 GetStr2                                 () const;
        void                    SetStr2                                 ( StringA value );

        StringA                 GetStr3                                 () const;
        void                    SetStr3                                 ( StringA value );

        StringA                 GetStr4                                 () const;
        void                    SetStr4                                 ( StringA value );

        StringA                 GetStr5                                 () const;
        void                    SetStr5                                 ( StringA value );

        StringA                 GetStr6                                 () const;
        void                    SetStr6                                 ( StringA value );

        StringA                 GetStr7                                 () const;
        void                    SetStr7                                 ( StringA value );

        StringW                 GetStrInt1                              () const;
        void                    SetStrInt1                              ( StringW value );

        StringW                 GetStrInt2                              () const;
        void                    SetStrInt2                              ( StringW value );

        StringW                 GetStrInt3                              () const;
        void                    SetStrInt3                              ( StringW value );

        StringW                 GetStrInt4                              () const;
        void                    SetStrInt4                              ( StringW value );

        uint                    GetTime1                                () const;
        void                    SetTime1                                ( uint value );

        uint                    GetTime2                                () const;
        void                    SetTime2                                ( uint value );

        uint                    GetTime3                                () const;
        void                    SetTime3                                ( uint value );

