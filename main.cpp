#include <iostream>
#include "AudioEditor.h"
#include "AudioEditorGeneric.h"

using namespace std;
//C:/Users/DiegoPolidori/source/repos/AudioProject/
const string path_to_file{ "waves/test-audio.wav" };
const string path_to_new_file{ "waves/test-audio-edited.wav" };
constexpr double resize_factor = 1.5;

int main() {
	AudioFile<double> audioFile;
	
	AudioEditor editor;
	bool isLoaded = audioFile.load(path_to_file);
	assert(isLoaded);
	
	
	editor.SetAudioFileParams(audioFile);
	editor.SetAudioBuffer(audioFile.samples, resize_factor);
	editor.SaveAudioFile(path_to_new_file);
	/****************************/
	//This does not compile....
	//AudioEditorGeneric<double> genEditor;
	//genEditor.SetAudioFileParams(audioFile);

	return 0;
}