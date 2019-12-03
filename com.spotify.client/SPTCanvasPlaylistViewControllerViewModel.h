//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, SPTCanvasPlaylistResolver;
@protocol SPTCanvasMetadataResolver, SPTCanvasMetadataResolverFactory, SPTCanvasPlaylistViewControllerViewModelDelegate, SPTCanvasViewControllerFactory, SPTPlayer, SPTPlayerFeature;

@interface SPTCanvasPlaylistViewControllerViewModel : NSObject <SPTPlayerObserver>
{
    id <SPTCanvasPlaylistViewControllerViewModelDelegate> _delegate;
    id <SPTCanvasMetadataResolverFactory> _metaDataResolverFactory;
    id <SPTCanvasViewControllerFactory> _canvasViewControllerFactory;
    id <SPTPlayer> _player;
    id <SPTPlayerFeature> _playerFeature;
    SPTCanvasPlaylistResolver *_playlistResolver;
    id <SPTCanvasMetadataResolver> _metaDataResolver;
    NSDictionary *_tracksDict;
    NSArray *_tracks;
    NSURL *_currentTrackURI;
}

@property(copy, nonatomic) NSURL *currentTrackURI; // @synthesize currentTrackURI=_currentTrackURI;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(copy, nonatomic) NSDictionary *tracksDict; // @synthesize tracksDict=_tracksDict;
@property(retain, nonatomic) id <SPTCanvasMetadataResolver> metaDataResolver; // @synthesize metaDataResolver=_metaDataResolver;
@property(readonly, nonatomic) SPTCanvasPlaylistResolver *playlistResolver; // @synthesize playlistResolver=_playlistResolver;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTCanvasViewControllerFactory> canvasViewControllerFactory; // @synthesize canvasViewControllerFactory=_canvasViewControllerFactory;
@property(readonly, nonatomic) id <SPTCanvasMetadataResolverFactory> metaDataResolverFactory; // @synthesize metaDataResolverFactory=_metaDataResolverFactory;
@property(nonatomic) __weak id <SPTCanvasPlaylistViewControllerViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
@property(readonly, nonatomic) long long numberOfItems;
- (_Bool)shouldSelectIndexPath:(id)arg1;
- (id)viewControllerForItemAtIndexPath:(id)arg1;
- (id)canvasViewControllerForTrack:(id)arg1 withCanvasModel:(id)arg2;
- (void)resolveMetadataForTracks:(id)arg1;
- (void)resolvePlaylist;
- (void)removeContent;
- (void)addContent;
- (void)playTrackAtIndexPath:(id)arg1;
- (void)pauseTrack;
- (id)initWithMetadataResolverFactory:(id)arg1 canvasViewControllerFactory:(id)arg2 metaDataResolverFactory:(id)arg3 playlistResolver:(id)arg4 player:(id)arg5 playerFeature:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

