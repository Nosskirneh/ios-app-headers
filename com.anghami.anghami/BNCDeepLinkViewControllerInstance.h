//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol BranchDeepLinkingController;

@interface BNCDeepLinkViewControllerInstance : NSObject
{
    UIViewController<BranchDeepLinkingController> *_viewController;
    long long _option;
}

@property long long option; // @synthesize option=_option;
@property(retain, nonatomic) UIViewController<BranchDeepLinkingController> *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;

@end

