//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface YTNetworkUsageState : NSObject
{
    NSArray *_allUsages;
}

@property(readonly, nonatomic) NSArray *allUsages; // @synthesize allUsages=_allUsages;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long totalBitrate;
@property(readonly, nonatomic) _Bool hasLatencySensitiveMediaPlaybackNetworkUsage;
@property(readonly, nonatomic) _Bool hasMediaPlaybackNetworkUsage;
@property(readonly, nonatomic) _Bool hasAnyMediaPlaybackNetworkUsage;
- (id)initWithNetworkUsages:(id)arg1;

@end

