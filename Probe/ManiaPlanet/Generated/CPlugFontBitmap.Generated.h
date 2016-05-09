        enum { CLASSID = 0x0904E000 };

        static CPlugFontBitmap* CreateInstance ();

        Vec2D                   GetBBoxCapitalMax                       () const;
        void                    SetBBoxCapitalMax                       ( Vec2D value );

        Vec2D                   GetBBoxCapitalMin                       () const;
        void                    SetBBoxCapitalMin                       ( Vec2D value );

        class CPlugFontBitmap*  GetFallbackFont                         () const;
        void                    SetFallbackFont                         ( class CPlugFontBitmap* value );

        uint                    GetFontAscent                           () const;
        void                    SetFontAscent                           ( uint value );

        uint                    GetFontHeight                           () const;
        void                    SetFontHeight                           ( uint value );

        class CPlugMaterial*    GetMaterialModel                        () const;
        void                    SetMaterialModel                        ( class CPlugMaterial* value );

        uint                    GetNbCharRemapPages                     () const;
        void                    SetNbCharRemapPages                     ( uint value );

        uint                    GetNbPages                              () const;
        void                    SetNbPages                              ( uint value );

        Array < class CMwNod* >& GetPageShaders                          () const;
        void                    SetPageShaders                          ( Array < class CMwNod* >& value );

        Array < class CMwNod* >& GetPageTextureFids                      () const;
        void                    SetPageTextureFids                      ( Array < class CMwNod* >& value );

        void                    CreateCharRemap                         ();
        void                    LoadAllPages                            ();
