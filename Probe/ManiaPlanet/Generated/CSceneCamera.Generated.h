        enum { CLASSID = 0x0A00A000 };

        static CSceneCamera*    CreateInstance ();

        class CSceneListener*   GetListener                             () const;
        void                    SetListener                             ( class CSceneListener* value );

        Array < class CScene2d* >& GetOverlays                             () const;
        void                    SetOverlays                             ( Array < class CScene2d* >& value );

        uint                    GetcPrecalcRender                       () const;
        void                    SetcPrecalcRender                       ( uint value );

        uint                    GetiPrecalcRender                       () const;
        void                    SetiPrecalcRender                       ( uint value );

