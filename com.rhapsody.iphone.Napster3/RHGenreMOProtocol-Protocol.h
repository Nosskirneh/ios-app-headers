//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSSet, NSString, RHArtistMO, RHGenreMO;

@protocol RHGenreMOProtocol <NSObject>
@property(retain, nonatomic) NSSet *trackHighlights;
@property(retain, nonatomic) RHArtistMO *topArtist;
@property(retain, nonatomic) NSSet *tags;
@property(retain, nonatomic) NSSet *tagDates;
@property(retain, nonatomic) NSSet *programmedStations;
@property(retain, nonatomic) RHGenreMO *primaryParentGenre;
@property(retain, nonatomic) NSSet *inverseTracks;
@property(retain, nonatomic) NSSet *inversePrimaryParentGenre;
@property(retain, nonatomic) NSSet *inversePrimaryArtistGenres;
@property(retain, nonatomic) NSSet *inverseAlbums;
@property(retain, nonatomic) NSSet *editorials;
@property(retain, nonatomic) NSSet *editorialHighlights;
@property(retain, nonatomic) NSSet *artistHighlights;
@property(retain, nonatomic) NSSet *artistGenres;
@property(retain, nonatomic) NSSet *albumHighlights;
@property(retain, nonatomic) NSSet *affiliationsAsAffiliated;
@property(retain, nonatomic) NSSet *affiliations;
@property(retain, nonatomic) NSNumber *weight;
@property(retain, nonatomic) NSNumber *source;
@property(retain, nonatomic) NSNumber *numberOfSubgenres;
@property(retain, nonatomic) NSString *name;
@property(retain, nonatomic) NSString *guid;
@property(retain, nonatomic) NSString *genreDescription;
@property(retain, nonatomic) NSString *abbreviation;
@end

