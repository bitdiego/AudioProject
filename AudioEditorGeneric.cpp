#include "AudioEditorGeneric.h"

template <class T>
void AudioEditorGeneric<T>::SetAudioFileParams(const AudioFile<T>& audioFile)
{
    this->m_audioFile.setNumChannels(audioFile.getNumChannels());
    this->m_audioFile.setSampleRate(audioFile.getSampleRate());
    this->m_audioFile.setBitDepth(audioFile.getBitDepth());
    m_audioFile.printSummary();
}

template <class T>
void AudioEditorGeneric<T>::SetAudioBuffer(AudioBuffer buffer, double factor)
{
    for (int i = 0; i < m_audioFile.getNumChannels(); i++) {
        for (int j = 0; j < buffer[i].size(); j++) {
            m_audioFile.samples[i].push_back(buffer[i][j] * factor);
        }
    }
    m_audioFile.printSummary();
}

template <class T>
void AudioEditorGeneric<T>::SaveAudioFile(const std::string& path)
{

}
