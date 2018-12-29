//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ContentSource-Protocol.h"

@class NSArray, NSString, PlaybackService, RACDisposable, StorageRequestController;
@protocol ContentSourceDelegate;

@interface StationTracksSource : NSObject <ContentSource>
{
    id <ContentSourceDelegate> _delegate;
    StorageRequestController *_fetcher;
    PlaybackService *_playbackService;
    RACDisposable *_playerDisposable;
    NSArray *_items;
}

@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) RACDisposable *playerDisposable; // @synthesize playerDisposable=_playerDisposable;
@property(readonly, nonatomic) PlaybackService *playbackService; // @synthesize playbackService=_playbackService;
@property(readonly, nonatomic) StorageRequestController *fetcher; // @synthesize fetcher=_fetcher;
@property(nonatomic) __weak id <ContentSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)containsTrackWithUrn:(id)arg1;
- (void)fetchContent;
- (void)observePlayback;
- (void)loadContent;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) id sectionInfo;
- (id)initWithStationUrn:(id)arg1;
- (id)initWithFetcher:(id)arg1 playbackService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
