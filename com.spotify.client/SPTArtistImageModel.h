//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTArtistImage-Protocol.h"
#import "SPTCeramicItem-Protocol.h"

@class NSString, NSURL;
@protocol NSCoding;

@interface SPTArtistImageModel : NSObject <SPTArtistImage, SPTCeramicItem>
{
    NSURL *_URL;
}

+ (id)imagesWithArrayOfURIs:(id)arg1;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (id)placeholderImageForSize:(long long)arg1;
@property(readonly, nonatomic, getter=isPreviewable) _Bool previewable;
@property(readonly, copy, nonatomic) NSURL *imageURL;
@property(readonly, copy, nonatomic) NSURL *actionURL;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithURLString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <NSCoding> loggingData;
@property(readonly) Class superclass;

@end

