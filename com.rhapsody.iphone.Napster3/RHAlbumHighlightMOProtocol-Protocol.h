//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, RHAlbumMO, RHArtistMO, RHGenreMO;

@protocol RHAlbumHighlightMOProtocol <NSObject>
@property(retain, nonatomic) RHGenreMO *genre;
@property(retain, nonatomic) RHArtistMO *artist;
@property(retain, nonatomic) RHAlbumMO *album;
@property(retain, nonatomic) NSNumber *ordinal;
@property(retain, nonatomic) NSNumber *kind;
@end

