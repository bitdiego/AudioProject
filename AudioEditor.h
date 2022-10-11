#pragma once
#include "AudioFile.h"

class AudioEditor
{
public:
	typedef std::vector<std::vector<double> > AudioBuffer;

	AudioEditor() {

	};
	~AudioEditor() {

	};
	void SetAudioFileParams(const AudioFile<double>& audioFile);
	void SetAudioBuffer(const AudioBuffer& buffer, double factor);
	void SaveAudioFile(const std::string& path);
private:
	AudioFile<double> m_audioFile;
};

