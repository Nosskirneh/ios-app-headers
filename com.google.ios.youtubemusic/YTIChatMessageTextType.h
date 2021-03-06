//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString;

@interface YTIChatMessageTextType : GPBMessage
{
}

+ (id)descriptor;
- (id)entityWithStore:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *addHeartToken; // @dynamic addHeartToken;
@property(copy, nonatomic) NSString *author; // @dynamic author;
@property(copy, nonatomic) NSString *deleteToken; // @dynamic deleteToken;
@property(retain, nonatomic) NSMutableArray *emotionsArray; // @dynamic emotionsArray;
@property(readonly, nonatomic) unsigned long long emotionsArray_Count; // @dynamic emotionsArray_Count;
@property(nonatomic) _Bool hasAddHeartToken; // @dynamic hasAddHeartToken;
@property(nonatomic) _Bool hasAuthor; // @dynamic hasAuthor;
@property(nonatomic) _Bool hasDeleteToken; // @dynamic hasDeleteToken;
@property(nonatomic) _Bool hasRemoveHeartToken; // @dynamic hasRemoveHeartToken;
@property(nonatomic) _Bool hasTemporaryClientId; // @dynamic hasTemporaryClientId;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(copy, nonatomic) NSString *removeHeartToken; // @dynamic removeHeartToken;
@property(copy, nonatomic) NSString *temporaryClientId; // @dynamic temporaryClientId;
@property(copy, nonatomic) NSData *text; // @dynamic text;

@end

