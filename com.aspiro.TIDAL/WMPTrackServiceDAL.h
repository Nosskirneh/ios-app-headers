//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WMPTrackServiceProvider;

@interface WMPTrackServiceDAL : NSObject
{
    WMPTrackServiceProvider *_dataProvider;
}

@property(retain, nonatomic) WMPTrackServiceProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
- (void).cxx_destruct;
- (void)removeFavoriteTrackWithTrackId:(id)arg1 inContext:(id)arg2;
- (void)removeCategoryTrackForCategoryIdentifier:(id)arg1 andTrackId:(id)arg2 inContext:(id)arg3;
- (void)removeArtistTrackByArtistId:(id)arg1 andTrackId:(id)arg2 inContext:(id)arg3;
- (void)fetchSuggestedTracksForTrackUuid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTrackExtendedInfoForUuid:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeTrackFromFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addTrackToFavorites:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTracksByCategoryIdentifier:(id)arg1 sortAndRangeParameters:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchFavoriteTracksByUserId:(id)arg1 sortAndRangeParameters:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchTopTracksByArtistId:(id)arg1 sortAndRangeParameters:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchTrackByTrackUuid:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchTrackRadioByTrackId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchTrackRadioByArtistId:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)fetchTrackRadioById:(id)arg1 isArtist:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)parseWithTracksArray:(id)arg1;

@end

