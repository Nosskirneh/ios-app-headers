//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, UIViewController;

@protocol SPTGaiaContextMenuActionDelegate <NSObject>
- (void)action:(id <SPTGaiaContextMenuAction>)arg1 isPerformedWithEventVersion:(NSString *)arg2 logData:(NSDictionary *)arg3;
- (void)action:(id <SPTGaiaContextMenuAction>)arg1 wantsToPresentViewController:(UIViewController *)arg2;
@end

