//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (Utils)
+ (float)colorValueForRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
+ (unsigned int)hexColorForRed:(unsigned char)arg1 green:(unsigned char)arg2 blue:(unsigned char)arg3;
+ (void)copyImageRef:(struct CGImage *)arg1 toBuffer:(void *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bytesPerPixel:(unsigned long long)arg5;
+ (id)dominantColorOfImage:(id)arg1;
+ (id)colorFromHexString:(id)arg1;
+ (id)colorFromHex:(unsigned int)arg1;
+ (id)colorFromHex:(unsigned int)arg1 withAlpha:(double)arg2;
- (double)gpm_alpha;
- (double)gpm_brightness;
- (id)linearBlendWithColor:(id)arg1 factor:(double)arg2;
@end

