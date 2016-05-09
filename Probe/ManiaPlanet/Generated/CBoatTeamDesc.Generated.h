        enum { CLASSID = 0x0A105000 };

        static CBoatTeamDesc*   CreateInstance ();

        Id                      GetAnimWalkId                           () const;
        void                    SetAnimWalkId                           ( Id value );

        class CMwRefBuffer*     GetTeamActionDescs                      () const;
        void                    SetTeamActionDescs                      ( class CMwRefBuffer* value );

        List < Id >&            GetTeamMateIds                          () const;
        void                    SetTeamMateIds                          ( List < Id >& value );

        class CMwRefBuffer*     GetTeamMateLocationDescs                () const;
        void                    SetTeamMateLocationDescs                ( class CMwRefBuffer* value );

        class CMwRefBuffer*     GetTeamMateVisualAnims                  () const;
        void                    SetTeamMateVisualAnims                  ( class CMwRefBuffer* value );

        void                    UpdateCacheData                         ();
