//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EngagementCallFactory, SyncCenter;

@interface RepostService : NSObject
{
    EngagementCallFactory *_callFactory;
    SyncCenter *_syncCenter;
}

@property(readonly, nonatomic) SyncCenter *syncCenter; // @synthesize syncCenter=_syncCenter;
@property(readonly, nonatomic) EngagementCallFactory *callFactory; // @synthesize callFactory=_callFactory;
- (void).cxx_destruct;
- (id)unpostUrn:(id)arg1;
- (id)repostUrn:(id)arg1;
- (id)initWithCallFactory:(id)arg1 syncCenter:(id)arg2;
- (id)init;

@end

