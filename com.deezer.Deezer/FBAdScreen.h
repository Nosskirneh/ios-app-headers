//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdScreen : NSObject
{
}

+ (struct CGSize)sizeInOrientation;
+ (struct CGRect)boundsInOrientation;
+ (long long)orientation;
+ (struct CGRect)bounds;
+ (_Bool)isLandscape;
+ (_Bool)isPortrait;
+ (struct CGSize)nativeSize;
+ (struct CGSize)size;
+ (double)nativeScale;
+ (double)scale;
+ (void)recomputeCachedState;
+ (void)initialize;

@end

