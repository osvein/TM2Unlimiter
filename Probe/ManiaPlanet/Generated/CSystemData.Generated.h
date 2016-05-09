        enum { CLASSID = 0x0B018000 };

        static CSystemData*     CreateInstance ();

        class CMwNod*           GetData                                 () const;
        void                    SetData                                 ( class CMwNod* value );

        class CSystemPackDesc*  GetPackDesc                             () const;
        void                    SetPackDesc                             ( class CSystemPackDesc* value );

        StringA                 GetUrl                                  () const;
        void                    SetUrl                                  ( StringA value );

