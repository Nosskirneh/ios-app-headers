//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIImageAttachmentCreationEntity : GPBMessage
{
}

+ (id)descriptor;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *encryptedBlobId; // @dynamic encryptedBlobId;
@property(nonatomic) _Bool hasEncryptedBlobId; // @dynamic hasEncryptedBlobId;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasSourceExternalVideoId; // @dynamic hasSourceExternalVideoId;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(copy, nonatomic) NSString *sourceExternalVideoId; // @dynamic sourceExternalVideoId;
@property(nonatomic) int state; // @dynamic state;

@end
