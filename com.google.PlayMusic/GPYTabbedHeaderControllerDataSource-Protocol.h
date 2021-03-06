//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPYTabStyle, GPYTabbedHeaderController, NSArray, UIView;
@protocol NSCopying;

@protocol GPYTabbedHeaderControllerDataSource <NSObject>
- (GPYTabStyle *)tabbedHeaderController:(GPYTabbedHeaderController *)arg1 tabStyleForIndex:(long long)arg2;
- (long long)numberOfTabsForHeaderController:(GPYTabbedHeaderController *)arg1;

@optional
- (UIView *)tabbedHeaderControllerHeroContentView:(GPYTabbedHeaderController *)arg1;
- (void)tabbedHeaderController:(GPYTabbedHeaderController *)arg1 heroImageForKey:(id <NSCopying>)arg2 tabIndex:(long long)arg3 callback:(void (^)(UIImage *, NSError *))arg4;
- (NSArray *)tabbedHeaderController:(GPYTabbedHeaderController *)arg1 heroImageKeysForTabIndex:(long long)arg2;
- (void)tabbedHeaderController:(GPYTabbedHeaderController *)arg1 heroImageWithCallback:(void (^)(UIImage *, NSError *))arg2;
- (_Bool)tabbedHeaderControllerShouldShowPerTabHeroImage:(GPYTabbedHeaderController *)arg1;
@end

