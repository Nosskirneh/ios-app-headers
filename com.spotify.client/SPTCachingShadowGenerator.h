//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SPTCachingShadowGenerator : NSObject
{
    NSMutableDictionary *_cachedShadows;
}

@property(retain, nonatomic) NSMutableDictionary *cachedShadows; // @synthesize cachedShadows=_cachedShadows;
- (void).cxx_destruct;
- (id)generateShadowImageForSize:(struct CGSize)arg1 shadowWidth:(double)arg2 shadowColor:(id)arg3 circular:(_Bool)arg4;
- (id)keyForImageSize:(struct CGSize)arg1 shadowWidth:(double)arg2 shadowColor:(id)arg3 circular:(_Bool)arg4;
- (id)shadowImageForSize:(struct CGSize)arg1 shadowWidth:(double)arg2 shadowColor:(id)arg3 circular:(_Bool)arg4;
- (id)init;

@end

