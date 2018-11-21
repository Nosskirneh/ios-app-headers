//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTArtistEntity-Protocol.h"

@class NSString, NSURL;
@protocol SPTArtistImage;

@interface SPTArtistEntityImpl : NSObject <SPTArtistEntity>
{
    NSURL *_uri;
    NSString *_name;
    id <SPTArtistImage> _image;
    id <SPTArtistImage> _headerImage;
    NSString *_fileId;
}

@property(retain, nonatomic) NSString *fileId; // @synthesize fileId=_fileId;
@property(retain, nonatomic) id <SPTArtistImage> headerImage; // @synthesize headerImage=_headerImage;
@property(retain, nonatomic) id <SPTArtistImage> image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSURL *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

