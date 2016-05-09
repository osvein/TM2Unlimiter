        enum { CLASSID = 0x07034000 };

        static CControlScriptEditor* CreateInstance ();

        color                   GetClassNameColor                       () const;
        void                    SetClassNameColor                       ( color value );

        StringA                 GetColors                               () const;
        void                    SetColors                               ( StringA value );

        color                   GetCommentColor                         () const;
        void                    SetCommentColor                         ( color value );

        color                   GetConstantColor                        () const;
        void                    SetConstantColor                        ( color value );

        color                   GetDirectiveColor                       () const;
        void                    SetDirectiveColor                       ( color value );

        color                   GetIdentColor                           () const;
        void                    SetIdentColor                           ( color value );

        color                   GetOperatorColor                        () const;
        void                    SetOperatorColor                        ( color value );

        color                   GetOthersColor                          () const;
        void                    SetOthersColor                          ( color value );

        color                   GetShowLineNuKeywordColormbers          () const;
        void                    SetShowLineNuKeywordColormbers          ( color value );

        bool                    GetShowLineNumbers                      () const;
        void                    SetShowLineNumbers                      ( bool value );

        StringW                 GetText                                 () const;
        void                    SetText                                 ( StringW value );

        color                   GetUnexpectedColor                      () const;
        void                    SetUnexpectedColor                      ( color value );

