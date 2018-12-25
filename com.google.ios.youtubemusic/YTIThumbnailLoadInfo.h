//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIThumbnailLoadInfo : GPBMessage
{
}

+ (id)descriptor;
@property(readonly, nonatomic) NSString *imageRequestorTypeAsString;
@property(readonly, nonatomic) NSString *imageCacheTypeAsString;

// Remaining properties
@property(nonatomic) _Bool error; // @dynamic error;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasImageCacheType; // @dynamic hasImageCacheType;
@property(nonatomic) _Bool hasImageHeight; // @dynamic hasImageHeight;
@property(nonatomic) _Bool hasImageRequestorType; // @dynamic hasImageRequestorType;
@property(nonatomic) _Bool hasImageSizeBytes; // @dynamic hasImageSizeBytes;
@property(nonatomic) _Bool hasImageWidth; // @dynamic hasImageWidth;
@property(nonatomic) int imageCacheType; // @dynamic imageCacheType;
@property(nonatomic) unsigned int imageHeight; // @dynamic imageHeight;
@property(nonatomic) int imageRequestorType; // @dynamic imageRequestorType;
@property(nonatomic) unsigned int imageSizeBytes; // @dynamic imageSizeBytes;
@property(nonatomic) unsigned int imageWidth; // @dynamic imageWidth;

@end
