//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlurryActorStreamComponent.h"

#import "IFlurrySessionInitInfoSource-Protocol.h"

@class NSString;

@interface FlurrySessionInitInfoSource : FlurryActorStreamComponent <IFlurrySessionInitInfoSource>
{
}

+ (id)sessionInitInfoSource;
- (void)onqueue_flush;
- (void)flush;
- (void)onqueue_logStartTime:(id)arg1;
- (void)logStartTime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

