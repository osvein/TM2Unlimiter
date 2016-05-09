        enum { CLASSID = 0x07016000 };

        static CControlFrame*   CreateInstance ();

        Array < Matrix43 >&     GetChildsRelativeLocations              () const;
        void                    SetChildsRelativeLocations              ( Array < Matrix43 >& value );

