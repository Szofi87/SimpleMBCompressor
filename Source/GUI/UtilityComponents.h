/*
  ==============================================================================

    UtilityComponents.h
    Created: 27 May 2024 10:25:28pm
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
