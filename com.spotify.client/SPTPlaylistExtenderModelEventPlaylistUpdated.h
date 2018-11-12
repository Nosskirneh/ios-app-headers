//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "SPTPlaylistExtenderModelEvent-Protocol.h"

@class NSString;

@interface SPTPlaylistExtenderModelEventPlaylistUpdated : NSObject <SPTPlaylistExtenderModelEvent>
{
    NSString *_playlistName;
    unsigned long long _playlistTrackCount;
}

@property(readonly, nonatomic) unsigned long long playlistTrackCount; // @synthesize playlistTrackCount=_playlistTrackCount;
@property(readonly, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
- (void).cxx_destruct;
- (void)processWithState:(id)arg1 loop:(id)arg2;
- (id)initWithPlaylistName:(id)arg1 playlistTrackCount:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

