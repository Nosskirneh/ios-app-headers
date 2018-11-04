//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@interface SPTPaletteTarget : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _exclusive;
    float _lightnessWeight;
    float _minimumLightness;
    float _targetLightness;
    float _maximumLightness;
    float _saturationWeight;
    float _minimumSaturation;
    float _targetSaturation;
    float _maximumSaturation;
    float _populationWeight;
}

+ (id)vibrant;
+ (id)muted;
+ (id)lightVibrant;
+ (id)lightMuted;
+ (id)darkVibrant;
+ (id)darkMuted;
@property(nonatomic, getter=isExclusive) _Bool exclusive; // @synthesize exclusive=_exclusive;
@property(nonatomic) float populationWeight; // @synthesize populationWeight=_populationWeight;
@property(nonatomic) float maximumSaturation; // @synthesize maximumSaturation=_maximumSaturation;
@property(nonatomic) float targetSaturation; // @synthesize targetSaturation=_targetSaturation;
@property(nonatomic) float minimumSaturation; // @synthesize minimumSaturation=_minimumSaturation;
@property(nonatomic) float saturationWeight; // @synthesize saturationWeight=_saturationWeight;
@property(nonatomic) float maximumLightness; // @synthesize maximumLightness=_maximumLightness;
@property(nonatomic) float targetLightness; // @synthesize targetLightness=_targetLightness;
@property(nonatomic) float minimumLightness; // @synthesize minimumLightness=_minimumLightness;
@property(nonatomic) float lightnessWeight; // @synthesize lightnessWeight=_lightnessWeight;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToTarget:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLightnessWeight:(float)arg1 minimumLightness:(float)arg2 targetLightness:(float)arg3 maximumLightness:(float)arg4 saturationWeight:(float)arg5 minimumSaturation:(float)arg6 targetSaturation:(float)arg7 maximumSaturation:(float)arg8 populationWeight:(float)arg9 exclusive:(_Bool)arg10;
- (id)init;
- (void)getNormalizedLightnessWeight:(float *)arg1 saturationWeight:(float *)arg2 populationWeight:(float *)arg3;

@end

