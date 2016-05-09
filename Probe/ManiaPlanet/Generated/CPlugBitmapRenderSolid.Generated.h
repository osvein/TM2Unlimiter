        enum { CLASSID = 0x09090000 };

        static CPlugBitmapRenderSolid* CreateInstance ();

        enum eTriggerBitmap
        {
            TRIGGERBITMAP_NONE,
            TRIGGERBITMAP_ONCE,
            TRIGGERBITMAP_EACHFRAME
        };
        static std::wstring     TriggerBitmapToString                   ( eTriggerBitmap value );
        static eTriggerBitmap   ParseTriggerBitmap                      ( const std::wstring& wstrName );

        enum eTriggerShader
        {
            TRIGGERSHADER_NONE,
            TRIGGERSHADER_ONCE,
            TRIGGERSHADER_EACHFRAME
        };
        static std::wstring     TriggerShaderToString                   ( eTriggerShader value );
        static eTriggerShader   ParseTriggerShader                      ( const std::wstring& wstrName );

        enum eTriggerSolid
        {
            TRIGGERSOLID_NONE,
            TRIGGERSOLID_ONCE,
            TRIGGERSOLID_EACHFRAME
        };
        static std::wstring     TriggerSolidToString                    ( eTriggerSolid value );
        static eTriggerSolid    ParseTriggerSolid                       ( const std::wstring& wstrName );

        class CPlugBitmap*      GetBitmap                               () const;
        void                    SetBitmap                               ( class CPlugBitmap* value );

        List < Matrix43 >&      GetLocations                            () const;
        void                    SetLocations                            ( List < Matrix43 >& value );

        class CPlugShader*      GetShader                               () const;
        void                    SetShader                               ( class CPlugShader* value );

        List < nodptr<class CPlugSolid> >& GetSolids                               () const;
        void                    SetSolids                               ( List < nodptr<class CPlugSolid> >& value );

        eTriggerBitmap          GetTriggerBitmap                        () const;
        void                    SetTriggerBitmap                        ( eTriggerBitmap value );

        eTriggerShader          GetTriggerShader                        () const;
        void                    SetTriggerShader                        ( eTriggerShader value );

        eTriggerSolid           GetTriggerSolid                         () const;
        void                    SetTriggerSolid                         ( eTriggerSolid value );

