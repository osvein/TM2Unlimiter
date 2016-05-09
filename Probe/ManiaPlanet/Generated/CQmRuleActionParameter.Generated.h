        enum { CLASSID = 0x2C01B000 };

        static CQmRuleActionParameter* CreateInstance ();

        enum eType
        {
            TYPE_NONE,
            TYPE_COORD,
            TYPE_ENUM,
            TYPE_ACTOR,
            TYPE_SQUARE
        };
        static std::wstring     TypeToString                            ( eType value );
        static eType            ParseType                               ( const std::wstring& wstrName );

        class CQmActor*         GetActor                                () const;
        void                    SetActor                                ( class CQmActor* value );

        Vec3D                   GetCoord                                () const;
        void                    SetCoord                                ( Vec3D value );

        uint                    GetDir                                  () const;
        void                    SetDir                                  ( uint value );

        StringA                 GetEnumValue                            () const;
        void                    SetEnumValue                            ( StringA value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        class CQmBoardSquare*   GetSquare                               () const;
        void                    SetSquare                               ( class CQmBoardSquare* value );

        eType                   GetType                                 () const;
        void                    SetType                                 ( eType value );

