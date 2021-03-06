//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIConfirmDialogRenderer, YTIMembershipPostCancelRenderer, YTIYPCTransactionErrorMessageRenderer, YTIYPCTransactionSuccessMessageRenderer;

@interface YTIYPCCancelRecurrenceSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIConfirmDialogRenderer *confirmDialogRenderer; // @dynamic confirmDialogRenderer;
@property(retain, nonatomic) YTIYPCTransactionErrorMessageRenderer *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasConfirmDialogRenderer; // @dynamic hasConfirmDialogRenderer;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasMembershipPostCancelRenderer; // @dynamic hasMembershipPostCancelRenderer;
@property(nonatomic) _Bool hasYpcTransactionSuccessMessageRenderer; // @dynamic hasYpcTransactionSuccessMessageRenderer;
@property(retain, nonatomic) YTIMembershipPostCancelRenderer *membershipPostCancelRenderer; // @dynamic membershipPostCancelRenderer;
@property(retain, nonatomic) YTIYPCTransactionSuccessMessageRenderer *ypcTransactionSuccessMessageRenderer; // @dynamic ypcTransactionSuccessMessageRenderer;

@end

