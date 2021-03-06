//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ColorQuantizer : NSObject
{
}

- (int)distanceFromColor:(unsigned short)arg1 toColor:(unsigned short)arg2;
- (id)colorFromIndex:(unsigned short)arg1;
- (unsigned short)biggestIndexInHistogram:(const unsigned short *)arg1 length:(unsigned short)arg2 distantFromColor:(unsigned short)arg3;
- (unsigned short)biggestIndexInHistogram:(const unsigned short *)arg1 length:(unsigned short)arg2;
- (id)dominantColorsInHistogramData:(id)arg1;
- (id)calculateHistogramWithImageData:(id)arg1;
- (id)scaledImageDataFromImage:(id)arg1 size:(struct CGSize)arg2;
- (id)dominantColorsInImage:(id)arg1;

@end

