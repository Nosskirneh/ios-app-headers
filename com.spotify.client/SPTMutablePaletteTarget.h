//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPaletteTarget.h"

@interface SPTMutablePaletteTarget : SPTPaletteTarget
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)applyDefaultMutedSaturationValues;
- (void)applyDefaultVibrantSaturationValues;
- (void)applyDefaultLightLightnessValues;
- (void)applyDefaultNormalLightnessValues;
- (void)applyDefaultDarkLightnessValues;

// Remaining properties
@property(nonatomic, getter=isExclusive) _Bool exclusive; // @dynamic exclusive;
@property(nonatomic) float lightnessWeight; // @dynamic lightnessWeight;
@property(nonatomic) float maximumLightness; // @dynamic maximumLightness;
@property(nonatomic) float maximumSaturation; // @dynamic maximumSaturation;
@property(nonatomic) float minimumLightness; // @dynamic minimumLightness;
@property(nonatomic) float minimumSaturation; // @dynamic minimumSaturation;
@property(nonatomic) float populationWeight; // @dynamic populationWeight;
@property(nonatomic) float saturationWeight; // @dynamic saturationWeight;
@property(nonatomic) float targetLightness; // @dynamic targetLightness;
@property(nonatomic) float targetSaturation; // @dynamic targetSaturation;

@end

