//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ApiCommand-Protocol.h"

@class MobileApiAdAdapter, NSString;
@protocol _TtP8Features18PlayQueueItemTrack_;

@interface InterstitialCommand : NSObject <ApiCommand>
{
    id <_TtP8Features18PlayQueueItemTrack_> _monetizableTrack;
    NSString *_requestEndpoint;
    MobileApiAdAdapter *_mobileApiAdAdapter;
}

@property(readonly, nonatomic) MobileApiAdAdapter *mobileApiAdAdapter; // @synthesize mobileApiAdAdapter=_mobileApiAdAdapter;
@property(readonly, nonatomic) NSString *requestEndpoint; // @synthesize requestEndpoint=_requestEndpoint;
@property(readonly, nonatomic) id <_TtP8Features18PlayQueueItemTrack_> monetizableTrack; // @synthesize monetizableTrack=_monetizableTrack;
- (void).cxx_destruct;
- (id)adaptInterstitial:(id)arg1;
- (id)executeWithObject:(id)arg1;
- (id)initWithMonetizableTrack:(id)arg1 requestEndpoint:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

