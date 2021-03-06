//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UserLikedTracksServiceFactory;

@interface UserContentControllerConfigurationFactory : NSObject
{
    UserLikedTracksServiceFactory *_userLikedTracksServiceFactory;
}

@property(readonly, nonatomic) UserLikedTracksServiceFactory *userLikedTracksServiceFactory; // @synthesize userLikedTracksServiceFactory=_userLikedTracksServiceFactory;
- (void).cxx_destruct;
- (id)contentControllerTitleForLikePlaylists;
- (id)contentControllerTitleForLikeTracks;
- (id)contentControllerTitleForPostedTracks;
- (id)postedOrLikedPlaylistsLayout;
- (id)playlistLayout;
- (id)trackLayoutWithToolbar:(_Bool)arg1;
- (id)columnLayout:(id)arg1;
- (id)stateDelegateLayout;
- (id)childDataSourceArrayWithSectionRequestController:(id)arg1;
- (id)userRepostPlaylistsDataSourcesForUserUrn:(id)arg1;
- (id)userPostPlaylistsDataSourcesForUserUrn:(id)arg1;
- (id)userPostedReleasesDataSourcesForUserUrn:(id)arg1;
- (id)userPostedOrLikedPlaylistsDataSourcesForUserUrn:(id)arg1;
- (id)userPostedPlaylistsDataSourcesForUserUrn:(id)arg1;
- (id)userLikedPlaylistsDataSourcesForUserUrn:(id)arg1;
- (id)userLikedTracksDataSourcesForUserUrn:(id)arg1 hasToolbar:(_Bool)arg2;
- (id)userPostedTracksDataSourcesForUserUrn:(id)arg1;
- (id)serviceForUser:(id)arg1 isOwner:(_Bool)arg2;
- (id)userRepostPlaylistsConfigurationForUserUrn:(id)arg1;
- (id)userPostPlaylistsConfigurationForUserUrn:(id)arg1;
- (id)userReleasesPlaylistsConfigurationForUserUrn:(id)arg1;
- (id)userPostedOrLikedPlaylistsConfigurationForUserUrn:(id)arg1;
- (id)userPostedPlaylistsConfigurationForUserUrn:(id)arg1;
- (id)userLikedPlaylistsConfigurationForUserUrn:(id)arg1 isOwner:(_Bool)arg2;
- (id)userLikedTracksConfigurationForUserUrn:(id)arg1 isOwner:(_Bool)arg2;
- (id)userPostedTracksConfigurationForUserUrn:(id)arg1;
- (id)initWithUserLikedTracksServiceFactory:(id)arg1;
- (id)init;

@end

