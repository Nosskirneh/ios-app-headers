//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIFormattedString, YTIRenderer;

@interface YTILiveChatAutoModMessageRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *additionalInlineActionButtonsArray; // @dynamic additionalInlineActionButtonsArray;
@property(readonly, nonatomic) unsigned long long additionalInlineActionButtonsArray_Count; // @dynamic additionalInlineActionButtonsArray_Count;
@property(copy, nonatomic) NSString *authorExternalChannelId; // @dynamic authorExternalChannelId;
@property(retain, nonatomic) YTIRenderer *autoModeratedItem; // @dynamic autoModeratedItem;
@property(retain, nonatomic) YTIRenderer *endModerationButton; // @dynamic endModerationButton;
@property(nonatomic) _Bool hasAuthorExternalChannelId; // @dynamic hasAuthorExternalChannelId;
@property(nonatomic) _Bool hasAutoModeratedItem; // @dynamic hasAutoModeratedItem;
@property(nonatomic) _Bool hasEndModerationButton; // @dynamic hasEndModerationButton;
@property(nonatomic) _Bool hasHeaderText; // @dynamic hasHeaderText;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasInfoDialogButton; // @dynamic hasInfoDialogButton;
@property(nonatomic) _Bool hasStartModerationButton; // @dynamic hasStartModerationButton;
@property(nonatomic) _Bool hasTimestampText; // @dynamic hasTimestampText;
@property(nonatomic) _Bool hasTimestampUsec; // @dynamic hasTimestampUsec;
@property(retain, nonatomic) YTIFormattedString *headerText; // @dynamic headerText;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) YTIRenderer *infoDialogButton; // @dynamic infoDialogButton;
@property(retain, nonatomic) NSMutableArray *inlineActionButtonsArray; // @dynamic inlineActionButtonsArray;
@property(readonly, nonatomic) unsigned long long inlineActionButtonsArray_Count; // @dynamic inlineActionButtonsArray_Count;
@property(retain, nonatomic) NSMutableArray *moderationButtonsArray; // @dynamic moderationButtonsArray;
@property(readonly, nonatomic) unsigned long long moderationButtonsArray_Count; // @dynamic moderationButtonsArray_Count;
@property(retain, nonatomic) YTIRenderer *startModerationButton; // @dynamic startModerationButton;
@property(retain, nonatomic) YTIFormattedString *timestampText; // @dynamic timestampText;
@property(nonatomic) unsigned long long timestampUsec; // @dynamic timestampUsec;

@end

