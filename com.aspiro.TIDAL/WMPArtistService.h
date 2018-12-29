//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class WMPArtistServiceDAL;

@interface WMPArtistService : NSObject
{
    WMPArtistServiceDAL *_artistDAL;
}

+ (id)siteNameValueNames;
@property(retain, nonatomic) WMPArtistServiceDAL *artistDAL; // @synthesize artistDAL=_artistDAL;
- (void).cxx_destruct;
- (void)getArtistLinkById:(id)arg1 withSiteName:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getArtistTweetsById:(id)arg1 maxCount:(id)arg2 completion:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)getArtistFacebookPostsById:(id)arg1 maxCount:(id)arg2 completion:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (void)getArtistTicketMasterLinkById:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getArtistStoreLinkById:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)obtainSimilarArtistsByArtistId:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)obtainInfluencersForArtistWithId:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)toggleFavoriteArtistId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeArtistFromFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addArtistToFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)searchForArtist:(id)arg1 sortAndRangeParameters:(id)arg2;
- (void)obtainFavoriteArtistsById:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)getArtistById:(id)arg1;
- (void)obtainArtistBioById:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)obtainArtistBioById:(id)arg1;
- (void)obtainArtistById:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)obtainArtistById:(id)arg1;
- (id)init;

@end
