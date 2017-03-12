#pragma once

class Image
{
public:
	Image();
	~Image();

	void Load( const char* fileName );
	void Save( const char* fileName );

	Uint8* GetData() const { return m_data; }
	Uint32 GetSize() const { return m_size; }
private:
	Uint32 m_width;
	Uint32 m_height;
	Uint32 m_size;

	Uint8* m_data;
};