//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNavigationItemsDataSource-Protocol.h"
#import "SPTService-Protocol.h"

@protocol SPTBarButtonItemManager, SPTNavigationListIdentifierFromABTestSource, SPTNavigationTestManager;

@protocol SPTNavigationFeature <SPTService, SPTNavigationItemsDataSource>
- (id <SPTNavigationTestManager>)provideNavigationTestManager;
- (id <SPTBarButtonItemManager>)provideBarButtonItemManager;
- (id <SPTNavigationListIdentifierFromABTestSource>)provideNavigationListIdentifierFromABTestSource;
@end

