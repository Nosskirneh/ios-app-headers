//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGoogleAppFlipURIManager-Protocol.h"

@class NSString, UIApplication;
@protocol SPTGoogleAppFlipParameterValidator;

@interface SPTGoogleAppFlipURIManagerImplementation : NSObject <SPTGoogleAppFlipURIManager>
{
    UIApplication *_application;
    id <SPTGoogleAppFlipParameterValidator> _validator;
}

@property(readonly, nonatomic) __weak id <SPTGoogleAppFlipParameterValidator> validator; // @synthesize validator=_validator;
@property(readonly, nonatomic) __weak UIApplication *application; // @synthesize application=_application;
- (void).cxx_destruct;
- (id)scopesParameter:(id)arg1;
- (long long)sendResponseURL:(id)arg1;
- (id)parameter:(id)arg1 fromFragment:(id)arg2;
- (id)parameter:(id)arg1 fromComponents:(id)arg2;
- (id)buildFailureResponseURLForRedirectURL:(id)arg1 errorRecoverability:(unsigned long long)arg2 errorDescription:(id)arg3;
- (id)buildFailureResponseURLForRedirectURL:(id)arg1 error:(id)arg2 errorDescription:(id)arg3;
- (id)buildSuccessResponseURLForRedirectURL:(id)arg1 authToken:(id)arg2 state:(id)arg3;
- (id)buildAuthenticationURLForClientId:(id)arg1 redirectURI:(id)arg2 scopes:(id)arg3;
- (id)initWithApplication:(id)arg1 validator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
