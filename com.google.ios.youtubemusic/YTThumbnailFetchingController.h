//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, YTImageService;

@interface YTThumbnailFetchingController : NSObject
{
    YTImageService *_imageService;
    GIMMe *_gimme;
}

+ (id)selectURLForTargetSize:(struct CGSize)arg1 fromURLs:(id)arg2;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)fetchThumbnailWithThumbnailDetails:(id)arg1 imageSize:(struct CGSize)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

