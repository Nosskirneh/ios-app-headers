//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DZRCurrentTrackUpdater-Protocol.h"

@class DZRLiveStreamCollection, DZRLiveStreamCurrentTrackEvent, NSString;
@protocol DZRCurrentTrackUpdaterDelegate, DZRPlayableExternalObject;

@interface DZRLiveStreamCurrentTrackUpdater : NSObject <DZRCurrentTrackUpdater>
{
    id <DZRCurrentTrackUpdaterDelegate> delegate;
    DZRLiveStreamCollection *_collection;
    id <DZRPlayableExternalObject> _playable;
    DZRLiveStreamCurrentTrackEvent *_activeSocketEvent;
    DZRLiveStreamCurrentTrackEvent *_pendingSocketEvent;
}

@property(retain, nonatomic) DZRLiveStreamCurrentTrackEvent *pendingSocketEvent; // @synthesize pendingSocketEvent=_pendingSocketEvent;
@property(retain, nonatomic) DZRLiveStreamCurrentTrackEvent *activeSocketEvent; // @synthesize activeSocketEvent=_activeSocketEvent;
@property(nonatomic) __weak id <DZRPlayableExternalObject> playable; // @synthesize playable=_playable;
@property(readonly, nonatomic) __weak DZRLiveStreamCollection *collection; // @synthesize collection=_collection;
@property(nonatomic) __weak id <DZRCurrentTrackUpdaterDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didStopPlaying:(id)arg1;
- (void)didStartPlaying:(id)arg1;
- (void)didChangeQueuedCollection:(id)arg1;
- (void)notifyTrackUpdate:(id)arg1;
- (void)fetchCurrentTrack;
- (void)dealloc;
- (id)initWithExternalPlayable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
