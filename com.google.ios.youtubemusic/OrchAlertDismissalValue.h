//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData;

@interface OrchAlertDismissalValue : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *alertDismissalSessionToken; // @dynamic alertDismissalSessionToken;
@property(copy, nonatomic) NSData *dismissalToken; // @dynamic dismissalToken;
@property(nonatomic) _Bool hasAlertDismissalSessionToken; // @dynamic hasAlertDismissalSessionToken;
@property(nonatomic) _Bool hasDismissalToken; // @dynamic hasDismissalToken;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end

