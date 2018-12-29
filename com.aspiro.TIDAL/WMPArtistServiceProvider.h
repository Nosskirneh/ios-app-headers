//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WMPBaseServiceProvider.h"

@interface WMPArtistServiceProvider : WMPBaseServiceProvider
{
}

- (void)removeArtistFromFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addArtistToFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadArtistSearchResult:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadFavoriteArtistsByUserId:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadInfluencersForArtistWithId:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadSimilarArtistsByArtistId:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadArtistLinksById:(id)arg1 sortAndRangeParameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadArtistBioById:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadArtistById:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

