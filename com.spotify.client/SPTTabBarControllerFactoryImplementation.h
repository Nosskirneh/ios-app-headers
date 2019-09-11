//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTTabBarControllerFactory-Protocol.h"

@class NSString, SPTTheme;
@protocol SPTNavigationConfiguration;

@interface SPTTabBarControllerFactoryImplementation : NSObject <SPTTabBarControllerFactory>
{
    NSString *_friendlyName;
    SPTTheme *_theme;
    id <SPTNavigationConfiguration> _navigationConfiguration;
}

@property(readonly, nonatomic) id <SPTNavigationConfiguration> navigationConfiguration; // @synthesize navigationConfiguration=_navigationConfiguration;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, copy, nonatomic) NSString *friendlyName; // @synthesize friendlyName=_friendlyName;
- (void).cxx_destruct;
- (id)createTabBarContainerWithTabBarController:(struct UIViewController *)arg1 logCenter:(id)arg2;
- (struct UIViewController *)createTabBarControllerWithLogCenter:(id)arg1;
- (id)initWithFriendlyName:(id)arg1 theme:(id)arg2 navigationConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

