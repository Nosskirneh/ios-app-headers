//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTArtistEntity-Protocol.h"

@protocol SPTArtistAlbum;

@protocol SPTArtistTrack <SPTArtistEntity>
@property(readonly, nonatomic, getter=isPremiumOnly) _Bool premiumOnly;
@property(readonly, nonatomic, getter=isRatedExplicit) _Bool ratedExplicit;
@property(readonly, nonatomic) unsigned long long playcount;
@property(readonly, nonatomic) id <SPTArtistAlbum> album;
@end

