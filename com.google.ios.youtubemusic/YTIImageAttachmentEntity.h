//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ELMPBCommand, NSMutableArray, NSString;

@interface YTIImageAttachmentEntity : GPBMessage
{
}

+ (id)descriptor;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityText; // @dynamic accessibilityText;
@property(nonatomic) float aspectRatio; // @dynamic aspectRatio;
@property(nonatomic) _Bool hasAccessibilityText; // @dynamic hasAccessibilityText;
@property(nonatomic) _Bool hasAspectRatio; // @dynamic hasAspectRatio;
@property(nonatomic) _Bool hasImageUploadFailureErrorMessage; // @dynamic hasImageUploadFailureErrorMessage;
@property(nonatomic) _Bool hasKey; // @dynamic hasKey;
@property(nonatomic) _Bool hasRetryUploadCommand; // @dynamic hasRetryUploadCommand;
@property(copy, nonatomic) NSString *imageUploadFailureErrorMessage; // @dynamic imageUploadFailureErrorMessage;
@property(copy, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) ELMPBCommand *retryUploadCommand; // @dynamic retryUploadCommand;
@property(retain, nonatomic) NSMutableArray *sourcesArray; // @dynamic sourcesArray;
@property(readonly, nonatomic) unsigned long long sourcesArray_Count; // @dynamic sourcesArray_Count;

@end

