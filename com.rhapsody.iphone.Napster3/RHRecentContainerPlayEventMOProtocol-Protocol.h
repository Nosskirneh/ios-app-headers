//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString, RHAlbumMO, RHPlaylistMO, RHStationMO, RHTrackMO;

@protocol RHRecentContainerPlayEventMOProtocol <NSObject>
@property(retain, nonatomic) RHTrackMO *track;
@property(retain, nonatomic) RHStationMO *station;
@property(retain, nonatomic) RHPlaylistMO *playlist;
@property(retain, nonatomic) RHAlbumMO *album;
@property(retain, nonatomic) NSNumber *mode;
@property(retain, nonatomic) NSString *contextType;
@property(retain, nonatomic) NSString *contextId;
@end
