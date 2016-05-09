        enum { CLASSID = 0x0A017000 };

        static CScenePickerManager* CreateInstance ();

        class CHmsPicker*       GetPicker                               () const;
        void                    SetPicker                               ( class CHmsPicker* value );

