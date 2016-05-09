        enum { CLASSID = 0x09062000 };

        static CPlugTreeLight*  CreateInstance ();

        class GxLight*          GetLight                                () const;
        void                    SetLight                                ( class GxLight* value );

        class CPlugLight*       GetPlugLight                            () const;
        void                    SetPlugLight                            ( class CPlugLight* value );

