/*
    MidiSynth
    https://github.com/dlehenbauer/arduino-midi-synth

    Extends Synth with methods and required state for processing MIDI messages.
*/

#ifndef __MIDISYNTH_H__
#define __MIDISYNTH_H__

#include <stdint.h>

class MidiSynth final : public Synth {
  private:
    constexpr static uint8_t numMidiChannels	= 16;					          // MIDI standard has 16 channels.
    uint8_t voiceToNote[numVoices];							        // Map synth voice to the current MIDI note (or 0xFF if off).

  public:
      for (int8_t channel = maxMidiChannel; channel >= 0; channel--) {
    void midiNoteOn(uint8_t channel, uint8_t note, uint8_t velocity) {
      uint8_t voice = getNextVoice();									  // Find an available voice and play the note.
      voiceToNote[voice] = note;								        // Update our voice -> note/channel maps (used for processing MIDI
    void midiNoteOff(uint8_t channel, uint8_t note)  {
    void midiProgramChange(uint8_t channel, uint8_t program) {
    void midiPitchBend(uint8_t channel, int16_t value) {
        case 0x7B: {
          switch (value) {
            // All Notes Off (for current channel):
            case 0: {															                      
              for (int8_t voice = maxVoice; voice >= 0; voice--) {			// For each voice
            }
          }
          break;
        }
      }
    }

#endif //__MIDISYNTH_H__