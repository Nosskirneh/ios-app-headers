//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol SPTVideoCacheOptions;

@protocol SPTVideoCacheOptionsFactory <NSObject>
- (id <SPTVideoCacheOptions>)createWithCachePath:(NSString *)arg1 cacheIdentifier:(NSString *)arg2 timeToLive:(unsigned long long)arg3;
@end

