//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTEventSenderSatelliteService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTEventSenderSatelliteServiceResponder, SPTEventSenderService;

@interface SPTEventSenderSatelliteServiceImplementation : NSObject <SPTEventSenderSatelliteService>
{
    id <SPTEventSenderService> _eventSenderService;
    id <SPTEventSenderSatelliteServiceResponder> _responder;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTEventSenderSatelliteServiceResponder> responder; // @synthesize responder=_responder;
@property(nonatomic) __weak id <SPTEventSenderService> eventSenderService; // @synthesize eventSenderService=_eventSenderService;
- (void).cxx_destruct;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
