/*
  ==============================================================================

    CustomButtons.h
    Created: 28 May 2024 10:45:57pm
    Author:  admin

  ==============================================================================
*/
#pragma once

#include <JuceHeader.h>

struct PowerButton : juce::ToggleButton { };

struct AnalyzerButton : juce::ToggleButton
{
    void resized() override;

    juce::Path randomPath;
};
