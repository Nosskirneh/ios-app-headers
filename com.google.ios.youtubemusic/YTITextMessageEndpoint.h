//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTITextMessageEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *bodyText; // @dynamic bodyText;
@property(nonatomic) _Bool disableUserAttachments; // @dynamic disableUserAttachments;
@property(retain, nonatomic) NSMutableArray *failureActionsArray; // @dynamic failureActionsArray;
@property(readonly, nonatomic) unsigned long long failureActionsArray_Count; // @dynamic failureActionsArray_Count;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasDisableUserAttachments; // @dynamic hasDisableUserAttachments;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) NSMutableArray *recipientPhoneNumbersArray; // @dynamic recipientPhoneNumbersArray;
@property(readonly, nonatomic) unsigned long long recipientPhoneNumbersArray_Count; // @dynamic recipientPhoneNumbersArray_Count;
@property(retain, nonatomic) NSMutableArray *successActionsArray; // @dynamic successActionsArray;
@property(readonly, nonatomic) unsigned long long successActionsArray_Count; // @dynamic successActionsArray_Count;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end

