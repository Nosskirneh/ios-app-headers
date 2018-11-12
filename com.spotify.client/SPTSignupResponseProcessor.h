//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"

@class NSString;

@interface SPTSignupResponseProcessor : NSObject <SPTDataLoaderDelegate>
{
    CDUnknownBlockType _validationCompletionBlock;
    NSString *_errorDomainIdentifier;
}

@property(readonly, copy, nonatomic) NSString *errorDomainIdentifier; // @synthesize errorDomainIdentifier=_errorDomainIdentifier;
@property(copy, nonatomic) CDUnknownBlockType validationCompletionBlock; // @synthesize validationCompletionBlock=_validationCompletionBlock;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)handleSuccesfulResponseDictionary:(id)arg1 validationCompletionBlock:(CDUnknownBlockType)arg2;
- (id)errorForResponseError:(id)arg1 errorDomain:(id)arg2;
- (id)errorForResponseDictionary:(id)arg1 errorDomain:(id)arg2;
- (void)handleSuccesfulResponseDictionary:(id)arg1 errorDomain:(id)arg2 validationCompletionBlock:(CDUnknownBlockType)arg3;
- (void)handleSuccesfulResponseDictionary:(id)arg1 errorDomain:(id)arg2 dataLoader:(id)arg3;
- (id)responseDictionaryWithData:(id)arg1;
- (id)initWithErrorDomain:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

