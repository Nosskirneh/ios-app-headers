//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPTSearchPlatformColorExtractor : NSObject
{
}

+ (id)makeSortDescriptorWithSwatchComparator:(CDUnknownBlockType)arg1;
+ (id)populationSortDescriptor;
+ (id)lightnessSortDescriptor;
+ (id)colorByDimmingColor:(id)arg1 toContrastWithColors:(id)arg2 minContrastRatio:(double)arg3;
+ (id)colorByDimmingColor:(id)arg1 toContrastWithColor:(id)arg2 minContrastRatio:(double)arg3;
+ (id)gradientColorForImage:(id)arg1 theme:(id)arg2;

@end
