//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTMPlayerThumbnailResponderProvider-Protocol.h"
#import "YTMTunederItemControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"

@class GIMMe, NSMutableArray, NSString, YTMTunederPlayerPool;
@protocol YTMTunederItemQueueDelegate, YTResponder;

@interface YTMTunederItemQueue : NSObject <YTMTunederItemControllerDelegate, YTMPlayerThumbnailResponderProvider, YTResponder>
{
    NSMutableArray *_itemQueue;
    unsigned long long _currentItemIndex;
    YTMTunederPlayerPool *_playerPool;
    _Bool _queueSizeHasExceededThreshold;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTMTunederItemQueueDelegate> _delegate;
}

+ (_Bool)handleServiceEndpointEvent:(id)arg1;
@property(nonatomic) __weak id <YTMTunederItemQueueDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)thumbnailForVideoID:(id)arg1;
- (void)tunederItemController:(id)arg1 playbackControllerWillFailWithError:(id)arg2;
- (void)tunederItemController:(id)arg1 playbackControllerCurrentVideoMediaTimeDidChange:(double)arg2;
- (void)tunederItemController:(id)arg1 stateChangedTo:(unsigned long long)arg2;
- (void)addSequenceBatchRenderer:(id)arg1;
- (id)peekNextItemController;
- (id)nextItemController;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

