//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPBasePlaylistCollectionModule.h"

@interface WMPFavoritePlaylistsCollectionModule : WMPBasePlaylistCollectionModule
{
    _Bool _didObtainUserPlaylists;
    _Bool _didObtainFavoritePlaylists;
}

@property(nonatomic) _Bool didObtainFavoritePlaylists; // @synthesize didObtainFavoritePlaylists=_didObtainFavoritePlaylists;
@property(nonatomic) _Bool didObtainUserPlaylists; // @synthesize didObtainUserPlaylists=_didObtainUserPlaylists;
- (void)obtainPlaylistsCompleted;
- (void)fullScreen:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

