//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, UIViewController;

@protocol GFMINavigationDelegate <NSObject>

@optional
- (void)userTappedToSuperviseMemberOnViewController:(UIViewController *)arg1 canAddChild:(_Bool)arg2;
- (void)userTappedToAddKidOnViewController:(UIViewController *)arg1;
- (_Bool)familyManagementWillOpenPageForChildWithID:(NSString *)arg1 onViewController:(UIViewController *)arg2;
- (_Bool)familyManagementWillOpenURL:(NSURL *)arg1;
@end

