//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUploadPhotoEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *albumId; // @dynamic albumId;
@property(retain, nonatomic) YTIFormattedString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasAlbumId; // @dynamic hasAlbumId;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasInvalidationThumbnails; // @dynamic hasInvalidationThumbnails;
@property(nonatomic) _Bool hasNextNavEndpoint; // @dynamic hasNextNavEndpoint;
@property(nonatomic) _Bool hasNextServEndpoint; // @dynamic hasNextServEndpoint;
@property(nonatomic) _Bool hasOwnerId; // @dynamic hasOwnerId;
@property(nonatomic) _Bool hasSuccessMessage; // @dynamic hasSuccessMessage;
@property(retain, nonatomic) YTIThumbnailDetails *invalidationThumbnails; // @dynamic invalidationThumbnails;
@property(retain, nonatomic) YTICommand *nextNavEndpoint; // @dynamic nextNavEndpoint;
@property(retain, nonatomic) YTICommand *nextServEndpoint; // @dynamic nextServEndpoint;
@property(copy, nonatomic) NSString *ownerId; // @dynamic ownerId;
@property(retain, nonatomic) YTIFormattedString *successMessage; // @dynamic successMessage;

@end

