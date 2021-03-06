//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RHNavigationService.h"

@class NSNotificationCenter, RHSearchAllMoreAlbumResultsViewModel, RHSearchAllMoreArtistResultsViewModel, RHSearchAllMorePlaylistResultsViewModel, RHSearchAllMoreTrackResultsViewModel;

@interface RHSearchAllNavigationService : RHNavigationService
{
    RHSearchAllMoreArtistResultsViewModel *_moreArtistsViewModel;
    RHSearchAllMoreTrackResultsViewModel *_moreTracksViewModel;
    RHSearchAllMoreAlbumResultsViewModel *_moreAlbumsViewModel;
    RHSearchAllMorePlaylistResultsViewModel *_morePlaylistsViewModel;
    NSNotificationCenter *_notificationCenter;
}

@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) RHSearchAllMorePlaylistResultsViewModel *morePlaylistsViewModel; // @synthesize morePlaylistsViewModel=_morePlaylistsViewModel;
@property(retain, nonatomic) RHSearchAllMoreAlbumResultsViewModel *moreAlbumsViewModel; // @synthesize moreAlbumsViewModel=_moreAlbumsViewModel;
@property(retain, nonatomic) RHSearchAllMoreTrackResultsViewModel *moreTracksViewModel; // @synthesize moreTracksViewModel=_moreTracksViewModel;
@property(retain, nonatomic) RHSearchAllMoreArtistResultsViewModel *moreArtistsViewModel; // @synthesize moreArtistsViewModel=_moreArtistsViewModel;
- (void).cxx_destruct;
- (_Bool)isMoreViewModel:(id)arg1 staleForSearchTerm:(id)arg2;
- (id)morePlaylistsViewModelForSearchTerm:(id)arg1;
- (id)moreAlbumsViewModelForSearchTerm:(id)arg1;
- (id)moreTracksViewModelForSearchTerm:(id)arg1;
- (id)moreArtistsViewModelForSearchTerm:(id)arg1;
- (void)pushMoreViewWithModel:(id)arg1;
- (void)pushMorePlaylistsViewForSearchTerm:(id)arg1;
- (void)pushMoreAlbumsViewForSearchTerm:(id)arg1;
- (void)pushMoreTracksViewForSearchTerm:(id)arg1;
- (void)pushMoreArtistsViewForSearchTerm:(id)arg1;
- (void)accountChanged;
- (void)configureNotifications;
- (void)dealloc;

@end

