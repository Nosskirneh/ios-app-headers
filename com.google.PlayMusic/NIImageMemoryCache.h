//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NIMemoryCache.h"

@interface NIImageMemoryCache : NIMemoryCache
{
    unsigned long long _numberOfPixels;
    unsigned long long _maxNumberOfPixels;
    unsigned long long _maxNumberOfPixelsUnderStress;
}

@property(nonatomic) unsigned long long maxNumberOfPixelsUnderStress; // @synthesize maxNumberOfPixelsUnderStress=_maxNumberOfPixelsUnderStress;
@property(nonatomic) unsigned long long maxNumberOfPixels; // @synthesize maxNumberOfPixels=_maxNumberOfPixels;
@property(nonatomic) unsigned long long numberOfPixels; // @synthesize numberOfPixels=_numberOfPixels;
- (void)willRemoveObject:(id)arg1 withName:(id)arg2;
- (void)didSetObject:(id)arg1 withName:(id)arg2;
- (_Bool)shouldSetObject:(id)arg1 withName:(id)arg2 previousObject:(id)arg3;
- (void)reduceMemoryUsage;
- (void)removeAllObjects;
- (unsigned long long)numberOfPixelsUsedByImage:(id)arg1;

@end

