//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GSKMicButtonControllerDelegate-Protocol.h"
#import "GSKSpeechToTextStreamingControllerDelegate-Protocol.h"
#import "GSKVoiceSearchSoundControllerDelegate-Protocol.h"

@class GSKMicButtonController, GSKMicVoiceSearchContainerView, GSKSpeechToTextStreamingController, GSKVoiceSearchLanguageSelectorViewController, GSKVoiceSearchSoundController, GSKVoiceSearchViewControllerConfiguration, NSString;
@protocol GSKVoiceSearchViewControllerDelegate;

@interface GSKVoiceSearchViewController : UIViewController <GSKMicButtonControllerDelegate, GSKVoiceSearchSoundControllerDelegate, GSKSpeechToTextStreamingControllerDelegate>
{
    GSKVoiceSearchSoundController *_soundController;
    GSKVoiceSearchViewControllerConfiguration *_voiceSearchControllerConfig;
    GSKMicVoiceSearchContainerView *_containerView;
    id <GSKVoiceSearchViewControllerDelegate> _delegate;
    GSKVoiceSearchLanguageSelectorViewController *_languageSelectorController;
    GSKSpeechToTextStreamingController *_textStreamingController;
    GSKMicButtonController *_micButtonController;
}

@property(retain, nonatomic) GSKMicButtonController *micButtonController; // @synthesize micButtonController=_micButtonController;
@property(retain, nonatomic) GSKSpeechToTextStreamingController *textStreamingController; // @synthesize textStreamingController=_textStreamingController;
@property(retain, nonatomic) GSKVoiceSearchLanguageSelectorViewController *languageSelectorController; // @synthesize languageSelectorController=_languageSelectorController;
@property(nonatomic) __weak id <GSKVoiceSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForPresentation;
- (void)appWillResignActive;
- (void)dismissLanguagePicker;
- (void)languageButtonDidTap;
- (void)closeButtonDidTap;
- (void)updateCurrentLanguageNameAnimated:(_Bool)arg1;
- (void)resumeVoiceSearch;
- (void)stopVoiceSearch;
- (void)userDidStartVoiceSearch;
- (void)stopVoiceSearchAndNotifyDelegateOnCancel;
- (_Bool)isPerformingVoiceSearch;
- (void)micButtonControllerDidTapMicButton:(id)arg1;
- (void)voiceSearchSoundController:(id)arg1 didFinishPlaybackWithSoundType:(unsigned long long)arg2;
- (void)speechToTextStreamingControllerDidFinish:(id)arg1;
- (void)speechToTextStreamingController:(id)arg1 didReceivePartialResultWithStablePrefix:(id)arg2 unstableSuffix:(id)arg3;
- (void)speechToTextStreamingController:(id)arg1 didReceiveResult:(id)arg2;
- (void)speechToTextStreamingController:(id)arg1 didEncounterError:(id)arg2;
@property(readonly, nonatomic) GSKMicVoiceSearchContainerView *containerView;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

