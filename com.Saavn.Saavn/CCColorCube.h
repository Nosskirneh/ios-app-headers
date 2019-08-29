//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CCColorCube : NSObject
{
    struct CCCubeCell cells[27000];
}

- (char *)rawPixelDataFromImage:(id)arg1 pixelCount:(unsigned int *)arg2;
- (void)clearCells;
- (id)extractColorsFromImage:(id)arg1 flags:(unsigned long long)arg2 count:(unsigned long long)arg3;
- (id)extractDarkColorsFromImage:(id)arg1 avoidColor:(id)arg2 count:(unsigned long long)arg3;
- (id)extractBrightColorsFromImage:(id)arg1 avoidColor:(id)arg2 count:(unsigned long long)arg3;
- (id)extractColorsFromImage:(id)arg1 flags:(unsigned long long)arg2 avoidColor:(id)arg3;
- (id)extractColorsFromImage:(id)arg1 flags:(unsigned long long)arg2;
- (id)extractAndFilterMaximaFromImage:(id)arg1 flags:(unsigned long long)arg2;
- (id)colorsFromMaxima:(id)arg1;
- (id)performAdaptiveDistinctFilteringForMaxima:(id)arg1 count:(unsigned long long)arg2;
- (id)orderByDarkness:(id)arg1;
- (id)orderByBrightness:(id)arg1;
- (id)filterMaxima:(id)arg1 tooCloseToColor:(id)arg2;
- (id)filterDistinctMaxima:(id)arg1 threshold:(double)arg2;
- (id)findAndSortMaximaInImage:(id)arg1 flags:(unsigned long long)arg2;
- (id)findLocalMaximaInImage:(id)arg1 flags:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end

