//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTSpeakerActivationPopupManagerProtocol.h"

@class NSString, SPTDataLoader, SPTGaiaDevice, SPTPopupDialog, SPTSpeakerActivationLogger, SPTSpeakerActivationSuggestionPopupContentViewController, SPTSpeakerActivationSuggestionPopupViewModel;

@interface SPTSpeakerActivationSuggestionPopupManager : NSObject <SPTDataLoaderDelegate, SPTSpeakerActivationPopupManagerProtocol>
{
    id <SPTSpeakerActivationSuggestionPopupManagerDelegate> _delegate;
    NSString *_sourceIdentifier;
    SPTSpeakerActivationLogger *_logger;
    SPTDataLoader *_dataLoader;
    id <GLUEImageLoader> _glueImageLoader;
    id <SPTLocalSettings> _localSettings;
    SPTSpeakerActivationSuggestionPopupViewModel *_viewModel;
    id <SPTDataLoaderCancellationToken> _cancellationToken;
    SPTSpeakerActivationSuggestionPopupContentViewController *_contentViewController;
    SPTPopupDialog *_dialog;
    SPTGaiaDevice *_activeDevice;
}

@property(retain, nonatomic) SPTGaiaDevice *activeDevice; // @synthesize activeDevice=_activeDevice;
@property(retain, nonatomic) SPTPopupDialog *dialog; // @synthesize dialog=_dialog;
@property(retain, nonatomic) SPTSpeakerActivationSuggestionPopupContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> cancellationToken; // @synthesize cancellationToken=_cancellationToken;
@property(retain, nonatomic) SPTSpeakerActivationSuggestionPopupViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(retain, nonatomic) id <GLUEImageLoader> glueImageLoader; // @synthesize glueImageLoader=_glueImageLoader;
@property(retain, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) SPTSpeakerActivationLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(nonatomic) __weak id <SPTSpeakerActivationSuggestionPopupManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissAction:(id)arg1;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)cancelRequest;
- (void)fetchSuggestion;
- (id)providePopupDialogWithActiveDevice:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 logger:(id)arg2 dataLoader:(id)arg3 GLUEImageLoader:(id)arg4 localSettings:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
