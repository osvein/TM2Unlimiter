        enum { CLASSID = 0x0905A000 };

        static CPlugFileOggVorbis* CreateInstance ();

        uint                    GetBitrateLower                         () const;
        void                    SetBitrateLower                         ( uint value );

        uint                    GetBitrateNominal                       () const;
        void                    SetBitrateNominal                       ( uint value );

        uint                    GetBitrateUpper                         () const;
        void                    SetBitrateUpper                         ( uint value );

        StringW                 GetComment_Album                        () const;
        void                    SetComment_Album                        ( StringW value );

        StringW                 GetComment_Artist                       () const;
        void                    SetComment_Artist                       ( StringW value );

        StringW                 GetComment_Comment                      () const;
        void                    SetComment_Comment                      ( StringW value );

        StringW                 GetComment_Date                         () const;
        void                    SetComment_Date                         ( StringW value );

        StringW                 GetComment_Genre                        () const;
        void                    SetComment_Genre                        ( StringW value );

        StringA                 GetComment_LoopEnd                      () const;
        void                    SetComment_LoopEnd                      ( StringA value );

        StringA                 GetComment_LoopStart                    () const;
        void                    SetComment_LoopStart                    ( StringA value );

        StringW                 GetComment_Title                        () const;
        void                    SetComment_Title                        ( StringW value );

        StringW                 GetComment_TrackNumber                  () const;
        void                    SetComment_TrackNumber                  ( StringW value );

        StringW                 GetComment_Vendor                       () const;
        void                    SetComment_Vendor                       ( StringW value );

        StringW                 GetComment_Version                      () const;
        void                    SetComment_Version                      ( StringW value );

