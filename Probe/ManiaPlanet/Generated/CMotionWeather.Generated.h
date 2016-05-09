        enum { CLASSID = 0x08054000 };

        static CMotionWeather*  CreateInstance ();

        class CMotionManagerWeathers* GetManager                              () const;
        void                    SetManager                              ( class CMotionManagerWeathers* value );

