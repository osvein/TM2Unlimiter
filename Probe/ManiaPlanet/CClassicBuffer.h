#pragma once

namespace ManiaPlanet
{

    class CClassicBuffer
    {
    public:
        enum eMode
        {
            MODE_READ	= 1,
            MODE_WRITE	= 2
        };

        virtual         ~CClassicBuffer             () {}
        virtual int     ReadBytes                   ( void* pData, int iLength ) { return 0; }
        virtual int     WriteBytes                  ( void* pData, int iLength ) { return 0; }
        virtual void    Close                       () {}
        virtual void    m10                         () {}
        virtual uint    GetPosition                 () { return 0; }
        virtual uint    GetSize                     () { return 0; }
        virtual bool    IsMemoryMapped              () { return false; }
        virtual void    SetPosition                 ( uint uiPos ) {}
        virtual void	m24							() {}
        virtual void	Seek						( int iOffset ) {}
        virtual uint	GetCapacity					() { return 0; }

        eMode			GetMode						() const	{ return m_Mode; }

        void			WriteTo						( CClassicBuffer* pOther );

    private:
        eMode			m_Mode;
        uint            m_bInitializing;
    };

}
