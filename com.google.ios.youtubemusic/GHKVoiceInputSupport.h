//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSKVoiceSearchViewControllerDelegate-Protocol.h"

@class GSKVoiceSearchViewController, GSKVoiceSearchViewControllerConfiguration, NSString;
@protocol GHKVoiceInputSupportDelegate;

@interface GHKVoiceInputSupport : NSObject <GSKVoiceSearchViewControllerDelegate>
{
    GSKVoiceSearchViewControllerConfiguration *_voiceSearchConfig;
    id <GHKVoiceInputSupportDelegate> _delegate;
    GSKVoiceSearchViewController *_voiceSearchViewController;
    unsigned long long _previousAudioSessionCategoryOptions;
    NSString *_previousAudioSessionCategory;
}

@property(copy, nonatomic) NSString *previousAudioSessionCategory; // @synthesize previousAudioSessionCategory=_previousAudioSessionCategory;
@property(nonatomic) unsigned long long previousAudioSessionCategoryOptions; // @synthesize previousAudioSessionCategoryOptions=_previousAudioSessionCategoryOptions;
@property(retain, nonatomic) GSKVoiceSearchViewController *voiceSearchViewController; // @synthesize voiceSearchViewController=_voiceSearchViewController;
@property(nonatomic) __weak id <GHKVoiceInputSupportDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)voiceSearchViewControllerDidFinishUsingAudioSession:(id)arg1;
- (void)voiceSearchViewControllerDidCancel:(id)arg1;
- (void)voiceSearchViewController:(id)arg1 didReceiveResult:(id)arg2;
- (void)activateVoiceInputFromViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

