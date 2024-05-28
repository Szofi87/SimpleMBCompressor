/*
  ==============================================================================

    UtilityComponents.h
    Created: 28 May 2024 10:52:18pm
    Author:  admin

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>

struct Placeholder : juce::Component
{
    Placeholder();

    void paint(juce::Graphics& g) override;

    juce::Colour customColor;
};

struct RotarySlider : juce::Slider
{
    RotarySlider();
};
