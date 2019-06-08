//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHProfileViewModel.h"

@class NSFetchedResultsController, NSString, ZDSDeferred;
@protocol RHTasteService;

@interface RHTastePlaylistViewModel : RHProfileViewModel
{
    id <RHTasteService> _tasteService;
}

@property(retain, nonatomic) id <RHTasteService> tasteService; // @synthesize tasteService=_tasteService;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long profileTagType;
- (id)similarScoreString;
@property(readonly, nonatomic) _Bool offlinePlayableTracksAvailable;
- (void)performPlaybackForFetchedObject:(id)arg1 shuffle:(_Bool)arg2;
- (_Bool)playFetchedObject:(id)arg1 shuffle:(_Bool)arg2;
- (void)performPlaybackForFetchedObject:(id)arg1;
- (_Bool)playFetchedObject:(id)arg1;
- (void)handleUnableToPlayFetchedObject:(id)arg1;
- (_Bool)ableToPlayFetchedObject:(id)arg1;
- (id)avatarOfSize:(struct CGSize)arg1;
- (id)deferredImageForArtist:(id)arg1 size:(struct CGSize)arg2;
- (id)heroImageDeferredWithTracks:(id)arg1 size:(struct CGSize)arg2;
- (id)heroImageOfSize:(struct CGSize)arg1;
- (id)deferredHeroImageOfSize:(struct CGSize)arg1;
@property(readonly, nonatomic) NSString *playlistName;
- (void)listenerNetworkSingleUserViewAppeared;
- (void)addSavePlaylistToActionSheet:(id)arg1;
- (id)frcWithRefreshDeferred:(id *)arg1;
@property(readonly, nonatomic) NSFetchedResultsController *frcForProfileTrack;
@property(readonly, nonatomic) ZDSDeferred *deferredFrcForProfileTrack;
- (id)initWithDependencies:(id)arg1 profile:(id)arg2 metricsSource:(id)arg3;

@end

