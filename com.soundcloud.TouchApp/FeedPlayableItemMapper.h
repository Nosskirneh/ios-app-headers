//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ServiceObjectMapper-Protocol.h"

@class NSString;

@interface FeedPlayableItemMapper : NSObject <ServiceObjectMapper>
{
}

- (id)permalinkUrlFromDictionary:(id)arg1;
- (id)promotedTrackState:(id)arg1 analyticsResource:(id)arg2;
- (_Bool)isLikedByYou:(id)arg1;
- (id)promoterUrn:(id)arg1;
- (id)reposterUrn:(id)arg1;
- (_Bool)isPrivate:(id)arg1;
- (id)mapFromDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

