//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWAWidget.h"

#import "GWAIdentityAndCreditFormDelegate-Protocol.h"

@class GWAIdentityAndCreditForm, NSData, NSMutableArray, NSString;

@interface GWAIdentityVerification : GWAWidget <GWAIdentityAndCreditFormDelegate>
{
    GWAIdentityAndCreditForm *_initialForm;
    NSMutableArray *_additionalPages;
    NSMutableArray *_IDVPageStack;
    NSData *_encryptedParams;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSData *encryptedParams; // @synthesize encryptedParams=_encryptedParams;
- (void).cxx_destruct;
- (id)visibleViewController;
- (void)submitFlow:(id)arg1 withValue:(id)arg2 showActivityIndicator:(_Bool)arg3;
- (void)closeIDVFormUntilTopIsPage:(id)arg1;
- (_Bool)pageStackContainsPage:(id)arg1;
- (void)flowFinishedWithSuccess:(_Bool)arg1 integratorCallbackData:(id)arg2 error:(id)arg3;
- (void)overflowBarButtonWasPressed:(id)arg1 event:(id)arg2 button:(id)arg3;
- (void)close;
- (id)handlePage:(id)arg1 metadata:(id)arg2 inOverlay:(_Bool)arg3;
- (void)receivedSubmitResponse:(id)arg1 error:(id)arg2;
- (void)receivedInitializeResponse:(id)arg1 error:(id)arg2;
- (void)hideAdditionalIdentityAndCreditForm:(id)arg1;
- (void)showOverlayAdditionalIdentityAndCreditForm:(id)arg1 page:(id)arg2;
- (void)flow:(id)arg1 shouldShowActivityIndicator:(_Bool)arg2;
- (void)flow:(id)arg1 uploadParameters:(id)arg2 toURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)flow:(id)arg1 submittedWithValue:(id)arg2 showActivityIndicator:(_Bool)arg3;
- (Class)submitResponseClass;
- (Class)initializeResponseClass;
- (id)baseServicePath;
- (void)initializeWidget;
- (void)launchWithEncryptedParameters:(id)arg1 fromViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithEnvironment:(long long)arg1 identity:(id)arg2 service:(id)arg3 colorGroup:(id)arg4 headerColorGroup:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

