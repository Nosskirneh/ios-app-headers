//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTCanvasImageResolver;

@interface SPTCanvasModelLoader : NSObject
{
    id <SPTCanvasModelLoaderDelegate> _delegate;
    SPTCanvasImageResolver *_imageResolver;
}

+ (_Bool)hasVideoContent:(id)arg1;
@property(readonly, nonatomic) SPTCanvasImageResolver *imageResolver; // @synthesize imageResolver=_imageResolver;
@property(nonatomic) __weak id <SPTCanvasModelLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadArtistAvatarWithModel:(id)arg1;
- (void)loadCanvasFallbackWithModel:(id)arg1;
- (void)loadImageContentWithModel:(id)arg1;
- (void)loadVideoContentWithModel:(id)arg1;
- (void)loadCanvasWithModel:(id)arg1;
- (id)initWithImageResolver:(id)arg1;

@end
