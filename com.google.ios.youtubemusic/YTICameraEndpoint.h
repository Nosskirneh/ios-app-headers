//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIVideoAttachmentSettings;

@interface YTICameraEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIVideoAttachmentSettings *attachmentSettings; // @dynamic attachmentSettings;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasAttachmentSettings; // @dynamic hasAttachmentSettings;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasLiveEnabled; // @dynamic hasLiveEnabled;
@property(nonatomic) _Bool liveEnabled; // @dynamic liveEnabled;

@end
