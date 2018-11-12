//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTFacebookIntegrationService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFacebookMessengerURISchemeHandler, SPTFacebookSDKImplementation;
@protocol SPTURIDispatchService;

@interface SPTFacebookIntegrationServiceImplementation : NSObject <SPTFacebookIntegrationService>
{
    id <SPTURIDispatchService> _URIDispatchService;
    SPTFacebookSDKImplementation *_facebookSDK;
    SPTFacebookMessengerURISchemeHandler *_messengerSchemeHandler;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFacebookMessengerURISchemeHandler *messengerSchemeHandler; // @synthesize messengerSchemeHandler=_messengerSchemeHandler;
@property(retain, nonatomic) SPTFacebookSDKImplementation *facebookSDK; // @synthesize facebookSDK=_facebookSDK;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
- (void).cxx_destruct;
- (id)provideFacebookSDK;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

