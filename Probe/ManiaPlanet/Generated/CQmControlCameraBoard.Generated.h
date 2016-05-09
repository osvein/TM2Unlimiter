        enum { CLASSID = 0x2C015000 };

        static CQmControlCameraBoard* CreateInstance ();

        class CFuncKeysTrans*   GetPath                                 () const;
        void                    SetPath                                 ( class CFuncKeysTrans* value );

        Vec3D                   GetPathCurrentTrans                     () const;
        void                    SetPathCurrentTrans                     ( Vec3D value );

        float                   GetPathCurrentX                         () const;
        void                    SetPathCurrentX                         ( float value );

        float                   GetPathSpeed                            () const;
        void                    SetPathSpeed                            ( float value );

        Vec2D                   GetRelativePosToTarget                  () const;
        void                    SetRelativePosToTarget                  ( Vec2D value );

        Vec2D                   GetViewScreenMax                        () const;
        void                    SetViewScreenMax                        ( Vec2D value );

        Vec2D                   GetViewScreenMin                        () const;
        void                    SetViewScreenMin                        ( Vec2D value );

