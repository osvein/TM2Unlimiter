        enum { CLASSID = 0x07006000 };

        static CControlLabel*   CreateInstance ();

        class CPlugBitmap*      GetBitmap                               () const;
        void                    SetBitmap                               ( class CPlugBitmap* value );

        uint                    GetCurrentPage                          () const;
        void                    SetCurrentPage                          ( uint value );

        bool                    GetDontDrawText                         () const;
        void                    SetDontDrawText                         ( bool value );

        StringW                 GetLabel                                () const;
        void                    SetLabel                                ( StringW value );

        uint                    GetPageCount                            () const;
        void                    SetPageCount                            ( uint value );

