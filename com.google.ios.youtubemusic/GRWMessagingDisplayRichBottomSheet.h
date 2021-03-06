//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRWDismissablePresentedViewController-Protocol.h"
#import "GRWMessagingContentControllerDelegate-Protocol.h"
#import "GRWMessagingDisplayPresentation-Protocol.h"
#import "MDCBottomSheetPresentationControllerDelegate-Protocol.h"

@class GRWMessage, GRWMessagingRichCardViewController, MDCBottomSheetTransitionController, NSString;

@interface GRWMessagingDisplayRichBottomSheet : NSObject <GRWMessagingContentControllerDelegate, MDCBottomSheetPresentationControllerDelegate, GRWDismissablePresentedViewController, GRWMessagingDisplayPresentation>
{
    CDUnknownBlockType _actionHandler;
    GRWMessage *_message;
    GRWMessagingRichCardViewController *_alertViewController;
    MDCBottomSheetTransitionController *_transitionController;
}

@property(retain, nonatomic) MDCBottomSheetTransitionController *transitionController; // @synthesize transitionController=_transitionController;
@property(retain, nonatomic) GRWMessagingRichCardViewController *alertViewController; // @synthesize alertViewController=_alertViewController;
@property(retain, nonatomic) GRWMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)grw_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)bottomSheetDismissedWithAction:(id)arg1;
- (void)dismissWithAction:(id)arg1 animated:(_Bool)arg2;
- (void)bottomSheetDismissed;
- (void)dealloc;
- (void)bottomSheetPresentationControllerDidDismissBottomSheet:(id)arg1;
- (void)userDidTakeAction:(id)arg1;
- (_Bool)canPresentMessage:(id)arg1;
- (void)dismissAnimated:(_Bool)arg1;
- (void)presentMessage:(id)arg1 withActionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

