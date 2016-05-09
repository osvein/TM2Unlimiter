        enum { CLASSID = 0x0B015000 };

        static CSystemPackDesc* CreateInstance ();

        bool                    GetAutoUpdate                           () const;
        void                    SetAutoUpdate                           ( bool value );

        StringA                 GetChecksum                             () const;
        void                    SetChecksum                             ( StringA value );

        StringW                 GetFileName                             () const;
        void                    SetFileName                             ( StringW value );

        StringW                 GetLocatorFileName                      () const;
        void                    SetLocatorFileName                      ( StringW value );

        StringW                 GetName                                 () const;
        void                    SetName                                 ( StringW value );

        StringA                 GetSize                                 () const;
        void                    SetSize                                 ( StringA value );

        StringA                 GetUrl                                  () const;
        void                    SetUrl                                  ( StringA value );

