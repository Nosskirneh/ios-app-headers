//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTInnerTubeResponseCacheKeyProtocol-Protocol.h"

@class NSString, YTIInnerTubeContext;

@interface YTIGetNotificationSettingsRequest : GPBMessage <YTInnerTubeResponseCacheKeyProtocol>
{
}

+ (id)descriptor;
- (id)innerTubeResponseCacheKeyWithService:(long long)arg1;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

