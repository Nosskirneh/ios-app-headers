//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTSpeakerCompanionLogger, SPTSpeakerCompanionPageResponse;
@protocol SPTExternalIntegrationPlaybackController, SPTLinkDispatcher, SPTPlayer, SPTSpeakerCompanionResultsPageViewModelDelegate;

@interface SPTSpeakerCompanionResultsPageViewModel : NSObject
{
    id <SPTSpeakerCompanionResultsPageViewModelDelegate> _delegate;
    SPTSpeakerCompanionPageResponse *_companionPageResults;
    id <SPTLinkDispatcher> _linkDispatcher;
    id <SPTPlayer> _player;
    id <SPTExternalIntegrationPlaybackController> _playbackController;
    SPTSpeakerCompanionLogger *_logger;
}

@property(retain, nonatomic) SPTSpeakerCompanionLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) id <SPTExternalIntegrationPlaybackController> playbackController; // @synthesize playbackController=_playbackController;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) SPTSpeakerCompanionPageResponse *companionPageResults; // @synthesize companionPageResults=_companionPageResults;
@property(nonatomic) __weak id <SPTSpeakerCompanionResultsPageViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playbackEntityURI:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)startPlaybackWithEntityURI:(id)arg1 atIndexPath:(id)arg2;
- (void)navigateToEntityURI:(id)arg1;
- (id)modelForIndexPath:(id)arg1;
- (id)results;
- (void)didSelectRowForIndexPath:(id)arg1;
- (void)dismissResultsPage;
- (void)presentResultsPage;
- (void)updateViewModelWithData:(id)arg1;
- (id)initWithLinkDispatcher:(id)arg1 player:(id)arg2 externalPlaybackController:(id)arg3 logging:(id)arg4;

@end

