//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPMImageDataSource-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;

@interface GPMURLImageDataSource : NSObject <GPMImageDataSource>
{
    NSMutableDictionary *_fetchedImages;
    unsigned long long _fetchedImageCount;
    NSArray *_imageUrls;
    NSString *_defaultImageName;
}

+ (id)dataSourceWithImageURL:(id)arg1 defaultImageName:(id)arg2;
+ (id)dataSourceWithImageURLs:(id)arg1 defaultImageName:(id)arg2;
+ (id)dataSourceWithImageRefList:(id)arg1 defaultImageName:(id)arg2;
@property(readonly, copy, nonatomic) NSString *defaultImageName; // @synthesize defaultImageName=_defaultImageName;
@property(readonly, copy, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)loadImagesOfSize:(struct CGSize)arg1 withQuality:(unsigned long long)arg2 usingImageFetcher:(id)arg3 operationSequence:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)fetchImageWithURL:(id)arg1 size:(struct CGSize)arg2 withQuality:(unsigned long long)arg3 usingImageFetcher:(id)arg4 operationSequence:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (id)sortedFetchedImages;
- (id)initWithImageURLs:(id)arg1 defaultImageName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

