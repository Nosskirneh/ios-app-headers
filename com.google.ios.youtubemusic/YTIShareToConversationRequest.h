//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIInnerTubeContext, YTIShareServiceIdentifier;

@interface YTIShareToConversationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contactIdsArray; // @dynamic contactIdsArray;
@property(readonly, nonatomic) unsigned long long contactIdsArray_Count; // @dynamic contactIdsArray_Count;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(retain, nonatomic) NSMutableArray *conversationIdsArray; // @dynamic conversationIdsArray;
@property(readonly, nonatomic) unsigned long long conversationIdsArray_Count; // @dynamic conversationIdsArray_Count;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasPostedText; // @dynamic hasPostedText;
@property(nonatomic) _Bool hasPostedVideoId; // @dynamic hasPostedVideoId;
@property(nonatomic) _Bool hasSerializedShareEntity; // @dynamic hasSerializedShareEntity;
@property(nonatomic) _Bool hasShareServiceIdentifier; // @dynamic hasShareServiceIdentifier;
@property(copy, nonatomic) NSString *postedText; // @dynamic postedText;
@property(copy, nonatomic) NSString *postedVideoId; // @dynamic postedVideoId;
@property(copy, nonatomic) NSString *serializedShareEntity; // @dynamic serializedShareEntity;
@property(retain, nonatomic) YTIShareServiceIdentifier *shareServiceIdentifier; // @dynamic shareServiceIdentifier;

@end

