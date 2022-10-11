#pragma once
#include "AudioFile.h"

template <class T> 
class AudioEditorGeneric
{
public:
	typedef std::vector<std::vector<T> > AudioBuffer;
	AudioEditorGeneric()
	{
	}

	~AudioEditorGeneric()
	{
	}

	void SetAudioFileParams(const AudioFile<T>& audioFile);
	void SetAudioBuffer(AudioBuffer buffer, double factor);
	void SaveAudioFile(const std::string& path);
	
private:
	AudioFile<T> m_audioFile;
};

