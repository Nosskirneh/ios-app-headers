//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTSleepTimerContextMenuActionsProvider.h"

@class NSString, SPTSleepTimerControllerImpl;

@interface SPTSleepTimerContextMenuActionsProviderImpl : NSObject <SPTSleepTimerContextMenuActionsProvider>
{
    SPTSleepTimerControllerImpl *_sleepTimerControllerImpl;
}

@property(retain, nonatomic) SPTSleepTimerControllerImpl *sleepTimerControllerImpl; // @synthesize sleepTimerControllerImpl=_sleepTimerControllerImpl;
- (void).cxx_destruct;
- (_Bool)isTimerActivated;
- (id)contextMenuTitle;
- (id)immediateTask:(id)arg1;
- (id)viewSleepTimerOptionsWithViewController:(id)arg1 senderView:(id)arg2 contextMenuPresenter:(id)arg3 logContext:(id)arg4;
- (id)sleepTimerTaskWithTitle:(id)arg1 action:(CDUnknownBlockType)arg2;
- (id)sleepTimerTaskWithTitle:(id)arg1 minutes:(double)arg2;
- (id)allActions;
- (id)initWithSleepTimerController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
