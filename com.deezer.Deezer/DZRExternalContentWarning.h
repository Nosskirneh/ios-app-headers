//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DZRActionConfirmationAlert, DeezerUser;

@interface DZRExternalContentWarning : NSObject
{
    DeezerUser *_user;
    DZRActionConfirmationAlert *_actionConfirmationAlert;
}

@property(retain, nonatomic) DZRActionConfirmationAlert *actionConfirmationAlert; // @synthesize actionConfirmationAlert=_actionConfirmationAlert;
@property(retain, nonatomic) DeezerUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (void)showExternalContentWarningBeforeContinueBlock:(CDUnknownBlockType)arg1 fromViewController:(id)arg2 trackType:(id)arg3 trackTypeId:(id)arg4;
- (void)showExternalContentWarningForLiveBeforeContinueBlock:(CDUnknownBlockType)arg1 fromViewController:(id)arg2;
- (void)showExternalContentWarningForLiveBeforeContinueBlock:(CDUnknownBlockType)arg1;
- (void)showExternalContentWarningWithContinueBlock:(CDUnknownBlockType)arg1;
- (void)showExternalContentWarningForTalkEpisode:(id)arg1 continueBlock:(CDUnknownBlockType)arg2;
- (void)showExternalContentWarningForTalkShow:(id)arg1 continueBlock:(CDUnknownBlockType)arg2;
- (id)initWithActionConfirmationAlert:(id)arg1 user:(id)arg2;
- (id)init;

@end

