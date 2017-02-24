# nt_lookandfeel
A JUCE module which aims to be a total replacement of the default LookAndFeel classes.

I'm not a fan of the way the default JUCE LookAndFeel is styled, so this is my attempt at building a new one from the ground up inspired by attractive looking UIs as seen in apps such as Adobe CC, Apple ProApps, the Affinity suite, and others.

# Philosophy
Prefer using platform-native styling when available, while still maintaining a platform-agnostic design.

The following items should be native:
- Fonts
- Dialog/message boxes
- Window decorations
- Menu bars (in a bit of a pinch on non-macOS systems, where native menu bars aren't available)
- Context menus (again, not available due to current JUCE limitations)

The design goal for everything else is to generally follow current UI trends: flat, dark background with light text.

The UI will be themeable with a small number of color fields which affect large sections of the application to keep colors cohesive throughout and prevent overwhelming theme writers. This is in contrast to JUCE's current (and rightful) approach to theming which allows setting the colors of details on each widget type.
