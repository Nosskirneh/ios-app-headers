//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIInnerTubeContext, YTIPlaylistRequestDescriptor, YTISingleVideoRequestDescriptor;

@interface YTIEmbeddedPlayerRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasHostAppToken; // @dynamic hasHostAppToken;
@property(nonatomic) _Bool hasPlaylistRequest; // @dynamic hasPlaylistRequest;
@property(nonatomic) _Bool hasSingleVideoRequest; // @dynamic hasSingleVideoRequest;
@property(copy, nonatomic) NSString *hostAppToken; // @dynamic hostAppToken;
@property(retain, nonatomic) YTIPlaylistRequestDescriptor *playlistRequest; // @dynamic playlistRequest;
@property(retain, nonatomic) YTISingleVideoRequestDescriptor *singleVideoRequest; // @dynamic singleVideoRequest;

@end

