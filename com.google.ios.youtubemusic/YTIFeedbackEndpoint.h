//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIFeedbackUIActions;

@interface YTIFeedbackEndpoint : GPBMessage
{
}

+ (id)descriptor;
- (void)yt_setFeedbackTokens:(id)arg1;
- (id)yt_feedbackTokens;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(copy, nonatomic) NSString *cpn; // @dynamic cpn;
@property(copy, nonatomic) NSString *feedbackToken; // @dynamic feedbackToken;
@property(nonatomic) _Bool hack; // @dynamic hack;
@property(nonatomic) _Bool hasCpn; // @dynamic hasCpn;
@property(nonatomic) _Bool hasFeedbackToken; // @dynamic hasFeedbackToken;
@property(nonatomic) _Bool hasHack; // @dynamic hasHack;
@property(nonatomic) _Bool hasUiActions; // @dynamic hasUiActions;
@property(retain, nonatomic) YTIFeedbackUIActions *uiActions; // @dynamic uiActions;

@end

