//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOAlertView.h"

@class NSURL;
@protocol FKFeedbackPromptDelegate><GOOAlertViewDelegate;

@interface FKRateAppView : GOOAlertView
{
    NSURL *_appStoreURL;
}

@property(retain, nonatomic) NSURL *appStoreURL; // @synthesize appStoreURL=_appStoreURL;
- (void).cxx_destruct;
- (void)show;
- (void)didTapSendFeedback:(id)arg1;
- (void)didTapRateNow:(id)arg1;
- (void)didTapDismiss:(id)arg1;
- (id)init;
- (id)initWithTarget:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <FKFeedbackPromptDelegate><GOOAlertViewDelegate> delegate; // @dynamic delegate;

@end

