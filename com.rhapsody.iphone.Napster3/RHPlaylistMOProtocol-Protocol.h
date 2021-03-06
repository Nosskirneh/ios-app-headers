//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSNumber, NSSet, NSString, RHDownloadLeaseMO, RHProfileMO, RHProfileTagPlaylistMO;

@protocol RHPlaylistMOProtocol <NSObject>
@property(retain, nonatomic) NSSet *tags;
@property(retain, nonatomic) NSSet *recentContainers;
@property(retain, nonatomic) RHProfileTagPlaylistMO *profileTaggedPlaylists;
@property(retain, nonatomic) NSSet *playlistLoungeTags;
@property(retain, nonatomic) RHProfileMO *owner;
@property(retain, nonatomic) NSSet *loungeTagPlaylists;
@property(retain, nonatomic) NSSet *items;
@property(retain, nonatomic) NSSet *images;
@property(retain, nonatomic) NSSet *editorials;
@property(retain, nonatomic) RHDownloadLeaseMO *downloadLease;
@property(retain, nonatomic) NSSet *categorizations;
@property(retain, nonatomic) NSSet *associatedEditorials;
@property(retain, nonatomic) NSNumber *weight;
@property(retain, nonatomic) NSNumber *totalPlays;
@property(retain, nonatomic) NSString *tagsString;
@property(retain, nonatomic) NSNumber *source;
@property(retain, nonatomic) NSString *privacy;
@property(retain, nonatomic) NSString *playlistType;
@property(retain, nonatomic) NSNumber *numberOfTracks;
@property(retain, nonatomic) NSNumber *numberOfFollowers;
@property(retain, nonatomic) NSString *nameInitial;
@property(retain, nonatomic) NSString *name;
@property(retain, nonatomic) NSDate *modified;
@property(retain, nonatomic) NSDate *lastContentUpdate;
@property(retain, nonatomic) NSNumber *isLoadingContent;
@property(retain, nonatomic) NSNumber *isInLibrary;
@property(retain, nonatomic) NSNumber *isContentEditable;
@property(retain, nonatomic) NSString *guid;
@property(retain, nonatomic) NSNumber *downloadedTrackCount;
@property(retain, nonatomic) NSDate *createdDate;
@property(retain, nonatomic) NSString *categoryName;
@property(retain, nonatomic) NSString *blurb;
@property(retain, nonatomic) NSString *authorName;
@property(retain, nonatomic) NSString *artistNames;
@end

