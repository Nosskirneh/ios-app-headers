//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTArtistEntityImpl.h"

#import "SPTArtist-Protocol.h"

@class NSString, NSURL;
@protocol NSCoding, SPTArtistImage;

@interface SPTArtistModel : SPTArtistEntityImpl <SPTArtist>
{
    NSURL *_uri;
    NSString *_name;
    id <SPTArtistImage> _image;
    id <SPTArtistImage> _headerImage;
}

@property(readonly, nonatomic) id <SPTArtistImage> headerImage; // @synthesize headerImage=_headerImage;
@property(readonly, nonatomic) id <SPTArtistImage> image; // @synthesize image=_image;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long imageStyle;
- (id)placeholderImageForSize:(long long)arg1;
@property(readonly, nonatomic, getter=isPreviewable) _Bool previewable;
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithName:(id)arg1 URI:(id)arg2 portraitURLString:(id)arg3 headerImageURLString:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSString *fileId;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <NSCoding> loggingData;
@property(readonly) Class superclass;

@end

