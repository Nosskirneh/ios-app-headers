//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class MobileApiLikedPlaylistCollection, MobileApiLikedTrackCollection, MobileApiPostedOrRepostedTrackCollection, MobileApiPostedPlaylistCollection, MobileApiReleaseCollection, MobileApiRepostedPlaylistCollection, MobileApiSpotlightCollection, MobileApiUser;

@interface MobileApiProfile : MTLModel <MTLJSONSerializing>
{
    MobileApiUser *_user;
    MobileApiSpotlightCollection *_spotlight;
    MobileApiLikedTrackCollection *_trackLikes;
    MobileApiLikedPlaylistCollection *_playlistLikes;
    MobileApiPostedOrRepostedTrackCollection *_trackPostsAndReposts;
    MobileApiPostedPlaylistCollection *_playlistPosts;
    MobileApiRepostedPlaylistCollection *_playlistReposts;
    MobileApiReleaseCollection *_releasePosts;
}

+ (id)releasePostsJSONTransformer;
+ (id)playlistRepostsJSONTransformer;
+ (id)playlistPostsJSONTransformer;
+ (id)trackPostsAndRepostsJSONTransformer;
+ (id)playlistLikesJSONTransformer;
+ (id)trackLikesJSONTransformer;
+ (id)spotlightJSONTransformer;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) MobileApiReleaseCollection *releasePosts; // @synthesize releasePosts=_releasePosts;
@property(retain, nonatomic) MobileApiRepostedPlaylistCollection *playlistReposts; // @synthesize playlistReposts=_playlistReposts;
@property(retain, nonatomic) MobileApiPostedPlaylistCollection *playlistPosts; // @synthesize playlistPosts=_playlistPosts;
@property(retain, nonatomic) MobileApiPostedOrRepostedTrackCollection *trackPostsAndReposts; // @synthesize trackPostsAndReposts=_trackPostsAndReposts;
@property(retain, nonatomic) MobileApiLikedPlaylistCollection *playlistLikes; // @synthesize playlistLikes=_playlistLikes;
@property(retain, nonatomic) MobileApiLikedTrackCollection *trackLikes; // @synthesize trackLikes=_trackLikes;
@property(retain, nonatomic) MobileApiSpotlightCollection *spotlight; // @synthesize spotlight=_spotlight;
@property(retain, nonatomic) MobileApiUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)collections;
- (_Bool)validate:(id *)arg1;

@end

