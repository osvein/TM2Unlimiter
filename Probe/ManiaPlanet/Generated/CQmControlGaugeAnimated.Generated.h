        enum { CLASSID = 0x2C013000 };

        static CQmControlGaugeAnimated* CreateInstance ();

        float                   GetAnimIndicatorMoveSpeed               () const;
        void                    SetAnimIndicatorMoveSpeed               ( float value );

        float                   GetAnimMaxIndicatorMoveSpeed            () const;
        void                    SetAnimMaxIndicatorMoveSpeed            ( float value );

        StringA                 GetIdName                               () const;
        void                    SetIdName                               ( StringA value );

        class CControlBase*     GetIndicator                            () const;
        void                    SetIndicator                            ( class CControlBase* value );

        class CControlBase*     GetMaxIndicator                         () const;
        void                    SetMaxIndicator                         ( class CControlBase* value );

        StringA                 GetName                                 () const;
        void                    SetName                                 ( StringA value );

        Vec2D                   GetStartPos                             () const;
        void                    SetStartPos                             ( Vec2D value );

        Vec2D                   GetStep                                 () const;
        void                    SetStep                                 ( Vec2D value );

