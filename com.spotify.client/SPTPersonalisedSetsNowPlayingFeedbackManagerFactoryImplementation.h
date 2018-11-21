//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPersonalisedSetsNowPlayingFeedbackManagerFactory-Protocol.h"

@class NSString;
@protocol SPTFeedbackManager, SPTFormatListPlatformRemoteControlPolicyManager, SPTPlaylistModel;

@interface SPTPersonalisedSetsNowPlayingFeedbackManagerFactoryImplementation : NSObject <SPTPersonalisedSetsNowPlayingFeedbackManagerFactory>
{
    id <SPTFormatListPlatformRemoteControlPolicyManager> _formatListPlatformRemoteControlPolicyManager;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTFeedbackManager> _feedbackManager;
}

@property(readonly, nonatomic) id <SPTFeedbackManager> feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic) id <SPTFormatListPlatformRemoteControlPolicyManager> formatListPlatformRemoteControlPolicyManager; // @synthesize formatListPlatformRemoteControlPolicyManager=_formatListPlatformRemoteControlPolicyManager;
- (void).cxx_destruct;
- (id)initWithFormatListPlatformRemoteControlPolicyManager:(id)arg1 playlistModel:(id)arg2 feedbackManager:(id)arg3;
- (id)createFeedbackManagerForViewURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

