//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString;

@interface YTIMdeCommentOptionsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool allowComments; // @dynamic allowComments;
@property(retain, nonatomic) YTIFormattedString *allowCommentsLabel; // @dynamic allowCommentsLabel;
@property(nonatomic) int allowCommentsMode; // @dynamic allowCommentsMode;
@property(retain, nonatomic) NSMutableArray *allowCommentsOptionsArray; // @dynamic allowCommentsOptionsArray;
@property(readonly, nonatomic) unsigned long long allowCommentsOptionsArray_Count; // @dynamic allowCommentsOptionsArray_Count;
@property(nonatomic) _Bool allowVoting; // @dynamic allowVoting;
@property(retain, nonatomic) YTIFormattedString *allowVotingLabel; // @dynamic allowVotingLabel;
@property(nonatomic) _Bool canViewRatings; // @dynamic canViewRatings;
@property(retain, nonatomic) YTIFormattedString *canViewRatingsLabel; // @dynamic canViewRatingsLabel;
@property(nonatomic) _Bool hasAllowComments; // @dynamic hasAllowComments;
@property(nonatomic) _Bool hasAllowCommentsLabel; // @dynamic hasAllowCommentsLabel;
@property(nonatomic) _Bool hasAllowCommentsMode; // @dynamic hasAllowCommentsMode;
@property(nonatomic) _Bool hasAllowVoting; // @dynamic hasAllowVoting;
@property(nonatomic) _Bool hasAllowVotingLabel; // @dynamic hasAllowVotingLabel;
@property(nonatomic) _Bool hasCanViewRatings; // @dynamic hasCanViewRatings;
@property(nonatomic) _Bool hasCanViewRatingsLabel; // @dynamic hasCanViewRatingsLabel;
@property(nonatomic) _Bool hasShowAllowVotingControl; // @dynamic hasShowAllowVotingControl;
@property(nonatomic) _Bool showAllowVotingControl; // @dynamic showAllowVotingControl;

@end

