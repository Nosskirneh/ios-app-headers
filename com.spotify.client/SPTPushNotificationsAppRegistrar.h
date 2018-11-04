//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTUserNotificationsRegistrar.h"

@class NSMutableDictionary, NSString;

@interface SPTPushNotificationsAppRegistrar : NSObject <SPTUserNotificationsRegistrar>
{
    _Bool _shouldPerformRegistration;
    NSMutableDictionary *_categories;
}

@property(nonatomic) _Bool shouldPerformRegistration; // @synthesize shouldPerformRegistration=_shouldPerformRegistration;
@property(retain, nonatomic) NSMutableDictionary *categories; // @synthesize categories=_categories;
- (void).cxx_destruct;
- (void)unregisterApplicationForRemoteNotifications;
- (void)registerApplicationForRemoteNotifications;
- (void)performRegistration;
- (id)categorySet;
- (void)unregisterCategoriesWithIdentifiers:(id)arg1;
- (void)registerCategories:(id)arg1;
- (id)defaultCategories;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
