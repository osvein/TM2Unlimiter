        enum { CLASSID = 0x03038000 };

        static CGameCtnDecoration* CreateInstance ();

        class CGameCtnDecorationAudio* GetDecoAudio                            () const;
        void                    SetDecoAudio                            ( class CGameCtnDecorationAudio* value );

        class CGameCtnDecorationMood* GetDecoMood                             () const;
        void                    SetDecoMood                             ( class CGameCtnDecorationMood* value );

        class CGameCtnDecorationSize* GetDecoSize                             () const;
        void                    SetDecoSize                             ( class CGameCtnDecorationSize* value );

        class CPlugDecoratorSolid* GetDecoratorSolidWarp                   () const;
        void                    SetDecoratorSolidWarp                   ( class CPlugDecoratorSolid* value );

        class CGameCtnDecorationTerrainModifier* GetTerrainModifierBase                  () const;
        void                    SetTerrainModifierBase                  ( class CGameCtnDecorationTerrainModifier* value );

        class CGameCtnDecorationTerrainModifier* GetTerrainModifierCovered               () const;
        void                    SetTerrainModifierCovered               ( class CGameCtnDecorationTerrainModifier* value );

        void                    InitWithNoSkin                          ();
        void                    Reset                                   ();
