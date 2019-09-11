//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTInAppMessageMessageRequester-Protocol.h"

@class NSString, SPTInAppMessageBannerMessageController, SPTInAppMessageCardMessageController, SPTInAppMessageNotePresentationManagerImplementation;
@protocol SPTInAppMessageMessageRequesterDelegate;

@interface SPTInAppMessageMessageRequesterImplementation : NSObject <SPTInAppMessageMessageRequester>
{
    id <SPTInAppMessageMessageRequesterDelegate> _delegate;
    SPTInAppMessageCardMessageController *_cardMessageController;
    SPTInAppMessageBannerMessageController *_bannerMessageController;
    SPTInAppMessageNotePresentationManagerImplementation *_notePresentationManager;
}

@property(retain, nonatomic) SPTInAppMessageNotePresentationManagerImplementation *notePresentationManager; // @synthesize notePresentationManager=_notePresentationManager;
@property(retain, nonatomic) SPTInAppMessageBannerMessageController *bannerMessageController; // @synthesize bannerMessageController=_bannerMessageController;
@property(retain, nonatomic) SPTInAppMessageCardMessageController *cardMessageController; // @synthesize cardMessageController=_cardMessageController;
@property(nonatomic) __weak id <SPTInAppMessageMessageRequesterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPresentingInAppMessageNote) _Bool presentingInAppMessageNote;
@property(readonly, nonatomic, getter=isPresentingInAppMessageBanner) _Bool presentingInAppMessageBanner;
@property(readonly, nonatomic, getter=isPresentingInAppMessageCard) _Bool presentingInAppMessageCard;
- (void)requestMessage:(id)arg1;
- (id)initWithDelegate:(id)arg1 cardMessageController:(id)arg2 bannerMessageController:(id)arg3 notePresentationManager:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

