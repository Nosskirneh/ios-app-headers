//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIClientResource;

@interface YTIImageSource : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(retain, nonatomic) YTIClientResource *clientResource; // @dynamic clientResource;
@property(nonatomic) _Bool hasClientResource; // @dynamic hasClientResource;
@property(nonatomic) _Bool hasHeight; // @dynamic hasHeight;
@property(nonatomic) _Bool hasImageData; // @dynamic hasImageData;
@property(nonatomic) _Bool hasImageName; // @dynamic hasImageName;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(nonatomic) _Bool hasWidth; // @dynamic hasWidth;
@property(nonatomic) unsigned int height; // @dynamic height;
@property(copy, nonatomic) NSData *imageData; // @dynamic imageData;
@property(copy, nonatomic) NSString *imageName; // @dynamic imageName;
@property(nonatomic) unsigned int width; // @dynamic width;

@end

