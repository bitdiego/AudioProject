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

	void SetAudioFileParams(const AudioFile<T>& audioFile); /*{
		m_audioFile.setNumChannels(audioFile.getNumChannels());
		m_audioFile.setSampleRate(audioFile.getSampleRate());
		m_audioFile.setBitDepth(audioFile.getBitDepth());
		m_audioFile.printSummary();
	}*/
	void SetAudioBuffer(AudioBuffer buffer, double factor);/* {
		for (int i = 0; i < m_audioFile.getNumChannels(); i++) {
			for (int j = 0; j < buffer[i].size(); j++) {
				m_audioFile.samples[i].push_back(buffer[i][j] * factor);
			}
		}
		m_audioFile.printSummary();
	}*/
	void SaveAudioFile(const std::string& path); //{
		//m_audioFile.save(path, AudioFileFormat::Wave);
	//}
	
private:
	AudioFile<T> m_audioFile;
};

#include "AudioEditorGeneric.inl"