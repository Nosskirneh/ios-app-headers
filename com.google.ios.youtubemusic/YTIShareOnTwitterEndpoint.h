//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIShareOnTwitterEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *URLToSharesArray; // @dynamic URLToSharesArray;
@property(readonly, nonatomic) unsigned long long URLToSharesArray_Count; // @dynamic URLToSharesArray_Count;
@property(retain, nonatomic) NSMutableArray *failureActionsArray; // @dynamic failureActionsArray;
@property(readonly, nonatomic) unsigned long long failureActionsArray_Count; // @dynamic failureActionsArray_Count;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(retain, nonatomic) NSMutableArray *successActionsArray; // @dynamic successActionsArray;
@property(readonly, nonatomic) unsigned long long successActionsArray_Count; // @dynamic successActionsArray_Count;
@property(copy, nonatomic) NSString *text; // @dynamic text;

@end

