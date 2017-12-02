#if !defined(HANDMADE_H)

//Services that the platform layer provides to the game

// Services that the game provides to the platform layer
//four thing - Timing, Input, bitmap, sound buffer to output
struct game_offscreen_buffer
{
    void *Memory;
    int Width;
    int Height;
    int Pitch;
};

struct game_sound_output_buffer
{
    int SamplesPerSecond;
    int SampleCount;
    int16 *Samples;
};

internal void GameUpdateAndRender(game_offscreen_buffer *Buffer,
                    game_sound_output_buffer *SoundBuffer);

#define HANDAMDE_H
#endif