        enum { CLASSID = 0x0701C000 };

        static CControlEffectMaster* CreateInstance ();

        class CControlEffect*   GetActionEffect                         () const;
        void                    SetActionEffect                         ( class CControlEffect* value );

        class CControlEffect*   GetFocusEffect                          () const;
        void                    SetFocusEffect                          ( class CControlEffect* value );

        class CControlEffect*   GetFocusGainedByAnotherEffect           () const;
        void                    SetFocusGainedByAnotherEffect           ( class CControlEffect* value );

        class CControlEffect*   GetFocusGainedEffect                    () const;
        void                    SetFocusGainedEffect                    ( class CControlEffect* value );

        class CControlEffect*   GetFocusLostByAnotherEffect             () const;
        void                    SetFocusLostByAnotherEffect             ( class CControlEffect* value );

        class CControlEffect*   GetFocusLostEffect                      () const;
        void                    SetFocusLostEffect                      ( class CControlEffect* value );

        bool                    GetHideActivated                        () const;
        void                    SetHideActivated                        ( bool value );

        class CControlEffect*   GetHidingEffect                         () const;
        void                    SetHidingEffect                         ( class CControlEffect* value );

        class CControlEffect*   GetManagedEffect                        () const;
        void                    SetManagedEffect                        ( class CControlEffect* value );

        bool                    GetShowActivated                        () const;
        void                    SetShowActivated                        ( bool value );

        class CControlEffect*   GetShowingEffect                        () const;
        void                    SetShowingEffect                        ( class CControlEffect* value );

        class CControlEffect*   GetSleepingEffect                       () const;
        void                    SetSleepingEffect                       ( class CControlEffect* value );

        class CMwRefBuffer*     GetSpecialEffect                        () const;
        void                    SetSpecialEffect                        ( class CMwRefBuffer* value );

        bool                    GetUseRefBBox                           () const;
        void                    SetUseRefBBox                           ( bool value );

