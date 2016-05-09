        enum { CLASSID = 0x0500E000 };

        static CFuncEnum*       CreateInstance ();

        uint                    GetAtlasX                               () const;
        void                    SetAtlasX                               ( uint value );

        uint                    GetAtlasY                               () const;
        void                    SetAtlasY                               ( uint value );

        class CMwRefBuffer*     GetIconIndexs                           () const;
        void                    SetIconIndexs                           ( class CMwRefBuffer* value );

        Vec2D                   GetMaxTexCoord                          () const;
        void                    SetMaxTexCoord                          ( Vec2D value );

        Vec2D                   GetMinTexCoord                          () const;
        void                    SetMinTexCoord                          ( Vec2D value );

        Vec2D                   GetTexSize                              () const;
        void                    SetTexSize                              ( Vec2D value );

        List < nodptr<class CPlug> >& GetValues                               () const;
        void                    SetValues                               ( List < nodptr<class CPlug> >& value );

        Array < uint >&         GetValuesAtlasYs                        () const;
        void                    SetValuesAtlasYs                        ( Array < uint >& value );

        uint                    GetWantedCount                          () const;
        void                    SetWantedCount                          ( uint value );

