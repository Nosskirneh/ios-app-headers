//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeViewController.h"

#import "YTGraftingViewController-Protocol.h"
#import "YTRendererController-Protocol.h"
#import "YTScreenGraftViewController-Protocol.h"
#import "YTTopController-Protocol.h"

@class NSString, YTICommand;
@protocol YTResponder;

@interface YTPhonebookRequestViewController : YTBaseInnerTubeViewController <YTGraftingViewController, YTScreenGraftViewController, YTTopController, YTRendererController>
{
    YTICommand *_model;
}

- (void).cxx_destruct;
- (id)denormalizeContactListAndGetPhoneNumbers:(id)arg1;
- (void)setupInteractionLoggingHandlersAtResponder:(id)arg1;
- (id)navEndpoint;
- (void)loadWithModel:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (long long)preferredStatusBarStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;

@end

