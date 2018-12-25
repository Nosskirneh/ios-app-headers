//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTImageViewDelegate-Protocol.h"

@class GIMMe, NSDictionary, NSString, YTImageService, YTImageView;
@protocol YTThumbnailControllerDelegate;

@interface YTThumbnailController : NSObject <YTImageViewDelegate>
{
    YTImageService *_imageService;
    unsigned long long _thumbnailReuseIdentifier;
    unsigned long long _imageRequestID;
    _Bool _imageLoaded;
    _Bool _imageLoadRequested;
    struct CGSize _imageViewSizeRequested;
    GIMMe *_gimme;
    NSDictionary *_thumbnailURLs;
    YTImageView *_imageView;
    id <YTThumbnailControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <YTThumbnailControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) YTImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) NSDictionary *thumbnailURLs; // @synthesize thumbnailURLs=_thumbnailURLs;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)checkImageRequestID:(unsigned long long)arg1;
- (_Bool)isImageViewRecycled;
- (void)makeRequestBlock:(CDUnknownBlockType)arg1;
- (void)reset;
- (void)loadImage:(id)arg1 cached:(_Bool)arg2;
- (void)loadImageIfNeeded;
- (void)imageViewDidLayoutSubviews:(id)arg1;
- (id)initWithImageView:(id)arg1 thumbnail:(id)arg2 imageService:(id)arg3;
- (id)initWithImageView:(id)arg1 URL:(id)arg2 imageService:(id)arg3;
- (id)initWithImageView:(id)arg1 thumbnail:(id)arg2;
- (id)initWithImageView:(id)arg1 URL:(id)arg2;
- (id)initWithImageView:(id)arg1 URLs:(id)arg2;
- (id)initWithImageView:(id)arg1 URLs:(id)arg2 imageService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

