//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTService.h"

@protocol SPTSleepTimerService <SPTService>
- (_Bool)isSleepTimerEnabled;
- (id <SPTSleepTimerContextMenuActionsProvider>)provideSleepTimerContextMenuActionsProvider;
- (id <SPTSleepTimerController>)provideSleepTimerController;
@end

