//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface HAMNetworkStats : NSObject
{
    NSDictionary *_userInfo;
    long long _bitrate;
    double _latency;
}

+ (id)statsWithBitrate:(long long)arg1 latency:(double)arg2;
+ (id)statsWithBitrate:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) double latency; // @synthesize latency=_latency;
@property(readonly, nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
- (void).cxx_destruct;
- (_Bool)isEqualToNetworkStats:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)init;
- (id)initWithBitrate:(long long)arg1 latency:(double)arg2 userInfo:(id)arg3;
@property(readonly, nonatomic) int ml_bandwidthSource;

@end
