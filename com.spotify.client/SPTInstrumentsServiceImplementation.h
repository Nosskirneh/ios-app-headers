//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTInstrumentsService-Protocol.h"

@class INSEventSender, NSString, SPTAllocationContext;
@protocol SPTContainerService, SPTFeatureFlagSignal, SPTFeatureFlaggingService, SPTNetworkService;

@interface SPTInstrumentsServiceImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTInstrumentsService>
{
    _Bool _messageSent;
    id <SPTContainerService> _containerService;
    id <SPTNetworkService> _networkService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFeatureFlagSignal> _featureFlagSignal;
    INSEventSender *_sdk;
}

+ (id)serviceIdentifier;
@property(nonatomic) _Bool messageSent; // @synthesize messageSent=_messageSent;
@property(retain, nonatomic) INSEventSender *sdk; // @synthesize sdk=_sdk;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> featureFlagSignal; // @synthesize featureFlagSignal=_featureFlagSignal;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (id)wrapMessage:(id)arg1;
- (void)sendDummyMessage;
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

