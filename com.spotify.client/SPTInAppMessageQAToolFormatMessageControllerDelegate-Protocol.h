//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, UIViewController;
@protocol SPTInAppMessageQAToolViewModelObserver;

@protocol SPTInAppMessageQAToolFormatMessageControllerDelegate <NSObject>
- (void)qaToolFormatMessageController:(id <SPTInAppMessageQAToolViewModelObserver>)arg1 didWantToDismissViewController:(UIViewController *)arg2;
- (void)qaToolFormatMessageController:(id <SPTInAppMessageQAToolViewModelObserver>)arg1 didWantToPresentViewController:(UIViewController *)arg2;
- (void)qaToolFormatMessageControllerDidChangeContentUnitPosition:(id <SPTInAppMessageQAToolViewModelObserver>)arg1 approvedDirection:(_Bool)arg2 messageLocale:(NSString *)arg3;
- (void)qaToolFormatMessageControllerPresentedAllCreatives:(id <SPTInAppMessageQAToolViewModelObserver>)arg1;
- (void)qaToolFormatMessageControllerDidChangeCreativeStatus:(id <SPTInAppMessageQAToolViewModelObserver>)arg1 creativeID:(NSString *)arg2 approvedStatus:(_Bool)arg3;
- (void)qaToolFormatMessageControllerDidParseMessagesSuccessfully:(id <SPTInAppMessageQAToolViewModelObserver>)arg1;
- (void)qaToolFormatMessageController:(id <SPTInAppMessageQAToolViewModelObserver>)arg1 failedToParseMessagesWithError:(NSError *)arg2;
@end

