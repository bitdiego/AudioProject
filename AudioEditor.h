#pragma once
#include "AudioFile.h"

class AudioEditor
{
public:
	AudioEditor() {

	};
	~AudioEditor() {

	};
	void SetAudioFileParams(const AudioFile<double>& audioFile);
	void SetAudioBuffer(AudioFile<double>::AudioBuffer buffer, double factor);
	void SaveAudioFile(const std::string& path);
private:
	AudioFile<double> m_audioFile;
};

