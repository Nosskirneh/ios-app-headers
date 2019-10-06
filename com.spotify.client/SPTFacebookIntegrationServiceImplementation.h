//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFacebookIntegrationService-Protocol.h"

@class NSString, SPTAllocationContext, SPTFacebookSDKImplementation;
@protocol SPTURIDispatchService, SPTURISchemeRegistry;

@interface SPTFacebookIntegrationServiceImplementation : NSObject <SPTFacebookIntegrationService>
{
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTURISchemeRegistry> _uriSchemeRegistry;
    SPTFacebookSDKImplementation *_facebookSDK;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTFacebookSDKImplementation *facebookSDK; // @synthesize facebookSDK=_facebookSDK;
@property(retain, nonatomic) id <SPTURISchemeRegistry> uriSchemeRegistry; // @synthesize uriSchemeRegistry=_uriSchemeRegistry;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
- (void).cxx_destruct;
- (void)registerFacebookURISchemeHandler;
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

