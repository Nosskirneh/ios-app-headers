//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@interface RHBrandedHeaderLogoImage : UIImageView
{
    long long _navigationStyle;
}

@property(readonly, nonatomic) long long navigationStyle; // @synthesize navigationStyle=_navigationStyle;
- (void)dealloc;
- (void)updateImage;
- (id)brandImageForNavigationStyle:(long long)arg1;
- (id)appDelegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)accountChanged;
- (id)notificationCenter;
- (id)initWithNavigationStyle:(long long)arg1;

@end

