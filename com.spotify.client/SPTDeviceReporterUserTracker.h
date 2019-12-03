//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTThirdPartyUserTracker-Protocol.h"

@class NSString;
@protocol SPTEventSender;

@interface SPTDeviceReporterUserTracker : NSObject <SPTThirdPartyUserTracker>
{
    _Bool enableUserTracker;
    NSString *trackerUserID;
    id <SPTEventSender> _eventSender;
}

@property(retain, nonatomic) id <SPTEventSender> eventSender; // @synthesize eventSender=_eventSender;
@property(readonly, nonatomic, getter=shouldEnableUserTracker) _Bool enableUserTracker; // @synthesize enableUserTracker;
@property(readonly, nonatomic) NSString *trackerUserID; // @synthesize trackerUserID;
- (void).cxx_destruct;
- (id)getDeviceType;
- (void)userDidLoginWithProductState:(id)arg1;
- (id)initWithEventSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
