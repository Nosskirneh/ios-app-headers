//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOIntermitting-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class GADOIntermission, GADOSlot, NSMutableDictionary, NSString, UIAlertView;

@interface GADOAlert : NSObject <UIAlertViewDelegate, GADOIntermitting>
{
    GADOAlert *_retainCycle;
    NSMutableDictionary *_completionHandlersByButtonIndex;
    UIAlertView *_alertView;
    _Bool _alertShown;
    _Bool _alertTappedOrCancelled;
    GADOSlot *_slot;
    CDUnknownBlockType _presentationCompletionHandler;
    CDUnknownBlockType _dismissalCompletionHandler;
    GADOIntermission *_intermission;
    NSString *_cancelButtonTitle;
    CDUnknownBlockType _cancelHandler;
}

@property(copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
@property(readonly, nonatomic) GADOIntermission *intermission; // @synthesize intermission=_intermission;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertView:(id)arg1;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addButtonWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 slot:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

