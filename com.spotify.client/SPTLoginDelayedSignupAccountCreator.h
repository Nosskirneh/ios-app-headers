//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTSignupDataLoaderDelegate-Protocol.h"

@class NSString, SPTSignupCreateUserDataLoader;
@protocol SPTLoginLogger;

@interface SPTLoginDelayedSignupAccountCreator : NSObject <SPTSignupDataLoaderDelegate>
{
    SPTSignupCreateUserDataLoader *_dataLoader;
    id <SPTLoginLogger> _logger;
    CDUnknownBlockType _internalCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType internalCompletionBlock; // @synthesize internalCompletionBlock=_internalCompletionBlock;
@property(retain, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTSignupCreateUserDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didFinishLoadingWithSuccessResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didFinishLoadingWithError:(id)arg2;
- (void)invokeAndClearCompletionWithError:(id)arg1;
- (id)generateBirthDate;
- (id)generateRandomGender;
- (id)generateRandomGuestEmail;
- (id)createGuestUserInfoModel;
- (void)createGuestAccountWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithCreateUserDataLoader:(id)arg1 logger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

