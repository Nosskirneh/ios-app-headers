//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistModelObserver-Protocol.h"
#import "SPTFreeTierPlaylistPlayViewModel-Protocol.h"

@class NSString;
@protocol SPTFreeTierPlaylistPlayViewModel;

@interface SPTShowsFormatPlaylistPlayViewModelProxy : NSObject <SPTFreeTierPlaylistPlayViewModel, SPTFreeTierPlaylistModelObserver>
{
    id <SPTFreeTierPlaylistPlayViewModel> _showsFormatPlayViewModel;
    id <SPTFreeTierPlaylistPlayViewModel> _defaultPlayViewModel;
    unsigned long long _onDemandType;
}

@property(nonatomic) unsigned long long onDemandType; // @synthesize onDemandType=_onDemandType;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> defaultPlayViewModel; // @synthesize defaultPlayViewModel=_defaultPlayViewModel;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> showsFormatPlayViewModel; // @synthesize showsFormatPlayViewModel=_showsFormatPlayViewModel;
- (void).cxx_destruct;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (void)playTrackEntity:(id)arg1;
- (void)play;
@property(readonly, nonatomic, getter=isPlayButtonPausingPlay) _Bool playButtonPausingPlay;
@property(readonly, nonatomic, getter=isPlayButtonUsedForPlayback) _Bool playButtonUsedForPlayback;
@property(readonly, nonatomic) _Bool shouldShowPlayButton;
@property(readonly, nonatomic, getter=isPlaylistPlaying) _Bool playlistPlaying;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistPlayViewModel> currentPlayViewModel;
- (id)initWithShowsFormatPlayViewModel:(id)arg1 defaultPlayViewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
