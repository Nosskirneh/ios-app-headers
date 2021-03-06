//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIFormattedString;

@interface YTINotificationOptOutEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(nonatomic) _Bool hasNotificationType; // @dynamic hasNotificationType;
@property(nonatomic) _Bool hasOptOutText; // @dynamic hasOptOutText;
@property(nonatomic) _Bool hasReasonForNotification; // @dynamic hasReasonForNotification;
@property(nonatomic) _Bool hasSerializedOptOut; // @dynamic hasSerializedOptOut;
@property(nonatomic) _Bool hasSerializedRecordInteractionsRequest; // @dynamic hasSerializedRecordInteractionsRequest;
@property(nonatomic) _Bool hasUndo; // @dynamic hasUndo;
@property(nonatomic) unsigned int notificationType; // @dynamic notificationType;
@property(retain, nonatomic) YTIFormattedString *optOutText; // @dynamic optOutText;
@property(retain, nonatomic) YTIFormattedString *reasonForNotification; // @dynamic reasonForNotification;
@property(copy, nonatomic) NSData *serializedOptOut; // @dynamic serializedOptOut;
@property(retain, nonatomic) NSMutableArray *serializedOptOutsArray; // @dynamic serializedOptOutsArray;
@property(readonly, nonatomic) unsigned long long serializedOptOutsArray_Count; // @dynamic serializedOptOutsArray_Count;
@property(copy, nonatomic) NSData *serializedRecordInteractionsRequest; // @dynamic serializedRecordInteractionsRequest;
@property(nonatomic) _Bool undo; // @dynamic undo;

@end

