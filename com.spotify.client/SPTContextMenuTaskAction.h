//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTContextMenuAction-Protocol.h"
#import "SPTDismissContextMenuAction-Protocol.h"

@class NSString, SPAction, SPTask;
@protocol SPTContextMenuTaskActionDelegate;

@interface SPTContextMenuTaskAction : NSObject <SPTContextMenuAction, SPTDismissContextMenuAction>
{
    _Bool _valid;
    _Bool _waitingForUpdates;
    SPTask *_task;
    id _senderObject;
    id <SPTContextMenuTaskActionDelegate> _taskActionDelegate;
    SPAction *_action;
}

+ (id)actionsFromTasks:(id)arg1;
+ (id)actionFromTask:(id)arg1;
@property(retain, nonatomic) SPAction *action; // @synthesize action=_action;
@property(nonatomic) __weak id <SPTContextMenuTaskActionDelegate> taskActionDelegate; // @synthesize taskActionDelegate=_taskActionDelegate;
@property(nonatomic, getter=isWaitingForUpdates) _Bool waitingForUpdates; // @synthesize waitingForUpdates=_waitingForUpdates;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) __weak id senderObject; // @synthesize senderObject=_senderObject;
@property(retain, nonatomic) SPTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (_Bool)shouldDismissContextMenuBeforePerformingAction;
- (id)performAction;
- (id)logEventName;
- (_Bool)isDisabled;
- (id)accessibilityHint;
- (id)title;
- (id)imageStyle;
- (id)iconImage;
- (id)iconColor;
- (long long)icon;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

