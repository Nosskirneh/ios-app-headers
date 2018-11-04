//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTSpeakerActivationPopupManagerProtocol.h"

@class NSString, SPTDataLoader, SPTPopupDialog, SPTSpeakerActivationAccountLinkingPopupContentViewController, SPTSpeakerActivationLogger;

@interface SPTSpeakerActivationAccountLinkingPopupManager : NSObject <SPTDataLoaderDelegate, SPTSpeakerActivationPopupManagerProtocol>
{
    _Bool _eligibleForAccountLinkingPopup;
    id <SPTSpeakerActivationAccountLinkingPopupManagerDelegate> _delegate;
    NSString *_sourceIdentifier;
    SPTSpeakerActivationAccountLinkingPopupContentViewController *_contentViewController;
    SPTPopupDialog *_dialog;
    SPTDataLoader *_dataLoader;
    id <SPTGaiaManager> _gaiaManager;
    SPTSpeakerActivationLogger *_logger;
    id <SPTLocalSettings> _localSettings;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
}

@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) SPTSpeakerActivationLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTGaiaManager> gaiaManager; // @synthesize gaiaManager=_gaiaManager;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTPopupDialog *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic) SPTSpeakerActivationAccountLinkingPopupContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic) __weak id <SPTSpeakerActivationAccountLinkingPopupManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool eligibleForAccountLinkingPopup; // @synthesize eligibleForAccountLinkingPopup=_eligibleForAccountLinkingPopup;
- (void).cxx_destruct;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)cancelRequest;
- (void)fetchAccountLinkingStatus;
- (void)dismissActivationPopup;
- (void)linkAccountsAction:(id)arg1;
- (void)dismissAction:(id)arg1;
- (id)providePopupDialogWithActiveDevice:(id)arg1;
- (void)dealloc;
- (id)initWithSourceIdentifier:(id)arg1 logger:(id)arg2 localSettings:(id)arg3 linkDispatcher:(id)arg4 gaiaManager:(id)arg5 dataLoader:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

