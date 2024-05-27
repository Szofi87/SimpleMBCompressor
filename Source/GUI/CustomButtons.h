/*
  ==============================================================================

    CustomButtons.h
    Created: 27 May 2024 10:24:11pm
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
