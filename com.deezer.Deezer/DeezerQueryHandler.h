//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface DeezerQueryHandler : NSObject
{
    NSMutableArray *_urls;
}

+ (id)sharedHandler;
@property(retain, nonatomic) NSMutableArray *urls; // @synthesize urls=_urls;
- (void).cxx_destruct;
- (void)notifyFailedToHandleQueryWithDescription:(id)arg1;
- (void)notifyDidHandleQuery;
- (void)notifyWillHandleQuery;
- (void)didEnterOnlineMode:(id)arg1;
- (void)sessionDidOpen:(id)arg1;
- (void)playTrack:(id)arg1;
- (void)handleNextURL;
- (unsigned long long)countOfUrls;
- (void)presentSearchResultsWithQueryURL:(id)arg1;
- (void)presentPlaylistWithQueryURL:(id)arg1;
- (void)presentArtistWithQueryURL:(id)arg1;
- (void)presentAlbumWithQueryURL:(id)arg1;
- (void)playWithQueryURL:(id)arg1;
- (void)handleReferrer:(id)arg1;
- (void)handleMarketingParams:(id)arg1 forUrl:(id)arg2;
- (void)handleQueryURL:(id)arg1;
- (_Bool)canHandleURL:(id)arg1;
- (id)init;

@end
