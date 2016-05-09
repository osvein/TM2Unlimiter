        enum { CLASSID = 0x0701D000 };

        static CControlCredit*  CreateInstance ();

        bool                    GetAnimEnabled                          () const;
        void                    SetAnimEnabled                          ( bool value );

        class CControlLayout*   GetBlocksLayout                         () const;
        void                    SetBlocksLayout                         ( class CControlLayout* value );

        bool                    GetConstructed                          () const;
        void                    SetConstructed                          ( bool value );

        class CControlLayout*   GetGlobalLayout                         () const;
        void                    SetGlobalLayout                         ( class CControlLayout* value );

        bool                    GetIsFinished                           () const;
        void                    SetIsFinished                           ( bool value );

        float                   GetLocalTimer                           () const;
        void                    SetLocalTimer                           ( float value );

        float                   GetSpeed                                () const;
        void                    SetSpeed                                ( float value );

        class CControlStyle*    GetStyleBlock                           () const;
        void                    SetStyleBlock                           ( class CControlStyle* value );

        class CControlStyle*    GetStyleSubTitle                        () const;
        void                    SetStyleSubTitle                        ( class CControlStyle* value );

        class CControlStyle*    GetStyleText                            () const;
        void                    SetStyleText                            ( class CControlStyle* value );

        class CControlStyle*    GetStyleTitle                           () const;
        void                    SetStyleTitle                           ( class CControlStyle* value );

        void                    Rewind                                  ();
        void                    Start                                   ();
        void                    Stop                                    ();
