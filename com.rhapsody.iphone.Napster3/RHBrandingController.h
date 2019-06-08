//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RHBrandedImageProvider-Protocol.h"

@class NSString, UIImage;

@interface RHBrandingController : NSObject <RHBrandedImageProvider>
{
}

- (long long)settingsUpsell;
- (long long)brandUpsellContextForContext:(long long)arg1;
- (id)userInfoForSuspendedAccount;
- (id)splashScreenImageForInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) UIImage *whatsNewImage2;
@property(readonly, nonatomic) UIImage *whatsNewImage;
@property(readonly, nonatomic) UIImage *homeTabBarItemImage;
@property(readonly, nonatomic) UIImage *logoForBrand;
@property(readonly, nonatomic) UIImage *heroLogoImage;
@property(readonly, nonatomic) UIImage *socialLogoImage;
- (id)brandImageForNavigationStyle:(long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

