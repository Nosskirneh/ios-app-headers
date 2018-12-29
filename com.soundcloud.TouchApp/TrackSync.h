//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Syncer-Protocol.h"

@class MobileTrackAdapter, NSString, TrackApi, TrackRepository, Urn;

@interface TrackSync : NSObject <Syncer>
{
    TrackApi *_trackApi;
    Urn *_trackUrn;
    MobileTrackAdapter *_trackAdapter;
    TrackRepository *_trackRepository;
}

@property(readonly, nonatomic) TrackRepository *trackRepository; // @synthesize trackRepository=_trackRepository;
@property(readonly, nonatomic) MobileTrackAdapter *trackAdapter; // @synthesize trackAdapter=_trackAdapter;
@property(readonly, nonatomic) Urn *trackUrn; // @synthesize trackUrn=_trackUrn;
@property(readonly, nonatomic) TrackApi *trackApi; // @synthesize trackApi=_trackApi;
- (void).cxx_destruct;
- (id)trackApiSignal;
- (id)signalForSyncAction:(unsigned long long)arg1;
- (id)initWithTrackApi:(id)arg1 trackUrn:(id)arg2 trackAdapter:(id)arg3 trackRepository:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
