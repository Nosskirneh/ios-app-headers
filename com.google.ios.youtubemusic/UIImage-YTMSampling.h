//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (YTMSampling)
- (void)ytm_sampledPixelsFromImageScaledToWidth:(long long)arg1 height:(long long)arg2 interpolationQuality:(int)arg3 mutableData:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)ytm_sampledPixelsFromImageScaledToWidth:(long long)arg1 height:(long long)arg2 interpolationQuality:(int)arg3 callback:(CDUnknownBlockType)arg4;
- (void)ytm_sampledPixelsFromImageWithCallback:(CDUnknownBlockType)arg1;
- (id)ytm_colorsFromImageScaledToWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)ytm_sampledColorsInImage;
@end
