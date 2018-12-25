//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GRWAppSwitchingCooldownManager : NSObject
{
}

- (double)initialCooldownIntervalForIntentType:(int)arg1 withApp:(id)arg2;
- (double)percentCooldownIncreaseForIntentType:(int)arg1 withApp:(id)arg2;
- (void)removeCooldownForIntentTypeWithInstalledApps:(int)arg1;
- (void)removeCooldownForInstalledApp:(id)arg1;
- (void)resetAllCooldowns;
- (double)cooldownDurationForApp:(id)arg1;
- (double)cooldownDurationForIntentType:(int)arg1;
- (void)markPromptShownAndExtendCooldownForApp:(id)arg1;
- (void)markPromptShownAndExtendCooldownForIntent:(int)arg1;
- (_Bool)isWithinCooldownForApp:(id)arg1;
- (_Bool)isWithinCooldownForIntent:(int)arg1;

@end
