//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARIAndroidTextDetails, NSMutableArray;

@interface ARIPhotosAndroidSharedLibrarySendInviteTextDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARIAndroidTextDetails *disclaimerText; // @dynamic disclaimerText;
@property(nonatomic) _Bool hasDisclaimerText; // @dynamic hasDisclaimerText;
@property(nonatomic) _Bool hasMainTitleText; // @dynamic hasMainTitleText;
@property(nonatomic) _Bool hasSendInvitationButtonText; // @dynamic hasSendInvitationButtonText;
@property(nonatomic) _Bool hasShareWithText; // @dynamic hasShareWithText;
@property(retain, nonatomic) ARIAndroidTextDetails *mainTitleText; // @dynamic mainTitleText;
@property(retain, nonatomic) ARIAndroidTextDetails *sendInvitationButtonText; // @dynamic sendInvitationButtonText;
@property(retain, nonatomic) ARIAndroidTextDetails *shareWithText; // @dynamic shareWithText;
@property(retain, nonatomic) NSMutableArray *toAccountAccessArray; // @dynamic toAccountAccessArray;
@property(readonly, nonatomic) unsigned long long toAccountAccessArray_Count; // @dynamic toAccountAccessArray_Count;

@end

