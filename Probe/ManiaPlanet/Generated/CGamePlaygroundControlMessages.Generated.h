        enum { CLASSID = 0x03137000 };

        static CGamePlaygroundControlMessages* CreateInstance ();

        uint                    GetDisplayDuration                      () const;
        void                    SetDisplayDuration                      ( uint value );

        uint                    GetHideEffectDuration                   () const;
        void                    SetHideEffectDuration                   ( uint value );

        float                   GetHideEffectScale                      () const;
        void                    SetHideEffectScale                      ( float value );

        float                   GetLastMessageBaseScale                 () const;
        void                    SetLastMessageBaseScale                 ( float value );

        uint                    GetLineCount                            () const;
        void                    SetLineCount                            ( uint value );

        float                   GetLineHeight                           () const;
        void                    SetLineHeight                           ( float value );

        class CControlContainer* GetMessageModel                         () const;
        void                    SetMessageModel                         ( class CControlContainer* value );

        uint                    GetMinDuration                          () const;
        void                    SetMinDuration                          ( uint value );

        uint                    GetShowEffectDuration                   () const;
        void                    SetShowEffectDuration                   ( uint value );

        float                   GetShowEffectScale                      () const;
        void                    SetShowEffectScale                      ( float value );

