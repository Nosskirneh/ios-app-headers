//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMosaicStore-Protocol.h"
#import "YTStoryboardFetcherDelegate-Protocol.h"

@class GIMMe, NSString, YTStoryboard, YTStoryboardFetcher;
@protocol YTMosaicStoreDelegate;

@interface YTVoDMosaicStore : NSObject <YTStoryboardFetcherDelegate, YTMosaicStore>
{
    YTStoryboard *_storyboard;
    YTStoryboardFetcher *_storyboardFetcher;
    id <YTMosaicStoreDelegate> _delegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTMosaicStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fetcherDidFetchStoryboardMosaic:(id)arg1;
- (id)storyboardFrameForMediaTime:(double)arg1 fetchHigherQualityIfAvailable:(_Bool)arg2;
- (id)initWithStoryboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

