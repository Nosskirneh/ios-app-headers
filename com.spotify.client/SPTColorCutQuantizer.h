//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSOrderedSet;

@interface SPTColorCutQuantizer : NSObject
{
    NSOrderedSet *_quantizedColors;
}

+ (_Bool)isColor:(union SPTColor)arg1 allowedByFilters:(id)arg2;
+ (id)histogramOfLowDepthColorsFromPixels:(const union SPTColor *)arg1 count:(unsigned long long)arg2 filters:(id)arg3;
+ (id)swatchesByQuantizingPixelsFromHistogram:(id)arg1 toMaxColorsCount:(unsigned long long)arg2;
+ (id)swatchesFromHistogram:(id)arg1;
+ (id)swatchesByIncreasingDepthOfColorsInSwatches:(id)arg1 filters:(id)arg2;
@property(readonly, copy, nonatomic) NSOrderedSet *quantizedColors; // @synthesize quantizedColors=_quantizedColors;
- (void).cxx_destruct;
- (id)initWithPixels:(const union SPTColor *)arg1 count:(unsigned long long)arg2 maxColors:(unsigned long long)arg3 filters:(id)arg4;

@end

