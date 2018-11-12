//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL, UIApplicationShortcutItem;
@protocol SPTRecentlyPlayedShortcutItemsUpdate;

@protocol SPTRecentlyPlayedShortcutItemsProvider <NSObject>
- (NSURL *)targetURIForQuickActionItem:(UIApplicationShortcutItem *)arg1;
- (void)removeShortcutItemsUpdateObserver:(id <SPTRecentlyPlayedShortcutItemsUpdate>)arg1;
- (void)addShortcutItemsUpdateObserver:(id <SPTRecentlyPlayedShortcutItemsUpdate>)arg1;
- (_Bool)handleShortcutItem:(UIApplicationShortcutItem *)arg1;
- (NSArray *)provideShortcutItems;
@end

