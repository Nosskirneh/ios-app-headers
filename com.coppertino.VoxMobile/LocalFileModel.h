//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TrackInfoProvider-Protocol.h"
#import "TrackInfoUpdater-Protocol.h"

@class NSDate, NSNumber, NSString, NSURL, UIImage;

@interface LocalFileModel : NSObject <TrackInfoProvider, TrackInfoUpdater>
{
    _Bool _isDownloaded;
    _Bool _isPartOfCompilation;
    _Bool _partial;
    _Bool _metadataObtained;
    NSNumber *_trackNumber;
    NSNumber *_discNumber;
    NSURL *_fileURL;
    NSString *_title;
    NSString *_artistName;
    NSString *_albumArtist;
    NSString *_albumName;
    NSString *_cueSheet;
    NSNumber *_duration;
    NSNumber *_year;
    UIImage *_artworkImage;
    NSString *_artworkURL;
    NSDate *_dateAdded;
    double _startPosition;
}

@property(nonatomic) _Bool metadataObtained; // @synthesize metadataObtained=_metadataObtained;
@property(nonatomic) _Bool partial; // @synthesize partial=_partial;
@property(nonatomic) double startPosition; // @synthesize startPosition=_startPosition;
@property(nonatomic) _Bool isPartOfCompilation; // @synthesize isPartOfCompilation=_isPartOfCompilation;
@property(nonatomic) _Bool isDownloaded; // @synthesize isDownloaded=_isDownloaded;
@property(retain, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(retain, nonatomic) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(retain, nonatomic) NSNumber *year; // @synthesize year=_year;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *cueSheet; // @synthesize cueSheet=_cueSheet;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *albumArtist; // @synthesize albumArtist=_albumArtist;
@property(retain, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(retain, nonatomic) NSNumber *discNumber; // @synthesize discNumber=_discNumber;
@property(retain, nonatomic) NSNumber *trackNumber; // @synthesize trackNumber=_trackNumber;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)updateTrackArtworkURL:(id)arg1;
- (id)trackMedialPath;
- (id)trackArtworkURL;
- (id)trackArtwork;
- (id)trackAlbum;
- (id)trackArtist;
- (id)trackName;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

