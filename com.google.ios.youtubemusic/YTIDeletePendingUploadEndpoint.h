//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIDeletePendingUploadEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(copy, nonatomic) NSString *frontendUploadId; // @dynamic frontendUploadId;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasFrontendUploadId; // @dynamic hasFrontendUploadId;
@property(nonatomic) _Bool hasVideoId; // @dynamic hasVideoId;
@property(copy, nonatomic) NSString *videoId; // @dynamic videoId;

@end

