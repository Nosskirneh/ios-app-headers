//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceHomeViewModel-Protocol.h"

@class NSString;
@protocol SPTVoiceHomeViewModelDelegate, SPTVoiceTestManager;

@interface SPTVoiceHomeViewModelProviderImplementation : NSObject <SPTVoiceHomeViewModel>
{
    id <SPTVoiceHomeViewModelDelegate> voiceViewModelDelegate;
    id <SPTVoiceTestManager> _testManager;
}

@property(retain, nonatomic) id <SPTVoiceTestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTVoiceHomeViewModelDelegate> voiceViewModelDelegate; // @synthesize voiceViewModelDelegate;
- (void).cxx_destruct;
- (_Bool)checkAndAppendVoiceComponentInModel:(id)arg1;
- (id)initWithTestManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

