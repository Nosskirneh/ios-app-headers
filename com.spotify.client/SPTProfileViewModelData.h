//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTProfileViewModelCacheableData, SPTProfileViewModelVolatileData;

@interface SPTProfileViewModelData : NSObject
{
    SPTProfileViewModelCacheableData *_cacheableData;
    SPTProfileViewModelVolatileData *_volatileData;
}

@property(retain, nonatomic) SPTProfileViewModelVolatileData *volatileData; // @synthesize volatileData=_volatileData;
@property(retain, nonatomic) SPTProfileViewModelCacheableData *cacheableData; // @synthesize cacheableData=_cacheableData;
- (void).cxx_destruct;

@end

