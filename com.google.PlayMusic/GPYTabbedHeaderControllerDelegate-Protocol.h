//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GPYTabbedHeaderController, GPYTabbedHeroView;

@protocol GPYTabbedHeaderControllerDelegate <NSObject>

@optional
- (void)tabbedHeaderController:(GPYTabbedHeaderController *)arg1 setDiscreteHeroView:(GPYTabbedHeroView *)arg2;
- (_Bool)tabbedHeaderController:(GPYTabbedHeaderController *)arg1 accessibilityScroll:(long long)arg2;
- (void)tabbedHeaderController:(GPYTabbedHeaderController *)arg1 didSelectTabAtIndex:(long long)arg2;
@end

